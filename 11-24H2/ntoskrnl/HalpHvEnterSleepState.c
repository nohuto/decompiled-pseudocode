/*
 * XREFs of HalpHvEnterSleepState @ 0x140548F7C
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x14054263C (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEnterSleepState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FC1138 )
    return guard_dispatch_icall_no_overrides(a1, qword_140FC1138);
  return result;
}
