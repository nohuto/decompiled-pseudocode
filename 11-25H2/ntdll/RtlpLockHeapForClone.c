/*
 * XREFs of RtlpLockHeapForClone @ 0x180144118
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlpIsProtectedHeap @ 0x1800027C4 (RtlpIsProtectedHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x180057970 (RtlTryEnterCriticalSection.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800BD694 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x1801434C8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlpLockHeapForClone(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _RTL_CRITICAL_SECTION *v4; // rcx
  int v5; // esi
  _RTL_SRWLOCK *v6; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
  {
    if ( *(_DWORD *)(v2 + 16) == -571548178 )
    {
      RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(v2 + 56), 0);
      RtlpHpLockHeapForProcessCloneOrTerminate((_RTL_SRWLOCK *)a1);
    }
    else if ( (*(_BYTE *)(v2 + 112) & 1) == 0 )
    {
      v4 = *(_RTL_CRITICAL_SECTION **)(v2 + 352);
      v5 = 0;
      DelayInterval.QuadPart = -250000LL;
      while ( !RtlTryEnterCriticalSection(v4) )
      {
        ZwDelayExecution(0, &DelayInterval);
        if ( (unsigned int)++v5 >= 0x64 )
          return (unsigned int)-1073741420;
        v4 = *(_RTL_CRITICAL_SECTION **)(a1 + 352);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
      {
        v6 = *(_RTL_SRWLOCK **)(a1 + 408);
        if ( v6 )
          RtlAcquireSRWLockExclusive(v6);
      }
    }
  }
  return v3;
}
