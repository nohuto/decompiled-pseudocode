/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1404E9D08
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x14073CE20 (PopSetupHighPerfPowerRequest.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A910B0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC1DDC (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmPerfClearBootOverrides(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = 0LL;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
      return PpmReinitializeHeteroEngine(0LL, v4, 0LL);
    }
  }
  return result;
}
