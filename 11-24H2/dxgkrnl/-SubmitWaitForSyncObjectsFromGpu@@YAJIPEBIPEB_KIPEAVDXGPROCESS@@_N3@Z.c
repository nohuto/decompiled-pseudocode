/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1402AF2F0
 * Callers:
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1402AECE8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402B0C60 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400113D0 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140012FC0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14002D4AC (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401F453C (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1404017C0 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
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
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ecx
  size_t v15; // r8
  PVOID v16; // rcx
  _BYTE *Pool2; // r8
  _BYTE *v18; // r12
  _BYTE *v19; // r9
  const unsigned int *v20; // rdi
  PVOID v21; // rcx
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v24; // rbx
  unsigned int i; // r15d
  unsigned int v26; // edi
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rdx
  DXGSYNCOBJECT *v40; // rdi
  unsigned int j; // ebx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rdx
  _QWORD *v45; // r13
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdi
  DXGADAPTER *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD **v53; // rdi
  _QWORD *k; // rax
  _QWORD *v55; // rcx
  const unsigned int *v56; // r14
  struct DXGPROCESS *v57; // rsi
  _BYTE *v58; // r9
  const unsigned int *v59; // rcx
  const unsigned int *v60; // rsi
  struct DXGPROCESS *v61; // rdi
  PVOID v62; // rcx
  struct DXGPROCESS *v63; // rbx
  int HostHandle; // eax
  struct DXGPROCESS *v65; // rbx
  const unsigned int *v66; // rdi
  unsigned int v67; // ebx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-228h]
  char v69; // [rsp+50h] [rbp-1F8h]
  struct DXGHWQUEUE *v70; // [rsp+58h] [rbp-1F0h] BYREF
  PERESOURCE *v71; // [rsp+60h] [rbp-1E8h] BYREF
  char v72; // [rsp+68h] [rbp-1E0h]
  const unsigned int *v73; // [rsp+70h] [rbp-1D8h]
  const unsigned int *v74; // [rsp+78h] [rbp-1D0h]
  struct DXGPROCESS *v75; // [rsp+80h] [rbp-1C8h]
  PVOID v76; // [rsp+88h] [rbp-1C0h]
  _BYTE v77[32]; // [rsp+90h] [rbp-1B8h] BYREF
  int v78; // [rsp+B0h] [rbp-198h]
  struct DXGPROCESS *v79; // [rsp+B8h] [rbp-190h]
  _BYTE v80[16]; // [rsp+C0h] [rbp-188h] BYREF
  void *Src; // [rsp+D0h] [rbp-178h]
  __int64 v82; // [rsp+D8h] [rbp-170h] BYREF
  int v83; // [rsp+E0h] [rbp-168h]
  __int64 v84; // [rsp+E8h] [rbp-160h] BYREF
  _BYTE v85[16]; // [rsp+F0h] [rbp-158h] BYREF
  size_t v86; // [rsp+100h] [rbp-148h]
  PVOID v87; // [rsp+108h] [rbp-140h]
  PVOID v88; // [rsp+110h] [rbp-138h]
  _BYTE v89[16]; // [rsp+118h] [rbp-130h] BYREF
  int v90; // [rsp+128h] [rbp-120h]
  PVOID P; // [rsp+130h] [rbp-118h]
  _BYTE v92[32]; // [rsp+138h] [rbp-110h] BYREF
  int v93; // [rsp+158h] [rbp-F0h]
  char v94[8]; // [rsp+160h] [rbp-E8h] BYREF
  _BYTE v95[16]; // [rsp+168h] [rbp-E0h] BYREF
  DXGADAPTER *v96; // [rsp+178h] [rbp-D0h]
  char v97; // [rsp+180h] [rbp-C8h]
  __int64 v98; // [rsp+188h] [rbp-C0h]
  _BYTE v99[16]; // [rsp+1A8h] [rbp-A0h] BYREF
  DXGADAPTER *v100; // [rsp+1B8h] [rbp-90h]
  char v101; // [rsp+1C0h] [rbp-88h]
  __int64 v102; // [rsp+1C8h] [rbp-80h]
  __int64 v103; // [rsp+1E8h] [rbp-60h]
  char v104; // [rsp+1F0h] [rbp-58h]

  v7 = a4;
  v8 = a3;
  v74 = a2;
  v9 = a1;
  Src = a3;
  v75 = a5;
  v79 = a5;
  v70 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80, a4, (struct _KTHREAD **)a5, &v70, a7, 1);
  v11 = v70;
  if ( !v70 )
  {
    WdLogSingleEntry3(2LL, a5, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 1505;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)a5,
      v7,
      -1073741811LL,
      0LL,
      0LL);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
    return 3221225485LL;
  }
  v82 = *(_QWORD *)(*((_QWORD *)v70 + 2) + 16LL);
  v83 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, v82, 0, v10, a7);
  if ( !a7 )
  {
    if ( v104 )
    {
      if ( v101 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v99, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7628;
      }
      v50 = v100;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v100 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v100 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventBlockThread, v52, 72);
          KeWaitForSingleObject((char *)v100 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v100, 0LL);
        v50 = v100;
      }
      v102 = 0LL;
      v101 = 1;
      if ( *((_DWORD *)v50 + 50) != 1 )
      {
LABEL_91:
        COREACCESS::Release((COREACCESS *)v99);
LABEL_92:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
        return 3221226166LL;
      }
    }
    if ( v97 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v95, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v96 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v96 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, 72);
        KeWaitForSingleObject((char *)v96 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v96, 0LL);
    }
    v98 = 0LL;
    v97 = 1;
    if ( *(_DWORD *)(v103 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v95);
      if ( !v104 )
        goto LABEL_92;
      goto LABEL_91;
    }
    v11 = v70;
    v8 = (unsigned __int64 *)Src;
  }
  P = 0LL;
  v14 = 0;
  v93 = 0;
  if ( !a6 )
    goto LABEL_25;
  if ( (unsigned int)v9 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_16;
    P = (PVOID)ExAllocatePool2(64LL, 8 * v9, 1265072196LL);
  }
  else
  {
    P = v92;
    if ( (_DWORD)v9 )
      memset(v92, 0, 8 * v9);
  }
  v14 = v9;
  v93 = v9;
