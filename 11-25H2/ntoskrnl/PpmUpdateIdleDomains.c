/*
 * XREFs of PpmUpdateIdleDomains @ 0x1405CAE30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeIsSubsetAffinityEx @ 0x1402717F0 (KeIsSubsetAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1)
{
  int v2; // ebx

  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  if ( a1 && (unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)(a1 + 8), &KeActiveProcessors.Count) )
  {
    v2 = PopExecuteOnTargetProcessors(a1 + 8, (__int64)PpmInstallNewIdleDomains, a1, a1 + 8);
    if ( v2 >= 0 )
      v2 = 0;
  }
  else
  {
    v2 = -1073741811;
  }
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  return (unsigned int)v2;
}
