/*
 * XREFs of MiSetPfnNodeBlinkLow @ 0x1403E2820
 * Callers:
 *     MiExclusiveInsertPfnChainInList @ 0x1403E2124 (MiExclusiveInsertPfnChainInList.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1403E2718 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiUpdateLargePageSectionPfns @ 0x140674258 (MiUpdateLargePageSectionPfns.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeBlinkLow(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r8
  __int64 v3; // rdx
  signed __int64 result; // rax
  signed __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 << 40;
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 24),
             v3 ^ (v2 ^ v3) & 0xF80000FFFFFFFFFFuLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v6 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v3 ^ (result ^ v3) & 0xF80000FFFFFFFFFFuLL,
                 result);
    }
    while ( v6 != result );
  }
  return result;
}
