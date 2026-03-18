/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402AD200
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402AC610 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140012FC0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     McTemplateK0pqPR1XR1pq_EtwWriteTransfer @ 0x1400131AC (McTemplateK0pqPR1XR1pq_EtwWriteTransfer.c)
 *     ?AcquireLocks@?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAAXXZ @ 0x140023CB0 (-AcquireLocks@-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026A50 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058200 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  _BYTE *v4; // rsi
  struct _KEVENT *v9; // r12
  volatile signed __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v15; // rbx
  _BYTE *v16; // r8
  int v17; // eax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v19; // eax
  NTSTATUS v20; // ebx
  unsigned __int64 ObjectCount; // rbx
  _BYTE *v22; // r15
  unsigned __int64 v23; // rbx
  __int64 i; // r15
  unsigned __int64 v25; // rbx
  _BYTE *v26; // rcx
  unsigned __int64 v27; // r8
  _BYTE *v28; // r10
  UINT v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  unsigned __int64 j; // rsi
  __int64 v35; // rbx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  PVOID v41; // rcx
  D3DKMT_HANDLE v43; // r12d
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  int v48; // edx
  __int64 v49; // rbx
  struct DXGDEVICE *v50; // r8
  int v51; // eax
  unsigned int v52; // ebx
  __int64 v53; // rax
  _QWORD *v54; // r9
  _QWORD *k; // rax
  _QWORD *v56; // rdx
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  struct _KEVENT *v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // r8
  PVOID v61; // rcx
  PVOID v62; // rcx
  PVOID v63; // rcx
  const D3DKMT_HANDLE *v64; // rax
  const D3DKMT_HANDLE *v65; // rax
  __int64 v66; // rbx
  const D3DKMT_HANDLE *v67; // rax
  PVOID v68; // rcx
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v72; // [rsp+40h] [rbp-C0h]
  struct DXGGLOBAL *v73; // [rsp+50h] [rbp-B0h] BYREF
  char v74; // [rsp+58h] [rbp-A8h]
  PVOID v75; // [rsp+60h] [rbp-A0h]
  _BYTE v76[32]; // [rsp+68h] [rbp-98h] BYREF
  int v77; // [rsp+88h] [rbp-78h]
  PVOID v78; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  _BYTE Src[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v81; // [rsp+C0h] [rbp-40h]
  PVOID v82; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGDEVICE *v83; // [rsp+D0h] [rbp-30h] BYREF
  char v84; // [rsp+D8h] [rbp-28h]
  void *Base; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v86[16]; // [rsp+E8h] [rbp-18h] BYREF
  size_t NumOfElements; // [rsp+F8h] [rbp-8h]
  __int16 v88; // [rsp+100h] [rbp+0h]
  PVOID v89; // [rsp+108h] [rbp+8h] BYREF
  _BYTE *v90; // [rsp+110h] [rbp+10h]
  void *v91; // [rsp+118h] [rbp+18h]
  PVOID Pool2; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v94[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v95; // [rsp+150h] [rbp+50h]
  char v96[8]; // [rsp+160h] [rbp+60h] BYREF
  char v97[8]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v98; // [rsp+170h] [rbp+70h]
  DXGADAPTER *v99; // [rsp+178h] [rbp+78h]
  char v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  char v102[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v103; // [rsp+1B0h] [rbp+B0h]
  __int64 v104; // [rsp+1B8h] [rbp+B8h]
  char v105; // [rsp+1C0h] [rbp+C0h]
  __int64 v106; // [rsp+1C8h] [rbp+C8h]
  struct DXGDEVICE *v107; // [rsp+1E8h] [rbp+E8h]
  char v108; // [rsp+1F0h] [rbp+F0h]

  v4 = 0LL;
  v91 = a4;
  v82 = 0LL;
  v78 = 0LL;
  Pool2 = 0LL;
  v83 = a3;
  v84 = 0;
  v9 = 0LL;
  if ( a3 )
  {
    v58 = (struct _KEVENT *)*((_QWORD *)a3 + 2);
    if ( !KeReadStateEvent(v58 + 4) )
      KeWaitForSingleObject(&v58[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)a3 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)a3 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v59, (__int64)&EventBlockThread, v60, 40);
      ExAcquireResourceSharedLite(*((PERESOURCE *)a3 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)a3 + 2) + 16LL));
    }
    v84 = 1;
    v4 = 0LL;
  }
  v10 = *(volatile signed __int64 **)(*((_QWORD *)a3 + 2) + 16LL);
  v99 = (DXGADAPTER *)v10;
  v100 = 0;
  v101 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    v98 = -1LL;
  }
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  v104 = v11;
  v105 = 0;
  v106 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
    v103 = -1LL;
  }
  v107 = a3;
  v108 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v99 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, 72);
      KeWaitForSingleObject((char *)v99 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v99, 0LL);
  }
  v101 = 0LL;
  v100 = 1;
  if ( *((_DWORD *)v107 + 152) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v97);
    if ( v108 )
      COREACCESS::Release((COREACCESS *)v102);
    v52 = -1073741130;
    goto LABEL_126;
  }
  Global = DXGGLOBAL::GetGlobal();
  v73 = Global;
  v74 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3030;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pGlobal != NULL", 3030LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
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
  v15 = v73;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v15 + 75), 1u);
  v74 = 1;
  v75 = 0LL;
  v16 = 0LL;
  v77 = 0;
  P = 0LL;
  v81 = 0;
  if ( !a4 )
  {
    v17 = *((_DWORD *)a2 + 102);
    if ( (v17 & 0x10) != 0 && (v17 & 0x100) == 0 && a1->hAsyncEvent )
    {
      Pool2 = (PVOID)ExAllocatePool2(64LL, 40LL, 1265072196LL);
      v61 = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 5302;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          5302LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v52 = -1073741801;
        if ( P != Src && P )
          ExFreePoolWithTag(P, 0);
        v62 = v75;
        P = 0LL;
        v81 = 0;
        if ( v75 == v76 || !v75 )
          goto LABEL_145;
        goto LABEL_144;
      }
      *((_QWORD *)Pool2 + 1) = a1->hAsyncEvent;
      v91 = v61;
      *((_BYTE *)v61 + 16) = 1;
      *((_BYTE *)v61 + 19) = 1;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v61);
    }
    else
    {
      hAsyncEvent = a1->hAsyncEvent;
      if ( hAsyncEvent )
      {
        v89 = 0LL;
        v19 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v89, 0LL);
        v9 = (struct _KEVENT *)v89;
        v20 = v19;
        v78 = v89;
        if ( v19 < 0 )
        {
          WdLogSingleEntry2(3LL, a1->hAsyncEvent, v19);
          WdLogGlobalForLineNumber = 5326;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v81 = 0;
          if ( v75 != v76 && v75 )
            ExFreePoolWithTag(v75, 0);
          goto LABEL_153;
        }
      }
      else
      {
        v94[0] = 48LL;
        v94[3] = 512LL;
        v94[1] = 0LL;
        v94[2] = 0LL;
        v95 = 0LL;
        v51 = ObCreateObject(0LL, ExEventObjectType, v94, 0LL, 0LL, 24, 0, 0, &v82);
        v52 = v51;
        if ( v51 < 0 )
        {
          WdLogSingleEntry1(3LL, v51);
          WdLogGlobalForLineNumber = 5346;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          v62 = v75;
          P = 0LL;
          v81 = 0;
          if ( v75 == v76 || !v75 )
            goto LABEL_145;
LABEL_144:
          ExFreePoolWithTag(v62, 0);
LABEL_145:
          v75 = 0LL;
          v77 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v73);
LABEL_126:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v83);
          return v52;
        }
        KeInitializeEvent((PRKEVENT)v82, SynchronizationEvent, 0);
        v9 = (struct _KEVENT *)v82;
        v78 = v82;
      }
    }
    v16 = v75;
    v4 = P;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
      goto LABEL_162;
    v16 = (_BYTE *)ExAllocatePool2(64LL, 8 * ObjectCount, 1265072196LL);
    v75 = v16;
  }
  else
  {
    v16 = v76;
    v75 = v76;
    if ( !(_DWORD)ObjectCount )
      goto LABEL_23;
    memset(v76, 0, 8LL * (unsigned int)ObjectCount);
    v16 = v75;
  }
  v4 = P;
