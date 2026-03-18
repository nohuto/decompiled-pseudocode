/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14048D954
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14048DA40 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckReInit @ 0x140A72240 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckPausePpmEngineForSx(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC67A8 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit();
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
