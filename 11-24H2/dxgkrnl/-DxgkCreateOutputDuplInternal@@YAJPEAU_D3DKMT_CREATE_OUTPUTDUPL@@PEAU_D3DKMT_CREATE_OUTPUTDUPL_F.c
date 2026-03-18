/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1403D14C4
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1403D1220 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003A164 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400415B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1401E4850 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1401E4950 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1403D1D58 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1403D1DF8 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  DXGGLOBAL *Global; // rax
  __int64 v11; // rax
  const wchar_t *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  char IsRemoteSessionUsingXddmMonitors; // al
  int v18; // ecx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  int v23; // eax
  struct DXGADAPTER **v24; // r9
  D3DKMT_HANDLE hAdapter; // edx
  int RemoteOutputDuplMgr; // edi
  struct DXGADAPTER *v27; // r12
  int v28; // eax
  struct DXGADAPTER *v29; // r13
  struct DXGADAPTER *v30; // rbx
  unsigned __int64 v31; // rdx
  bool v32; // zf
  int OutputDuplManager; // eax
  unsigned __int64 v34; // rdx
  OUTPUTDUPL_MGR *v35; // rbx
  DXGGLOBAL *v36; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v38; // rax
  const wchar_t *v39; // r9
  OUTPUTDUPL_SESSION_MGR *v40; // r15
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // eax
  __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  bool v49; // zf
  UINT KeyedMutexCount; // eax
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // rdx
  int OutputDuplication; // eax
  __int64 v59; // rcx
  struct DXGPROCESS *v60; // rax
  __int64 v61; // rbx
  __int64 v62; // [rsp+20h] [rbp-E0h]
  int v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h]
  char v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+68h] [rbp-98h] BYREF
  DXGADAPTER *v67[2]; // [rsp+70h] [rbp-90h] BYREF
  OUTPUTDUPL_MGR *v68; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v69; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTER *v70; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v71; // [rsp+98h] [rbp-68h] BYREF
  struct DXGPROCESS *Current; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v73; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v74; // [rsp+B0h] [rbp-50h] BYREF
  char v75[8]; // [rsp+B8h] [rbp-48h] BYREF
  DXGPUSHLOCK *v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+C8h] [rbp-38h]
  char v78[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct DXGPROCESS *v79; // [rsp+D8h] [rbp-28h]
  char v80; // [rsp+E0h] [rbp-20h]
  _BYTE v81[144]; // [rsp+F0h] [rbp-10h] BYREF

  v63 = -1;
  v64 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2061);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v63, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3226;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(ULONG_PTR)pCreate > MM_USER_PROBE_ADDRESS",
      3226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v5);
  v6 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3231;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context.", 3231LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( v65 )
    {
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_49;
    }
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  if ( *((_DWORD *)DXGGLOBAL::GetSessionData(Global) + 4742) )
  {
    WdLogSingleEntry0(2LL);
    v11 = 3239LL;
    v12 = L"Screen capture (DDA) is disabled in VAIL container";
    goto LABEL_14;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    WdLogSingleEntry0(2LL);
    v11 = 3246LL;
    v12 = L"Screen capture (DDA) is disabled because of MDM policy";
LABEL_14:
    WdLogGlobalForLineNumber = v11;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v12, v11, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v63);
    return 3221225506LL;
  }
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors(v13);
  v18 = *(_DWORD *)a2;
  v19 = *(_DWORD *)a2 ^ (32 * IsRemoteSessionUsingXddmMonitors);
  v66 = 0;
  *(_DWORD *)a2 = v18 ^ v19 & 0x20;
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)v6 + 11) + 240LL))(&v66, 0LL, 0LL);
  if ( !v66 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3258;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Output duplication is not supported on disconnected session",
      3258LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( v65 )
    {
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_64;
    }
    return 2147483685LL;
  }
  v23 = *(_DWORD *)a2;
  v24 = &v69;
  hAdapter = a1->hAdapter;
  v69 = 0LL;
  if ( (v23 & 0x20) != 0 )
    v24 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v67, hAdapter, (struct _KTHREAD **)v6, v24, 1);
  v70 = 0LL;
  v74 = -1LL;
  RemoteOutputDuplMgr = 0;
  v73 = -1LL;
  v27 = 0LL;
  v28 = *(_DWORD *)a2;
  v29 = 0LL;
  v71 = 0LL;
  v68 = 0LL;
  if ( (v28 & 0x20) == 0 )
  {
    v30 = v69;
    if ( !v69 )
    {
      WdLogSingleEntry2(3LL, a1->hAdapter, -1073741811LL);
      WdLogGlobalForLineNumber = 3280;
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      v32 = v65 == 0;
      goto LABEL_47;
    }
    OutputDuplManager = FindOutputDuplManager(v69, a1->VidPnSourceId, &v70, &v74, &v71, &v73, &v68);
    RemoteOutputDuplMgr = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      WdLogSingleEntry2(3LL, v30, OutputDuplManager);
      WdLogGlobalForLineNumber = 3295;
LABEL_28:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v34);
LABEL_81:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      v49 = v65 == 0;
LABEL_82:
      if ( !v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit, v48, v63);
      return (unsigned int)RemoteOutputDuplMgr;
    }
    v27 = v70;
    v29 = v71;
    v35 = v68;
