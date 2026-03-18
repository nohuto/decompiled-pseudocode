/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x14029B670
 * Callers:
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x14029B068 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402AA8D0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 * Callees:
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400145D0 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1400161C0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14002CDC8 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401EE930 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1402AE7A0 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        bool a6,
        bool a7)
{
  __int64 v7; // r15
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  struct DXGHWQUEUE *v11; // r14
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  size_t v16; // r8
  PVOID v17; // rcx
  _BYTE *Pool2; // r8
  _BYTE *v19; // r12
  _BYTE *v20; // r9
  const unsigned int *v21; // rdi
  PVOID v22; // rcx
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v25; // rbx
  unsigned int i; // r15d
  unsigned int v27; // edi
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // eax
  __int64 v40; // rdx
  DXGSYNCOBJECT *v41; // rdi
  unsigned int j; // ebx
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rdx
  _QWORD *v46; // r13
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdi
  DXGADAPTER *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD **v54; // rdi
  _QWORD *k; // rax
  _QWORD *v56; // rcx
  const unsigned int *v57; // r14
  struct DXGPROCESS *v58; // rsi
  _BYTE *v59; // r9
  const unsigned int *v60; // rcx
  const unsigned int *v61; // rsi
  struct DXGPROCESS *v62; // rdi
  PVOID v63; // rcx
  struct DXGPROCESS *v64; // rbx
  int HostHandle; // eax
  struct DXGPROCESS *v66; // rbx
  const unsigned int *v67; // rdi
  unsigned int v68; // ebx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-228h]
  char v70; // [rsp+50h] [rbp-1F8h]
  struct DXGHWQUEUE *v71; // [rsp+58h] [rbp-1F0h] BYREF
  PERESOURCE *v72; // [rsp+60h] [rbp-1E8h] BYREF
  char v73; // [rsp+68h] [rbp-1E0h]
  const unsigned int *v74; // [rsp+70h] [rbp-1D8h]
  const unsigned int *v75; // [rsp+78h] [rbp-1D0h]
  struct DXGPROCESS *v76; // [rsp+80h] [rbp-1C8h]
  PVOID v77; // [rsp+88h] [rbp-1C0h]
  _BYTE v78[32]; // [rsp+90h] [rbp-1B8h] BYREF
  int v79; // [rsp+B0h] [rbp-198h]
  struct DXGPROCESS *v80; // [rsp+B8h] [rbp-190h]
  _BYTE v81[16]; // [rsp+C0h] [rbp-188h] BYREF
  void *Src; // [rsp+D0h] [rbp-178h]
  __int64 v83; // [rsp+D8h] [rbp-170h] BYREF
  int v84; // [rsp+E0h] [rbp-168h]
  __int64 v85; // [rsp+E8h] [rbp-160h] BYREF
  _BYTE v86[16]; // [rsp+F0h] [rbp-158h] BYREF
  size_t v87; // [rsp+100h] [rbp-148h]
  PVOID v88; // [rsp+108h] [rbp-140h]
  PVOID v89; // [rsp+110h] [rbp-138h]
  _BYTE v90[16]; // [rsp+118h] [rbp-130h] BYREF
  int v91; // [rsp+128h] [rbp-120h]
  PVOID P; // [rsp+130h] [rbp-118h]
  _BYTE v93[32]; // [rsp+138h] [rbp-110h] BYREF
  int v94; // [rsp+158h] [rbp-F0h]
  char v95[8]; // [rsp+160h] [rbp-E8h] BYREF
  _BYTE v96[16]; // [rsp+168h] [rbp-E0h] BYREF
  DXGADAPTER *v97; // [rsp+178h] [rbp-D0h]
  char v98; // [rsp+180h] [rbp-C8h]
  __int64 v99; // [rsp+188h] [rbp-C0h]
  _BYTE v100[16]; // [rsp+1A8h] [rbp-A0h] BYREF
  DXGADAPTER *v101; // [rsp+1B8h] [rbp-90h]
  char v102; // [rsp+1C0h] [rbp-88h]
  __int64 v103; // [rsp+1C8h] [rbp-80h]
  __int64 v104; // [rsp+1E8h] [rbp-60h]
  char v105; // [rsp+1F0h] [rbp-58h]

  v7 = a4;
  v8 = a3;
  v75 = a2;
  v9 = a1;
  Src = a3;
  v76 = a5;
  v80 = a5;
  v71 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81, a4, a5, &v71, a7, 1);
  v11 = v71;
  if ( !v71 )
  {
    WdLogSingleEntry3(2LL, a5, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 1505;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)a5,
      v7,
      -1073741811LL,
      0LL,
      0LL);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
    return 3221225485LL;
  }
  v83 = *(_QWORD *)(*((_QWORD *)v71 + 2) + 16LL);
  v84 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v95, v83, 0, v10, a7);
  if ( !a7 )
  {
    if ( v105 )
    {
      if ( v102 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v100, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7603;
      }
      v51 = v101;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v101 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v101 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventBlockThread, v53, 72);
          KeWaitForSingleObject((char *)v101 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v101, 0LL);
        v51 = v101;
      }
      v103 = 0LL;
      v102 = 1;
      if ( *((_DWORD *)v51 + 50) != 1 )
      {
LABEL_91:
        COREACCESS::Release((COREACCESS *)v100);
LABEL_92:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
        return 3221226166LL;
      }
    }
    if ( v98 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v96, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v97 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v97 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventBlockThread, v14, 72);
        KeWaitForSingleObject((char *)v97 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v97, 0LL);
    }
    v99 = 0LL;
    v98 = 1;
    if ( *(_DWORD *)(v104 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v96);
      if ( !v105 )
        goto LABEL_92;
      goto LABEL_91;
    }
    v11 = v71;
    v8 = (unsigned __int64 *)Src;
  }
  P = 0LL;
  v15 = 0;
  v94 = 0;
  if ( !a6 )
    goto LABEL_25;
  if ( (unsigned int)v9 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_16;
    P = (PVOID)ExAllocatePool2(64LL, 8 * v9, 1265072196LL, v12);
  }
  else
  {
    P = v93;
    if ( (_DWORD)v9 )
      memset(v93, 0, 8 * v9);
  }
  v15 = v9;
  v94 = v9;
