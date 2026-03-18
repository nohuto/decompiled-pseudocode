/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14035E31C
 * Callers:
 *     DxgkEvict @ 0x14035E300 (DxgkEvict.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14039BAE0 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z @ 0x14040DD20 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140034428 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14003893C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400392F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DKMT_DEVICEPAGEFAULT_STATE@@@Z @ 0x14005AEB4 (-VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DK.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x14022AEA8 (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1402A74E8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, const char *a3)
{
  __int64 v6; // rcx
  DXGPROCESS *Current; // r8
  struct _D3DKMT_EVICT *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  DXGDEVICE *v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _D3DKMT_EVICT *v15; // rdx
  __int64 v16; // r9
  int v17; // ebx
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // rdi
  unsigned int *v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned int *v24; // rsi
  struct DXGALLOCATIONREFERENCE *v25; // rbx
  unsigned int *v26; // rax
  unsigned int v27; // esi
  struct _EX_RUNDOWN_REF *v28; // rax
  ULONG_PTR Count; // r8
  __int64 v30; // rbx
  char v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rbx
  int v36; // r12d
  void *p_NumBytesToTrim; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int i; // ebx
  unsigned int j; // ebx
  const wchar_t *v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rsi
  struct D3DDDI_EVICT_FLAGS v46; // ebx
  int v47; // edi
  int HostProcess; // eax
  char v49; // [rsp+50h] [rbp-268h]
  int v50; // [rsp+58h] [rbp-260h] BYREF
  __int64 v51; // [rsp+60h] [rbp-258h]
  char v52; // [rsp+68h] [rbp-250h]
  struct DXGDEVICE *v53; // [rsp+70h] [rbp-248h] BYREF
  struct _EX_RUNDOWN_REF *v54; // [rsp+78h] [rbp-240h] BYREF
  int v55; // [rsp+80h] [rbp-238h]
  DXGDEVICE *v56; // [rsp+88h] [rbp-230h] BYREF
  unsigned __int64 Src; // [rsp+90h] [rbp-228h] BYREF
  struct _D3DKMT_EVICT *v58; // [rsp+98h] [rbp-220h]
  unsigned int v59; // [rsp+A0h] [rbp-218h]
  struct DXGPROCESS *v60; // [rsp+A8h] [rbp-210h]
  int v61; // [rsp+B0h] [rbp-208h]
  struct DXGALLOCATIONREFERENCE *v62; // [rsp+B8h] [rbp-200h]
  unsigned int v63[2]; // [rsp+C0h] [rbp-1F8h]
  struct _D3DKMT_EVICT *v64; // [rsp+C8h] [rbp-1F0h]
  UINT *p_Flags; // [rsp+D0h] [rbp-1E8h]
  DXGPROCESS *v66; // [rsp+D8h] [rbp-1E0h]
  unsigned int *v67; // [rsp+E0h] [rbp-1D8h]
  __int64 v68; // [rsp+E8h] [rbp-1D0h]
  _BYTE v69[16]; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v70; // [rsp+100h] [rbp-1B8h] BYREF
  unsigned int *v71; // [rsp+108h] [rbp-1B0h]
  _BYTE v72[24]; // [rsp+110h] [rbp-1A8h] BYREF
  _OWORD v73[2]; // [rsp+128h] [rbp-190h] BYREF
  DXGALLOCATIONREFERENCE *v74; // [rsp+150h] [rbp-168h] BYREF
  _BYTE v75[128]; // [rsp+158h] [rbp-160h] BYREF
  unsigned int v76; // [rsp+1D8h] [rbp-E0h]
  _BYTE v77[160]; // [rsp+1E0h] [rbp-D8h] BYREF

  v55 = a2;
  v58 = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2116);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 2116);
  Current = DXGPROCESS::GetCurrent(v6);
  v66 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 743;
    v42 = L"Invalid process context, returning 0x%I64x";
LABEL_85:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v42, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v50);
    }
    return 3221225485LL;
  }
  memset(v73, 0, sizeof(v73));
  if ( a2 )
  {
    v15 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v15 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v73, v15, 0x20uLL);
    v8 = (struct _D3DKMT_EVICT *)v73;
    v64 = (struct _D3DKMT_EVICT *)v73;
    Current = v66;
  }
  else
  {
    v8 = a1;
    v64 = a1;
  }
  if ( !v8->NumAllocations )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 773;
    v42 = L"Call to DxgkEvict contained no allocations, returning 0x%I64x";
    goto LABEL_85;
  }
  if ( !v8->AllocationList )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 780;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"AllocationList passed to DxgkEvict cannot be NULL.",
      780LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  p_Flags = (UINT *)&v8->Flags;
  if ( v8->Flags.Value >= 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 787;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Reserved flags passed to DxgkEvict should be all zeros.",
      787LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  v74 = (DXGALLOCATIONREFERENCE *)v75;
  v9 = 0LL;
  v10 = 16LL;
  do
  {
    *(_QWORD *)((char *)v74 + v9) = 0LL;
    v9 += 8LL;
    --v10;
  }
  while ( v10 );
  v76 = 16;
  v62 = v74;
  v56 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, v8->hDevice, (struct _KTHREAD **)Current, &v56);
  v11 = v56;
  if ( !v56 )
  {
    WdLogSingleEntry1(3LL, v8->hDevice);
    WdLogGlobalForLineNumber = 816;
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    if ( v74 == (DXGALLOCATIONREFERENCE *)v75 )
    {
      for ( i = 0; i < v76; ++i )
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v74 + i);
    }
    else if ( v74 )
    {
      DXGALLOCATIONREFERENCE::`vector deleting destructor'(v74);
    }
    goto LABEL_18;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v69,
    v56);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, (__int64)v11, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v77, a3);
  if ( v17 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v69);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v53);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v74);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit, v44, v50);
    return (unsigned int)v17;
  }
  else
  {
    NumAllocations = v8->NumAllocations;
    v68 = NumAllocations;
    AllocationList = (unsigned int *)v8->AllocationList;
    v67 = AllocationList;
    v20 = &AllocationList[NumAllocations];
    v71 = v20;
    if ( v20 < AllocationList )
    {
      WdLogSingleEntry1(3LL, NumAllocations);
      WdLogGlobalForLineNumber = 842;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v69);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v53);
LABEL_77:
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v74);
      goto LABEL_18;
    }
    v21 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
    v49 = *(_BYTE *)(v21 + 209);
    v22 = 0LL;
    Src = 0LL;
    while ( AllocationList != v20 )
    {
      v23 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v23 = (unsigned int)NumAllocations;
      v61 = v23;
      v24 = &AllocationList[v23];
      *(_QWORD *)v63 = v24;
      v25 = v62;
      v60 = DXGPROCESS::GetCurrent(v21);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v72, v60);
      while ( AllocationList != v24 )
      {
        if ( v55 )
        {
          v26 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v26 = (unsigned int *)MmUserProbeAddress;
          v27 = *v26;
          v59 = *v26;
          v8 = v64;
          v11 = v56;
        }
        else
        {
          v27 = *AllocationList;
          v59 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v60, (DXGALLOCATIONREFERENCE *)&v54, v27);
        v28 = v54;
        if ( !v54 )
        {
          WdLogSingleEntry1(3LL, v27);
          WdLogGlobalForLineNumber = 900;
          goto LABEL_74;
        }
        Count = v54[1].Count;
        if ( (DXGDEVICE *)Count != v11 )
        {
          WdLogSingleEntry2(3LL, v11, Count);
          WdLogGlobalForLineNumber = 907;
LABEL_74:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v72);
          VIDSCH_EXPORT::VidSchMarkDeviceAsError(
            *(_QWORD *)(*((_QWORD *)v11 + 2) + 736LL),
            *((_QWORD *)v11 + 100),
            0xBu);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v69);
          if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
          goto LABEL_77;
        }
        if ( *(_QWORD *)v25 )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 88LL));
          v28 = v54;
        }
        *(_QWORD *)v25 = v28;
        v54 = 0LL;
        v25 = (struct DXGALLOCATIONREFERENCE *)((char *)v25 + 8);
        v67 = ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
        v24 = *(unsigned int **)v63;
      }
      v30 = (v25 - v62) >> 3;
      *(_QWORD *)v63 = v30;
      if ( v49 )
      {
        v45 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
        v46.0 = (struct D3DDDI_EVICT_FLAGS::$E7212E13AE7D8E335D08FC594CA6B628::$D06293F7ED6D7321B9AED12FAD2D769E)*p_Flags;
        v47 = *((_DWORD *)v11 + 118);
        HostProcess = DXGPROCESS::GetHostProcess(v66);
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v45 + 4664),
          HostProcess,
          v47,
          v46,
          v63[0],
          v62,
          &Src);
        AllocationList = v67;
      }
      else if ( DXGDEVICE::UmdManagesResidency(v11) )
      {
        v33 = v31 & 1 | 2;
        if ( (v31 & 2) != 0 )
          v33 = v31 & 1;
        v34 = v32;
        v35 = v32 + 8LL * (unsigned int)v30;
        if ( v32 != v35 )
        {
          v36 = v33;
          do
          {
            v70 = *(_QWORD *)(*(_QWORD *)v34 + 24LL);
            if ( v70 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 760LL) + 8LL)
                                                                                                  + 728LL))(
                *(_QWORD *)(*((_QWORD *)v11 + 2) + 768LL),
                *((_QWORD *)v11 + 99),
                &v70,
                1LL,
                v36,
                &Src);
            v34 += 8LL;
          }
          while ( v34 != v35 );
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 8297;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Calling Evict on a device that was not created with the UMD residency flag. Device=0x%p",
          (__int64)v11,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v72);
      LODWORD(NumAllocations) = v68 - v61;
      v68 = (unsigned int)(v68 - v61);
      v22 = Src;
      v20 = v71;
    }
    if ( v55 )
    {
      p_NumBytesToTrim = &v58->NumBytesToTrim;
      if ( (unsigned __int64)&v58->NumBytesToTrim >= MmUserProbeAddress )
        p_NumBytesToTrim = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(p_NumBytesToTrim, &Src, 8uLL);
    }
    else
    {
      v8->NumBytesToTrim = v22;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v69);
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    if ( v74 == (DXGALLOCATIONREFERENCE *)v75 )
    {
      for ( j = 0; j < v76; ++j )
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v74 + j);
    }
    else if ( v74 )
    {
      DXGALLOCATIONREFERENCE::`vector deleting destructor'(v74);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v50);
    return 0LL;
  }
}
