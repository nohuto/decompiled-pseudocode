/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1402E3F98
 * Callers:
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402E34B0 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateAllocation @ 0x1402E3F80 (DxgkCreateAllocation.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1401AF9FC (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     OutputDuplCleanUpPendingList @ 0x1402E4F04 (OutputDuplCleanUpPendingList.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1403E7240 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
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
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v14; // edx
  bool v15; // r12
  void *p_hResource; // rcx
  void *p_hGlobalShare; // rcx
  void *p_Flags; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  const wchar_t *v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  int StandardAllocationDriverData; // r12d
  __int64 v30; // rcx
  __int64 v31; // r8
  UINT NumAllocations; // r12d
  D3DKMT_HANDLE hResource; // edx
  D3DKMT_HANDLE v34; // eax
  __int64 v35; // r9
  __int64 v36; // r10
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r9
  int v41; // r8d
  UINT v42; // esi
  __int64 v43; // r12
  unsigned int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // edx
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // edx
  bool v53; // [rsp+80h] [rbp-208h]
  int v54; // [rsp+88h] [rbp-200h] BYREF
  __int64 v55; // [rsp+90h] [rbp-1F8h]
  char v56; // [rsp+98h] [rbp-1F0h]
  struct DXGDEVICE *v57; // [rsp+A0h] [rbp-1E8h] BYREF
  char v58; // [rsp+A8h] [rbp-1E0h]
  unsigned int v59; // [rsp+ACh] [rbp-1DCh] BYREF
  int v60; // [rsp+B0h] [rbp-1D8h]
  struct DXGALLOCATION **v61; // [rsp+B8h] [rbp-1D0h]
  struct DXGRESOURCE *v62; // [rsp+C0h] [rbp-1C8h]
  struct DXGDEVICE *v63; // [rsp+C8h] [rbp-1C0h]
  struct DXGDEVICE *v64; // [rsp+D0h] [rbp-1B8h] BYREF
  void *v65; // [rsp+D8h] [rbp-1B0h]
  void *v66; // [rsp+E0h] [rbp-1A8h] BYREF
  struct _D3DKMT_CREATEALLOCATION Src; // [rsp+F0h] [rbp-198h] BYREF
  _BYTE v68[16]; // [rsp+140h] [rbp-148h] BYREF
  _BYTE v69[8]; // [rsp+150h] [rbp-138h] BYREF
  __int64 v70; // [rsp+158h] [rbp-130h]
  char v71; // [rsp+160h] [rbp-128h]
  _BYTE v72[24]; // [rsp+168h] [rbp-120h] BYREF
  int Size; // [rsp+180h] [rbp-108h] BYREF
  __int64 v74; // [rsp+184h] [rbp-104h]
  int v75; // [rsp+18Ch] [rbp-FCh]
  __int64 v76; // [rsp+190h] [rbp-F8h]
  _D3DKMT_CREATESTANDARDALLOCATION v77; // [rsp+198h] [rbp-F0h] BYREF
  _BYTE v78[160]; // [rsp+1B0h] [rbp-D8h] BYREF

  v62 = a2;
  v54 = -1;
  v55 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2003);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 2003);
  Current = DXGPROCESS::GetCurrent(v4);
  v61 = (struct DXGALLOCATION **)Current;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v58 = CurrentThreadPreviousMode;
  v53 = CurrentThreadPreviousMode == 1;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 9003;
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
    goto LABEL_46;
  }
  memset(&Src, 0, sizeof(Src));
  memset(&v77, 0, sizeof(v77));
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
  v64 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, Src.hDevice, Current, &v64);
  v8 = v64;
  v63 = v64;
  if ( !v64 )
  {
    WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 9045;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Src.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
    goto LABEL_46;
  }
  Flags = (char)Src.Flags;
  if ( (*(_DWORD *)&Src.Flags & 0x100000) != 0 )
  {
    if ( (*(_DWORD *)&Src.Flags & 0x10000) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v25 = 9054LL;
      v26 = L"NoKmdAccess cannot be used with StandardAllocation";
    }
    else
    {
      if ( g_OSTestSigningEnabled )
        goto LABEL_10;
      WdLogSingleEntry0(2LL);
      v25 = 9059LL;
      v26 = L"NoKmdAccess can be used only with testsigning";
    }
    WdLogGlobalForLineNumber = v25;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v26, v25, 0LL, 0LL, 0LL, 0LL);
