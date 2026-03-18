/*
 * XREFs of HalpHvEnterSleepState @ 0x140548DCC
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x1405424B8 (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEnterSleepState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FC0738 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
