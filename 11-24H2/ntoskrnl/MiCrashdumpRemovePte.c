/*
 * XREFs of MiCrashdumpRemovePte @ 0x140677510
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiCrashdumpRemovePte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx

  if ( a3 == 3 )
  {
    LeafVa = MiGetLeafVa((unsigned __int64)a2);
    if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 7 )
      return 1LL;
  }
  else if ( !a3 )
  {
    v5 = *a2;
    if ( (v5 & 1) != 0 )
    {
      v6 = (v5 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*(_QWORD *)(48 * v6 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        guard_dispatch_icall_no_overrides(**(_QWORD **)(a1 + 184), v6, 1LL, 2LL);
    }
  }
  return 0LL;
}
