/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1404F8180
 * Callers:
 *     DisplayBootBitmap @ 0x14053747C (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x14058D000 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvIsBootDriverInstalled(__int64 a1, __int64 a2)
{
  if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 56) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
