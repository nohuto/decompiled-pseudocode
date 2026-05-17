/*
 * XREFs of RtlLockProcessHeapOnProcessTerminate @ 0x18011008C
 * Callers:
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 * Callees:
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x1801434C8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

char RtlLockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  __int64 ProcessHeap; // rbx

  v0 = NtCurrentPeb();
  ProcessHeap = (__int64)v0->ProcessHeap;
  if ( *(_DWORD *)(ProcessHeap + 16) != -571548178 )
    return RtlLockHeap((__int64)v0->ProcessHeap);
  RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(ProcessHeap + 56), 0LL);
  return RtlpHpLockHeapForProcessCloneOrTerminate(ProcessHeap);
}
