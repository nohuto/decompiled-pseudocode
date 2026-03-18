/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402A6DD0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402A61E0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1400161C0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     McTemplateK0pqPR1XR1pq_EtwWriteTransfer @ 0x1400163AC (McTemplateK0pqPR1XR1pq_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireLocks@?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAAXXZ @ 0x1400235C0 (-AcquireLocks@-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026360 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058780 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
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
  __int64 v16; // r9
  _BYTE *v17; // r8
  int v18; // eax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v20; // eax
  NTSTATUS v21; // ebx
  unsigned __int64 ObjectCount; // rbx
  _BYTE *v23; // r15
  unsigned __int64 v24; // rbx
  __int64 i; // r15
  unsigned __int64 v26; // rbx
  _BYTE *v27; // rcx
  unsigned __int64 v28; // r8
  _BYTE *v29; // r10
  UINT v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  unsigned __int64 j; // rsi
  __int64 v36; // rbx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  PVOID v42; // rcx
  D3DKMT_HANDLE v44; // r12d
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  int v49; // edx
  __int64 v50; // rbx
  struct DXGDEVICE *v51; // r8
  int v52; // eax
  unsigned int v53; // ebx
  __int64 v54; // rax
  _QWORD *v55; // r9
  _QWORD *k; // rax
  _QWORD *v57; // rdx
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  struct _KEVENT *v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // r8
  PVOID v62; // rcx
  PVOID v63; // rcx
  PVOID v64; // rcx
  const D3DKMT_HANDLE *v65; // rax
  const D3DKMT_HANDLE *v66; // rax
  __int64 v67; // rbx
  const D3DKMT_HANDLE *v68; // rax
  PVOID v69; // rcx
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v73; // [rsp+40h] [rbp-C0h]
  struct DXGGLOBAL *v74; // [rsp+50h] [rbp-B0h] BYREF
  char v75; // [rsp+58h] [rbp-A8h]
  PVOID v76; // [rsp+60h] [rbp-A0h]
  _BYTE v77[32]; // [rsp+68h] [rbp-98h] BYREF
  int v78; // [rsp+88h] [rbp-78h]
  PVOID v79; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  _BYTE Src[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v82; // [rsp+C0h] [rbp-40h]
  PVOID v83; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGDEVICE *v84; // [rsp+D0h] [rbp-30h] BYREF
  char v85; // [rsp+D8h] [rbp-28h]
  void *Base; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v87[16]; // [rsp+E8h] [rbp-18h] BYREF
  size_t NumOfElements; // [rsp+F8h] [rbp-8h]
  __int16 v89; // [rsp+100h] [rbp+0h]
  PVOID v90; // [rsp+108h] [rbp+8h] BYREF
  _BYTE *v91; // [rsp+110h] [rbp+10h]
  void *v92; // [rsp+118h] [rbp+18h]
  PVOID Pool2; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v95[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v96; // [rsp+150h] [rbp+50h]
  char v97[8]; // [rsp+160h] [rbp+60h] BYREF
  char v98[8]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v99; // [rsp+170h] [rbp+70h]
  DXGADAPTER *v100; // [rsp+178h] [rbp+78h]
  char v101; // [rsp+180h] [rbp+80h]
  __int64 v102; // [rsp+188h] [rbp+88h]
  char v103[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v104; // [rsp+1B0h] [rbp+B0h]
  __int64 v105; // [rsp+1B8h] [rbp+B8h]
  char v106; // [rsp+1C0h] [rbp+C0h]
  __int64 v107; // [rsp+1C8h] [rbp+C8h]
  struct DXGDEVICE *v108; // [rsp+1E8h] [rbp+E8h]
  char v109; // [rsp+1F0h] [rbp+F0h]

  v4 = 0LL;
  v92 = a4;
  v83 = 0LL;
  v79 = 0LL;
  Pool2 = 0LL;
  v84 = a3;
  v85 = 0;
  v9 = 0LL;
  if ( a3 )
  {
    v59 = (struct _KEVENT *)*((_QWORD *)a3 + 2);
    if ( !KeReadStateEvent(v59 + 4) )
      KeWaitForSingleObject(&v59[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)a3 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)a3 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v60, (__int64)&EventBlockThread, v61, 40);
      ExAcquireResourceSharedLite(*((PERESOURCE *)a3 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)a3 + 2) + 16LL));
    }
    v85 = 1;
    v4 = 0LL;
  }
  v10 = *(volatile signed __int64 **)(*((_QWORD *)a3 + 2) + 16LL);
  v100 = (DXGADAPTER *)v10;
  v101 = 0;
  v102 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    v99 = -1LL;
  }
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  v105 = v11;
  v106 = 0;
  v107 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
    v104 = -1LL;
  }
  v108 = a3;
  v109 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v100 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v100 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, 72);
      KeWaitForSingleObject((char *)v100 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v100, 0LL);
  }
  v102 = 0LL;
  v101 = 1;
  if ( *((_DWORD *)v108 + 152) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v98);
    if ( v109 )
      COREACCESS::Release((COREACCESS *)v103);
    v53 = -1073741130;
    goto LABEL_126;
  }
  Global = DXGGLOBAL::GetGlobal();
  v74 = Global;
  v75 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2834;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pGlobal != NULL", 2834LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
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
  v15 = v74;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v15 + 75), 1u);
  v75 = 1;
  v76 = 0LL;
  v17 = 0LL;
  v78 = 0;
  P = 0LL;
  v82 = 0;
  if ( !a4 )
  {
    v18 = *((_DWORD *)a2 + 102);
    if ( (v18 & 0x10) != 0 && (v18 & 0x100) == 0 && a1->hAsyncEvent )
    {
      Pool2 = (PVOID)ExAllocatePool2(64LL, 40LL, 1265072196LL, v16);
      v62 = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 5297;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          5297LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v53 = -1073741801;
        if ( P != Src && P )
          ExFreePoolWithTag(P, 0);
        v63 = v76;
        P = 0LL;
        v82 = 0;
        if ( v76 == v77 || !v76 )
          goto LABEL_145;
        goto LABEL_144;
      }
      *((_QWORD *)Pool2 + 1) = a1->hAsyncEvent;
      v92 = v62;
      *((_BYTE *)v62 + 16) = 1;
      *((_BYTE *)v62 + 19) = 1;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v62);
    }
    else
    {
      hAsyncEvent = a1->hAsyncEvent;
      if ( hAsyncEvent )
      {
        v90 = 0LL;
        v20 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v90, 0LL);
        v9 = (struct _KEVENT *)v90;
        v21 = v20;
        v79 = v90;
        if ( v20 < 0 )
        {
          WdLogSingleEntry2(3LL, a1->hAsyncEvent, v20);
          WdLogGlobalForLineNumber = 5321;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v82 = 0;
          if ( v76 != v77 && v76 )
            ExFreePoolWithTag(v76, 0);
          goto LABEL_153;
        }
      }
      else
      {
        v95[0] = 48LL;
        v95[3] = 512LL;
        v95[1] = 0LL;
        v95[2] = 0LL;
        v96 = 0LL;
        v52 = ObCreateObject(0LL, ExEventObjectType, v95, 0LL, 0LL, 24, 0, 0, &v83);
        v53 = v52;
        if ( v52 < 0 )
        {
          WdLogSingleEntry1(3LL, v52);
          WdLogGlobalForLineNumber = 5341;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          v63 = v76;
          P = 0LL;
          v82 = 0;
          if ( v76 == v77 || !v76 )
            goto LABEL_145;
LABEL_144:
          ExFreePoolWithTag(v63, 0);
LABEL_145:
          v76 = 0LL;
          v78 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v74);
LABEL_126:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v84);
          return v53;
        }
        KeInitializeEvent((PRKEVENT)v83, SynchronizationEvent, 0);
        v9 = (struct _KEVENT *)v83;
        v79 = v83;
      }
    }
    v17 = v76;
    v4 = P;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
      goto LABEL_162;
    v17 = (_BYTE *)ExAllocatePool2(64LL, 8 * ObjectCount, 1265072196LL, v16);
    v76 = v17;
  }
  else
  {
    v17 = v77;
    v76 = v77;
    if ( !(_DWORD)ObjectCount )
      goto LABEL_23;
    memset(v77, 0, 8LL * (unsigned int)ObjectCount);
    v17 = v76;
  }
  v4 = P;
