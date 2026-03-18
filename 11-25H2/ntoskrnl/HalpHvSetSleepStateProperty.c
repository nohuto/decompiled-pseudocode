/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x140548F50
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x1406F61C0 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetSleepStateProperty(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FC0730 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
