/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x1800416F0
 * Callers:
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x18003FEF0 (RtlUnlockHeap.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180040048 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800422B0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 */

char __fastcall RtlUnlockProcessHeapOnProcessTerminate(unsigned __int8 a1)
{
  struct _PEB *v1; // rax
  int v2; // edi
  __int64 ProcessHeap; // r8
  __int64 v4; // rdx
  void *UniqueThread; // rcx
  __int64 v6; // rbx

  v1 = NtCurrentPeb();
  v2 = a1;
  ProcessHeap = (__int64)v1->ProcessHeap;
  if ( *(_DWORD *)(ProcessHeap + 16) == -571548178 )
  {
    v6 = *(_QWORD *)(ProcessHeap + 56);
    RtlpHpUnlockHeapForProcessCloneOrTerminate(ProcessHeap, (unsigned int)(a1 != 0) + 1);
    LOBYTE(v1) = (unsigned __int8)RtlpReleaseDescriptorPseudoGlobalLock(v6, v2);
  }
  else if ( (*(_DWORD *)(ProcessHeap + 116) & 0x1000000) == 0 )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(ProcessHeap + 352);
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_QWORD *)(v4 + 16) = UniqueThread;
      *(_DWORD *)(v4 + 8) = -2;
      *(_DWORD *)(v4 + 12) = 1;
    }
    LOBYTE(v1) = RtlUnlockHeap(ProcessHeap);
  }
  return (char)v1;
}
