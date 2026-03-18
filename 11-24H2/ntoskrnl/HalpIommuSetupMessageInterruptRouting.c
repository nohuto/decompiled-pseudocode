/*
 * XREFs of HalpIommuSetupMessageInterruptRouting @ 0x140B4DA60
 * Callers:
 *     HalpIommuConfigureInterrupt @ 0x140552024 (HalpIommuConfigureInterrupt.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuSetupMessageInterruptRouting(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2, *(_QWORD *)(a1 + 496), *(unsigned int *)(a1 + 504));
}
