/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1401AC9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14000E170 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x140034510 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004174C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x140042164 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004F834 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x140198374 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1401991B4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140199FC4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  struct _KTHREAD **Current; // rax
  DXGPROCESS *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  struct DXGADAPTER *v10; // rbx
  unsigned __int64 v11; // rdx
  int PairingAdapters; // edi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v17; // rdi
  char v18; // bl
  int v19; // r15d
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ADAPTER_DISPLAY *v23; // rcx
  unsigned __int64 v24; // rdx
  int VidPnSourceOwnerType; // eax
  volatile signed __int64 *v26; // r15
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int *v34; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v36; // rbx
  __int64 v37; // r9
  __int64 v38; // r9
  const wchar_t *v39; // r9
  __int64 v40; // rdx
  int v41; // eax
  struct COREDEVICEACCESS *v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rbx
  int v46; // eax
  struct COREDEVICEACCESS *v47; // rbx
  int v48; // eax
  __int64 v49; // rbx
  void *v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // [rsp+20h] [rbp-298h]
  __int64 v55; // [rsp+20h] [rbp-298h]
  struct COREDEVICEACCESS *v56; // [rsp+28h] [rbp-290h]
  __int64 v57; // [rsp+30h] [rbp-288h]
  _BYTE v58[8]; // [rsp+50h] [rbp-268h] BYREF
  int v59; // [rsp+58h] [rbp-260h] BYREF
  __int64 v60; // [rsp+60h] [rbp-258h]
  char v61; // [rsp+68h] [rbp-250h]
  DXGCONTEXT *v62; // [rsp+70h] [rbp-248h] BYREF
  struct DXGDEVICE *v63; // [rsp+78h] [rbp-240h]
  unsigned int v64; // [rsp+80h] [rbp-238h] BYREF
  unsigned int v65; // [rsp+84h] [rbp-234h] BYREF
  _BYTE v66[16]; // [rsp+88h] [rbp-230h] BYREF
  DXGADAPTER *v67[2]; // [rsp+98h] [rbp-220h] BYREF
  struct DXGADAPTER *v68; // [rsp+A8h] [rbp-210h] BYREF
  struct DXGADAPTER *v69; // [rsp+B0h] [rbp-208h] BYREF
  _BYTE v70[24]; // [rsp+B8h] [rbp-200h] BYREF
  unsigned __int64 v71; // [rsp+D0h] [rbp-1E8h] BYREF
  _QWORD v72[8]; // [rsp+D8h] [rbp-1E0h] BYREF
  unsigned int v73[2]; // [rsp+118h] [rbp-1A0h] BYREF
  int Src; // [rsp+120h] [rbp-198h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+128h] [rbp-190h] BYREF
  char v76; // [rsp+158h] [rbp-160h]
  _BYTE v77[160]; // [rsp+160h] [rbp-158h] BYREF
  _BYTE v78[144]; // [rsp+200h] [rbp-B8h] BYREF

  v59 = -1;
  v60 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2021);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v59, 2021);
  *(_QWORD *)v73 = 0LL;
  Src = 0;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v73, v4, 0xCuLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_8;
  v68 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v67, v73[0], Current, &v68, 1);
  v10 = v68;
  if ( !v68 )
  {
    WdLogSingleEntry2(3LL, v73[0], -1073741811LL);
    WdLogGlobalForLineNumber = 5583;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v11);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
    v9 = v61 == 0;
LABEL_28:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v59);
    return 3221225485LL;
  }
  v69 = 0LL;
  v71 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v68, v73[1], 0LL, 0LL, &v69, &v71, 0);
  if ( PairingAdapters >= 0 )
  {
    v17 = v69;
    if ( !v69 || !*((_QWORD *)v69 + 390) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5624;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter()",
        5624LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v18 = 0;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v78, v17, 0LL);
    v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v78, 0LL);
    if ( v19 < 0 )
    {
      DXGADAPTER::ReleaseReference(v17);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
      if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v59);
      return (unsigned int)v19;
    }
    v23 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 390);
    if ( v73[1] >= *((_DWORD *)v23 + 24) )
    {
      DXGADAPTER::ReleaseReference(v17);
      WdLogSingleEntry2(2LL, v73[1], -1073741811LL);
      WdLogGlobalForLineNumber = 5649;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v73[1],
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v24);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
      v9 = v61 == 0;
      goto LABEL_28;
    }
    Src = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v23, v73[1]);
    if ( !Src && !DXGPROCESS::IsRemoteConnection(v6) )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v17 + 390), v73[1]) )
      {
        if ( DXGADAPTER::UsingSetTimingsFromVidPn(v17) )
        {
          VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v17 + 390), v73[1]);
          if ( !VidPnSourceOwnerType || VidPnSourceOwnerType == 3 )
            v18 = 1;
        }
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78);
    v26 = 0LL;
    v63 = 0LL;
    v62 = 0LL;
    if ( !v18 )
    {
LABEL_70:
      DXGADAPTER::ReleaseReference(v17);
      if ( v62 )
        DXGCONTEXT::ReleaseReference(v62);
      if ( v26 && _InterlockedExchangeAdd64(v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
      goto LABEL_75;
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 5691;
      v30 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v30,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_70;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v58);
    v31 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v58, 0);
    if ( v31 < 0 )
    {
      v32 = v31;
      WdLogSingleEntry1(2LL, v31);
      WdLogGlobalForLineNumber = 5704;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
        v32,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_44:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v58);
      goto LABEL_70;
    }
    if ( DXGPROCESS::IsRemoteConnection(v6) )
    {
      v33 = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, v33, -1073741811LL);
      WdLogGlobalForLineNumber = 5716;
      v54 = (unsigned int)PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Current session 0x%I64x has just been switched to remote session , returning 0x%I64x.",
        v54,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_44;
    }
    v76 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2332));
    v34 = (unsigned int *)((char *)v17 + 412);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v17 + 412),
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v36 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry2(2LL, v17, CddDeviceAndContextForCurrentSession);
      WdLogGlobalForLineNumber = 5740;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
        (__int64)v17,
        v36,
        0LL,
        0LL,
        0LL);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v58);
      v26 = (volatile signed __int64 *)v63;
      goto LABEL_70;
    }
    v26 = (volatile signed __int64 *)v63;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v66, v63);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v72,
      &v62,
      1u,
      v37,
      1);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70, v17, 1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, (__int64)v26, 1, v38, 0);
    if ( !v72[0] )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 5757;
      v57 = 0LL;
      v56 = 0LL;
      v55 = 5757LL;
      v39 = L"Out of memory - could not initialize context array lock exclusive.";
      v40 = 262145LL;
