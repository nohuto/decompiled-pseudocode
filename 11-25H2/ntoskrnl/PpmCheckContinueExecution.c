/*
 * XREFs of PpmCheckContinueExecution @ 0x1403B099C
 * Callers:
 *     PpmPerfAction @ 0x1403B0150 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x1404AF690 (PpmPerfControlActionCallback.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1403B0BF4 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140466B50 (KeFindFirstSetRightAffinityEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

BOOLEAN PpmCheckContinueExecution()
{
  __int64 Number; // r8
  unsigned int v1; // ecx
  __int64 v2; // rdx
  int v4; // eax
  struct _KAFFINITY_EX *v5; // rcx
  struct _KAFFINITY_EX v6; // [rsp+30h] [rbp-128h] BYREF

  memset_0(&v6.8, 0, sizeof(v6.8));
  KeQuerySystemAllowedCpuSetAffinity();
  Number = KeGetCurrentPrcb()->Number;
  v1 = *((_DWORD *)KiGlobalState + Number);
  v2 = v1 >> 6;
  if ( (unsigned int)v2 >= PpmCachedSystemAllowedCpuSet.Count
    || ((PpmCachedSystemAllowedCpuSet.Bitmap[v2] >> (v1 & 0x3F)) & 1) == 0 )
  {
    v6.Reserved = 0;
    *(_DWORD *)&v6.Count = 2097153;
    memset_0(&v6.8, 0, sizeof(v6.8));
    PoCopyDeepIdleMask(&v6.Count);
    v4 = KiSubtractAffinityEx(&PpmCachedSystemAllowedCpuSet, &v6, &v6, v6.Size);
    v5 = &v6;
    if ( !v4 )
      v5 = &PpmCachedSystemAllowedCpuSet;
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(v5);
  }
  if ( !PpmCheckDpc.DpcData )
    PpmCheckDpc.Number = Number + 2048;
  return KeInsertQueueDpc(&PpmCheckDpc, 0LL, 0LL);
}
