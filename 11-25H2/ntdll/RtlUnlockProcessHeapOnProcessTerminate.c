/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x1800950E0
 * Callers:
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x1800938E0 (RtlUnlockHeap.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180093A38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x180095CA0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 */

void __fastcall RtlUnlockProcessHeapOnProcessTerminate(unsigned __int8 a1)
{
  int v1; // edi
  _QWORD *ProcessHeap; // r8
  __int64 v3; // rdx
  void *UniqueThread; // rcx
  __int64 v5; // rbx

  v1 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) == -571548178 )
  {
    v5 = ProcessHeap[7];
    RtlpHpUnlockHeapForProcessCloneOrTerminate(ProcessHeap, (unsigned int)(a1 != 0) + 1);
    RtlpReleaseDescriptorPseudoGlobalLock(v5, v1);
  }
  else if ( (*((_DWORD *)ProcessHeap + 29) & 0x1000000) == 0 )
  {
    if ( a1 )
    {
      v3 = ProcessHeap[44];
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      *(_QWORD *)(v3 + 24) = 0LL;
      *(_QWORD *)(v3 + 16) = UniqueThread;
      *(_DWORD *)(v3 + 8) = -2;
      *(_DWORD *)(v3 + 12) = 1;
    }
    RtlUnlockHeap(ProcessHeap);
  }
}
