/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1404E2698
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x140747120 (PopSetupHighPerfPowerRequest.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A91980 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC53D4 (PpmReinitializeHeteroEngine.c)
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
