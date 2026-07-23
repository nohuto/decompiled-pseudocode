/*
 * XREFs of RtlLockProcessHeapOnProcessTerminate @ 0x18011008C
 * Callers:
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 * Callees:
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x1801434C8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

BOOLEAN RtlLockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  _RTL_SRWLOCK *ProcessHeap; // rbx

  v0 = NtCurrentPeb();
  ProcessHeap = (_RTL_SRWLOCK *)v0->ProcessHeap;
  if ( ProcessHeap[2].0 != -571548178 )
    return RtlLockHeap(v0->ProcessHeap);
  RtlpAcquireDescriptorPseudoGlobalLockEx(ProcessHeap[7].Value, 0LL);
  return RtlpHpLockHeapForProcessCloneOrTerminate(ProcessHeap);
}
