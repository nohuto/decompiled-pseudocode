/*
 * XREFs of LdrRemoveDllDirectory @ 0x180113960
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrRemoveDllDirectory(__int64 a1)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r9

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock);
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  word_1801CE808 += -2 - *(_WORD *)(a1 + 16);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock);
  v5 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v5 )
  {
    if ( (*(_QWORD *)(v5 + 80))-- != 1LL )
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v6);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, v6);
  return 0LL;
}
