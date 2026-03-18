/*
 * XREFs of InbvReleaseResources @ 0x14058BD0C
 * Callers:
 *     DisplayBootBitmap @ 0x14053747C (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x14058BFA0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvReleaseResources(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E65AE8;
  if ( qword_140E65AE8 )
  {
    result = *(_QWORD *)(qword_140E65AE8 + 168);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
