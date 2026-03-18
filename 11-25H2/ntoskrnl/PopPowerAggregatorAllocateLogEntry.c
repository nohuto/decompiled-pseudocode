/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x140965C40
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x1409644B0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A2C210 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140A3D438 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140279D80 (KeQueryInterruptTimePrecise.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PopPowerAggregatorAllocateLogEntry(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 712);
  *(_DWORD *)(a1 + 712) = ((_BYTE)v2 + 1) & 0x1F;
  v5 = 152 * v2 + a1;
  memset_0((void *)(152 * v2 + a1 + 724), 0, 0x94uLL);
  *(_DWORD *)(v5 + 720) = a2;
  *(_QWORD *)(v5 + 728) = KeQueryInterruptTimePrecise((__int64)&v7);
  result = v5 + 720;
  *(_QWORD *)(v5 + 736) = *(_QWORD *)a1;
  return result;
}
