/*
 * XREFs of DxgkMarkDeviceAsError @ 0x1403FDB50
 * Callers:
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140217C90 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021E930 (-VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DKMT_DEVICEPAGEFAULT_STATE@@@Z @ 0x14005B4B4 (-VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DK.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x140225FE4 (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

__int64 __fastcall DxgkMarkDeviceAsError(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_MARKDEVICEASERROR *v3; // rbx
  char CurrentThreadPreviousMode; // si
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // ebx
  struct _D3DKMT_MARKDEVICEASERROR v8; // rdx
  struct DXGDEVICE *v9; // rbx
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v19[16]; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+68h] [rbp-40h]
  char v22; // [rsp+70h] [rbp-38h]
  _BYTE v23[48]; // [rsp+78h] [rbp-30h] BYREF
  struct _D3DKMT_MARKDEVICEASERROR v24; // [rsp+B8h] [rbp+10h] BYREF
  char v25; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGDEVICE *v26; // [rsp+C8h] [rbp+20h] BYREF

  v3 = (struct _D3DKMT_MARKDEVICEASERROR *)a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2131;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2131);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2131);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10429;
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
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v20);
    }
    return v7;
  }
  v24 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (struct _D3DKMT_MARKDEVICEASERROR *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v24, v3, 8uLL);
    v8.hDevice = v24.hDevice;
  }
  else
  {
    v8 = *v3;
    v24 = *v3;
  }
  v26 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v8.hDevice, Current, &v26);
  v9 = v26;
  if ( !v26 )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, v24.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 10461;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v24.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_22:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v25);
    goto LABEL_23;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19, v26);
  v10 = *(struct DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23, v10, 1);
  if ( *((_DWORD *)v10 + 50) != 1 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v20);
    return 3221226166LL;
  }
  v14 = v26;
  if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v26 + 2) + 16LL)) )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10487;
LABEL_21:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
    goto LABEL_22;
  }
  *((_BYTE *)v14 + 73) = 1;
  if ( (*((_BYTE *)v14 + 1901) & 1) != 0 )
  {
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 4664LL),
           Current,
           v14,
           &v24);
    goto LABEL_21;
  }
  VIDSCH_EXPORT::VidSchMarkDeviceAsError(
    *(_QWORD *)(*((_QWORD *)v14 + 2) + 736LL),
    *((_QWORD *)v14 + 100),
    v24.Reason | 0x80000000);
  DXGDEVICE::FlushScheduler(v14, 3, 0xFFFFFFFD, 0);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v20);
  return 0LL;
}
