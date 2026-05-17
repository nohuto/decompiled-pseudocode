/*
 * XREFs of LdrRemoveDllDirectory @ 0x180110AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrRemoveDllDirectory(unsigned __int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock, a2, a3);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  word_1801CC808 += -2 - *(_WORD *)(a1 + 16);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock, v7, v8);
  v9 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v9 )
  {
    if ( (*(_QWORD *)(v9 + 80))-- != 1LL )
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
