/*
 * XREFs of PnprGetPageDestination @ 0x1405A7A70
 * Callers:
 *     PnprCopyReservedMapping @ 0x1405A7704 (PnprCopyReservedMapping.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnprGetPageDestination(unsigned __int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v3 = 0;
  v4 = *(_QWORD *)(PnprContext + 24);
  while ( v3 < *(_DWORD *)(v4 + 4) )
  {
    v5 = *(_QWORD *)(v4 + 16LL * v3 + 16);
    if ( a1 >= v5 && a1 <= *(_QWORD *)(v4 + 16LL * v3 + 24) + v5 - 1 )
      return guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), a1, a2, v4);
    ++v3;
  }
  return 3221226021LL;
}
