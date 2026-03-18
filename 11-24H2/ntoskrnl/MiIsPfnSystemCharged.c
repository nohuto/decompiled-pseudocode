/*
 * XREFs of MiIsPfnSystemCharged @ 0x140437E10
 * Callers:
 *     MiDecommitHandleTransitionPte @ 0x140286C5C (MiDecommitHandleTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140286EA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnSystemCharged(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
  {
    return 0LL;
  }
  else
  {
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  }
}
