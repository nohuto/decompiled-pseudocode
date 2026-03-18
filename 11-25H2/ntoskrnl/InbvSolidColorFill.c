/*
 * XREFs of InbvSolidColorFill @ 0x14058BE80
 * Callers:
 *     DisplayBootBitmap @ 0x14053747C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSolidColorFill(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E65AE8;
  if ( qword_140E65AE8 )
  {
    result = *(_QWORD *)(qword_140E65AE8 + 32);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