LABEL_16:
  if ( !P )
  {
LABEL_34:
    P = 0LL;
    v93 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
    return 3221225495LL;
  }
  v15 = v14;
  v86 = v15 * 8;
  v16 = P;
  v87 = P;
  if ( &v8[v15] < v8 || (unsigned __int64)&v8[v15] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v16, v8, v15 * 8);
  Src = P;
LABEL_25:
  Pool2 = 0LL;
  v76 = 0LL;
  v78 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v88 = 0LL;
  v90 = 0;
  v20 = 0LL;
  v73 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    v69 = 0;
    if ( (unsigned int)v9 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
        goto LABEL_31;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL);
      v76 = Pool2;
    }
    else
    {
      Pool2 = v77;
      v76 = v77;
      if ( !(_DWORD)v9 )
        goto LABEL_30;
      memset(v77, 0, 8 * v9);
      Pool2 = v76;
    }
    v19 = v88;
LABEL_30:
    v78 = v9;
    v18 = Pool2;
    if ( !Pool2 )
    {
LABEL_31:
      if ( v19 != v89 && v19 )
      {
        ExFreePoolWithTag(v19, 0);
        Pool2 = v76;
      }
      v88 = 0LL;
      v90 = 0;
      if ( Pool2 != v77 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v76 = 0LL;
      v78 = 0;
      v21 = P;
      if ( P == v92 )
        goto LABEL_34;
      goto LABEL_97;
    }
    goto LABEL_35;
  }
  v69 = 1;
  if ( (unsigned int)v9 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 4 )
      goto LABEL_142;
    v58 = (_BYTE *)ExAllocatePool2(256LL, 4 * v9, 1265072196LL);
    v88 = v58;
  }
  else
  {
    v58 = v89;
    v88 = v89;
    if ( !(_DWORD)v9 )
      goto LABEL_141;
    memset(v89, 0, 4 * v9);
    v58 = v88;
  }
  Pool2 = v76;