LABEL_23:
  v78 = ObjectCount;
  v23 = v17;
  v91 = v17;
  if ( !v17 )
  {
LABEL_162:
    v21 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v17 = v76;
    }
    P = 0LL;
    v82 = 0;
    if ( v17 == v77 || !v17 )
      goto LABEL_153;
LABEL_167:
    ExFreePoolWithTag(v17, 0);
LABEL_153:
    v76 = 0LL;
    v78 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v74);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v84);
    goto LABEL_112;
  }
  if ( (*((_DWORD *)a2 + 102) & 0x180) == 0 || a1->ObjectCount != 1 || *a1->ObjectHandleArray )
  {
    v24 = a1->ObjectCount;
    if ( (unsigned int)v24 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 8 )
        goto LABEL_169;
      v4 = (_BYTE *)ExAllocatePool2(256LL, 8 * v24, 1265072196LL, v16);
      P = v4;
    }
    else
    {
      v4 = Src;
      P = Src;
      if ( !(_DWORD)v24 )
        goto LABEL_29;
      memset(Src, 0, 8LL * (unsigned int)v24);
      v4 = P;
    }
    v17 = v76;
LABEL_29:
    v82 = v24;
    if ( v4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v26 = a1->ObjectCount;
        if ( (unsigned int)i >= (unsigned int)v26 )
          break;
        v44 = a1->ObjectHandleArray[i];
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a2 + 248, 0LL) )
        {
          DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)a2 + 248), v45, v46);
          ExAcquirePushLockSharedEx((char *)a2 + 248, 0LL);
        }
        _InterlockedIncrement((volatile signed __int32 *)a2 + 66);
        v47 = (v44 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v47 >= *((_DWORD *)a2 + 74)
          || (v48 = *((_QWORD *)a2 + 35),
              v49 = *(_DWORD *)(v48 + 16 * v47 + 8),
              ((v44 >> 25) & 0x60) != (*(_BYTE *)(v48 + 16 * v47 + 8) & 0x60))
          || (v49 & 0x2000) != 0
          || (v49 & 0x1F) == 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
          ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
          KeLeaveCriticalRegion();
LABEL_111:
          v21 = -1073741811;
          WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[i], (unsigned int)i, -1073741811LL);
          ObjectHandleArray = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5394;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x passed an invalid wait for hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)a2,
            ObjectHandleArray[i],
            (unsigned int)i,
            -1073741811LL,
            0LL);
