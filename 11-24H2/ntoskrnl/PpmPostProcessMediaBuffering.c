/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x140A4737C
 * Callers:
 *     PpmApplyProfile @ 0x140A46E88 (PpmApplyProfile.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmCheckApplyResetNotification @ 0x1404B3B5C (PpmCheckApplyResetNotification.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void PpmPostProcessMediaBuffering()
{
  struct _KAFFINITY_EX v0; // [rsp+28h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v1; // [rsp+138h] [rbp+30h] BYREF

  memset_0(&v0.8, 0, sizeof(v0.8));
  memset_0(&v1.8, 0, sizeof(v1.8));
  PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    v1.Reserved = 0;
    *(_DWORD *)&v1.Count = 2097153;
    memset_0(&v1.8, 0, sizeof(v1.8));
    PoCopyDeepIdleMask(&v1.Count);
    v0.Reserved = 0;
    *(_DWORD *)&v0.Count = 2097153;
    memset_0(&v0.8, 0, sizeof(v0.8));
    if ( (unsigned int)KiSubtractAffinityEx(&KeActiveProcessors, &v1, &v0, 0x20u) )
      PopExecuteOnTargetProcessors((__int64)&v0, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
}
