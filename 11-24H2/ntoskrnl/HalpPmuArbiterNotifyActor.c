/*
 * XREFs of HalpPmuArbiterNotifyActor @ 0x1406FBDB4
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FC060 (HalpRequestPmuAccess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuArbiterNotifyActor(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v2 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  v4 = 524289;
  return guard_dispatch_icall_no_overrides(v2, &v4);
}
