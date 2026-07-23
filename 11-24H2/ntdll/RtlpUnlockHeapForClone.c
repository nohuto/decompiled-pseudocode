/*
 * XREFs of RtlpUnlockHeapForClone @ 0x180140FBC
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x18013FB40 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x18013FE80 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180020978 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpIsProtectedHeap @ 0x18002B7C4 (RtlpIsProtectedHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800D6080 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 */

void __fastcall RtlpUnlockHeapForClone(__int64 a1, int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rbx
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rdx

  if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
  {
    if ( *(_DWORD *)(v5 + 16) == -571548178 )
    {
      v6 = *(_QWORD *)(v5 + 56);
      RtlpHpUnlockHeapForProcessCloneOrTerminate((_RTL_SRWLOCK *)v5, v4 != 0 ? 3 : 1);
      RtlpReleaseDescriptorPseudoGlobalLock(v6, a2);
    }
    else if ( (*(_BYTE *)(v5 + 112) & 1) == 0 )
    {
      if ( *(_BYTE *)(v5 + 418) == 2 )
      {
        v7 = *(_RTL_SRWLOCK **)(v5 + 408);
        if ( v7 )
        {
          if ( a2 )
            v7->Value = 1LL;
          RtlReleaseSRWLockExclusive(v7);
        }
      }
      if ( a2 )
      {
        v8 = *(_QWORD *)(a1 + 352);
        *(_WORD *)(a1 + 416) = 0;
        *(_QWORD *)(v8 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
        *(_DWORD *)(v8 + 8) = -2;
        *(_DWORD *)(v8 + 12) = 1;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    }
  }
}
