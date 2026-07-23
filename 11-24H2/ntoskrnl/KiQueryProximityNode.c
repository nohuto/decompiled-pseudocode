/*
 * XREFs of KiQueryProximityNode @ 0x1405B9060
 * Callers:
 *     KiPerformExplicitGroupAssignment @ 0x140C2AC8C (KiPerformExplicitGroupAssignment.c)
 *     KiPopulateNodeInformation @ 0x140C2AF4C (KiPopulateNodeInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiQueryProximityNode(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
