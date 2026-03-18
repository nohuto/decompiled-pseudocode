/*
 * XREFs of InbvSetScrollRegion @ 0x14058BDE0
 * Callers:
 *     DisplayBootBitmap @ 0x14053747C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetScrollRegion(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E65AE8;
  if ( qword_140E65AE8 )
  {
    result = *(_QWORD *)(qword_140E65AE8 + 72);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
