/*
 * XREFs of HalpApicTimerQueryCounter @ 0x140561090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerQueryCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)~guard_dispatch_icall_no_overrides(912LL, a2, a3, a4);
}
