/*
 * XREFs of IommupHvUnblockDefaultDma @ 0x1405639B0
 * Callers:
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnblockDefaultDma(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