LABEL_23:
  v77 = ObjectCount;
  v22 = v16;
  v90 = v16;
  if ( !v16 )
  {
LABEL_162:
    v20 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v16 = v75;
    }
    P = 0LL;
    v81 = 0;
    if ( v16 == v76 || !v16 )
      goto LABEL_153;
LABEL_167:
    ExFreePoolWithTag(v16, 0);
LABEL_153:
    v75 = 0LL;
    v77 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v73);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v83);
    goto LABEL_112;
  }
  if ( (*((_DWORD *)a2 + 102) & 0x180) == 0 || a1->ObjectCount != 1 || *a1->ObjectHandleArray )
  {
    v23 = a1->ObjectCount;
    if ( (unsigned int)v23 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v23 < 8 )
        goto LABEL_169;
      v4 = (_BYTE *)ExAllocatePool2(256LL, 8 * v23, 1265072196LL);
      P = v4;
    }
    else
    {
      v4 = Src;
      P = Src;
      if ( !(_DWORD)v23 )
        goto LABEL_29;
      memset(Src, 0, 8LL * (unsigned int)v23);
      v4 = P;
    }
    v16 = v75;
LABEL_29:
    v81 = v23;
    if ( v4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v25 = a1->ObjectCount;
        if ( (unsigned int)i >= (unsigned int)v25 )
          break;
        v43 = a1->ObjectHandleArray[i];
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a2 + 248, 0LL) )
        {
          DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)a2 + 248), v44, v45);
          ExAcquirePushLockSharedEx((char *)a2 + 248, 0LL);
        }
        _InterlockedIncrement((volatile signed __int32 *)a2 + 66);
        v46 = (v43 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v46 >= *((_DWORD *)a2 + 74)
          || (v47 = *((_QWORD *)a2 + 35),
              v48 = *(_DWORD *)(v47 + 16 * v46 + 8),
              ((v43 >> 25) & 0x60) != (*(_BYTE *)(v47 + 16 * v46 + 8) & 0x60))
          || (v48 & 0x2000) != 0
          || (v48 & 0x1F) == 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
          ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
          KeLeaveCriticalRegion();
LABEL_111:
          v20 = -1073741811;
          WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[i], (unsigned int)i, -1073741811LL);
          ObjectHandleArray = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5399;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"0x%I64x passed an invalid wait for hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)a2,
            ObjectHandleArray[i],
            (unsigned int)i,
            -1073741811LL,
            0LL);
