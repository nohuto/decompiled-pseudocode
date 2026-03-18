/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x140304ED8
 * Callers:
 *     DxgkCreateAllocation @ 0x140304EC0 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404248C0 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1401B1FAC (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     OutputDuplCleanUpPendingList @ 0x140305E44 (OutputDuplCleanUpPendingList.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1403DEBEC (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct DXGRESOURCE *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  char CurrentThreadPreviousMode; // si
  struct _D3DKMT_CREATEALLOCATION *v7; // rdx
  struct DXGDEVICE *v8; // rsi
  char Flags; // cl
  __int64 v10; // r9
  signed int v11; // eax
  unsigned __int64 v12; // rax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v13; // edx
  bool v14; // r12
  void *p_hResource; // rcx
  void *p_hGlobalShare; // rcx
  void *p_Flags; // rcx
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  const wchar_t *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  int StandardAllocationDriverData; // r12d
  __int64 v29; // rcx
  __int64 v30; // r8
  UINT NumAllocations; // r12d
  D3DKMT_HANDLE hResource; // edx
  D3DKMT_HANDLE v33; // eax
  __int64 v34; // r9
  __int64 v35; // r10
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // r8d
  UINT v41; // esi
  __int64 v42; // r12
  unsigned int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // r8
  int v46; // edx
  __int64 v47; // rax
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // r9
  int v51; // edx
  bool v52; // [rsp+80h] [rbp-208h]
  int v53; // [rsp+88h] [rbp-200h] BYREF
  __int64 v54; // [rsp+90h] [rbp-1F8h]
  char v55; // [rsp+98h] [rbp-1F0h]
  struct DXGDEVICE *v56; // [rsp+A0h] [rbp-1E8h] BYREF
  char v57; // [rsp+A8h] [rbp-1E0h]
  unsigned int v58; // [rsp+ACh] [rbp-1DCh] BYREF
  int v59; // [rsp+B0h] [rbp-1D8h]
  struct DXGALLOCATION **v60; // [rsp+B8h] [rbp-1D0h]
  struct DXGRESOURCE *v61; // [rsp+C0h] [rbp-1C8h]
  struct DXGDEVICE *v62; // [rsp+C8h] [rbp-1C0h]
  struct DXGDEVICE *v63; // [rsp+D0h] [rbp-1B8h] BYREF
  void *v64; // [rsp+D8h] [rbp-1B0h]
  void *v65; // [rsp+E0h] [rbp-1A8h] BYREF
  struct _D3DKMT_CREATEALLOCATION Src; // [rsp+F0h] [rbp-198h] BYREF
  _BYTE v67[16]; // [rsp+140h] [rbp-148h] BYREF
  _BYTE v68[8]; // [rsp+150h] [rbp-138h] BYREF
  __int64 v69; // [rsp+158h] [rbp-130h]
  char v70; // [rsp+160h] [rbp-128h]
  _BYTE v71[24]; // [rsp+168h] [rbp-120h] BYREF
  int Size; // [rsp+180h] [rbp-108h] BYREF
  __int64 v73; // [rsp+184h] [rbp-104h]
  int v74; // [rsp+18Ch] [rbp-FCh]
  __int64 v75; // [rsp+190h] [rbp-F8h]
  _D3DKMT_CREATESTANDARDALLOCATION v76; // [rsp+198h] [rbp-F0h] BYREF
  _BYTE v77[160]; // [rsp+1B0h] [rbp-D8h] BYREF

  v61 = a2;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2003);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2003);
  Current = DXGPROCESS::GetCurrent(v4);
  v60 = (struct DXGALLOCATION **)Current;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v57 = CurrentThreadPreviousMode;
  v52 = CurrentThreadPreviousMode == 1;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 9051;
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
    goto LABEL_46;
  }
  memset(&Src, 0, sizeof(Src));
  memset(&v76, 0, sizeof(v76));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Src, v7, 0x48uLL);
  }
  else
  {
    Src = *a1;
  }
  v63 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v56, Src.hDevice, (struct _KTHREAD **)Current, &v63);
  v8 = v63;
  v62 = v63;
  if ( !v63 )
  {
    WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 9093;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Src.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v56 && _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
    goto LABEL_46;
  }
  Flags = (char)Src.Flags;
  if ( (*(_DWORD *)&Src.Flags & 0x100000) != 0 )
  {
    if ( (*(_DWORD *)&Src.Flags & 0x10000) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v24 = 9102LL;
      v25 = L"NoKmdAccess cannot be used with StandardAllocation";
    }
    else
    {
      if ( g_OSTestSigningEnabled )
        goto LABEL_10;
      WdLogSingleEntry0(2LL);
      v24 = 9107LL;
      v25 = L"NoKmdAccess can be used only with testsigning";
    }
    WdLogGlobalForLineNumber = v24;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v25, v24, 0LL, 0LL, 0LL, 0LL);
