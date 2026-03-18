/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x140A3F0D8
 * Callers:
 *     PpmApplyProfile @ 0x140A3EA68 (PpmApplyProfile.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     PpmCheckApplyResetNotification @ 0x1404B422C (PpmCheckApplyResetNotification.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
