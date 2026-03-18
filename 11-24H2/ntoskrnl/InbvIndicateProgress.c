/*
 * XREFs of InbvIndicateProgress @ 0x140C1A2A0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvIndicateProgress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140E65D40;
  if ( qword_140E65D40 )
  {
    result = *(_QWORD *)(qword_140E65D40 + 120);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  }
  return result;
}
