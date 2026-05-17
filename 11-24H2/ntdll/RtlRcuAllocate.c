/*
 * XREFs of RtlRcuAllocate @ 0x180147B30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlRcuAllocate(int a1)
{
  void *result; // rax
  __int64 v3; // rbx
  volatile signed __int32 **v4; // rdx
  unsigned __int64 v5; // r8
  __int64 **v6; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v3 = (__int64)result;
  if ( result )
  {
    memset_thunk_772440563353939046(result, 0, 0x88uLL);
    *(_DWORD *)(v3 + 128) = a1;
    *(_QWORD *)(v3 + 16) = 1LL;
    _InterlockedOr(v7, 0);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D3C70, v4, v5);
    if ( RtlpRcuState )
    {
      v6 = (__int64 **)qword_1801D3C68;
    }
    else
    {
      v6 = (__int64 **)&RtlpRcuState;
      qword_1801D3C68 = (__int64)&RtlpRcuState;
      RtlpRcuState = (__int64)&RtlpRcuState;
    }
    if ( *v6 != &RtlpRcuState )
      __fastfail(3u);
    *(_QWORD *)v3 = &RtlpRcuState;
    *(_QWORD *)(v3 + 8) = v6;
    *v6 = (__int64 *)v3;
    qword_1801D3C68 = v3;
    RtlReleaseSRWLockExclusive(&qword_1801D3C70);
    return (void *)v3;
  }
  return result;
}
