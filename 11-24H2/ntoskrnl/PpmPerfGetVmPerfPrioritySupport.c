/*
 * XREFs of PpmPerfGetVmPerfPrioritySupport @ 0x14074FAF8
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 */

LONG __fastcall PpmPerfGetVmPerfPrioritySupport(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v4; // zf
  unsigned int VmThrottlePriorityCount; // eax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v4 = PpmPerfVmPerfSelectionSupported == 0;
  *(_QWORD *)a1 = 0LL;
  if ( !v4 )
  {
    VmThrottlePriorityCount = KeGetCurrentPrcb()->PowerState.CheckContext.Domain->VmThrottlePriorityCount;
    *(_DWORD *)(a1 + 4) = VmThrottlePriorityCount;
    *(_BYTE *)a1 = VmThrottlePriorityCount != 0;
  }
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
