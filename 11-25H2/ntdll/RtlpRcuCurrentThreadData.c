/*
 * XREFs of RtlpRcuCurrentThreadData @ 0x1801493F8
 * Callers:
 *     RtlRcuReadLock @ 0x180149260 (RtlRcuReadLock.c)
 *     RtlRcuSynchronize @ 0x180149330 (RtlRcuSynchronize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int *v16; // rdi
  signed __int64 v17; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  size_t Size; // [rsp+88h] [rbp+20h]

  v2 = NtCurrentTeb();
  v5 = v2->Rcu[0];
  v6 = v2->Rcu[1];
  if ( !v5 )
  {
    if ( !a2 )
      return 0LL;
    v20 = 0LL;
    v19 = 0LL;
    if ( (int)ZwQueryInformationThread(-2LL, 59LL, &v20) < 0 )
      return 0LL;
    v5 = v20;
    v6 = HIDWORD(v20);
    v2->Rcu[0] = v20;
    v2->Rcu[1] = v6;
  }
  v7 = v5 % 0xA;
  result = *(_QWORD *)(a1 + 8 * v7 + 40);
  if ( result && v5 == *(_DWORD *)(result + 12) )
    goto LABEL_20;
  for ( i = (volatile signed __int64 *)(a1 + 24); ; i = (volatile signed __int64 *)&v16[2 * v15] )
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
      Heap = (int *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, Size);
      v13 = Heap;
      if ( !Heap )
        return 0LL;
      memset_thunk_772440563353939046(Heap, 0, Size);
      *v13 = v11;
      _InterlockedOr(v18, 0);
      v10 = (unsigned int *)_InterlockedCompareExchange64(i, (signed __int64)v13, 0LL);
      if ( v10 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v13, v14);
      else
        v10 = (unsigned int *)v13;
    }
    v15 = *v10;
    v16 = v10 + 2;
    if ( v5 < (unsigned int)v15 )
      break;
    v5 -= v15;
  }
  _mm_lfence();
  result = *(_QWORD *)&v16[2 * v5];
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
  result = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
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
    v17 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(result + 24) = v17;
    _InterlockedOr(v18, 0);
  }
  while ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), result, v17) );
  _InterlockedExchange64((volatile __int64 *)&v16[2 * v5], result);
  *(_QWORD *)(a1 + 8 * v7 + 40) = result;
  return result;
}
