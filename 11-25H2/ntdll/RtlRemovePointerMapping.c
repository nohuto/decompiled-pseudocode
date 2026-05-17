/*
 * XREFs of RtlRemovePointerMapping @ 0x180144A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // r9

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPtrTreeLock);
  v4 = RtlpPtrTree;
  if ( (qword_1801CF0A0 & 1) != 0 && RtlpPtrTree )
    v4 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v4 )
  {
    if ( a1 - *(_QWORD *)(v4 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v4 + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v5 = *(_QWORD *)v4;
    }
    if ( (qword_1801CF0A0 & 1) != 0 && v5 )
      v4 ^= v5;
    else
      v4 = v5;
  }
  if ( v4 )
    RtlRbRemoveNode((unsigned __int64)&RtlpPtrTree, (unsigned __int64 *)v4);
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !v4 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(v4 + 32);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v6);
  return 0LL;
}