LABEL_141:
  v90 = v9;
  v20 = (const unsigned int *)v58;
  v73 = (const unsigned int *)v58;
  if ( !v58 )
  {
LABEL_142:
    v88 = 0LL;
    v90 = 0;
    if ( Pool2 != v77 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v76 = 0LL;
    v78 = 0;
    v21 = P;
    if ( P == v92 )
      goto LABEL_34;
LABEL_97:
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    goto LABEL_34;
  }
LABEL_35:
  Global = DXGGLOBAL::GetGlobal();
  v71 = (PERESOURCE *)Global;
  v72 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3030;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pGlobal != NULL", 3030LL, 0LL, 0LL, 0LL, 0LL);
    Global = (struct DXGGLOBAL *)v71;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3035;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursiveSharedLock",
      3035LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v72 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v71, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3055;
  }
  v24 = v71;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v24[75], 1u);
  v72 = 1;
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v79 = (struct DXGPROCESS *)(4LL * i);
    v26 = *(_DWORD *)((char *)v79 + (_QWORD)v74);
    v27 = (volatile signed __int32 *)((char *)v75 + 248);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v27, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v27, v28, v29);
      ExAcquirePushLockSharedEx(v27, 0LL);
    }
    _InterlockedIncrement(v27 + 4);
    v30 = (v26 >> 6) & 0xFFFFFF;
    if ( v30 < *((_DWORD *)v75 + 74)
      && (v31 = 16LL * v30 + *((_QWORD *)v75 + 35), ((v26 >> 25) & 0x60) == (*(_BYTE *)(v31 + 8) & 0x60))
      && (*(_DWORD *)(v31 + 8) & 0x2000) == 0
      && (*(_DWORD *)(v31 + 8) & 0x1F) == 0xB )
    {
      v32 = *(_QWORD *)v31;
    }
    else
    {
      v32 = 0LL;
    }
    _InterlockedDecrement(v27 + 4);
    ExReleasePushLockSharedEx(v27, 0LL);
    KeLeaveCriticalRegion();
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 16);
      v34 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
      if ( v33 != v34 )
      {
        WdLogSingleEntry2(2LL, v34, v33);
        WdLogGlobalForLineNumber = 1600;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
          *(_QWORD *)(*((_QWORD *)v70 + 2) + 16LL),
          *(_QWORD *)(v32 + 16),
          0LL,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v71);
        if ( v88 != v89 && v88 )
          ExFreePoolWithTag(v88, 0);
        v88 = 0LL;
        v90 = 0;
        if ( v76 != v77 && v76 )
          ExFreePoolWithTag(v76, 0);
        v76 = 0LL;
        v78 = 0;
        v62 = P;
        if ( P != v92 && P )
          goto LABEL_160;
        goto LABEL_161;
      }
      if ( (*(_DWORD *)(v32 + 72) & 0x20) != 0 )
      {
        v65 = v79;
        v66 = v74;
        WdLogSingleEntry1(2LL, *(unsigned int *)((char *)v79 + (_QWORD)v74));
        WdLogGlobalForLineNumber = 1608;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"0x%x object is opened as signal only and thus cannot be waited on.",
          *(unsigned int *)((char *)v65 + (_QWORD)v66),
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v71);
        if ( v88 != v89 && v88 )
          ExFreePoolWithTag(v88, 0);
        v88 = 0LL;
        v90 = 0;
        if ( v76 != v77 && v76 )
          ExFreePoolWithTag(v76, 0);
        v76 = 0LL;
        v78 = 0;
        if ( P != v92 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v93 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v82);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
        return 3221225506LL;
      }
      if ( !v69 )
      {
        *(_QWORD *)&v18[8 * i] = *(_QWORD *)(v32 + 32);
LABEL_55:
        v20 = v73;
        continue;
      }
      v59 = v73;
      *(const unsigned int *)((char *)v73 + (_QWORD)v79) = *(_DWORD *)(v32 + 44);
      v20 = v59;
    }
    else
    {
      v35 = v74[i];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v27, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v27, v36, v37);
        ExAcquirePushLockSharedEx(v27, 0LL);
      }
      _InterlockedIncrement(v27 + 4);
      v38 = (v35 >> 6) & 0xFFFFFF;
      if ( v38 < *((_DWORD *)v75 + 74)
        && (v39 = 16LL * v38 + *((_QWORD *)v75 + 35), ((v35 >> 25) & 0x60) == (*(_BYTE *)(v39 + 8) & 0x60))
        && (*(_DWORD *)(v39 + 8) & 0x2000) == 0
        && (*(_DWORD *)(v39 + 8) & 0x1F) == 8 )
      {
        v40 = *(DXGSYNCOBJECT **)v39;
      }
      else
      {
        v40 = 0LL;
      }
      _InterlockedDecrement(v27 + 4);
      ExReleasePushLockSharedEx(v27, 0LL);
      KeLeaveCriticalRegion();
      if ( !v40 && !v69 )
      {
        v60 = v74;
        v61 = v75;
        WdLogSingleEntry3(1LL, v75, v74[i], i);
        WdLogGlobalForLineNumber = 1638;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
          (__int64)v61,
          v60[i],
          i,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v71);
        if ( v88 != v89 && v88 )
          ExFreePoolWithTag(v88, 0);
        v88 = 0LL;
        v90 = 0;
        if ( v76 != v77 && v76 )
          ExFreePoolWithTag(v76, 0);
        v76 = 0LL;
        v78 = 0;
        v62 = P;
        if ( P != v92 && P )
