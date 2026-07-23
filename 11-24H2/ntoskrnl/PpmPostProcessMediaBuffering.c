/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x140A3D2EC
 * Callers:
 *     PpmApplyProfile @ 0x140A3CDF8 (PpmApplyProfile.c)
 * Callees:
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     PpmCheckApplyResetNotification @ 0x14044BDA8 (PpmCheckApplyResetNotification.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 PpmPostProcessMediaBuffering()
{
  __int64 result; // rax
  struct _KAFFINITY_EX v1; // [rsp+28h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v2; // [rsp+138h] [rbp+30h] BYREF

  memset_0(&v1.8, 0, sizeof(v1.8));
  memset_0(&v2.8, 0, sizeof(v2.8));
  result = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    v2.Reserved = 0;
    *(_DWORD *)&v2.Count = 2097153;
    memset_0(&v2.8, 0, sizeof(v2.8));
    PoCopyDeepIdleMask(&v2.Count);
    v1.Reserved = 0;
    *(_DWORD *)&v1.Count = 2097153;
    memset_0(&v1.8, 0, sizeof(v1.8));
    result = KiSubtractAffinityEx(&KeActiveProcessors, &v2, &v1, 0x20u);
    if ( (_DWORD)result )
      return PopExecuteOnTargetProcessors((__int64)&v1, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
