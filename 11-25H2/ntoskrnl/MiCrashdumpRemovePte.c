/*
 * XREFs of MiCrashdumpRemovePte @ 0x14066BBC0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiCrashdumpRemovePte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v5; // rdx

  if ( a3 == 3 )
  {
    LeafVa = MiGetLeafVa((unsigned __int64)a2);
    if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 7 )
      return 1LL;
  }
  else if ( !a3 )
  {
    v5 = *a2;
    if ( (v5 & 1) != 0
      && (*(_QWORD *)(48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      guard_dispatch_icall_no_overrides(**(_QWORD **)(a1 + 184));
    }
  }
  return 0LL;
}
