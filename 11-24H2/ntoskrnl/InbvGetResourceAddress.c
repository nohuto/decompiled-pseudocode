/*
 * XREFs of InbvGetResourceAddress @ 0x14058C460
 * Callers:
 *     DisplayBootBitmap @ 0x14053746C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetResourceAddress(__int64 a1, __int64 a2)
{
  if ( qword_140E65E70 && *(_QWORD *)(qword_140E65E70 + 128) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0LL;
}
