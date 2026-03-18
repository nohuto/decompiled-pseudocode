/*
 * XREFs of ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402290D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x14039D488 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  const wchar_t *v4; // r9
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  D3DKMT_HANDLE v8; // r8d
  UINT AllocationCount; // r9d
  __int64 v10; // r14
  UINT v11; // eax
  struct DXGPROCESS *v12; // r8
  __int64 v13; // r9
  int v14; // eax
  struct DXGDEVICE *v15; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+60h] [rbp-A8h] BYREF
  _D3DKMT_SETALLOCATIONPRIORITY v17; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[8]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v19[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v20[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v21[160]; // [rsp+B8h] [rbp-50h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v19,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1700LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_3:
    WdLogGlobalForLineNumber = v3;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return 0;
  }
  v6 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v7 = v6;
  if ( !v6 || v6[8] > 0x20000 )
    goto LABEL_4;
  v8 = v6[7];
  AllocationCount = 0;
  v10 = v6[6];
  v17.AllocationCount = v6[8];
  *(&v17.AllocationCount + 1) = 0;
  v17.hDevice = v10;
  v17.hResource = v8;
  v11 = 4;
  if ( !v8 )
  {
    AllocationCount = v17.AllocationCount;
    v11 = 4 * v17.AllocationCount;
  }
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 40 < AllocationCount * 4 + v11 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1717LL;
    v4 = L"Invalid packet size";
    goto LABEL_3;
  }
  if ( v8 )
    v17.phAllocationList = 0LL;
  else
    v17.phAllocationList = v7 + 10;
  v12 = (struct DXGPROCESS *)*((_QWORD *)a1 + 11);
  v15 = 0LL;
  v17.pPriorities = &v7[AllocationCount + 10];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v18, v10, v12, &v15);
  if ( v15 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20, v15);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v21, (__int64)v15, 0, v13, 0);
    v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v21, 0LL);
    v16 = v14;
    if ( v14 >= 0 )
    {
      v16 = DXGDEVICE::SetAllocationPriority(v15, &v17, 0);
    }
    else
    {
      WdLogSingleEntry2(3LL, v15, v14);
      WdLogGlobalForLineNumber = 1738;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry2(2LL, v10, -1073741811LL);
    WdLogGlobalForLineNumber = 1728;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v18);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  return v2;
}
