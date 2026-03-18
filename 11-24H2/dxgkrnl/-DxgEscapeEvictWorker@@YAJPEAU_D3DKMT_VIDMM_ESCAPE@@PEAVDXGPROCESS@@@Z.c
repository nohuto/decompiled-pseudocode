/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x140418D78
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018A314 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004BC20 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x14006CA0C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULT.c)
 *     ?VidMmEvictionTest@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x140072B00 (-VidMmEvictionTest@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1401BAAB4 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022AC64 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x14032CC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *a2)
{
  unsigned __int8 *v3; // rdi
  __int64 v4; // r14
  unsigned __int64 AllocationHandle; // r15
  char *v7; // rdi
  char v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  const wchar_t *v14; // r9
  int v15; // eax
  __int64 Current; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  int v19; // ebx
  int HostProcess; // eax
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r12d
  unsigned int v22; // eax
  __int64 v23; // r9
  int v24; // edx
  struct _EX_RUNDOWN_REF *v25; // rdx
  ULONG_PTR Count; // rdx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  struct _EX_RUNDOWN_REF *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // r12
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r8
  ULONG_PTR v38; // rcx
  unsigned __int8 *v39; // r14
  int v40; // edi
  int v41; // eax
  int v42; // eax
  ULONG_PTR v43; // r8
  VIDMM_EXPORT *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r15
  ULONG_PTR v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // r10
  int v51; // edx
  struct _EX_RUNDOWN_REF *v52; // rdx
  ULONG_PTR v53; // rdx
  signed __int64 v54; // rax
  signed __int64 v55; // rtt
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // edx
  struct _EX_RUNDOWN_REF *v59; // rbx
  __int64 v60; // r12
  __int64 v61; // r15
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r8
  unsigned __int64 v65; // rdi
  ULONG_PTR v66; // rcx
  int Ptr_high; // eax
  int v68; // edi
  int v69; // eax
  struct DXGFASTMUTEX *v70; // rdx
  ULONG_PTR j; // rdi
  int v72; // eax
  DXGPROCESSCOPYPROTECTIONMUTEX *v73; // rcx
  ULONG_PTR i; // rdi
  struct _EX_RUNDOWN_REF *v75; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v76; // [rsp+58h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v77; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v78; // [rsp+68h] [rbp-98h]
  __int128 v79; // [rsp+70h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v80; // [rsp+80h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v81; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v82[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v83[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v84[24]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v85[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v86[160]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v87[144]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v88[144]; // [rsp+210h] [rbp+110h] BYREF

  v78 = (unsigned __int8 *)a1;
  v3 = (unsigned __int8 *)a1;
  LODWORD(v4) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 103;
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
    return 3221225485LL;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  if ( !a1->EvictByNtHandle.NtHandle )
  {
    v7 = (char *)a2 + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = 0;
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v9 = 0LL;
    v10 = (_QWORD *)*((_QWORD *)a2 + 40);
    *(_QWORD *)&v79 = (char *)a2 + 320;
    while ( 1 )
    {
      *((_QWORD *)&v79 + 1) = v10;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v79);
      v18 = Current;
      if ( !Current )
        break;
      if ( (*(_BYTE *)(Current + 1917) & 1) != 0 )
      {
        v8 = 1;
        v9 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
      }
      else
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, Current, 0, v17, 0);
        v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v86, 0LL);
        v4 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(2LL, v11);
          v14 = L"Failed to acquire coredeviceaccess shared lock, returning 0x%I64x";
          WdLogGlobalForLineNumber = 137;
          goto LABEL_12;
        }
        v12 = *(_QWORD *)(v18 + 16);
        if ( *(int *)(*(_QWORD *)(v12 + 16) + 3004LL) < 2000 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v86);
          v15 = DXGDEVICE::EvictAllAllocations((DXGDEVICE *)v18);
          v4 = v15;
          if ( v15 < 0 )
          {
            WdLogSingleEntry1(2LL, v15);
            v14 = L"Failed to Evict All Allocations, returning 0x%I64x";
            WdLogGlobalForLineNumber = 169;
            goto LABEL_12;
          }
        }
        else
        {
          v13 = VIDMM_EXPORT::VidMmEvictionTest(
                  *(VIDMM_EXPORT **)(v12 + 760),
                  *(struct VIDMM_GLOBAL **)(v12 + 768),
                  *(struct VIDMM_DEVICE **)(v18 + 792),
                  0LL);
          v4 = v13;
          if ( v13 < 0 )
          {
            WdLogSingleEntry1(2LL, v13);
            v14 = L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x";
            WdLogGlobalForLineNumber = 153;
LABEL_12:
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, v4, 0LL, 0LL, 0LL, 0LL);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
            v79 = 0LL;
            *((_QWORD *)v7 + 1) = 0LL;
            goto LABEL_20;
          }
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
      }
      v10 = (_QWORD *)*v10;
    }
    v79 = 0LL;
    if ( v8 )
    {
      v19 = *(_DWORD *)(v9 + 4752);
      HostProcess = DXGPROCESS::GetHostProcess(a2);
      LODWORD(v4) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v9 + 4664),
                      HostProcess,
                      v19,
                      0,
                      0,
                      D3DKMT_ESCAPE_VIDMM,
                      0,
                      0x840u,
                      v78);
    }
    *((_QWORD *)v7 + 1) = 0LL;