LABEL_43:
    KeyedMutexCount = a1->KeyedMutexCount;
    if ( KeyedMutexCount )
    {
      if ( KeyedMutexCount > 3 )
      {
        WdLogSingleEntry1(2LL, a1->KeyedMutexCount);
        v51 = a1->KeyedMutexCount;
        WdLogGlobalForLineNumber = 3343;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid KeyedMutexCount specified 0x%I64x",
          v51,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v52);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
        v32 = v65 == 0;
LABEL_47:
        if ( !v32 )
        {
          v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_49:
          if ( !v9 )
            McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v63);
        }
        return 3221225485LL;
      }
      *(_DWORD *)a2 &= ~0x10u;
    }
    else
    {
      *(_DWORD *)a2 |= 0x10u;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, v27, v29);
    if ( (*(_DWORD *)a2 & 0x20) == 0 )
    {
      DXGADAPTER::ReleaseReference(v27);
      DXGADAPTER::ReleaseReference(v29);
      RemoteOutputDuplMgr = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81, 0LL);
      if ( RemoteOutputDuplMgr < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
        goto LABEL_28;
      }
    }
    VidPnSourceId = a1->VidPnSourceId;
    if ( VidPnSourceId >= *((_DWORD *)v35 + 19) )
    {
      WdLogSingleEntry1(2LL, VidPnSourceId);
      v62 = a1->VidPnSourceId;
      WdLogGlobalForLineNumber = 3369;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v62, 0LL, 0LL, 0LL, 0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v54);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v55, (__int64)&EventProfilerExit, v56, v63);
      return 3223192324LL;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75, (struct _KTHREAD **)v35 + 3, 0);
    DXGPUSHLOCK::AcquireExclusive(v76);
    v77 = 2;
    if ( !*((_DWORD *)v35 + 18) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3380;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Connection currently not allowed",
        3380LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v57);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( v65 )
      {
        v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_64:
        if ( !v22 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v63);
      }
      return 2147483685LL;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
        goto LABEL_72;
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v35, a1);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v35, a1, a2);
    }
    RemoteOutputDuplMgr = OutputDuplication;
LABEL_72:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
    if ( RemoteOutputDuplMgr >= 0 && (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x10) == 0 )
    {
      v60 = DXGPROCESS::GetCurrent(v59);
      if ( v60 )
        v61 = *((_QWORD *)v60 + 11);
      else
        v61 = 0LL;
      v79 = v6;
      v80 = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v78, 1u);
      (*(void (**)(void))(v61 + 216))();
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v78);
    }
    if ( v67[0] )
      DXGADAPTER::ReleaseReference(v67[0]);
    goto LABEL_81;
  }
  v36 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v36);
  if ( SessionData )
  {
    v40 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
    if ( v40 )
    {
      v35 = (OUTPUTDUPL_MGR *)*((_QWORD *)v40 + 15);
      if ( !v35 )
      {
        v44 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 344LL))();
        v45 = v44;
        RemoteOutputDuplMgr = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(v40, v44);
        if ( RemoteOutputDuplMgr < 0 )
        {
          WdLogSingleEntry1(2LL, (unsigned int)v45);
          WdLogGlobalForLineNumber = 3324;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to create remote output duplication manager for 0x%I64x sources",
            v45,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v46);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
          v49 = v65 == 0;
          goto LABEL_82;
        }
        v35 = (OUTPUTDUPL_MGR *)*((_QWORD *)v40 + 15);
      }
      v6 = Current;
      v68 = v35;
      goto LABEL_43;
    }
    WdLogSingleEntry0(2LL);
    v38 = 3312LL;
    v39 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v38 = 3305LL;
    v39 = L"DXGSESSIONDATA is NULL";
  }
  WdLogGlobalForLineNumber = v38;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v39, v38, 0LL, 0LL, 0LL, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v63);
  return 3221225495LL;
}
