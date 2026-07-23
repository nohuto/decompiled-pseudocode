/*
 * XREFs of MiSetNextStandbyPageSecondaryNoLockAsserts @ 0x1403E2780
 * Callers:
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403E2124 (MiExclusiveInsertPfnChainInList.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1403E2718 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetNextStandbyPageSecondaryNoLockAsserts(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  int v3; // eax
  signed __int64 v4; // rdx
  signed __int64 result; // rax
  signed __int64 v6; // rdx

  v2 = a2 << 20;
  v3 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)a1 = (a2 << 40) | *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a1 + 36) = v3 & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
  v4 = *(_QWORD *)(a1 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             v2 ^ (v4 ^ v2) & 0xF07FFFFFFFFFFFFFuLL,
             v4);
  if ( v4 != result )
  {
    do
    {
      v6 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v2 ^ (result ^ v2) & 0xF07FFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v6 != result );
  }
  return result;
}
