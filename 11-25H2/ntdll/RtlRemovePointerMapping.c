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
  unsigned __int64 Root; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock);
  Root = (unsigned __int64)RtlpPtrTree.Root;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && RtlpPtrTree.Root )
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v5 = *(_QWORD *)Root;
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v5 )
      Root ^= v5;
    else
      Root = v5;
  }
  if ( Root )
    RtlRbRemoveNode(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root);
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !Root )
    return 3221226021LL;
  *a2 = *(_QWORD *)(Root + 32);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)Root);
  return 0LL;
}
