/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x180142ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  unsigned __int64 Heap; // rdi
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  bool v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPtrTreeLock, v9, v10);
  v11 = RtlpPtrTree;
  if ( (qword_1801CD0A0 & 1) != 0 )
  {
    if ( !RtlpPtrTree )
    {
      v12 = 0;
      goto LABEL_8;
    }
    v11 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  }
  v12 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( a1 - *(_QWORD *)(v11 + 24) >= 0 )
      {
        if ( a1 - *(_QWORD *)(v11 + 24) <= 0 )
        {
          v16 = *(_QWORD *)(v11 + 32);
          if ( !a3 || v16 == *a3 )
            *(_QWORD *)(v11 + 32) = a2;
          v14 = 0x40000000;
LABEL_24:
          if ( a4 )
            *a4 = v16;
          goto LABEL_26;
        }
        v15 = *(_QWORD *)(v11 + 8);
        if ( !v15 || (v13 = v11 ^ v15) == 0 )
        {
          v12 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)v11 )
          break;
        v13 = v11 ^ *(_QWORD *)v11;
        if ( !v13 )
          break;
      }
      v11 = v13;
    }
  }
LABEL_8:
  if ( Heap )
  {
    *(_QWORD *)(Heap + 24) = a1;
    *(_QWORD *)(Heap + 32) = a2;
    RtlRbInsertNodeEx((unsigned __int64)&RtlpPtrTree, v11, v12, Heap);
    if ( a3 )
      v16 = *a3;
    else
      v16 = 0LL;
    Heap = 0LL;
    v14 = 0;
    goto LABEL_24;
  }
  v14 = -1073741670;
LABEL_26:
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v14;
}
