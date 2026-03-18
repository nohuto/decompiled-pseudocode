/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1404FA650
 * Callers:
 *     DisplayBootBitmap @ 0x140539C2C (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1405907E0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvIsBootDriverInstalled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140E65D40 && *(_QWORD *)(qword_140E65D40 + 56) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 0;
}
