/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1401B0C70
 * Callers:
 *     ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220340 (-VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031508 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401AF3C8 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_QUERYALLOCATIONRESIDENCY *v3; // rdi
  char CurrentThreadPreviousMode; // si
  unsigned __int8 v5; // r15
  struct DXGPROCESS *Current; // r14
  unsigned int v7; // edi
  struct DXGPROCESS **v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+50h] [rbp-128h] BYREF
  __int64 v18; // [rsp+58h] [rbp-120h]
  char v19; // [rsp+60h] [rbp-118h]
  _BYTE v20[8]; // [rsp+68h] [rbp-110h] BYREF
  struct DXGDEVICE *v21; // [rsp+70h] [rbp-108h] BYREF
  _D3DKMT_QUERYALLOCATIONRESIDENCY v22; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v23[24]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v24[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = (_D3DKMT_QUERYALLOCATIONRESIDENCY *)a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2008);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2008);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v5 = CurrentThreadPreviousMode == 1;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10811;
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
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v17);
    }
    return v7;
  }
  memset(&v22, 0, sizeof(v22));
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_QUERYALLOCATIONRESIDENCY *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v22, v3, 0x20uLL);
  }
  else
  {
    v22 = *v3;
  }
  v21 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v20, v22.hDevice, Current, &v21);
  v8 = (struct DXGPROCESS **)v21;
  if ( !v21 )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, v22.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 10843;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v22.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_14:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
    goto LABEL_15;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v23, v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v8, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v7 = DXGDEVICE::QueryAllocationResidency(v8, &v22, v5);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v23);
    goto LABEL_14;
  }
  WdLogSingleEntry2(3LL, v8, v13);
  WdLogGlobalForLineNumber = 10857;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v23);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v17);
  return v14;
}
