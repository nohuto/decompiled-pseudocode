/*
 * XREFs of PspExpandLimit @ 0x1405E517C
 * Callers:
 *     PspInitializeQuotaBlock @ 0x140773C50 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x14024B79C (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x14024C868 (PspUnlockQuotaExpansion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PspExpandLimit(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v7; // rbp
  KIRQL v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v7 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v7, &v9);
  LOBYTE(a4) = guard_dispatch_icall_no_overrides(a1, 0LL, a3, a4);
  PspUnlockQuotaExpansion((__int64)v7, v9);
  return a4;
}
