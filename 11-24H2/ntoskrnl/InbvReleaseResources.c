/*
 * XREFs of InbvReleaseResources @ 0x14058C50C
 * Callers:
 *     DisplayBootBitmap @ 0x14053746C (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x14058C7A0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvReleaseResources(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65E70;
  if ( qword_140E65E70 )
  {
    result = *(_QWORD *)(qword_140E65E70 + 168);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