LABEL_191:
          v63 = P;
          if ( P != Src && P )
LABEL_178:
            ExFreePoolWithTag(v63, 0);
LABEL_179:
          P = 0LL;
          v81 = 0;
          if ( v75 != v76 && v75 )
            ExFreePoolWithTag(v75, 0);
          v75 = 0LL;
          v77 = 0;
          goto LABEL_210;
        }
        if ( (*(_BYTE *)(v47 + 16LL * ((v43 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 0xB )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
          ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_111;
        }
        v49 = *(_QWORD *)(v47 + 16LL * ((v43 >> 6) & 0xFFFFFF));
        _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
        ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( !v49 )
          goto LABEL_111;
        if ( (*(_DWORD *)(v49 + 72) & 0x20) != 0 )
        {
          WdLogSingleEntry1(2LL, a1->ObjectHandleArray[i]);
          v65 = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5407;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"0x%I64x object is opened as signal only and thus cannot be waited on.",
            v65[i],
            0LL,
            0LL,
            0LL,
            0LL);
          v20 = -1073741790;
          goto LABEL_191;
        }
        v50 = *(struct DXGDEVICE **)(v49 + 16);
        if ( v50 != a3 )
        {
          WdLogSingleEntry3(2LL, a1->ObjectHandleArray[i], v50, a3);
          v64 = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5419;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"0x%x object belongs to a different device 0x%p that 0x%p passed to the wait from CPU call.",
            v64[i],
            *(_QWORD *)(v49 + 16),
            (__int64)a3,
            0LL,
            0LL);
          v20 = -1073741811;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v81 = 0;
          if ( v75 != v76 && v75 )
            ExFreePoolWithTag(v75, 0);
          v75 = 0LL;
          v77 = 0;
          goto LABEL_210;
        }
        if ( !g_NativeFenceDebugTest && *(_DWORD *)(*(_QWORD *)(v49 + 32) + 404LL) == 7 && !*(_QWORD *)(v49 + 96) )
        {
          WdLogSingleEntry1(2LL, v49);
          WdLogGlobalForLineNumber = 5430;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"DXGDEVICESYNCOBJECT 0x%x is a native fence object and has a NULL Driver Handle, returning STATUS_INVALID_PARAMETER",
            v49,
            0LL,
            0LL,
            0LL,
            0LL);
          v63 = P;
          v20 = -1073741811;
          if ( P != Src && P )
            goto LABEL_178;
          goto LABEL_179;
        }
        *(_QWORD *)&v4[8 * i] = *(_QWORD *)(v49 + 32);
      }
      LODWORD(NumOfElements) = 0;
      v26 = 0LL;
      Base = 0LL;
      if ( (unsigned int)v25 > 2 )
      {
        v27 = 0LL;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
        {
LABEL_36:
          v88 = 1;
          if ( v26 )
          {
            memmove(v26, v4, 8 * v27);
            qsort(
              Base,
              (unsigned int)NumOfElements,
              8uLL,
              (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::AcquireLocks((__int64)&Base);
            v28 = v90;
            v29 = 0;
            LOBYTE(v88) = 0;
            while ( 1 )
            {
              if ( v29 >= a1->ObjectCount )
              {
                v33 = Base;
                if ( Base )
                {
                  if ( HIBYTE(v88) )
                  {
                    for ( j = 0LL; j < (unsigned int)NumOfElements; v33 = Base )
                    {
                      v35 = v33[j];
                      if ( *(struct _KTHREAD **)(v35 + 56) != KeGetCurrentThread() )
                      {
                        WdLogSingleEntry5(0LL, 275LL, 4LL, v35 + 32, 0LL, 0LL);
                        WdLogGlobalForLineNumber = 568;
                      }
                      if ( *(int *)(v35 + 64) <= 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 571;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146LL,
                          0xFFFFFFFFLL,
                          L"m_OwnerAcquireCount > 0",
                          571LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( (*(_DWORD *)(v35 + 64))-- == 1 )
                      {
                        *(_QWORD *)(v35 + 56) = 0LL;
                        ExReleasePushLockExclusiveEx(v35 + 40, 0LL);
                      }
                      KeLeaveCriticalRegion();
                      ++j;
                    }
                  }
                }
                if ( v33 != (_QWORD *)v86 && v33 )
                  ExFreePoolWithTag(v33, 0);
                v9 = (struct _KEVENT *)v78;
                v22 = v90;
                Base = 0LL;
                LODWORD(NumOfElements) = 0;
                goto LABEL_55;
              }
              v30 = *((_QWORD *)a3 + 2);
              v31 = *(_QWORD *)&v4[8 * v29];
              if ( (*(_DWORD *)(v31 + 408) & 4) != 0 )
              {
                v54 = (_QWORD *)(v31 + 424);
                for ( k = *(_QWORD **)(v31 + 424); k != v54; k = (_QWORD *)*k )
                {
                  v56 = k - 14;
                  if ( !v30 || v56[2] == v30 )
                    goto LABEL_108;
                }
                v56 = 0LL;
LABEL_108:
                v32 = v56[4];
              }
              else
              {
                v32 = *(_QWORD *)(v31 + 456);
              }
              *(_QWORD *)&v28[8 * v29] = v32;
              if ( !v32 )
                break;
              ++v29;
            }
            v66 = v29;
            WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v66]);
            v67 = a1->ObjectHandleArray;
            WdLogGlobalForLineNumber = 5468;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"0x%x object adapter state has been destroyed, so it cannot be waited on.",
              v67[v66],
              0LL,
              0LL,
              0LL,
              0LL);
            v20 = -1073741811;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
            if ( P != Src && P )
              ExFreePoolWithTag(P, 0);
            v68 = v75;
            P = 0LL;
            v81 = 0;
            if ( v75 != v76 && v75 )
              goto LABEL_208;
          }
          else
          {
            v20 = -1073741801;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
            if ( P != Src && P )
              ExFreePoolWithTag(P, 0);
            v68 = v75;
            P = 0LL;
            v81 = 0;
            if ( v75 != v76 && v75 )
LABEL_208:
              ExFreePoolWithTag(v68, 0);
          }
          v77 = 0;
          v75 = 0LL;
LABEL_210:
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v73);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v83);
          v9 = (struct _KEVENT *)v78;