LABEL_16:
  if ( !P )
  {
LABEL_34:
    P = 0LL;
    v94 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
    return 3221225495LL;
  }
  v16 = v15;
  v87 = v16 * 8;
  v17 = P;
  v88 = P;
  if ( &v8[v16] < v8 || (unsigned __int64)&v8[v16] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, v8, v16 * 8);
  Src = P;
LABEL_25:
  Pool2 = 0LL;
  v77 = 0LL;
  v79 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v89 = 0LL;
  v91 = 0;
  v21 = 0LL;
  v74 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    v70 = 0;
    if ( (unsigned int)v9 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
        goto LABEL_31;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL, 0LL);
      v77 = Pool2;
    }
    else
    {
      Pool2 = v78;
      v77 = v78;
      if ( !(_DWORD)v9 )
        goto LABEL_30;
      memset(v78, 0, 8 * v9);
      Pool2 = v77;
    }
    v20 = v89;
LABEL_30:
    v79 = v9;
    v19 = Pool2;
    if ( !Pool2 )
    {
LABEL_31:
      if ( v20 != v90 && v20 )
      {
        ExFreePoolWithTag(v20, 0);
        Pool2 = v77;
      }
      v89 = 0LL;
      v91 = 0;
      if ( Pool2 != v78 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v77 = 0LL;
      v79 = 0;
      v22 = P;
      if ( P == v93 )
        goto LABEL_34;
      goto LABEL_97;
    }
    goto LABEL_35;
  }
  v70 = 1;
  if ( (unsigned int)v9 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 4 )
      goto LABEL_142;
    v59 = (_BYTE *)ExAllocatePool2(256LL, 4 * v9, 1265072196LL, 0LL);
    v89 = v59;
  }
  else
  {
    v59 = v90;
    v89 = v90;
    if ( !(_DWORD)v9 )
      goto LABEL_141;
    memset(v90, 0, 4 * v9);
    v59 = v89;
  }
  Pool2 = v77;
