/*
 * XREFs of PspExpandLimit @ 0x1405D91E0
 * Callers:
 *     PspInitializeQuotaBlock @ 0x140764280 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x1403C685C (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x1403C6BB8 (PspUnlockQuotaExpansion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PspExpandLimit(unsigned int a1)
{
  int *v2; // rbp
  char v3; // bl
  KIRQL v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v2 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v2, &v5);
  v3 = guard_dispatch_icall_no_overrides(a1);
  PspUnlockQuotaExpansion((__int64)v2, v5);
  return v3;
}
