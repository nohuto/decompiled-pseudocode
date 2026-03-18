/*
 * XREFs of HalpPmuArbiterNotifyActor @ 0x1406F2384
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406F2630 (HalpRequestPmuAccess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuArbiterNotifyActor(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24));
}