LABEL_51:
      DxgkLogInternalTriageEvent(0LL, v40, 0xFFFFFFFFLL, v39, v55, (__int64)v56, v57, 0LL, 0LL);
LABEL_52:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v72);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v66);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      goto LABEL_44;
    }
    v41 = COREDEVICEACCESS::AcquireExclusive((__int64)v77, 1u);
    if ( v41 < 0 )
    {
      v42 = (struct COREDEVICEACCESS *)v41;
      WdLogSingleEntry2(2LL, v26, v41);
      WdLogGlobalForLineNumber = 5766;
      v57 = 0LL;
      v56 = v42;
      v55 = (__int64)v26;
      v39 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
LABEL_55:
      v40 = 0x40000LL;
      goto LABEL_51;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v17 + 390), v73[1])
      || DXGPROCESS::IsRemoteConnection(v6) )
    {
      WdLogSingleEntry3(2LL, v73[1], *((int *)v17 + 104), *v34);
      WdLogGlobalForLineNumber = 5783;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Getting Shared Primary Handle on not used VidPn source 0x%I64x on adapter 0x%I64x%08I64x in current session.",
        v73[1],
        *((int *)v17 + 104),
        *((unsigned int *)v17 + 103),
        0LL,
        0LL);
    }
    else
    {
      v43 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v17 + 390), v73[1]);
      if ( !v43 || v43 == 3 )
      {
        Src = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(*((ADAPTER_DISPLAY **)v17 + 390), v73[1]);
        if ( Src )
          goto LABEL_52;
        v65 = 0;
        v64 = 0;
        v46 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                *((ADAPTER_DISPLAY **)v17 + 390),
                (struct DXGDEVICE *)v26,
                v73[1],
                &v65,
                &v64,
                (struct COREDEVICEACCESS *)v77);
        if ( v46 >= 0 )
        {
          Src = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(*((ADAPTER_DISPLAY **)v17 + 390), v73[1]);
          if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v17 + 390), v73[1]) )
            goto LABEL_52;
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v17 + 390), v73[1]) )
            goto LABEL_52;
          v48 = ADAPTER_DISPLAY::PresentCddPrimary(
                  *((PERESOURCE ***)v17 + 390),
                  v62,
                  v73[1],
                  (struct COREDEVICEACCESS *)v77);
          if ( v48 >= 0 )
            goto LABEL_52;
          v49 = v48;
          WdLogSingleEntry3(2LL, v73[1], v17, v48);
          WdLogGlobalForLineNumber = 5856;
          v57 = v49;
          v56 = v17;
          v55 = v73[1];
          v39 = L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I64x (St"
                 "atus = 0x%I64x).";
        }
        else
        {
          v47 = (struct COREDEVICEACCESS *)v46;
          WdLogSingleEntry2(2LL, v17, v46);
          WdLogGlobalForLineNumber = 5831;
          v57 = 0LL;
          v56 = v47;
          v55 = (__int64)v17;
          v39 = L"Failed to delay create CDD primary on adapter 0x%I64x (Status = 0x%I64x).";
        }
        goto LABEL_55;
      }
      v44 = *v34;
      v45 = v43;
      WdLogSingleEntry4(2LL, v43, v73[1], *((int *)v17 + 104), v44);
      WdLogGlobalForLineNumber = 5801;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Ownership has been changed to 0x%I64x on VidPn source 0x%I64x on adapter 0x%I64x%08I64x.",
        v45,
        v73[1],
        *((int *)v17 + 104),
        *((unsigned int *)v17 + 103),
        0LL);
    }
    Src = 0;
    goto LABEL_52;
  }
  WdLogSingleEntry2(2LL, v10, v73[1]);
  WdLogGlobalForLineNumber = 5600;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
    (__int64)v10,
    v73[1],
    0LL,
    0LL,
    0LL);
  if ( *((_BYTE *)v10 + 209) )
  {
    Src = 0;
LABEL_75:
    v50 = (void *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v50 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v50, &Src, 4uLL);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
    if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit, v53, v59);
    return 0LL;
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v67, v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v59);
  return (unsigned int)PairingAdapters;
}
