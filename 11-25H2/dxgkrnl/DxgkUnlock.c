/*
 * XREFs of DxgkUnlock @ 0x1403804F0
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404040E0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1403808B0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_UNLOCK *v3; // rdi
  char CurrentThreadPreviousMode; // si
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  struct DXGDEVICE *v7; // rdi
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // r9
  const char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+50h] [rbp-118h] BYREF
  __int64 v17; // [rsp+58h] [rbp-110h]
  char v18; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v19; // [rsp+68h] [rbp-100h] BYREF
  struct DXGDEVICE *v20; // [rsp+70h] [rbp-F8h] BYREF
  struct _D3DKMT_UNLOCK v21; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v22[24]; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v23[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v3 = (struct _D3DKMT_UNLOCK *)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2012);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2012);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 738;
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
    goto LABEL_13;
  }
  v21 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v21, v3, 0x10uLL);
  }
  else
  {
    v21 = *v3;
  }
  v20 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v19, v21.hDevice, Current, &v20);
  v7 = v20;
  if ( !v20 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, v21.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 770;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      v21.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v19 )
      goto LABEL_11;
    goto LABEL_13;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22,
    v20);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v7, 2, v12, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v23, v13);
  if ( *((_DWORD *)v7 + 152) != 4 )
  {
    v21.hDevice = 0;
    v8 = DXGDEVICE::Unlock(v20, &v21, CurrentThreadPreviousMode == 1);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
    if ( v19 )
    {
LABEL_11:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v19 + 2), v19);
    }
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v16);
    }
    return v8;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v16);
  return 0LL;
}