LABEL_79:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v57);
LABEL_46:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v54);
    return 3221225485LL;
  }
LABEL_10:
  if ( Src.NumAllocations > 0x682AA )
  {
    WdLogSingleEntry3(3LL, v64, Src.NumAllocations, -1073741811LL);
    WdLogGlobalForLineNumber = 9072;
    goto LABEL_79;
  }
  if ( (*((_DWORD *)Current + 102) & 0x100) == 0
    && ((*(_BYTE *)&Src.Flags & 8) != 0
     || (*(_WORD *)&Src.Flags & 0x100) != 0
     || (*(_WORD *)&Src.Flags & 0x1000) != 0
     || (*(_WORD *)&Src.Flags & 0x200) != 0) )
  {
    WdLogSingleEntry2(3LL, v64, -1073741811LL);
    WdLogGlobalForLineNumber = 9086;
    goto LABEL_79;
  }
  if ( (*(_BYTE *)&Src.Flags & 0x20) != 0
    && (*(_DWORD *)&Src.Flags & 0x10000) == 0
    && (*((_DWORD *)Current + 102) & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, v64, -1073741811LL);
    WdLogGlobalForLineNumber = 9100;
    goto LABEL_79;
  }
  if ( (*(_DWORD *)&Src.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&Src.Flags & 0x10000) == 0 )
    {
      WdLogSingleEntry2(3LL, v64, -1073741811LL);
      WdLogGlobalForLineNumber = 9112;
      goto LABEL_79;
    }
  }
  else if ( (*(_DWORD *)&Src.Flags & 0x10000) == 0 )
  {
    goto LABEL_19;
  }
  v59 = ValidateStandardAllocationParams(&Src, &v77, v53);
  if ( (v59 & 0x80000000) != 0 )
    goto LABEL_69;
  Flags = (char)Src.Flags;
LABEL_19:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 9134;
    goto LABEL_79;
  }
  if ( !Src.hResource && !Src.NumAllocations )
  {
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 9145;
    goto LABEL_79;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68,
    v8);
  v70 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
  v71 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, (__int64)v8, 2, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v78, 0LL);
  v59 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, v8, v11);
    WdLogGlobalForLineNumber = 9164;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
