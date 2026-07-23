/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x1800ACAD4
 * Callers:
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180020978 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800D6080 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 */

NTSTATUS __fastcall RtlUnlockProcessHeapOnProcessTerminate(unsigned __int8 a1)
{
  int v1; // edi
  _QWORD *ProcessHeap; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  void *UniqueThread; // rcx

  v1 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) == -571548178 )
  {
    v3 = ProcessHeap[7];
    RtlpHpUnlockHeapForProcessCloneOrTerminate(ProcessHeap, (unsigned int)(a1 != 0) + 1);
    RtlpReleaseDescriptorPseudoGlobalLock(v3, v1);
  }
  else if ( (*((_DWORD *)ProcessHeap + 29) & 0x1000000) == 0 )
  {
    if ( a1 )
    {
      v4 = ProcessHeap[44];
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_QWORD *)(v4 + 16) = UniqueThread;
      *(_DWORD *)(v4 + 8) = -2;
      *(_DWORD *)(v4 + 12) = 1;
    }
    RtlUnlockHeap(ProcessHeap);
  }
  return RtlpReleaseHeapListLock(v1);
}
