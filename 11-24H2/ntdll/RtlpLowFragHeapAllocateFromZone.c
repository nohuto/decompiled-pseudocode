/*
 * XREFs of RtlpLowFragHeapAllocateFromZone @ 0x1800EA9C0
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

unsigned __int64 __fastcall RtlpLowFragHeapAllocateFromZone(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int32 v5; // eax
  unsigned __int64 v6; // rbp
  __int64 Heap; // rax
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  _QWORD *v11; // r14
  _QWORD *v12; // rcx

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
    Heap = RtlAllocateHeap(*(_QWORD *)(a1 + 24), 0x800000u, 0x3F0uLL);
    v11 = (_QWORD *)Heap;
    if ( !Heap )
      return 0LL;
    *(_DWORD *)(Heap + 16) = 1;
    v6 = (Heap + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, v9, v10);
    if ( v4 == *(_QWORD *)(a1 + 8 * v3 + 3280) )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    RtlFreeHeap(*(_QWORD *)(a1 + 24), 0x800000u, (unsigned __int64)v11);
  }
  v12 = *(_QWORD **)(a1 + 16);
  if ( *v12 != a1 + 8 )
    __fastfail(3u);
  v11[1] = v12;
  *v11 = a1 + 8;
  *v12 = v11;
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 8 * v3 + 3280) = v11;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
