/*
 * XREFs of RtlLockProcessHeapOnProcessTerminate @ 0x18000322C
 * Callers:
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 * Callees:
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180141DD8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

__int64 RtlLockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  _DWORD *ProcessHeap; // rbx

  v0 = NtCurrentPeb();
  ProcessHeap = v0->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlLockHeap(v0->ProcessHeap);
  RtlpAcquireDescriptorPseudoGlobalLockEx(*((_QWORD *)ProcessHeap + 7), 0LL);
  return RtlpHpLockHeapForProcessCloneOrTerminate(ProcessHeap);
}
