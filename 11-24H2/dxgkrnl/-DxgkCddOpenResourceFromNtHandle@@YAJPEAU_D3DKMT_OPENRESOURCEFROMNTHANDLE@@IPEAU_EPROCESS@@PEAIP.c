/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140354890
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x14004BC74 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1403545C0 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140356384 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  HANDLE hNtHandle; // rcx
  NTSTATUS v10; // eax
  PVOID v11; // r12
  int v12; // ebx
  D3DKMT_HANDLE hDevice; // edx
  BOOL v14; // r15d
  struct DXGDEVICE *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  D3DKMT_HANDLE hAllocation; // r15d
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rdi
  struct DXGDEVICE *v23; // rsi
  ADAPTER_RENDER *v24; // r14
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  struct DXGDEVICE *v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  char v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v37; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-78h] BYREF
  int v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h]
  char v42; // [rsp+A0h] [rbp-60h]
  _BYTE v43[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h]
  char v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v49[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v50[64]; // [rsp+118h] [rbp+18h] BYREF
  struct DXGDEVICE *v51; // [rsp+158h] [rbp+58h]
  char v52; // [rsp+160h] [rbp+60h]

  v40 = -1;
  v47 = (__int64)a4;
  v33 = (__int64)a3;
  v36 = a2;
  v46 = (__int64)a6;
  v41 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1967;
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
    goto LABEL_28;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(
          hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v11 = Object;
  v12 = v10;
  if ( v10 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, a1->hNtHandle, -1073741788LL);
    WdLogGlobalForLineNumber = 1988;
    goto LABEL_26;
  }
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, a1->hNtHandle, v10);
    WdLogGlobalForLineNumber = 1995;
    goto LABEL_26;
  }
  hDevice = a1->hDevice;
  v37 = 0LL;
  v14 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, hDevice, (struct _KTHREAD **)Current, &v37);
  v15 = v37;
  if ( !v37 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    v31 = a1->hDevice;
    WdLogGlobalForLineNumber = 2019;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v31,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_46;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(3LL, v37, -1073741811LL);
    WdLogGlobalForLineNumber = 2030;
    goto LABEL_46;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v34, v37);
  v16 = *((_QWORD *)v15 + 2);
  v45 = 0;
  v44 = *(_QWORD *)(v16 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
  COREACCESS::COREACCESS((COREACCESS *)v49, *(struct DXGADAPTER *const *)(*((_QWORD *)v15 + 2) + 16LL));
  COREACCESS::COREACCESS((COREACCESS *)v50, *(struct DXGADAPTER *const *)(*((_QWORD *)v15 + 2) + 16LL));
  v51 = v15;
  v52 = 0;
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v48, 0LL);
  if ( v12 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v48);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v34);
    goto LABEL_46;
  }
  v12 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(v15, v36, (__int64)&v48, v14, v33, v47, v46);
  if ( v12 < 0 )
  {
LABEL_31:
    COREACCESS::~COREACCESS((COREACCESS *)v50, v17);
    COREACCESS::~COREACCESS((COREACCESS *)v49, v30);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    if ( v35 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 136));
      KeLeaveCriticalRegion();
    }
    if ( !v32 )
      goto LABEL_26;
LABEL_24:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    goto LABEL_26;
  }
  hAllocation = a1->pOpenAllocationInfo2->hAllocation;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v19 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *((_DWORD *)Current + 74) )
  {
    v20 = *((_QWORD *)Current + 35);
    v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
    if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
      && (v21 & 0x2000) == 0
      && (v21 & 0x1F) != 0 )
    {
      if ( (*(_BYTE *)(v20 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
      {
        v22 = *(_QWORD *)(v20 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF));
        goto LABEL_16;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v22 = 0LL;
LABEL_16:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v22 )
  {
    v12 = -1073741811;
    goto LABEL_31;
  }
  v23 = v37;
  v24 = (ADAPTER_RENDER *)*((_QWORD *)v37 + 2);
  if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v24)
    || (v12 = MapGpuVirtualAddressToAllocation(v24, (struct DXGALLOCATION *)v22), v12 >= 0) )
  {
    if ( a5 )
      *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 2) + 760LL) + 8LL)
                                                      + 632LL))(*(_QWORD *)(v22 + 24));
    COREACCESS::~COREACCESS((COREACCESS *)v50, v25);
    COREACCESS::~COREACCESS((COREACCESS *)v49, v26);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    if ( v35 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 136));
      KeLeaveCriticalRegion();
    }
    if ( !v32 )
      goto LABEL_26;
    goto LABEL_24;
  }
  DXGDEVICE::DestroyAllocationInternal(
    v23,
    0,
    0LL,
    *(struct DXGRESOURCE **)(v22 + 40),
    0LL,
    (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v48);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v34);
LABEL_46:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v32);
LABEL_26:
  if ( v11 )
    ObfDereferenceObject(v11);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v40);
  return (unsigned int)v12;
}
