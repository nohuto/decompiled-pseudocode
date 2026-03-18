/*
 * XREFs of InbvSetTextColor @ 0x14058BE10
 * Callers:
 *     DisplayBootBitmap @ 0x14053747C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetTextColor(__int64 a1)
{
  if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 80) )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0xFFFFFFFFLL;
}
