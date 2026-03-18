/*
 * XREFs of InbvSetProgressBarSubset @ 0x1404F82B4
 * Callers:
 *     Phase1Initialization @ 0x1406F0AF0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetProgressBarSubset(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65AE8;
  if ( qword_140E65AE8 )
  {
    result = *(_QWORD *)(qword_140E65AE8 + 112);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
