/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9878C
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PopPowerAggregatorGetCurrentTargetState @ 0x14074D3A0 (PopPowerAggregatorGetCurrentTargetState.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 */

unsigned __int64 PopAdaptiveGetSystemInitiatedRebootTargetState()
{
  __int64 v0; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  _OWORD v5[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int128 v7; // [rsp+48h] [rbp-30h]
  __int128 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-10h]

  v7 = 0LL;
  v9 = 0LL;
  v0 = 0LL;
  v8 = 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v5, 0, sizeof(v5));
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  v2 = qword_140FD7248;
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( (qword_140FD7248 & 7) == 0 )
  {
    v2 = 0LL;
    if ( PopAdaptiveBootContext )
      v2 = qword_140FD7240;
  }
  PopReleaseAdaptiveLock();
  if ( (v2 & 7) == 0 )
  {
    PopPowerAggregatorGetCurrentTargetState((__int64)v5);
    if ( LODWORD(v5[0]) == 1 )
    {
      v3 = v2 & 0xFFFFFFFFFFFFFFF8uLL | 1;
      if ( PopBsdCurrentCsPhase > 0 )
        v0 = 8LL;
      return v0 | v3 & 0xFFFFFFFFFFFFFFF7uLL;
    }
    else if ( LODWORD(v5[0]) == 4 )
    {
      return (PopFullWake == 0 ? 8 : 0) | v2 & 0xFFFFFFFFFFFFFFF0uLL ^ PopAdaptiveSystemPowerStateToBootState[(int)v6] & 7;
    }
    else
    {
      return v2 & 0xFFFFFFFFFFFFFFF8uLL;
    }
  }
  return v2;
}
