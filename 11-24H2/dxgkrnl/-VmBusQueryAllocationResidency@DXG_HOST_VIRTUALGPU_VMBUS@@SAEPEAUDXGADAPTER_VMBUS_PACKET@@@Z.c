/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226A30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     DxgkQueryAllocationResidency @ 0x1401B3220 (DxgkQueryAllocationResidency.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  const wchar_t *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  int *v16; // r14
  int AllocationResidency; // eax
  __int64 v19; // [rsp+20h] [rbp-68h]
  _BYTE v20[32]; // [rsp+50h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3162LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_26:
    WdLogGlobalForLineNumber = v3;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v6 = v5;
  if ( !v5 )
  {
LABEL_27:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    return 0;
  }
  v7 = *(_DWORD *)(v5 + 28);
  if ( v7 )
    v8 = 0LL;
  else
    v8 = *(unsigned int *)(v5 + 40);
  v9 = 4 * v8;
  if ( v9 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3169LL;
    goto LABEL_25;
  }
  v10 = v9 + 56;
  if ( v10 < 0x38 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3175LL;
    goto LABEL_25;
  }
  if ( v10 > *((_DWORD *)a1 + 36) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3180LL;
LABEL_25:
    v4 = L"Invalid packet size";
    goto LABEL_26;
  }
  v11 = 1LL;
  if ( !v7 )
    v11 = *(unsigned int *)(v6 + 40);
  v12 = 4 * v11;
  if ( v12 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3189LL;
    goto LABEL_25;
  }
  v13 = v12 + 4;
  if ( (unsigned int)v12 >= 0xFFFFFFFC )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3194LL;
    goto LABEL_25;
  }
  v16 = (int *)operator new[](v13, 0x4B677844u, 64LL);
  if ( v16 )
  {
    *(_QWORD *)(v6 + 32) = v6 + 56;
    *(_QWORD *)(v6 + 48) = v16 + 1;
    AllocationResidency = DxgkQueryAllocationResidency(v6 + 24, v14, v15);
    *v16 = AllocationResidency;
    if ( AllocationResidency < 0 )
    {
      WdLogSingleEntry1(2LL, AllocationResidency);
      v19 = *v16;
      WdLogGlobalForLineNumber = 3213;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkQueryAllocationResidency failed: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v16, v13);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3201;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Memory allocation failed", 3201LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  return v2;
}
