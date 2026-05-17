/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x1800F0E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18003E034 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     TpSetPoolStackInformation @ 0x1800F0F30 (TpSetPoolStackInformation.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1)
{
  _QWORD *Heap; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+40h] [rbp+8h]

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpGlobalPoolLock);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 0x10uLL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v3 = a1[1];
      if ( Heap[1] < v3 )
      {
        Heap[1] = v3;
        v7 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v7 = 1;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v6 >= 0 && v7 )
  {
    v4 = TpPoolReferenceExistingGlobalPool();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4);
      TppPoolpDereferenceGlobalPool(
        (const void **)&TppPoolpGlobalPool,
        (volatile signed __int32 *)&TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v6;
}
