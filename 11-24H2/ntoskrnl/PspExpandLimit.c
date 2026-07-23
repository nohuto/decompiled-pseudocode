/*
 * XREFs of PspExpandLimit @ 0x1405E26A4
 * Callers:
 *     PspInitializeQuotaBlock @ 0x140773E70 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x14027BDAC (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x14027CE78 (PspUnlockQuotaExpansion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PspExpandLimit(unsigned int a1)
{
  int *v2; // rbp
  char v3; // bl
  KIRQL v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v2 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v2, &v5);
  v3 = guard_dispatch_icall_no_overrides(a1, 0LL);
  PspUnlockQuotaExpansion((__int64)v2, v5);
  return v3;
}