LABEL_79:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v56);
LABEL_46:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v53);
    return 3221225485LL;
  }
LABEL_10:
  if ( Src.NumAllocations > 0x682AA )
  {
    WdLogSingleEntry3(3LL, v63, Src.NumAllocations, -1073741811LL);
    WdLogGlobalForLineNumber = 9120;
    goto LABEL_79;
  }
  if ( (*((_DWORD *)Current + 102) & 0x100) == 0
    && ((*(_BYTE *)&Src.Flags & 8) != 0
     || (*(_WORD *)&Src.Flags & 0x100) != 0
     || (*(_WORD *)&Src.Flags & 0x1000) != 0
     || (*(_WORD *)&Src.Flags & 0x200) != 0) )
  {
    WdLogSingleEntry2(3LL, v63, -1073741811LL);
    WdLogGlobalForLineNumber = 9134;
    goto LABEL_79;
  }
  if ( (*(_BYTE *)&Src.Flags & 0x20) != 0
    && (*(_DWORD *)&Src.Flags & 0x10000) == 0
    && (*((_DWORD *)Current + 102) & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, v63, -1073741811LL);
    WdLogGlobalForLineNumber = 9148;
    goto LABEL_79;
  }
  if ( (*(_DWORD *)&Src.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&Src.Flags & 0x10000) == 0 )
    {
      WdLogSingleEntry2(3LL, v63, -1073741811LL);
      WdLogGlobalForLineNumber = 9160;
      goto LABEL_79;
    }
  }
  else if ( (*(_DWORD *)&Src.Flags & 0x10000) == 0 )
  {
    goto LABEL_19;
  }
  v58 = ValidateStandardAllocationParams(&Src, &v76, v52);
  if ( (v58 & 0x80000000) != 0 )
    goto LABEL_69;
  Flags = (char)Src.Flags;
LABEL_19:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 9182;
    goto LABEL_79;
  }
  if ( !Src.hResource && !Src.NumAllocations )
  {
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 9193;
    goto LABEL_79;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v67,
    v8);
  v69 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
  v70 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, (__int64)v8, 2, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v77, 0LL);
  v58 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, v8, v11);
    WdLogGlobalForLineNumber = 9212;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v67);