LABEL_191:
          v64 = P;
          if ( P != Src && P )
LABEL_178:
            ExFreePoolWithTag(v64, 0);
LABEL_179:
          P = 0LL;
          v82 = 0;
          if ( v76 != v77 && v76 )
            ExFreePoolWithTag(v76, 0);
          v76 = 0LL;
          v78 = 0;
          goto LABEL_210;
        }
        if ( (*(_BYTE *)(v48 + 16LL * ((v44 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 0xB )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
          ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_111;
        }
        v50 = *(_QWORD *)(v48 + 16LL * ((v44 >> 6) & 0xFFFFFF));
        _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
        ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( !v50 )
          goto LABEL_111;
        if ( (*(_DWORD *)(v50 + 72) & 0x20) != 0 )
        {
          WdLogSingleEntry1(2LL, a1->ObjectHandleArray[i]);
          v66 = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5402;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x object is opened as signal only and thus cannot be waited on.",
            v66[i],
            0LL,
            0LL,
            0LL,
            0LL);
          v21 = -1073741790;
          goto LABEL_191;
        }
        v51 = *(struct DXGDEVICE **)(v50 + 16);
        if ( v51 != a3 )
        {
          WdLogSingleEntry3(2LL, a1->ObjectHandleArray[i], v51, a3);
          v65 = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5414;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%x object belongs to a different device 0x%p that 0x%p passed to the wait from CPU call.",
            v65[i],
            *(_QWORD *)(v50 + 16),
            (__int64)a3,
            0LL,
            0LL);
          v21 = -1073741811;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v82 = 0;
          if ( v76 != v77 && v76 )
            ExFreePoolWithTag(v76, 0);
          v76 = 0LL;
          v78 = 0;
          goto LABEL_210;
        }
        if ( !g_NativeFenceDebugTest && *(_DWORD *)(*(_QWORD *)(v50 + 32) + 404LL) == 7 && !*(_QWORD *)(v50 + 96) )
        {
          WdLogSingleEntry1(2LL, v50);
          WdLogGlobalForLineNumber = 5425;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"DXGDEVICESYNCOBJECT 0x%x is a native fence object and has a NULL Driver Handle, returning STATUS_INVALID_PARAMETER",
            v50,
            0LL,
            0LL,
            0LL,
            0LL);
          v64 = P;
          v21 = -1073741811;
          if ( P != Src && P )
            goto LABEL_178;
          goto LABEL_179;
        }
        *(_QWORD *)&v4[8 * i] = *(_QWORD *)(v50 + 32);
      }
      LODWORD(NumOfElements) = 0;
      v27 = 0LL;
      Base = 0LL;
      if ( (unsigned int)v26 > 2 )
      {
        v28 = 0LL;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v26 < 8 )
        {
LABEL_36:
          v89 = 1;
          if ( v27 )
          {
            memmove(v27, v4, 8 * v28);
            qsort(
              Base,
              (unsigned int)NumOfElements,
              8uLL,
              (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::AcquireLocks((__int64)&Base);
            v29 = v91;
            v30 = 0;
            LOBYTE(v89) = 0;
            while ( 1 )
            {
              if ( v30 >= a1->ObjectCount )
              {
                v34 = Base;
                if ( Base )
                {
                  if ( HIBYTE(v89) )
                  {
                    for ( j = 0LL; j < (unsigned int)NumOfElements; v34 = Base )
                    {
                      v36 = v34[j];
                      if ( *(struct _KTHREAD **)(v36 + 56) != KeGetCurrentThread() )
                      {
                        WdLogSingleEntry5(0LL, 275LL, 4LL, v36 + 32, 0LL, 0LL);
                        WdLogGlobalForLineNumber = 570;
                      }
                      if ( *(int *)(v36 + 64) <= 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 573;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          0xFFFFFFFFLL,
                          L"m_OwnerAcquireCount > 0",
                          573LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( (*(_DWORD *)(v36 + 64))-- == 1 )
                      {
                        *(_QWORD *)(v36 + 56) = 0LL;
                        ExReleasePushLockExclusiveEx(v36 + 40, 0LL);
                      }
                      KeLeaveCriticalRegion();
                      ++j;
                    }
                  }
                }
                if ( v34 != (_QWORD *)v87 && v34 )
                  ExFreePoolWithTag(v34, 0);
                v9 = (struct _KEVENT *)v79;
                v23 = v91;
                Base = 0LL;
                LODWORD(NumOfElements) = 0;
                goto LABEL_55;
              }
              v31 = *((_QWORD *)a3 + 2);
              v32 = *(_QWORD *)&v4[8 * v30];
              if ( (*(_DWORD *)(v32 + 408) & 4) != 0 )
              {
                v55 = (_QWORD *)(v32 + 424);
                for ( k = *(_QWORD **)(v32 + 424); k != v55; k = (_QWORD *)*k )
                {
                  v57 = k - 14;
                  if ( !v31 || v57[2] == v31 )
                    goto LABEL_108;
                }
                v57 = 0LL;
LABEL_108:
                v33 = v57[4];
              }
              else
              {
                v33 = *(_QWORD *)(v32 + 456);
              }
              *(_QWORD *)&v29[8 * v30] = v33;
              if ( !v33 )
                break;
              ++v30;
            }
            v67 = v30;
            WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v67]);
            v68 = a1->ObjectHandleArray;
            WdLogGlobalForLineNumber = 5463;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"0x%x object adapter state has been destroyed, so it cannot be waited on.",
              v68[v67],
              0LL,
              0LL,
              0LL,
              0LL);
            v21 = -1073741811;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
            if ( P != Src && P )
              ExFreePoolWithTag(P, 0);
            v69 = v76;
            P = 0LL;
            v82 = 0;
            if ( v76 != v77 && v76 )
              goto LABEL_208;
          }
          else
          {
            v21 = -1073741801;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
            if ( P != Src && P )
              ExFreePoolWithTag(P, 0);
            v69 = v76;
            P = 0LL;
            v82 = 0;
            if ( v76 != v77 && v76 )
LABEL_208:
              ExFreePoolWithTag(v69, 0);
          }
          v78 = 0;
          v76 = 0LL;
LABEL_210:
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v74);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v84);
          v9 = (struct _KEVENT *)v79;