LABEL_20:
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v4;
  }
  Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
  v76 = Value;
  if ( (_DWORD)AllocationHandle )
  {
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, 0LL);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v84, a2);
    v22 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
    if ( v22 < *((_DWORD *)a2 + 74) )
    {
      v23 = *((_QWORD *)a2 + 35);
      if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60)
        && (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) == 0 )
      {
        v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
        if ( v24 )
        {
          if ( v24 == 5 )
          {
            v25 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * v22);
            goto LABEL_32;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v25 = 0LL;
LABEL_32:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81, v25);
    DXGALLOCATIONREFERENCE::MoveAssign(&v77, &v81);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v81);
    if ( !v77 || (Count = v77[1].Count) == 0 )
    {
LABEL_38:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
      LODWORD(v4) = -1073741811;
LABEL_39:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77);
      return (unsigned int)v4;
    }
    _m_prefetchw((const void *)(Count + 64));
    v27 = *(_QWORD *)(Count + 64);
    do
    {
      if ( !v27 )
        goto LABEL_38;
      v28 = v27;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v27 + 1, v27);
    }
    while ( v28 != v27 );
    v29 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *((_DWORD *)a2 + 74) )
    {
      v30 = *((_QWORD *)a2 + 35);
      v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
      if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        *(_DWORD *)(v30 + 16 * (((unsigned __int64)(unsigned int)AllocationHandle >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
    v32 = v77;
    v33 = *(_QWORD *)(v77[1].Count + 16);
    if ( !v33 )
    {
LABEL_63:
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      v45 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
      if ( (unsigned int)v45 < *((_DWORD *)a2 + 74) )
      {
        v46 = *((_QWORD *)a2 + 35);
        if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60)
          && (*(_DWORD *)(v46 + 16 * v45 + 8) & 0x1F) != 0 )
        {
          v47 = 2 * ((AllocationHandle >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v46 + 8 * v47 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)a2 + 35) + 8 * v47 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      v48 = v32[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v48 + 16), (struct DXGDEVICE *)v48);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77);
      v3 = v78;
      goto LABEL_72;
    }
    v34 = *(_QWORD *)(v33 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, (struct DXGADAPTER *const)v34, 0LL);
    v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v88, 0LL);
    v4 = v35;
    if ( v35 < 0 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      v36 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
      if ( (unsigned int)v36 < *((_DWORD *)a2 + 74) )
      {
        v37 = *((_QWORD *)a2 + 35);
        if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
          && (*(_DWORD *)(v37 + 16 * v36 + 8) & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v37 + 16LL * (((unsigned int)AllocationHandle >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * (((unsigned int)AllocationHandle >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      v38 = v32[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v38 + 16), (struct DXGDEVICE *)v38);
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 226;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v34 + 209) )
    {
      v39 = v78;
      *((_DWORD *)v78 + 3) = HIDWORD(v32[2].Ptr);
      *((_QWORD *)v39 + 2) = 0LL;
      *((_DWORD *)v39 + 2) = 0;
      v40 = *(_DWORD *)(v34 + 4752);
      v41 = DXGPROCESS::GetHostProcess(a2);
      v42 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v34 + 4664),
              v41,
              v40,
              0,
              0,
              D3DKMT_ESCAPE_VIDMM,
              0,
              0x840u,
              v39);
    }
    else
    {
      v43 = v32[1].Count;
      v44 = *(VIDMM_EXPORT **)(v33 + 760);
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL) + 3004LL) < 2000 )
      {
        VIDMM_EXPORT::VidMmEvictAllocation(
          v44,
          *(struct VIDMM_GLOBAL **)(v33 + 768),
          (struct VIDMM_MULTI_ALLOC *)v32[3].Count,
          0LL,
          0LL);
        goto LABEL_62;
      }
      v42 = VIDMM_EXPORT::VidMmEvictionTest(
              v44,
              *(struct VIDMM_GLOBAL **)(v33 + 768),
              *(struct VIDMM_DEVICE **)(v43 + 792),
              (struct VIDMM_MULTI_ALLOC *)v32[3].Count);
    }
    LODWORD(v4) = v42;
