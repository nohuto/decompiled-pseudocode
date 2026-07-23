/*
 * XREFs of KiAddHaltBlockToWaitList @ 0x1405B7B90
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1404057CC (KxWaitForLockOwnerShipWithIrql.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall KiAddHaltBlockToWaitList(__int64 a1, signed __int64 a2)
{
  __int64 v3; // r9
  signed __int64 v4; // rax
  signed __int64 result; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // rcx

  v3 = (*(_DWORD *)a2 >> 5) & 0x7F;
  _m_prefetchw((const void *)(a1 + 8 * v3));
  v4 = *(_QWORD *)(a1 + 8 * v3);
  *(_QWORD *)(a2 + 16) = v4 & 0xFFFFFFFFFFFFFFFCuLL;
  v6 = v4;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v3), a2, v4);
  if ( v6 != result )
  {
    do
    {
      v7 = result;
      *(_QWORD *)(a2 + 16) = result & 0xFFFFFFFFFFFFFFFCuLL;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v3), a2, result);
    }
    while ( result != v7 );
  }
  return result;
}
