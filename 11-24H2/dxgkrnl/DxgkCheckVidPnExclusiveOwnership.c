/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1403B8780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004174C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rsi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // r14
  struct DXGADAPTER *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rcx
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int VidPnSourceOwnerType; // eax
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // [rsp+20h] [rbp-88h]
  DXGADAPTER *v36[2]; // [rsp+50h] [rbp-58h] BYREF
  int v37; // [rsp+60h] [rbp-48h] BYREF
  __int64 v38; // [rsp+68h] [rbp-40h]
  char v39; // [rsp+70h] [rbp-38h]
  _BYTE v40[8]; // [rsp+78h] [rbp-30h] BYREF
  struct DXGADAPTER *v41; // [rsp+80h] [rbp-28h]
  char v42; // [rsp+88h] [rbp-20h]
  struct DXGADAPTER *v43; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+18h] BYREF

  v3 = (const void *)a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2058);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2058);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v24 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6752;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    v24 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 6762;
    v35 = (unsigned int)PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkCheckVidPnExclusiveOwnership is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v35,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  v44 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v44, v3, 8uLL);
  v43 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v36, v44, (struct _KTHREAD **)Current, &v43, 1);
  v8 = v43;
  if ( !v43 )
  {
    v24 = -1073741811;
    WdLogSingleEntry2(3LL, (unsigned int)v44, -1073741811LL);
    WdLogGlobalForLineNumber = 6790;
    goto LABEL_17;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 224LL))() )
  {
    v24 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = -1071775738LL;
    WdLogGlobalForLineNumber = 6803;
    goto LABEL_17;
  }
  if ( !*((_QWORD *)v8 + 390) )
  {
    v24 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 6812;
LABEL_24:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v28);
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v37);
    }
    return v24;
  }
  v41 = v8;
  v42 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
  if ( *((_DWORD *)v8 + 50) == 1 )
  {
    v16 = HIDWORD(v44);
    v17 = *((_QWORD *)v43 + 390);
    if ( HIDWORD(v44) < *(_DWORD *)(v17 + 96) )
    {
      if ( *((int *)SessionData + 4632) <= 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v13, v14, v15);
        v24 = -1071775738;
        v29[3] = -1071775738LL;
        v29[4] = v43;
        v29[5] = v16;
        WdLogGlobalForLineNumber = 6842;
      }
      else
      {
        v18 = v43;
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v43 + 390), HIDWORD(v44)) )
        {
          VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v18 + 390), v16);
          if ( (unsigned int)(VidPnSourceOwnerType - 2) > 1 )
            v24 = VidPnSourceOwnerType == 0 ? 0xC01E000C : 0;
          else
            v24 = -1071775738;
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
          v30[3] = -1071775739LL;
          v30[4] = v18;
          v30[5] = v16;
          WdLogGlobalForLineNumber = 6854;
          v24 = -1071775739;
        }
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
LABEL_17:
      if ( v36[0] )
        DXGADAPTER::ReleaseReference(v36[0]);
      goto LABEL_19;
    }
    v24 = -1073741811;
    WdLogSingleEntry2(3LL, HIDWORD(v44), -1073741811LL);
    WdLogGlobalForLineNumber = 6834;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    goto LABEL_24;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v37);
  return 3221226166LL;
}
