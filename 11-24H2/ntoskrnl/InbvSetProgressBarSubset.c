/*
 * XREFs of InbvSetProgressBarSubset @ 0x1404FA794
 * Callers:
 *     Phase1Initialization @ 0x1406FC8E0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetProgressBarSubset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140E65D40;
  if ( qword_140E65D40 )
  {
    result = *(_QWORD *)(qword_140E65D40 + 112);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  }
  return result;
}