LABEL_112:
          if ( !v9 )
            goto LABEL_113;
          goto LABEL_75;
        }
        v27 = (_BYTE *)ExAllocatePool2(256LL, 8 * v26, 1265072196LL, v16);
        Base = v27;
      }
      else
      {
        v27 = v87;
        Base = v87;
        if ( (_DWORD)v26 )
        {
          memset(v87, 0, 8LL * (unsigned int)v26);
          v27 = Base;
        }
      }
      LODWORD(NumOfElements) = v26;
      v28 = v26;
      goto LABEL_36;
    }
LABEL_169:
    v21 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v17 = v76;
    }
    P = 0LL;
    v82 = 0;
    if ( v17 == v77 || !v17 )
      goto LABEL_153;
    goto LABEL_167;
  }
  v54 = *((_QWORD *)a3 + 2);
  v94 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v54 + 760) + 8LL) + 928LL))(
    *((_QWORD *)a3 + 99),
    0LL,
    &v94,
    v17);
LABEL_55:
  if ( v83 )
    ObfReferenceObject(v83);
  LOBYTE(HandleInformation) = v92 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  v21 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 736LL) + 8LL) + 672LL))(
          a1->ObjectCount,
          v23,
          a1->FenceValueArray,
          v9,
          Object,
          HandleInformation,
          *((_QWORD *)a3 + 100),
          v92);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v73) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq_EtwWriteTransfer(v39, v38, v40, a3, Objecta, v23, a1->FenceValueArray, a1->hAsyncEvent, v73);
  }
  if ( P != Src && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v82 = 0;
  if ( v76 != v77 && v76 )
    ExFreePoolWithTag(v76, 0);
  v76 = 0LL;
  v78 = 0;
  if ( v75 )
  {
    v75 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v74 + 75));
    KeLeaveCriticalRegion();
  }
  COREACCESS::~COREACCESS((COREACCESS *)v103, v38);
  COREACCESS::~COREACCESS((COREACCESS *)v98, v41);
  if ( v85 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)a3 + 17));
    KeLeaveCriticalRegion();
  }
  if ( v21 < 0 )
  {
    if ( v83 )
      ObfDereferenceObject(v83);
    goto LABEL_112;
  }
  if ( v9 )
  {
    v42 = v83;
    if ( v9 != v83 )
      goto LABEL_67;
    do
    {
      v21 = KeWaitForSingleObject(v9, Executive, 0, 1u, 0LL);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 5526;
        v21 = -1073741130;
        goto LABEL_75;
      }
    }
    while ( v21 == 257 );
    if ( v21 >= 0 )
      goto LABEL_66;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5535;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Failed to wait for event!", 5535LL, 0LL, 0LL, 0LL, 0LL);
LABEL_75:
    KeSetEvent(v9, 0, 0);
    ObfDereferenceObject(v9);
LABEL_113:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B677844u);
    return (unsigned int)v21;
  }
LABEL_66:
  v42 = v83;
LABEL_67:
  if ( v42 )
    ObfDereferenceObject(v42);
  return 0LL;
}
