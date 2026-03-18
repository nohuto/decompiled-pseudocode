/*
 * XREFs of KeCountSetBitsGroupMask @ 0x140418024
 * Callers:
 *     KeQueryCpuPartitionAffinity @ 0x1405BFB24 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x1404181F0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall KeCountSetBitsGroupMask(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = a1;
  v2[0] = 32LL;
  return RtlNumberOfSetBitsEx(v2);
}
