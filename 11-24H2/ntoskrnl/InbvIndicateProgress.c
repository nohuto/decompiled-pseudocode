/*
 * XREFs of InbvIndicateProgress @ 0x140C1C2E0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvIndicateProgress(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65E70;
  if ( qword_140E65E70 )
  {
    result = *(_QWORD *)(qword_140E65E70 + 120);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
