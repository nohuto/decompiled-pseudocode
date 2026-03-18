/*
 * XREFs of KeCountSetBitsGroupMask @ 0x1404A1600
 * Callers:
 *     KeQueryCpuPartitionAffinity @ 0x1405BBBF8 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall KeCountSetBitsGroupMask(__int64 a1)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = a1;
  v2[0] = 32LL;
  return RtlNumberOfSetBitsEx(v2);
}