LABEL_62:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
    Value = v76;
    goto LABEL_63;
  }
LABEL_72:
  if ( Value )
  {
    v75 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v85, a2);
    v49 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
    if ( v49 < *((_DWORD *)a2 + 74) )
    {
      v50 = *((_QWORD *)a2 + 35);
      if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v50 + 16LL * v49 + 8) & 0x60)
        && (*(_DWORD *)(v50 + 16LL * v49 + 8) & 0x2000) == 0 )
      {
        v51 = *(_DWORD *)(v50 + 16LL * v49 + 8) & 0x1F;
        if ( v51 )
        {
          if ( v51 == 4 )
          {
            v52 = *(struct _EX_RUNDOWN_REF **)(v50 + 16LL * v49);
LABEL_80:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v80, v52);
            DXGRESOURCEREFERENCE::MoveAssign(&v75, &v80);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v80);
            if ( v75 )
            {
              v53 = v75[1].Count;
              if ( v53 )
              {
                _m_prefetchw((const void *)(v53 + 64));
                v54 = *(_QWORD *)(v53 + 64);
                while ( v54 )
                {
                  v55 = v54;
                  v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 64), v54 + 1, v54);
                  if ( v55 == v54 )
                  {
                    v56 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v56 < *((_DWORD *)a2 + 74) )
                    {
                      v57 = *((_QWORD *)a2 + 35);
                      v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
                      if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60)
                        && (v58 & 0x2000) == 0
                        && (v58 & 0x1F) != 0 )
                      {
                        *(_DWORD *)(v57 + 16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                      }
                    }
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
                    v59 = v75;
                    v60 = *(_QWORD *)(v75[1].Count + 16);
                    if ( v60 )
                    {
                      v61 = *(_QWORD *)(v60 + 16);
                      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v87, (struct DXGADAPTER *const)v61, 0LL);
                      v62 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v87, 0LL);
                      v4 = v62;
                      if ( v62 >= 0 )
                      {
                        if ( *(_BYTE *)(v61 + 209) )
                        {
                          Ptr_high = HIDWORD(v59[2].Ptr);
                          v60 = 0LL;
                          *((_DWORD *)v3 + 3) = 0;
                          *((_QWORD *)v3 + 2) = 0LL;
                          *((_DWORD *)v3 + 2) = Ptr_high;
                          v68 = *(_DWORD *)(v61 + 4752);
                          v69 = DXGPROCESS::GetHostProcess(a2);
                          LODWORD(v4) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v61 + 4664),
                                          v69,
                                          v68,
                                          0,
                                          0,
                                          D3DKMT_ESCAPE_VIDMM,
                                          0,
                                          0x840u,
                                          v78);
                        }
                        else
                        {
                          v70 = (struct DXGFASTMUTEX *)&v59[10];
                          if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v59[1].Count + 16) + 16LL) + 3004LL) < 2000 )
                          {
                            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v83, v70, 0);
                            if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v83);
                            for ( i = v59[3].Count; i; i = *(_QWORD *)(i + 64) )
                              VIDMM_EXPORT::VidMmEvictAllocation(
                                *(VIDMM_EXPORT **)(v60 + 760),
                                *(struct VIDMM_GLOBAL **)(v60 + 768),
                                *(struct VIDMM_MULTI_ALLOC **)(i + 24),
                                0LL,
                                0LL);
                            v73 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v83;
