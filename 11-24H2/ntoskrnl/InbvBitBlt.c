/*
 * XREFs of InbvBitBlt @ 0x14058C27C
 * Callers:
 *     DisplayBootBitmap @ 0x14053746C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvBitBlt(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E65E70;
  if ( qword_140E65E70 )
  {
    result = *(_QWORD *)(qword_140E65E70 + 96);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, 0LL);
  }
  return result;
}
