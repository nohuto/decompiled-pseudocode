/*
 * XREFs of RtlLockProcessHeapOnProcessTerminate @ 0x1800AB850
 * Callers:
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18013FF88 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

BOOLEAN RtlLockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  _RTL_SRWLOCK *ProcessHeap; // rbx

  RtlEnterCriticalSection(&RtlpProcessHeapsLock);
  v0 = NtCurrentPeb();
  ProcessHeap = (_RTL_SRWLOCK *)v0->ProcessHeap;
  if ( ProcessHeap[2].0 != -571548178 )
    return RtlLockHeap(v0->ProcessHeap);
  RtlpAcquireDescriptorPseudoGlobalLockEx(ProcessHeap[7].Value, 0LL);
  return RtlpHpLockHeapForProcessCloneOrTerminate(ProcessHeap);
}
