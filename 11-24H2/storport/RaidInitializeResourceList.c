/*
 * XREFs of RaidInitializeResourceList @ 0x140181284
 * Callers:
 *     RaidAdapterConfigureResources @ 0x140054EDC (RaidAdapterConfigureResources.c)
 *     NvmeAdapterConfigureResources @ 0x1400CD914 (NvmeAdapterConfigureResources.c)
 * Callees:
 *     RaDuplicateCmResourceList @ 0x140184D4C (RaDuplicateCmResourceList.c)
 */

__int64 __fastcall RaidInitializeResourceList(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf

  if ( a1
    && a2
    && a3
    && ((*a1 = ((__int64 (*)(void))RaDuplicateCmResourceList)(),
         v6 = RaDuplicateCmResourceList(v5, a3),
         v7 = *a1 == 0LL,
         a1[1] = v6,
         v7)
     || !v6) )
  {
    return 3221225495LL;
  }
  else
  {
    return 0LL;
  }
}
