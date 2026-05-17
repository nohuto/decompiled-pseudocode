/*
 * XREFs of RtlpLowFragHeapAllocateFromZone @ 0x1800EBE10
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

unsigned __int64 __fastcall RtlpLowFragHeapAllocateFromZone(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int32 v5; // eax
  unsigned __int64 v6; // rbp
  __int64 Heap; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rcx
  __int64 v11; // r9

  v3 = 6LL * a2;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 3280);
    if ( v4 )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 1u);
      if ( v5 < 0xF )
        return v4 + ((unsigned __int64)v5 << 6) + 32;
    }
    Heap = RtlAllocateHeap(*(char **)(a1 + 24), 0x800000u, 0x3F0uLL);
    v9 = (_QWORD *)Heap;
    if ( !Heap )
      return 0LL;
    *(_DWORD *)(Heap + 16) = 1;
    v6 = (Heap + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    if ( v4 == *(_QWORD *)(a1 + 8 * v3 + 3280) )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    RtlFreeHeap(*(_QWORD *)(a1 + 24), 0x800000u, (__int64)v9, v11);
  }
  v10 = *(_QWORD **)(a1 + 16);
  if ( *v10 != a1 + 8 )
    __fastfail(3u);
  v9[1] = v10;
  *v9 = a1 + 8;
  *v10 = v9;
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 8 * v3 + 3280) = v9;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
