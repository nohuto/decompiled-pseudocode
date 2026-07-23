/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x1404881EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404882D8 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckPausePpmEngineForSx(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC7808 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit();
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
