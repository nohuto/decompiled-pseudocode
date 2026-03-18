/*
 * XREFs of InbvSolidColorFill @ 0x14058F660
 * Callers:
 *     DisplayBootBitmap @ 0x140539C2C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSolidColorFill(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140E65D40;
  if ( qword_140E65D40 )
  {
    result = *(_QWORD *)(qword_140E65D40 + 32);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  }
  return result;
}
