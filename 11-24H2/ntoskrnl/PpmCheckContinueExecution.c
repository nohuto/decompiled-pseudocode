/*
 * XREFs of PpmCheckContinueExecution @ 0x140351834
 * Callers:
 *     PpmPerfAction @ 0x140351770 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x1404B0400 (PpmPerfControlActionCallback.c)
 * Callees:
 *     KeFindFirstSetRightAffinityEx @ 0x140202700 (KeFindFirstSetRightAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1403528BC (KeQuerySystemAllowedCpuSetAffinity.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

BOOLEAN PpmCheckContinueExecution()
{
  __int64 Number; // r8
  unsigned int v1; // ecx
  __int64 v2; // rdx
  unsigned int v4; // eax
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
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(&v5->Count);
  }
  if ( !PpmCheckDpc.DpcData )
    PpmCheckDpc.Number = Number + 2048;
  return KeInsertQueueDpc(&PpmCheckDpc, 0LL, 0LL);
}
