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

LARGE_INTEGER *__fastcall PopPowerAggregatorAllocateLogEntry(LARGE_INTEGER *a1, ULONG a2)
{
  __int64 LowPart; // r8
  LARGE_INTEGER *v5; // rbx
  LARGE_INTEGER *result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  LowPart = a1[89].LowPart;
  a1[89].LowPart = ((_BYTE)LowPart + 1) & 0x1F;
  v5 = &a1[19 * LowPart];
  memset_0((char *)&a1[19 * LowPart + 90].QuadPart + 4, 0, 0x94uLL);
  v5[90].LowPart = a2;
  v5[91] = KeQueryInterruptTimePrecise(&v7);
  result = v5 + 90;
  v5[92] = *a1;
  return result;
}
