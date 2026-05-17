/*
 * XREFs of RtlpRcuCurrentThreadData @ 0x180147E48
 * Callers:
 *     RtlRcuReadLock @ 0x180147CB0 (RtlRcuReadLock.c)
 *     RtlRcuSynchronize @ 0x180147D80 (RtlRcuSynchronize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

signed __int64 __fastcall RtlpRcuCurrentThreadData(__int64 a1, int a2)
{
  struct _TEB *v2; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // r13
  signed __int64 result; // rax
  volatile signed __int64 *i; // rbp
  unsigned int *v10; // rdi
  int v11; // edi
  int *Heap; // rax
  int *v13; // r15
  __int64 v14; // rax
  unsigned int *v15; // rdi
  signed __int64 v16; // rcx
  signed __int32 v17[26]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  size_t Size; // [rsp+88h] [rbp+20h]

  v2 = NtCurrentTeb();
  v5 = v2->Rcu[0];
  v6 = v2->Rcu[1];
  if ( !v5 )
  {
    if ( !a2 )
      return 0LL;
    v18 = 0LL;
    if ( (int)ZwQueryInformationThread(-2LL, 59LL, &v18, 8LL, 0LL) < 0 )
      return 0LL;
    v5 = v18;
    v6 = HIDWORD(v18);
    v2->Rcu[0] = v18;
    v2->Rcu[1] = v6;
  }
  v7 = v5 % 0xA;
  result = *(_QWORD *)(a1 + 8 * v7 + 40);
  if ( result && v5 == *(_DWORD *)(result + 12) )
    goto LABEL_20;
  for ( i = (volatile signed __int64 *)(a1 + 24); ; i = (volatile signed __int64 *)&v15[2 * v14] )
  {
    v10 = (unsigned int *)*i;
    if ( !*i )
    {
      if ( !a2 )
        return 0LL;
      v11 = 20;
      if ( v5 >= 0x14 )
        v11 = v5 + 1;
      Size = 8LL * (unsigned int)(v11 + 2);
      Heap = (int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Size);
      v13 = Heap;
      if ( !Heap )
        return 0LL;
      memset_thunk_772440563353939046(Heap, 0, Size);
      *v13 = v11;
      _InterlockedOr(v17, 0);
      v10 = (unsigned int *)_InterlockedCompareExchange64(i, (signed __int64)v13, 0LL);
      if ( v10 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v13);
      else
        v10 = (unsigned int *)v13;
    }
    v14 = *v10;
    v15 = v10 + 2;
    if ( v5 < (unsigned int)v14 )
      break;
    v5 -= v14;
  }
  _mm_lfence();
  result = *(_QWORD *)&v15[2 * v5];
  if ( result )
  {
    *(_QWORD *)(a1 + 8 * v7 + 40) = result;
LABEL_20:
    if ( *(_DWORD *)(result + 8) != v6 )
      *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16) | 1LL;
    return result;
  }
  if ( !a2 )
    return 0LL;
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_DWORD *)(result + 8) = v6;
  *(_DWORD *)(result + 12) = v5;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16) | 1LL;
  do
  {
    _m_prefetchw((const void *)(a1 + 32));
    v16 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(result + 24) = v16;
    _InterlockedOr(v17, 0);
  }
  while ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), result, v16) );
  _InterlockedExchange64((volatile __int64 *)&v15[2 * v5], result);
  *(_QWORD *)(a1 + 8 * v7 + 40) = result;
  return result;
}
