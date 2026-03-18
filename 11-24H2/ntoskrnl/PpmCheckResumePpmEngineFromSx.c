/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x14048D998
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14048DA40 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckReInit @ 0x140A72240 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckResumePpmEngineFromSx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // r8d

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  if ( PpmHeteroHgsEnabled && PpmHeteroHgsVendor == 2 )
  {
    v5 = 1;
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    v4 = 6097LL;
    if ( PpmHeteroHgsThreadEnabled )
      v5 = 3;
    v3 = 0LL;
    __writemsr(0x17D1u, v5);
  }
  PpmCheckForceDisarm = 0;
  PpmCheckReInit(v4, v3);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC67A8 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
