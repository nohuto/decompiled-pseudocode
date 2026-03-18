/*
 * XREFs of HalpHvEnterSleepState @ 0x14054B6BC
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x140544D7C (HalpShutdown.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEnterSleepState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FC0ED8 )
    return guard_dispatch_icall_no_overrides(a1, qword_140FC0ED8, a3, a4);
  return result;
}
