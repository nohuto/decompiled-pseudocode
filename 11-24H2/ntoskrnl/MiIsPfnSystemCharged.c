/*
 * XREFs of MiIsPfnSystemCharged @ 0x14042A890
 * Callers:
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140296AA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
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
