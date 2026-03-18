/*
 * XREFs of HalpPmuArbiterNotifyActor @ 0x1406FE174
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FE420 (HalpRequestPmuAccess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuArbiterNotifyActor(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v4 = *(_QWORD *)(a1 + 24);
  v7 = a2;
  v6 = 524289;
  return guard_dispatch_icall_no_overrides(v4, &v6, a3, a4);
}
