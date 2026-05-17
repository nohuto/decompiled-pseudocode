/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x1800EDFB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800EE0C8 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolStackInformation @ 0x1800EE120 (TpSetPoolStackInformation.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  _QWORD *Heap; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-18h]
  char v9; // [rsp+40h] [rbp+8h]

  v9 = 0;
  v8 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpGlobalPoolLock, a2, a3);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 0x10uLL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v5 = a1[1];
      if ( Heap[1] < v5 )
      {
        Heap[1] = v5;
        v9 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v9 = 1;
      }
    }
    else
    {
      v8 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v8 >= 0 && v9 )
  {
    v6 = TpPoolReferenceExistingGlobalPool();
    if ( v6 )
    {
      v8 = TpSetPoolStackInformation(v6);
      TppPoolpDereferenceGlobalPool(
        (const void **)&TppPoolpGlobalPool,
        (volatile signed __int32 *)&TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v8;
}
