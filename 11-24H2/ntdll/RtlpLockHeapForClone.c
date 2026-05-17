/*
 * XREFs of RtlpLockHeapForClone @ 0x180142A28
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x18002EEA0 (RtlTryEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800944B4 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpIsProtectedHeap @ 0x180097164 (RtlpIsProtectedHeap.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180141DD8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 *     ZwDelayExecution @ 0x180162310 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlpLockHeapForClone(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r8
  unsigned int v4; // ebx
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // esi
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  volatile signed __int32 *v11; // rcx
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
  {
    if ( *(_DWORD *)(v2 + 16) == -571548178 )
    {
      RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(v2 + 56), 0LL, v3);
      RtlpHpLockHeapForProcessCloneOrTerminate(a1, v5, v6);
    }
    else if ( (*(_BYTE *)(v2 + 112) & 1) == 0 )
    {
      v7 = *(_QWORD *)(v2 + 352);
      v8 = 0;
      v13 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(v7) )
      {
        ZwDelayExecution(0LL, &v13);
        if ( (unsigned int)++v8 >= 0x64 )
          return (unsigned int)-1073741420;
        v7 = *(_QWORD *)(a1 + 352);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
      {
        v11 = *(volatile signed __int32 **)(a1 + 408);
        if ( v11 )
          RtlAcquireSRWLockExclusive(v11, v9, v10);
      }
    }
  }
  return v4;
}
