/*
 * XREFs of SmKmVirtualLockCtxInitialize @ 0x14060DFE4
 * Callers:
 *     SmPartitionInitialize @ 0x140797684 (SmPartitionInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmVirtualLockCtxInitialize(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = 0LL;
  return result;
}
