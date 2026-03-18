/*
 * XREFs of KiSetLockOwnershipQuantum @ 0x140441370
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetLockOwnershipQuantum(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( a2 > v3 || (result = v3 - a2, result < a3) )
  {
    result = a3 + a2;
    *(_QWORD *)(a1 + 32) = result;
  }
  return result;
}
