/*
 * XREFs of PnprGetPageDestination @ 0x1405A4A60
 * Callers:
 *     PnprCopyReservedMapping @ 0x1405A46F4 (PnprCopyReservedMapping.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnprGetPageDestination(unsigned __int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  unsigned __int64 v3; // rdx

  v1 = 0;
  v2 = *(_QWORD *)(PnprContext + 24);
  while ( v1 < *(_DWORD *)(v2 + 4) )
  {
    v3 = *(_QWORD *)(v2 + 16LL * v1 + 16);
    if ( a1 >= v3 && a1 <= *(_QWORD *)(v2 + 16LL * v1 + 24) + v3 - 1 )
      return guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), a1);
    ++v1;
  }
  return 3221226021LL;
}
