/*
 * XREFs of HalpIommuSetupMessageInterruptRouting @ 0x140B3DA60
 * Callers:
 *     HalpIommuConfigureInterrupt @ 0x14054F724 (HalpIommuConfigureInterrupt.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuSetupMessageInterruptRouting(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16));
}
