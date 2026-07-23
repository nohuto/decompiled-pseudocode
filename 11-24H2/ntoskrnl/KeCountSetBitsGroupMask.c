/*
 * XREFs of KeCountSetBitsGroupMask @ 0x140407DD4
 * Callers:
 *     KeQueryCpuPartitionAffinity @ 0x1405BD154 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall KeCountSetBitsGroupMask(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = a1;
  v2[0] = 32LL;
  return RtlNumberOfSetBitsEx(v2);
}
