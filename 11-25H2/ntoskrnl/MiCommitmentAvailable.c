/*
 * XREFs of MiCommitmentAvailable @ 0x140433D00
 * Callers:
 *     MiAllocateCrcList @ 0x1409F49B8 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 19264);
  result = *(_QWORD *)(a1 + 19608) - v1;
  if ( v1 >= *(_QWORD *)(a1 + 19608) )
    return 0LL;
  return result;
}