LABEL_69:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v53);
    return v58;
  }
  v12 = 8LL * Src.NumAllocations;
  if ( !is_mul_ok(Src.NumAllocations, 8uLL) )
    v12 = -1LL;
  v64 = (void *)operator new[](v12, 0x4B677844u, 256LL);
  if ( !v64 )
  {
    v18 = -1073741801;
    WdLogSingleEntry3(6LL, v8, Src.NumAllocations, -1073741801LL);
    WdLogGlobalForLineNumber = 9225;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Out of memory allocating destroy handle table with 0x%I64x elements, returning 0x%I64x",
      (__int64)v8,
      Src.NumAllocations,
      -1073741801LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v67);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v56);
    goto LABEL_39;
  }
  OutputDuplCleanUpPendingList(v8);
  Src.hGlobalShare = 0;
  Src.hDevice = 0;
  v65 = 0LL;
  v58 = 0;
  if ( (*(_DWORD *)&Src.Flags & 0x10000) != 0 )
  {
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 3004LL) < 2000 )
    {
      WdLogSingleEntry2(2LL, v8, -1073741811LL);
      WdLogGlobalForLineNumber = 9249;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Creating StandardAllocation only supported on WDDM2.0+, returning 0x%I64x",
        (__int64)v8,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v67);
      goto LABEL_79;
    }
    v75 = 0LL;
    Size = v76.ExistingHeapData.Size;
    v73 = 1LL;
    v74 = 7;
    StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v8, v13, &Size, &v58, &v65);
    if ( StandardAllocationDriverData < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v67);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v53);
      return (unsigned int)StandardAllocationDriverData;
    }
  }
  v59 = DXGDEVICE::CreateAllocation(
          v8,
          &Src,
          v52,
          0,
          0LL,
          0LL,
          (struct COREDEVICEACCESS *)v77,
          0,
          0LL,
          0LL,
          0LL,
          (unsigned __int64 *)v61,
          &v76,
          v65,
          v58);
  v14 = v59 >= 0;
  if ( v57 == 1 )
  {
    p_hResource = &a1->hResource;
    if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
      p_hResource = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(p_hResource, &Src.hResource, 4uLL);
    p_hGlobalShare = &a1->hGlobalShare;
    if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
      p_hGlobalShare = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(p_hGlobalShare, &Src.hGlobalShare, 4uLL);
    p_Flags = &a1->Flags;
    if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
      p_Flags = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(p_Flags, &Src.Flags, 4uLL);
  }
  else
  {
    *(_QWORD *)&a1->hResource = *(_QWORD *)&Src.hResource;
    a1->Flags = Src.Flags;
  }
  v18 = v59;
  if ( v59 >= 0 || !v14 )
    goto LABEL_36;
  NumAllocations = 0;
  v61 = 0LL;
  v60 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v71, Current);
  hResource = Src.hResource;
  if ( Src.hResource )
  {
    v33 = (Src.hResource >> 6) & 0xFFFFFF;
    if ( v33 < *((_DWORD *)Current + 74) )
    {
      v34 = 2LL * v33;
      v35 = *((_QWORD *)Current + 35);
      if ( ((Src.hResource >> 25) & 0x60) == (*(_BYTE *)(v35 + 16LL * v33 + 8) & 0x60)
        && (*(_DWORD *)(v35 + 16LL * v33 + 8) & 0x2000) == 0 )
      {
        v36 = *(_DWORD *)(v35 + 16LL * v33 + 8) & 0x1F;
        if ( v36 )
        {
          if ( v36 == 4 )
          {
            v37 = *(_QWORD *)(v35 + 16LL * v33);
            v61 = *(struct DXGRESOURCE **)(v35 + 8 * v34);
            goto LABEL_95;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          hResource = Src.hResource;
        }
      }
    }
    v61 = 0LL;
    v37 = 0LL;
LABEL_95:
    if ( v37 )
    {
      v38 = (hResource >> 6) & 0xFFFFFF;
      if ( (unsigned int)v38 < *((_DWORD *)Current + 74) )
      {
        v39 = *((_QWORD *)Current + 35);
        v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
        if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60)
          && (v40 & 0x2000) == 0
          && (v40 & 0x1F) != 0 )
        {
          *(_DWORD *)(v39 + 16LL * ((hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
    }
    goto LABEL_121;
  }
  NumAllocations = Src.NumAllocations;
  if ( !Src.NumAllocations )
    goto LABEL_120;
  v41 = 0;
  do
  {
    v42 = 96LL * v41;
    v43 = *(D3DKMT_HANDLE *)((char *)&Src.pAllocationInfo->hAllocation + v42);
    v44 = (v43 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v44 >= *((_DWORD *)Current + 74) )
      goto LABEL_110;
    v45 = *((_QWORD *)Current + 35);
    v46 = *(_DWORD *)(v45 + 16 * v44 + 8);
    if ( ((v43 >> 25) & 0x60) != (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60) || (v46 & 0x2000) != 0 || (v46 & 0x1F) == 0 )
      goto LABEL_110;
    if ( (*(_BYTE *)(v45 + 16LL * ((v43 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_110:
      v47 = 0LL;
      goto LABEL_111;
    }
    v47 = *(_QWORD *)(v45 + 16LL * ((v43 >> 6) & 0xFFFFFF));
LABEL_111:
    *((_QWORD *)v64 + v41) = v47;
    if ( !v47 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9371;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pAllocList[Idx] != NULL", 9371LL, 0LL, 0LL, 0LL, 0LL);
    }
    v48 = *(D3DKMT_HANDLE *)((char *)&Src.pAllocationInfo->hAllocation + v42);
    v49 = (v48 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v49 < *((_DWORD *)Current + 74) )
    {
      v50 = *((_QWORD *)Current + 35);
      v51 = *(_DWORD *)(v50 + 16 * v49 + 8);
      if ( ((v48 >> 25) & 0x60) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x60) && (v51 & 0x2000) == 0 && (v51 & 0x1F) != 0 )
        *(_DWORD *)(v50 + 16LL * ((v48 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    ++v41;
    NumAllocations = Src.NumAllocations;
  }
  while ( v41 < Src.NumAllocations );
  v8 = v62;
LABEL_120:
  v60 = (struct DXGALLOCATION **)v64;
LABEL_121:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v71);
  DXGDEVICE::DestroyAllocationInternal(
    v8,
    NumAllocations,
    v60,
    v61,
    0LL,
    (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  v18 = v59;
LABEL_36:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v64);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v65);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v67);
  if ( v56 && _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
LABEL_39:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v53);
  }
  return v18;
}
