/*
 * XREFs of MiFinishChildPartitionHotAdd @ 0x14067EAA0
 * Callers:
 *     MiCompleteMemoryAddition @ 0x1407D915C (MiCompleteMemoryAddition.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiComputeCommitThresholds @ 0x1404785C4 (MiComputeCommitThresholds.c)
 *     MiDeletePartitionPageNode @ 0x14067E764 (MiDeletePartitionPageNode.c)
 *     MiMergePageNodes @ 0x14067F540 (MiMergePageNodes.c)
 *     MiMakePartitionMemoryBlock @ 0x1407EC78C (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiFinishChildPartitionHotAdd(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *i; // r14
  volatile LONG *v6; // r13
  _QWORD **v7; // rax
  __int64 v8; // r15
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  KIRQL v12; // di
  int v13; // eax
  int v14; // ebx

  v2 = (_QWORD *)*a2;
  i = 0LL;
  while ( v2 )
  {
    i = v2;
    v2 = (_QWORD *)*v2;
  }
  if ( i )
  {
    v6 = (volatile LONG *)(a1 + 200);
    do
    {
      v7 = (_QWORD **)i[1];
      v8 = (__int64)i;
      v9 = i;
      if ( v7 )
      {
        v10 = *v7;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
      RtlAvlRemoveNode(a2, v8);
      v11 = RtlNumberOfSetBitsEx((__int64 *)(v8 + 32));
      v12 = ExAcquireSpinLockExclusive(v6);
      v13 = MiMergePageNodes(a1, v8, 0LL);
      *(_QWORD *)(a1 + 18512) += v11;
      *(_BYTE *)(a1 + 12) = 1;
      v14 = v13;
      MiReleaseSpinLockExclusive(v6, v12);
      if ( v14 )
        MiDeletePartitionPageNode((PVOID *)v8);
    }
    while ( i );
  }
  MiMakePartitionMemoryBlock(a1);
  return MiComputeCommitThresholds(a1, 0);
}
