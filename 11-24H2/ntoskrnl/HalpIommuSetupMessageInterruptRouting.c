/*
 * XREFs of HalpIommuSetupMessageInterruptRouting @ 0x140B4FAB0
 * Callers:
 *     HalpIommuConfigureInterrupt @ 0x14054F964 (HalpIommuConfigureInterrupt.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuSetupMessageInterruptRouting(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2);
}
