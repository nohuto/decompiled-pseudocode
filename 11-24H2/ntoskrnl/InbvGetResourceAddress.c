/*
 * XREFs of InbvGetResourceAddress @ 0x14058F440
 * Callers:
 *     DisplayBootBitmap @ 0x140539C2C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetResourceAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140E65D40 && *(_QWORD *)(qword_140E65D40 + 128) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 0LL;
}
