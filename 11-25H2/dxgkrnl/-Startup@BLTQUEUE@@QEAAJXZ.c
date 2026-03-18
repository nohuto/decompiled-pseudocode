/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1403F3334
 * Callers:
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x14027B5E0 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403D1918 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??0_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE@@QEAA@XZ @ 0x140279FAC (--0_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE@@QEAA@XZ.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14027BB3C (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext, __int64 a2, __int64 a3, __int64 a4)
{
  DXGDODPRESENT *v5; // rcx
  __int64 v6; // r14
  _DWORD *v7; // rax
  __int64 v9; // r8
  struct DXGADAPTER *Adapter; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  _DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE *v14; // rbp
  _QWORD *v15; // rsi
  const wchar_t *v16; // r9
  __int64 Timer; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(DXGDODPRESENT **)StartContext;
  LODWORD(v6) = 0;
  v7 = StartContext + 136;
  if ( !v5 && *v7 == 1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 910;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"A BLTQUEUE must have a pointer to the DoDPresent if HW Vsync is used",
      910LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v9 = 256LL;
  if ( *v7 == 1 )
  {
    Adapter = DXGDODPRESENT::GetAdapter(v5);
    if ( ((unsigned int)v9 & *((_DWORD *)Adapter + 111)) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 916;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Indirect displays cannot currently support HW VSync",
        916LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225659LL;
    }
  }
  v11 = (_QWORD *)operator new[](0x208uLL, 0x4B677844u, v9, a4);
  v12 = v11;
  if ( v11 )
  {
    v13 = 8LL;
    v14 = (_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE *)(v11 + 1);
    *v11 = 8LL;
    do
    {
      _DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE::_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE(v14);
      v14 = (_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE *)((char *)v14 + 64);
      --v13;
    }
    while ( v13 );
    v15 = v12 + 1;
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)StartContext + 370) = v15;
  if ( v15 )
  {
    Timer = ExAllocateTimer(0LL, 0LL, 0LL);
    v18 = StartContext + 152;
    *((_QWORD *)StartContext + 19) = Timer;
    if ( Timer )
    {
      v19 = ExAllocateTimer(0LL, 0LL, 4LL);
      *((_QWORD *)StartContext + 18) = v19;
      if ( v19 )
      {
        BLTQUEUE::RecreateVsyncSource((__int64)StartContext, 0, 12);
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v20 = PsCreateSystemThread(
                (PHANDLE)StartContext + 81,
                0x1FFFFFu,
                &ObjectAttributes,
                0LL,
                0LL,
                BLTQUEUE::BltQueueWorkerThread,
                StartContext);
        v6 = v20;
        if ( v20 >= 0 )
        {
          KeWaitForSingleObject(StartContext + 528, Executive, 0, 0, 0LL);
        }
        else
        {
          WdLogSingleEntry2(2LL, StartContext, v20);
          WdLogGlobalForLineNumber = 964;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"BLTQUEUE 0x%I64x : PsCreateSystemThread() failed with Status = 0x%I64x",
            (__int64)StartContext,
            v6,
            0LL,
            0LL,
            0LL);
          v22 = *((_QWORD *)StartContext + 18);
          LODWORD(v6) = -1073741801;
          v23 = StartContext + 152;
          if ( v22 )
          {
            LOBYTE(v21) = 1;
            ExDeleteTimer(v22, v21, 0LL, 0LL);
            *((_QWORD *)StartContext + 18) = 0LL;
            v23 = StartContext + 152;
          }
          if ( *v18 )
          {
            LOBYTE(v21) = 1;
            ExDeleteTimer(*v18, v21, 0LL, 0LL);
            *v23 = 0LL;
          }
        }
        return (unsigned int)v6;
      }
      WdLogSingleEntry1(6LL, StartContext);
      v16 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for normal res timer.";
      WdLogGlobalForLineNumber = 938;
    }
    else
    {
      WdLogSingleEntry1(6LL, StartContext);
      v16 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for high res timer.";
      WdLogGlobalForLineNumber = 932;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, StartContext);
    v16 = L"BLTQUEUE 0x%I64x : Failed to allocate memory for DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE.";
    WdLogGlobalForLineNumber = 923;
  }
  DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v16, (__int64)StartContext, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v6;
}