LABEL_122:
                            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v73);
                            v60 = 0LL;
                          }
                          else
                          {
                            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v82, v70, 0);
                            if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v82);
                            for ( j = v59[3].Count; ; j = *(_QWORD *)(j + 64) )
                            {
                              if ( !j )
                              {
                                v73 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v82;
                                goto LABEL_122;
                              }
                              v72 = VIDMM_EXPORT::VidMmEvictionTest(
                                      *(VIDMM_EXPORT **)(v60 + 760),
                                      *(struct VIDMM_GLOBAL **)(v60 + 768),
                                      *(struct VIDMM_DEVICE **)(v59[1].Count + 792),
                                      *(struct VIDMM_MULTI_ALLOC **)(j + 24));
                              v4 = v72;
                              if ( v72 < 0 )
                                break;
                            }
                            WdLogSingleEntry1(2LL, v72);
                            v60 = 0LL;
                            WdLogGlobalForLineNumber = 332;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000LL,
                              0xFFFFFFFFLL,
                              L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x",
                              v4,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v82);
                          }
                        }
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL, v62);
                        v60 = 0LL;
                        WdLogGlobalForLineNumber = 294;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000LL,
                          0xFFFFFFFFLL,
                          L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
                          v4,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
                    }
                    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
                    v63 = (*(unsigned int *)&v76 >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v63 < *((_DWORD *)a2 + 74) )
                    {
                      v64 = *((_QWORD *)a2 + 35);
                      if ( ((*(unsigned int *)&v76 >> 25) & 0x60) == (*(_BYTE *)(v64 + 16 * v63 + 8) & 0x60)
                        && (*(_DWORD *)(v64 + 16 * v63 + 8) & 0x1F) != 0 )
                      {
                        v65 = 2 * (((unsigned __int64)*(unsigned int *)&v76 >> 6) & 0xFFFFFF);
                        if ( (*(_DWORD *)(v64 + 16 * (((unsigned __int64)*(unsigned int *)&v76 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 224;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146LL,
                            0xFFFFFFFFLL,
                            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                            224LL,
                            v60,
                            v60,
                            v60,
                            v60);
                        }
                        *(_DWORD *)(*((_QWORD *)a2 + 35) + 8 * v65 + 8) &= ~0x2000u;
                      }
                    }
                    *((_QWORD *)a2 + 32) = v60;
                    ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
                    KeLeaveCriticalRegion();
                    v66 = v59[1].Count;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v66 + 16), (struct DXGDEVICE *)v66);
                    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v75);
                    return (unsigned int)v4;
                  }
                }
              }
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v75);
            return 3221225485LL;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v52 = 0LL;
    goto LABEL_80;
  }
  return (unsigned int)v4;
}