LABEL_112:
          if ( !v9 )
            goto LABEL_113;
          goto LABEL_75;
        }
        v26 = (_BYTE *)ExAllocatePool2(256LL, 8 * v25, 1265072196LL);
        Base = v26;
      }
      else
      {
        v26 = v86;
        Base = v86;
        if ( (_DWORD)v25 )
        {
          memset(v86, 0, 8LL * (unsigned int)v25);
          v26 = Base;
        }
      }
      LODWORD(NumOfElements) = v25;
      v27 = v25;
      goto LABEL_36;
    }
LABEL_169:
    v20 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v16 = v75;
    }
    P = 0LL;
    v81 = 0;
    if ( v16 == v76 || !v16 )
      goto LABEL_153;
    goto LABEL_167;
  }
  v53 = *((_QWORD *)a3 + 2);
  v93 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v53 + 760) + 8LL) + 928LL))(
    *((_QWORD *)a3 + 99),
    0LL,
    &v93,
    v16);
LABEL_55:
  if ( v82 )
    ObfReferenceObject(v82);
  LOBYTE(HandleInformation) = v91 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 736LL) + 8LL) + 672LL))(
          a1->ObjectCount,
          v22,
          a1->FenceValueArray,
          v9,
          Object,
          HandleInformation,
          *((_QWORD *)a3 + 100),
          v91);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v72) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq_EtwWriteTransfer(v38, v37, v39, a3, Objecta, v22, a1->FenceValueArray, a1->hAsyncEvent, v72);
  }
  if ( P != Src && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v81 = 0;
  if ( v75 != v76 && v75 )
    ExFreePoolWithTag(v75, 0);
  v75 = 0LL;
  v77 = 0;
  if ( v74 )
  {
    v74 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v73 + 75));
    KeLeaveCriticalRegion();
  }
  COREACCESS::~COREACCESS((COREACCESS *)v102, v37);
  COREACCESS::~COREACCESS((COREACCESS *)v97, v40);
  if ( v84 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)a3 + 17));
    KeLeaveCriticalRegion();
  }
  if ( v20 < 0 )
  {
    if ( v82 )
      ObfDereferenceObject(v82);
    goto LABEL_112;
  }
  if ( v9 )
  {
    v41 = v82;
    if ( v9 != v82 )
      goto LABEL_67;
    do
    {
      v20 = KeWaitForSingleObject(v9, Executive, 0, 1u, 0LL);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 5531;
        v20 = -1073741130;
        goto LABEL_75;
      }
    }
    while ( v20 == 257 );
    if ( v20 >= 0 )
      goto LABEL_66;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5540;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Failed to wait for event!", 5540LL, 0LL, 0LL, 0LL, 0LL);
LABEL_75:
    KeSetEvent(v9, 0, 0);
    ObfDereferenceObject(v9);
LABEL_113:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B677844u);
    return (unsigned int)v20;
  }
LABEL_66:
  v41 = v82;
LABEL_67:
  if ( v41 )
    ObfDereferenceObject(v41);
  return 0LL;
}