LABEL_141:
  v91 = v9;
  v21 = (const unsigned int *)v59;
  v74 = (const unsigned int *)v59;
  if ( !v59 )
  {
LABEL_142:
    v89 = 0LL;
    v91 = 0;
    if ( Pool2 != v78 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v77 = 0LL;
    v79 = 0;
    v22 = P;
    if ( P == v93 )
      goto LABEL_34;
LABEL_97:
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_34;
  }
LABEL_35:
  Global = DXGGLOBAL::GetGlobal();
  v72 = (PERESOURCE *)Global;
  v73 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2834;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pGlobal != NULL", 2834LL, 0LL, 0LL, 0LL, 0LL);
    Global = (struct DXGGLOBAL *)v72;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2839;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2839LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v73 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v72, 0LL, 0LL);
    WdLogGlobalForLineNumber = 2859;
  }
  v25 = v72;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v25[75], 1u);
  v73 = 1;
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v80 = (struct DXGPROCESS *)(4LL * i);
    v27 = *(_DWORD *)((char *)v80 + (_QWORD)v75);
    v28 = (volatile signed __int32 *)((char *)v76 + 248);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v28, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v28, v29, v30);
      ExAcquirePushLockSharedEx(v28, 0LL);
    }
    _InterlockedIncrement(v28 + 4);
    v31 = (v27 >> 6) & 0xFFFFFF;
    if ( v31 < *((_DWORD *)v76 + 74)
      && (v32 = 16LL * v31 + *((_QWORD *)v76 + 35), ((v27 >> 25) & 0x60) == (*(_BYTE *)(v32 + 8) & 0x60))
      && (*(_DWORD *)(v32 + 8) & 0x2000) == 0
      && (*(_DWORD *)(v32 + 8) & 0x1F) == 0xB )
    {
      v33 = *(_QWORD *)v32;
    }
    else
    {
      v33 = 0LL;
    }
    _InterlockedDecrement(v28 + 4);
    ExReleasePushLockSharedEx(v28, 0LL);
    KeLeaveCriticalRegion();
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 16);
      v35 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
      if ( v34 != v35 )
      {
        WdLogSingleEntry2(2LL, v35, v34);
        WdLogGlobalForLineNumber = 1600;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
          *(_QWORD *)(*((_QWORD *)v71 + 2) + 16LL),
          *(_QWORD *)(v33 + 16),
          0LL,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v72);
        if ( v89 != v90 && v89 )
          ExFreePoolWithTag(v89, 0);
        v89 = 0LL;
        v91 = 0;
        if ( v77 != v78 && v77 )
          ExFreePoolWithTag(v77, 0);
        v77 = 0LL;
        v79 = 0;
        v63 = P;
        if ( P != v93 && P )
          goto LABEL_160;
        goto LABEL_161;
      }
      if ( (*(_DWORD *)(v33 + 72) & 0x20) != 0 )
      {
        v66 = v80;
        v67 = v75;
        WdLogSingleEntry1(2LL, *(unsigned int *)((char *)v80 + (_QWORD)v75));
        WdLogGlobalForLineNumber = 1608;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%x object is opened as signal only and thus cannot be waited on.",
          *(unsigned int *)((char *)v66 + (_QWORD)v67),
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v72);
        if ( v89 != v90 && v89 )
          ExFreePoolWithTag(v89, 0);
        v89 = 0LL;
        v91 = 0;
        if ( v77 != v78 && v77 )
          ExFreePoolWithTag(v77, 0);
        v77 = 0LL;
        v79 = 0;
        if ( P != v93 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v94 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v83);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
        return 3221225506LL;
      }
      if ( !v70 )
      {
        *(_QWORD *)&v19[8 * i] = *(_QWORD *)(v33 + 32);
LABEL_55:
        v21 = v74;
        continue;
      }
      v60 = v74;
      *(const unsigned int *)((char *)v74 + (_QWORD)v80) = *(_DWORD *)(v33 + 44);
      v21 = v60;
    }
    else
    {
      v36 = v75[i];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v28, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v28, v37, v38);
        ExAcquirePushLockSharedEx(v28, 0LL);
      }
      _InterlockedIncrement(v28 + 4);
      v39 = (v36 >> 6) & 0xFFFFFF;
      if ( v39 < *((_DWORD *)v76 + 74)
        && (v40 = 16LL * v39 + *((_QWORD *)v76 + 35), ((v36 >> 25) & 0x60) == (*(_BYTE *)(v40 + 8) & 0x60))
        && (*(_DWORD *)(v40 + 8) & 0x2000) == 0
        && (*(_DWORD *)(v40 + 8) & 0x1F) == 8 )
      {
        v41 = *(DXGSYNCOBJECT **)v40;
      }
      else
      {
        v41 = 0LL;
      }
      _InterlockedDecrement(v28 + 4);
      ExReleasePushLockSharedEx(v28, 0LL);
      KeLeaveCriticalRegion();
      if ( !v41 && !v70 )
      {
        v61 = v75;
        v62 = v76;
        WdLogSingleEntry3(1LL, v76, v75[i], i);
        WdLogGlobalForLineNumber = 1638;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
          (__int64)v62,
          v61[i],
          i,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v72);
        if ( v89 != v90 && v89 )
          ExFreePoolWithTag(v89, 0);
        v89 = 0LL;
        v91 = 0;
        if ( v77 != v78 && v77 )
          ExFreePoolWithTag(v77, 0);
        v77 = 0LL;
        v79 = 0;
        v63 = P;
        if ( P != v93 && P )
