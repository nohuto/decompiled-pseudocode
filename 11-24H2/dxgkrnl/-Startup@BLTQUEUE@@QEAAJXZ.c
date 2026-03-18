/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1403ECEB4
 * Callers:
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x140282420 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403C5558 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004C604 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??0_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE@@QEAA@XZ @ 0x1402814A8 (--0_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE@@QEAA@XZ.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140282B44 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext)
{
  DXGDODPRESENT *v2; // rcx
  __int64 v3; // r14
  _DWORD *v4; // rax
  __int64 v6; // r8
  struct DXGADAPTER *Adapter; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  _DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE *v11; // rbp
  _QWORD *v12; // rsi
  const wchar_t *v13; // r9
  __int64 Timer; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(DXGDODPRESENT **)StartContext;
  LODWORD(v3) = 0;
  v4 = StartContext + 136;
  if ( !v2 && *v4 == 1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 914;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"A BLTQUEUE must have a pointer to the DoDPresent if HW Vsync is used",
      914LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v6 = 256LL;
  if ( *v4 == 1 )
  {
    Adapter = DXGDODPRESENT::GetAdapter(v2);
    if ( ((unsigned int)v6 & *((_DWORD *)Adapter + 111)) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 920;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Indirect displays cannot currently support HW VSync",
        920LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225659LL;
    }
  }
  v8 = (_QWORD *)operator new[](0x208uLL, 0x4B677844u, v6);
  v9 = v8;
  if ( v8 )
  {
    v10 = 8LL;
    v11 = (_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE *)(v8 + 1);
    *v8 = 8LL;
    do
    {
      _DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE::_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE(v11);
      v11 = (_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE *)((char *)v11 + 64);
      --v10;
    }
    while ( v10 );
    v12 = v9 + 1;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)StartContext + 379) = v12;
  if ( v12 )
  {
    Timer = ExAllocateTimer(0LL, 0LL, 0LL);
    v15 = StartContext + 152;
    *((_QWORD *)StartContext + 19) = Timer;
    if ( Timer )
    {
      v16 = ExAllocateTimer(0LL, 0LL, 4LL);
      *((_QWORD *)StartContext + 18) = v16;
      if ( v16 )
      {
        BLTQUEUE::RecreateVsyncSource((__int64)StartContext, 0, 12);
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v17 = PsCreateSystemThread(
                (PHANDLE)StartContext + 89,
                0x1FFFFFu,
                &ObjectAttributes,
                0LL,
                0LL,
                BLTQUEUE::BltQueueWorkerThread,
                StartContext);
        v3 = v17;
        if ( v17 >= 0 )
        {
          KeWaitForSingleObject(StartContext + 528, Executive, 0, 0, 0LL);
        }
        else
        {
          WdLogSingleEntry2(2LL, StartContext, v17);
          WdLogGlobalForLineNumber = 968;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"BLTQUEUE 0x%I64x : PsCreateSystemThread() failed with Status = 0x%I64x",
            (__int64)StartContext,
            v3,
            0LL,
            0LL,
            0LL);
          v19 = *((_QWORD *)StartContext + 18);
          LODWORD(v3) = -1073741801;
          v20 = StartContext + 152;
          if ( v19 )
          {
            LOBYTE(v18) = 1;
            ExDeleteTimer(v19, v18, 0LL, 0LL);
            *((_QWORD *)StartContext + 18) = 0LL;
            v20 = StartContext + 152;
          }
          if ( *v15 )
          {
            LOBYTE(v18) = 1;
            ExDeleteTimer(*v15, v18, 0LL, 0LL);
            *v20 = 0LL;
          }
        }
        return (unsigned int)v3;
      }
      WdLogSingleEntry1(6LL, StartContext);
      v13 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for normal res timer.";
      WdLogGlobalForLineNumber = 942;
    }
    else
    {
      WdLogSingleEntry1(6LL, StartContext);
      v13 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for high res timer.";
      WdLogGlobalForLineNumber = 936;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, StartContext);
    v13 = L"BLTQUEUE 0x%I64x : Failed to allocate memory for DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE.";
    WdLogGlobalForLineNumber = 927;
  }
  DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v13, (__int64)StartContext, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v3;
}
