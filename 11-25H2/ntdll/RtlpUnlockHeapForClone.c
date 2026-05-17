/*
 * XREFs of RtlpUnlockHeapForClone @ 0x1801442FC
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x180143390 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpIsProtectedHeap @ 0x1800027C4 (RtlpIsProtectedHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180093A38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x180095CA0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 */

void *__fastcall RtlpUnlockHeapForClone(__int64 a1, int a2)
{
  void *result; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rbx
  volatile signed __int64 *v8; // rcx
  __int64 v9; // rdx

  result = (void *)RtlpIsProtectedHeap(a1);
  if ( !(_DWORD)result )
  {
    if ( *(_DWORD *)(v6 + 16) == -571548178 )
    {
      v7 = *(_QWORD *)(v6 + 56);
      RtlpHpUnlockHeapForProcessCloneOrTerminate(v6, v5 != 0 ? 3 : 1);
      return RtlpReleaseDescriptorPseudoGlobalLock(v7, a2);
    }
    else if ( (*(_BYTE *)(v6 + 112) & 1) == 0 )
    {
      if ( *(_BYTE *)(v6 + 418) == 2 )
      {
        v8 = *(volatile signed __int64 **)(v6 + 408);
        if ( v8 )
        {
          if ( a2 )
            *v8 = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
      }
      if ( a2 )
      {
        v9 = *(_QWORD *)(a1 + 352);
        *(_WORD *)(a1 + 416) = 0;
        *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
        *(_DWORD *)(v9 + 8) = -2;
        *(_DWORD *)(v9 + 12) = 1;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
      return (void *)RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    }
  }
  return result;
}
