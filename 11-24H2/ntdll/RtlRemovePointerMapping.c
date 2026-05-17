/*
 * XREFs of RtlRemovePointerMapping @ 0x1801433A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180051DA0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPtrTreeLock, a2, a3);
  v5 = RtlpPtrTree;
  if ( (qword_1801CD0A0 & 1) != 0 && RtlpPtrTree )
    v5 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v5 )
  {
    if ( a1 - *(_QWORD *)(v5 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v5 + 24) <= 0 )
        break;
      v6 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v5;
    }
    if ( (qword_1801CD0A0 & 1) != 0 && v6 )
      v5 ^= v6;
    else
      v5 = v6;
  }
  if ( v5 )
    RtlRbRemoveNode((unsigned __int64)&RtlpPtrTree, (unsigned __int64 *)v5);
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !v5 )
    return 3221226021LL;
  *a2 = *(volatile signed __int32 **)(v5 + 32);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
