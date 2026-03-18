/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14048E044
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14048E130 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckPausePpmEngineForSx(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC67C8 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit();
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
