/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x14035F710
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x14004C1C0 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x14035DD88 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x14035FE10 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v11; // rdi
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v13; // rsi
  __int64 v14; // rax
  int v15; // r14d
  unsigned __int64 v16; // rdx
  int v17; // esi
  D3DKMT_HANDLE hAllocation; // r14d
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // edx
  __int64 v22; // rbx
  struct DXGDEVICE *v23; // rdi
  ADAPTER_RENDER *v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  char v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  char v47; // [rsp+80h] [rbp-80h]
  struct DXGDEVICE *v48; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v49[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  char v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v54[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v55[64]; // [rsp+F8h] [rbp-8h] BYREF
  struct DXGDEVICE *v56; // [rsp+138h] [rbp+38h]
  char v57; // [rsp+140h] [rbp+40h]

  v42 = -1;
  v45 = (__int64)a4;
  v52 = (__int64)a6;
  v43 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 3034);
  Current = DXGPROCESS::GetCurrent(v9);
  v11 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1845;
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
LABEL_42:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    v37 = v44 == 0;
    goto LABEL_43;
  }
  hDevice = a1->hDevice;
  v48 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, hDevice, Current, &v48);
  v13 = v48;
  if ( !v48 )
  {
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    v40 = a1->hDevice;
    WdLogGlobalForLineNumber = 1857;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v40,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    goto LABEL_42;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    WdLogSingleEntry2(3LL, v48, -1073741811LL);
    WdLogGlobalForLineNumber = 1867;
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v41);
    goto LABEL_42;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v46, v48);
  v14 = *((_QWORD *)v13 + 2);
  v51 = 0;
  v50 = *(_QWORD *)(v14 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  COREACCESS::COREACCESS((COREACCESS *)v54, *(struct DXGADAPTER *const *)(*((_QWORD *)v13 + 2) + 16LL));
  COREACCESS::COREACCESS((COREACCESS *)v55, *(struct DXGADAPTER *const *)(*((_QWORD *)v13 + 2) + 16LL));
  v56 = v13;
  v57 = 0;
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v53, 0LL);
  if ( v15 >= 0 )
  {
    v17 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
            v13,
            (__int64)a1,
            a1->hGlobalShare,
            0LL,
            a2,
            (struct COREDEVICEACCESS *)&v53,
            0,
            a3,
            (unsigned int *)v45,
            (unsigned __int64 *)v52);
    if ( v17 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v55, v16);
      COREACCESS::~COREACCESS((COREACCESS *)v54, v34);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
      if ( v47 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v46 + 136));
        KeLeaveCriticalRegion();
      }
      if ( !v41 )
        goto LABEL_33;
      goto LABEL_31;
    }
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v11 + 248));
    v19 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *((_DWORD *)v11 + 74) )
    {
      v20 = *((_QWORD *)v11 + 35);
      v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v20 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v22 = *(_QWORD *)(v20 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF));
          goto LABEL_14;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v22 = 0LL;
LABEL_14:
    _InterlockedAdd((volatile signed __int32 *)v11 + 66, 0xFFFFFFFF);
    ExReleasePushLockSharedEx((char *)v11 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v22 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v53);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v46);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      v37 = v44 == 0;
LABEL_43:
      if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v42);
      return 3221225485LL;
    }
    v23 = v48;
    v24 = (ADAPTER_RENDER *)*((_QWORD *)v48 + 2);
    if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v24)
      || (v17 = MapGpuVirtualAddressToAllocation(v24, (struct DXGALLOCATION *)v22), v17 >= 0) )
    {
      if ( a5 )
        *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 2) + 760LL) + 8LL)
                                                        + 632LL))(*(_QWORD *)(v22 + 24));
      COREACCESS::~COREACCESS((COREACCESS *)v55, v25);
      COREACCESS::~COREACCESS((COREACCESS *)v54, v26);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
      if ( v47 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v46 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v42);
      }
      return 0LL;
    }
    DXGDEVICE::DestroyAllocationInternal(
      v23,
      0,
      0LL,
      *(struct DXGRESOURCE **)(v22 + 40),
      0LL,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
    COREACCESS::~COREACCESS((COREACCESS *)v55, v30);
    COREACCESS::~COREACCESS((COREACCESS *)v54, v31);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
    if ( v47 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v46 + 136));
      KeLeaveCriticalRegion();
    }
    if ( !v41 )
      goto LABEL_33;
LABEL_31:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v42);
    return (unsigned int)v17;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v53);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v46);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v42);
  return (unsigned int)v15;
}