LABEL_69:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v54);
    return v59;
  }
  v13 = 8LL * Src.NumAllocations;
  if ( !is_mul_ok(Src.NumAllocations, 8uLL) )
    v13 = -1LL;
  v65 = (void *)operator new[](v13, 0x4B677844u, 256LL, v12);
  if ( !v65 )
  {
    v19 = -1073741801;
    WdLogSingleEntry3(6LL, v8, Src.NumAllocations, -1073741801LL);
    WdLogGlobalForLineNumber = 9177;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Out of memory allocating destroy handle table with 0x%I64x elements, returning 0x%I64x",
      (__int64)v8,
      Src.NumAllocations,
      -1073741801LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v57);
    goto LABEL_39;
  }
  OutputDuplCleanUpPendingList(v8);
  Src.hGlobalShare = 0;
  Src.hDevice = 0;
  v66 = 0LL;
  v59 = 0;
  if ( (*(_DWORD *)&Src.Flags & 0x10000) != 0 )
  {
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 3004LL) < 2000 )
    {
      WdLogSingleEntry2(2LL, v8, -1073741811LL);
      WdLogGlobalForLineNumber = 9201;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Creating StandardAllocation only supported on WDDM2.0+, returning 0x%I64x",
        (__int64)v8,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
      goto LABEL_79;
    }
    v76 = 0LL;
    Size = v77.ExistingHeapData.Size;
    v74 = 1LL;
    v75 = 7;
    StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v8, v14, &Size, &v59, &v66);
    if ( StandardAllocationDriverData < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v57);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
      if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v54);
      return (unsigned int)StandardAllocationDriverData;
    }
  }
  v60 = DXGDEVICE::CreateAllocation(
          v8,
          &Src,
          v53,
          0,
          0LL,
          0LL,
          (struct COREDEVICEACCESS *)v78,
          0,
          0LL,
          0LL,
          0LL,
          (unsigned __int64 *)v62,
          &v77,
          v66,
          v59);
  v15 = v60 >= 0;
  if ( v58 == 1 )
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
  v19 = v60;
  if ( v60 >= 0 || !v15 )
    goto LABEL_36;
  NumAllocations = 0;
  v62 = 0LL;
  v61 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v72, Current);
  hResource = Src.hResource;
  if ( Src.hResource )
  {
    v34 = (Src.hResource >> 6) & 0xFFFFFF;
    if ( v34 < *((_DWORD *)Current + 74) )
    {
      v35 = 2LL * v34;
      v36 = *((_QWORD *)Current + 35);
      if ( ((Src.hResource >> 25) & 0x60) == (*(_BYTE *)(v36 + 16LL * v34 + 8) & 0x60)
        && (*(_DWORD *)(v36 + 16LL * v34 + 8) & 0x2000) == 0 )
      {
        v37 = *(_DWORD *)(v36 + 16LL * v34 + 8) & 0x1F;
        if ( v37 )
        {
          if ( v37 == 4 )
          {
            v38 = *(_QWORD *)(v36 + 16LL * v34);
            v62 = *(struct DXGRESOURCE **)(v36 + 8 * v35);
            goto LABEL_95;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          hResource = Src.hResource;
        }
      }
    }
    v62 = 0LL;
    v38 = 0LL;
LABEL_95:
    if ( v38 )
    {
      v39 = (hResource >> 6) & 0xFFFFFF;
      if ( (unsigned int)v39 < *((_DWORD *)Current + 74) )
      {
        v40 = *((_QWORD *)Current + 35);
        v41 = *(_DWORD *)(v40 + 16 * v39 + 8);
        if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60)
          && (v41 & 0x2000) == 0
          && (v41 & 0x1F) != 0 )
        {
          *(_DWORD *)(v40 + 16LL * ((hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
    }
    goto LABEL_121;
  }
  NumAllocations = Src.NumAllocations;
  if ( !Src.NumAllocations )
    goto LABEL_120;
  v42 = 0;
  do
  {
    v43 = 96LL * v42;
    v44 = *(D3DKMT_HANDLE *)((char *)&Src.pAllocationInfo->hAllocation + v43);
    v45 = (v44 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v45 >= *((_DWORD *)Current + 74) )
      goto LABEL_110;
    v46 = *((_QWORD *)Current + 35);
    v47 = *(_DWORD *)(v46 + 16 * v45 + 8);
    if ( ((v44 >> 25) & 0x60) != (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60) || (v47 & 0x2000) != 0 || (v47 & 0x1F) == 0 )
      goto LABEL_110;
    if ( (*(_BYTE *)(v46 + 16LL * ((v44 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_110:
      v48 = 0LL;
      goto LABEL_111;
    }
    v48 = *(_QWORD *)(v46 + 16LL * ((v44 >> 6) & 0xFFFFFF));
LABEL_111:
    *((_QWORD *)v65 + v42) = v48;
    if ( !v48 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9323;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAllocList[Idx] != NULL", 9323LL, 0LL, 0LL, 0LL, 0LL);
    }
    v49 = *(D3DKMT_HANDLE *)((char *)&Src.pAllocationInfo->hAllocation + v43);
    v50 = (v49 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v50 < *((_DWORD *)Current + 74) )
    {
      v51 = *((_QWORD *)Current + 35);
      v52 = *(_DWORD *)(v51 + 16 * v50 + 8);
      if ( ((v49 >> 25) & 0x60) == (*(_BYTE *)(v51 + 16 * v50 + 8) & 0x60) && (v52 & 0x2000) == 0 && (v52 & 0x1F) != 0 )
        *(_DWORD *)(v51 + 16LL * ((v49 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    ++v42;
    NumAllocations = Src.NumAllocations;
  }
  while ( v42 < Src.NumAllocations );
  v8 = v63;
LABEL_120:
  v61 = (struct DXGALLOCATION **)v65;
LABEL_121:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v72);
  DXGDEVICE::DestroyAllocationInternal(
    v8,
    NumAllocations,
    v61,
    v62,
    0LL,
    (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  v19 = v60;
LABEL_36:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v65);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v66);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
  if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
LABEL_39:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v54);
  }
  return v19;
}