LABEL_160:
          ExFreePoolWithTag(v62, 0);
LABEL_161:
        P = 0LL;
        v93 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v82);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
        return 3221225485LL;
      }
      if ( !v69 )
      {
        *(_QWORD *)&v18[8 * i] = v40;
        goto LABEL_55;
      }
      v63 = v79;
      HostHandle = *(_DWORD *)((char *)v79 + (_QWORD)v74);
      if ( v40 )
        HostHandle = DXGSYNCOBJECT::GetHostHandle(v40, HostHandle);
      v20 = v73;
      *(const unsigned int *)((char *)v73 + (_QWORD)v63) = HostHandle;
    }
  }
  if ( v69 )
  {
    v67 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL)
                                                     + 16LL)
                                         + 4664LL),
            v75,
            0LL,
            v20,
            0LL,
            0LL,
            Src,
            0LL,
            v9,
            v70);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v71);
    if ( v88 != v89 && v88 )
      ExFreePoolWithTag(v88, 0);
    v88 = 0LL;
    v90 = 0;
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v76 = 0LL;
    v78 = 0;
    if ( P != v92 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v93 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v82);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
    return v67;
  }
  else
  {
    for ( j = 0; j < (unsigned int)v9; ++j )
    {
      v42 = *(_QWORD *)&v18[8 * j];
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v85, (struct DXGSYNCOBJECT *)v42);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v85);
      v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL);
      if ( (*(_DWORD *)(v42 + 408) & 4) != 0 )
      {
        v53 = (_QWORD **)(v42 + 424);
        for ( k = *v53; k != v53; k = (_QWORD *)*k )
        {
          v55 = k - 14;
          if ( !v43 || v55[2] == v43 )
            goto LABEL_105;
        }
        v55 = 0LL;
LABEL_105:
        v44 = v55[4];
      }
      else
      {
        v44 = *(_QWORD *)(v42 + 456);
      }
      v84 = v44;
      v45 = (char *)Src + 8 * j;
      v46 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL)
                                                                                       + 736LL)
                                                                           + 8LL)
                                                               + 640LL))(
              *((_QWORD *)v70 + 5),
              v44,
              *v45);
      v49 = v46;
      if ( v46 < 0 )
      {
        v56 = v74;
        v57 = v75;
        WdLogSingleEntry4(2LL, v75, v74[j], j, v46);
        WdLogGlobalForLineNumber = 1696;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v57,
          v56[j],
          j,
          v49,
          0LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v85);
        if ( v72 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v71);
        if ( v88 != v89 && v88 )
          ExFreePoolWithTag(v88, 0);
        v88 = 0LL;
        v90 = 0;
        if ( v76 != v77 && v76 )
          ExFreePoolWithTag(v76, 0);
        v76 = 0LL;
        v78 = 0;
        if ( P != v92 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v93 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v82);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
        return (unsigned int)v49;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          v47,
          (__int64)&EventWaitForSynchronizationObjectFromGpu,
          v48,
          v70,
          Timeout,
          &v84,
          v45);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v85);
    }
    if ( v72 )
    {
      v72 = 0;
      ExReleaseResourceLite(v71[75]);
      KeLeaveCriticalRegion();
    }
    if ( v88 != v89 && v88 )
      ExFreePoolWithTag(v88, 0);
    v88 = 0LL;
    v90 = 0;
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v76 = 0LL;
    v78 = 0;
    if ( P != v92 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v93 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v80);
    return 0LL;
  }
}
