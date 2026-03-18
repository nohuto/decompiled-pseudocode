/*
 * XREFs of ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021CF50
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
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETALLOCATIONPRIORITY@@@@YAPEAUDXGKVMB_COMMAND_GETALLOCATIONPRIORITY@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140055634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETALLOCATIONPRIORITY@@@@YAPEAUDXGKVMB_COMMAND_GETALLOCAT.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1401AED80 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  const wchar_t *v4; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  UINT v8; // eax
  D3DKMT_HANDLE v9; // r8d
  int v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // r9d
  int v13; // eax
  unsigned int v14; // r15d
  struct DXGPROCESS *v15; // r8
  __int64 v16; // r14
  __int64 v17; // r9
  int v18; // eax
  struct DXGDEVICE *v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  struct _D3DKMT_GETALLOCATIONPRIORITY v21; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v22[24]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v23[24]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v24[160]; // [rsp+B8h] [rbp-50h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v22,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1751LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_3:
    WdLogGlobalForLineNumber = v3;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    return 0;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_GETALLOCATIONPRIORITY>((__int64)a1);
  v7 = v6;
  if ( !v6 )
    goto LABEL_4;
  v8 = *(_DWORD *)(v6 + 32);
  if ( v8 > 0x20000 )
    goto LABEL_4;
  v9 = *(_DWORD *)(v7 + 28);
  v10 = 4;
  v11 = *(unsigned int *)(v7 + 24);
  v12 = 0;
  v21.AllocationCount = v8;
  v13 = 4 * v8;
  *(&v21.AllocationCount + 1) = 0;
  v21.hDevice = v11;
  if ( !v9 )
    v12 = v13;
  v21.hResource = v9;
  if ( !v9 )
    v10 = v13;
  v14 = v10 + 4;
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 40 < v12 + v14 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1769LL;
    v4 = L"Invalid packet size";
    goto LABEL_3;
  }
  if ( v9 )
    v21.phAllocationList = 0LL;
  else
    v21.phAllocationList = (const D3DKMT_HANDLE *)(v7 + 40);
  v15 = (struct DXGPROCESS *)*((_QWORD *)a1 + 11);
  v16 = v7 + v12;
  v19 = 0LL;
  v21.pPriorities = (UINT *)(v16 + 44);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, v11, v15, &v19);
  if ( !v19 )
  {
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 1781;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v20);
    goto LABEL_4;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23, v19);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v19, 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
  if ( v18 >= 0 )
  {
    *(_DWORD *)(v16 + 40) = DXGDEVICE::GetAllocationPriority(v19, &v21, 0);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)(v16 + 40), v14);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry2(3LL, v19, v18);
    WdLogGlobalForLineNumber = 1791;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v20);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  return v2;
}
