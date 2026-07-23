/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1404F7F30
 * Callers:
 *     DisplayBootBitmap @ 0x14053746C (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x14058D800 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140C620B8 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvIsBootDriverInstalled(__int64 a1, __int64 a2)
{
  if ( qword_140E65E70 && *(_QWORD *)(qword_140E65E70 + 56) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
