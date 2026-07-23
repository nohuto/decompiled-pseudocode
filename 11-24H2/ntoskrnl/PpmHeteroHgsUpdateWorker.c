/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x1404E2DF0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC53D4 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmHeteroHgsUpdateWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  LOBYTE(v3) = 1;
  PpmHeteroHgsUpdateQueued = 0;
  LOBYTE(v4) = 1;
  return PpmReinitializeHeteroEngine(v4, v5, v3);
}
