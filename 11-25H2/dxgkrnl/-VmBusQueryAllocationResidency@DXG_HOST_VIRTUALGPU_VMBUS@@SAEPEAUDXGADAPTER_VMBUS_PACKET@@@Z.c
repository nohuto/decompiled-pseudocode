/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220340
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     DxgkQueryAllocationResidency @ 0x1401B0C70 (DxgkQueryAllocationResidency.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  const wchar_t *v4; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // r8
  int *v17; // r14
  int AllocationResidency; // eax
  __int64 v20; // [rsp+20h] [rbp-68h]
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v21,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3163LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_26:
    WdLogGlobalForLineNumber = v3;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v7 = v5;
  if ( !v5 )
  {
LABEL_27:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    return 0;
  }
  v8 = *(_DWORD *)(v5 + 28);
  if ( v8 )
    v9 = 0LL;
  else
    v9 = *(unsigned int *)(v5 + 40);
  v10 = 4 * v9;
  if ( v10 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3170LL;
    goto LABEL_25;
  }
  v11 = v10 + 56;
  if ( v11 < 0x38 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3176LL;
    goto LABEL_25;
  }
  if ( v11 > *((_DWORD *)a1 + 36) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3181LL;
LABEL_25:
    v4 = L"Invalid packet size";
    goto LABEL_26;
  }
  v12 = 1LL;
  if ( !v8 )
    v12 = *(unsigned int *)(v7 + 40);
  v13 = 4 * v12;
  if ( v13 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3190LL;
    goto LABEL_25;
  }
  v14 = v13 + 4;
  if ( (unsigned int)v13 >= 0xFFFFFFFC )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3195LL;
    goto LABEL_25;
  }
  v17 = (int *)operator new[](v14, 0x4B677844u, 64LL, v6);
  if ( v17 )
  {
    *(_QWORD *)(v7 + 32) = v7 + 56;
    *(_QWORD *)(v7 + 48) = v17 + 1;
    AllocationResidency = DxgkQueryAllocationResidency(v7 + 24, v15, v16);
    *v17 = AllocationResidency;
    if ( AllocationResidency < 0 )
    {
      WdLogSingleEntry1(2LL, AllocationResidency);
      v20 = *v17;
      WdLogGlobalForLineNumber = 3214;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkQueryAllocationResidency failed: 0x%I64x",
        v20,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v17, v14);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3202;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Memory allocation failed", 3202LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  return v2;
}
