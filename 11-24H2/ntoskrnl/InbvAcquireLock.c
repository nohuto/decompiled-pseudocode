/*
 * XREFs of InbvAcquireLock @ 0x14058F22C
 * Callers:
 *     DisplayBootBitmap @ 0x140539C2C (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x14058F72C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14058F780 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvAcquireLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140E65D40;
  if ( qword_140E65D40 )
  {
    result = *(_QWORD *)(qword_140E65D40 + 152);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  }
  return result;
}
