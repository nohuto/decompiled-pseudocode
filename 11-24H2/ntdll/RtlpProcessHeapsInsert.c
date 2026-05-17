/*
 * XREFs of RtlpProcessHeapsInsert @ 0x1800A8C18
 * Callers:
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpProcessHeapsInsert(__int64 a1, char a2)
{
  unsigned int v2; // esi
  void *ProcessHeap; // r14
  __int64 Heap; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  struct _PEB *v9; // rdx

  v2 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( !ProcessHeap )
    ProcessHeap = (void *)a1;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 8u, 0x30uLL);
  v7 = (_QWORD *)Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 16) = a1;
    *(_DWORD *)(Heap + 24) = a2 & 3;
    *(_QWORD *)(Heap + 40) = 0LL;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_QWORD *)(a1 + 56) = v7;
    else
      *(_QWORD *)(a1 + 392) = v7;
    v8 = (_QWORD *)qword_1801D3F88;
    if ( *(__int64 **)qword_1801D3F88 != &RtlpProcessHeaps )
      __fastfail(3u);
    *v7 = &RtlpProcessHeaps;
    v7[1] = v8;
    *v8 = v7;
    qword_1801D3F88 = (__int64)v7;
    if ( ProcessHeap == (void *)a1 )
    {
      v9 = NtCurrentPeb();
      v9->NumberOfHeaps = 1;
      *v9->ProcessHeaps = (void *)a1;
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
