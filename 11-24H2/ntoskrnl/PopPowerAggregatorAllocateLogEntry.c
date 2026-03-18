/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x1409BD94C
 * Callers:
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x1409B9FD8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409BC260 (PopPowerAggregatorRecordIntent.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14033BC40 (KeQueryInterruptTimePrecise.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