LABEL_160:
          ExFreePoolWithTag(v63, 0);
LABEL_161:
        P = 0LL;
        v94 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v83);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
        return 3221225485LL;
      }
      if ( !v70 )
      {
        *(_QWORD *)&v19[8 * i] = v41;
        goto LABEL_55;
      }
      v64 = v80;
      HostHandle = *(_DWORD *)((char *)v80 + (_QWORD)v75);
      if ( v41 )
        HostHandle = DXGSYNCOBJECT::GetHostHandle(v41, HostHandle);
      v21 = v74;
      *(const unsigned int *)((char *)v74 + (_QWORD)v64) = HostHandle;
    }
  }
  if ( v70 )
  {
    v68 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL)
                                                     + 16LL)
                                         + 4664LL),
            v76,
            0LL,
            v21,
            0LL,
            0LL,
            Src,
            0LL,
            v9,
            v71);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v72);
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v89 = 0LL;
    v91 = 0;
    if ( v77 != v78 && v77 )
      ExFreePoolWithTag(v77, 0);
    v77 = 0LL;
    v79 = 0;
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v83);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
    return v68;
  }
  else
  {
    for ( j = 0; j < (unsigned int)v9; ++j )
    {
      v43 = *(_QWORD *)&v19[8 * j];
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v86, (struct DXGSYNCOBJECT *)v43);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
      v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL);
      if ( (*(_DWORD *)(v43 + 408) & 4) != 0 )
      {
        v54 = (_QWORD **)(v43 + 424);
        for ( k = *v54; k != v54; k = (_QWORD *)*k )
        {
          v56 = k - 14;
          if ( !v44 || v56[2] == v44 )
            goto LABEL_105;
        }
        v56 = 0LL;
LABEL_105:
        v45 = v56[4];
      }
      else
      {
        v45 = *(_QWORD *)(v43 + 456);
      }
      v85 = v45;
      v46 = (char *)Src + 8 * j;
      v47 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL)
                                                                                       + 736LL)
                                                                           + 8LL)
                                                               + 640LL))(
              *((_QWORD *)v71 + 5),
              v45,
              *v46);
      v50 = v47;
      if ( v47 < 0 )
      {
        v57 = v75;
        v58 = v76;
        WdLogSingleEntry4(2LL, v76, v75[j], j, v47);
        WdLogGlobalForLineNumber = 1696;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v58,
          v57[j],
          j,
          v50,
          0LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
        if ( v73 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v72);
        if ( v89 != v90 && v89 )
          ExFreePoolWithTag(v89, 0);
        v89 = 0LL;
        v91 = 0;
        if ( v77 != v78 && v77 )
          ExFreePoolWithTag(v77, 0);
        v77 = 0LL;
        v79 = 0;
        if ( P != v93 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v94 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v83);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
        return (unsigned int)v50;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          v48,
          (__int64)&EventWaitForSynchronizationObjectFromGpu,
          v49,
          v71,
          Timeout,
          &v85,
          v46);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
    }
    if ( v73 )
    {
      v73 = 0;
      ExReleaseResourceLite(v72[75]);
      KeLeaveCriticalRegion();
    }
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v89 = 0LL;
    v91 = 0;
    if ( v77 != v78 && v77 )
      ExFreePoolWithTag(v77, 0);
    v77 = 0LL;
    v79 = 0;
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v81);
    return 0LL;
  }
}
