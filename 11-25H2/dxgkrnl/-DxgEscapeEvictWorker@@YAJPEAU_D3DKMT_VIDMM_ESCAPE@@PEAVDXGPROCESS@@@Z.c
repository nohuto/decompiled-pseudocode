/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x140405A98
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140188004 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x14006CCF8 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULT.c)
 *     ?VidMmEvictionTest@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x140072180 (-VidMmEvictionTest@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1401B8408 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x140224378 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402E0234 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r13d
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
  __int64 v34; // r13
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
  __int64 v60; // r15
  __int64 v61; // r13
  int v62; // eax
  int Ptr_high; // eax
  int v64; // edi
  int v65; // eax
  ULONG_PTR v66; // rdi
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // r8
  ULONG_PTR v70; // rcx
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v71; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v72; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v73; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v74; // [rsp+68h] [rbp-98h]
  _QWORD v75[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v76; // [rsp+80h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v77; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v78[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v79[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v80[160]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v81[144]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v82[144]; // [rsp+1F0h] [rbp+F0h] BYREF

  v74 = (unsigned __int8 *)a1;
  v3 = (unsigned __int8 *)a1;
  LODWORD(v4) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v8 = 0;
    v9 = 0LL;
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v10 = (_QWORD *)*((_QWORD *)a2 + 40);
    v75[0] = (char *)a2 + 320;
    while ( 1 )
    {
      v75[1] = v10;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v75);
      v18 = Current;
      if ( !Current )
        break;
      if ( (*(_BYTE *)(Current + 1901) & 1) != 0 )
      {
        v8 = 1;
        v9 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
      }
      else
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, Current, 0, v17, 0);
        v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80, 0LL);
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
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v80);
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
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, v4, 0LL, 0LL, 0LL, 0LL);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            *((_QWORD *)v7 + 1) = 0LL;
            goto LABEL_20;
          }
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
      }
      v10 = (_QWORD *)*v10;
    }
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
                      v74);
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v7 + 1) = 0LL;
LABEL_20:
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v4;
  }
  Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
  v71 = Value;
  if ( (_DWORD)AllocationHandle )
  {
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73, 0LL);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v78, a2);
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
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v25 = 0LL;
LABEL_32:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, v25);
    DXGALLOCATIONREFERENCE::MoveAssign(&v73, &v77);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77);
    if ( !v73 || (Count = v73[1].Count) == 0 )
    {
LABEL_38:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v78);
      LODWORD(v4) = -1073741811;
LABEL_39:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v73);
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
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v78);
    v32 = v73;
    v33 = *(_QWORD *)(v73[1].Count + 16);
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
              262146,
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
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)a2 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      v48 = v32[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v48 + 16), (struct DXGDEVICE *)v48);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v73);
      v3 = v74;
      goto LABEL_72;
    }
    v34 = *(_QWORD *)(v33 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, (struct DXGADAPTER *const)v34, 0LL);
    v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v82, 0LL);
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
              262146,
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
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
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
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v34 + 209) )
    {
      v39 = v74;
      *((_DWORD *)v74 + 3) = HIDWORD(v32[2].Ptr);
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
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    Value = v71;
    goto LABEL_63;
  }
LABEL_72:
  if ( Value )
  {
    v72 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79, a2);
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
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76, v52);
            DXGRESOURCEREFERENCE::MoveAssign(&v72, &v76);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v76);
            if ( v72 )
            {
              v53 = v72[1].Count;
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
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
                    v59 = v72;
                    v60 = *(_QWORD *)(v72[1].Count + 16);
                    if ( v60 )
                    {
                      v61 = *(_QWORD *)(v60 + 16);
                      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, (struct DXGADAPTER *const)v61, 0LL);
                      v62 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81, 0LL);
                      v4 = v62;
                      if ( v62 >= 0 )
                      {
                        if ( *(_BYTE *)(v61 + 209) )
                        {
                          Ptr_high = HIDWORD(v59[2].Ptr);
                          *((_DWORD *)v3 + 3) = 0;
                          *((_QWORD *)v3 + 2) = 0LL;
                          *((_DWORD *)v3 + 2) = Ptr_high;
                          v64 = *(_DWORD *)(v61 + 4752);
                          v65 = DXGPROCESS::GetHostProcess(a2);
                          LODWORD(v4) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v61 + 4664),
                                          v65,
                                          v64,
                                          0,
                                          0,
                                          D3DKMT_ESCAPE_VIDMM,
                                          0,
                                          0x840u,
                                          v74);
                        }
                        else
                        {
                          v66 = v59[3].Count;
                          if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v59[1].Count + 16) + 16LL) + 3004LL) < 2000 )
                          {
                            while ( v66 )
                            {
                              VIDMM_EXPORT::VidMmEvictAllocation(
                                *(VIDMM_EXPORT **)(v60 + 760),
                                *(struct VIDMM_GLOBAL **)(v60 + 768),
                                *(struct VIDMM_MULTI_ALLOC **)(v66 + 24),
                                0LL,
                                0LL);
                              v66 = *(_QWORD *)(v66 + 64);
                            }
                          }
                          else
                          {
                            while ( v66 )
                            {
                              v67 = VIDMM_EXPORT::VidMmEvictionTest(
                                      *(VIDMM_EXPORT **)(v60 + 760),
                                      *(struct VIDMM_GLOBAL **)(v60 + 768),
                                      *(struct VIDMM_DEVICE **)(v59[1].Count + 792),
                                      *(struct VIDMM_MULTI_ALLOC **)(v66 + 24));
                              v4 = v67;
                              if ( v67 < 0 )
                              {
                                WdLogSingleEntry1(2LL, v67);
                                WdLogGlobalForLineNumber = 325;
                                DxgkLogInternalTriageEvent(
                                  0LL,
                                  0x40000,
                                  0xFFFFFFFFLL,
                                  L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x",
                                  v4,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
                                break;
                              }
                              v66 = *(_QWORD *)(v66 + 64);
                            }
                          }
                        }
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL, v62);
                        WdLogGlobalForLineNumber = 294;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          0xFFFFFFFFLL,
                          L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
                          v4,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
                      Value = v71;
                    }
                    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
                    v68 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v68 < *((_DWORD *)a2 + 74) )
                    {
                      v69 = *((_QWORD *)a2 + 35);
                      if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v69 + 16 * v68 + 8) & 0x60)
                        && (*(_DWORD *)(v69 + 16 * v68 + 8) & 0x1F) != 0 )
                      {
                        if ( (*(_DWORD *)(v69 + 16LL * ((*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 224;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            0xFFFFFFFFLL,
                            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                            224LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * ((*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
                      }
                    }
                    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                    *((_QWORD *)a2 + 32) = 0LL;
                    ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
                    KeLeaveCriticalRegion();
                    v70 = v59[1].Count;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v70 + 16), (struct DXGDEVICE *)v70);
                    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v72);
                    return (unsigned int)v4;
                  }
                }
              }
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v72);
            return 3221225485LL;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v52 = 0LL;
    goto LABEL_80;
  }
  return (unsigned int)v4;
}
