/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x1403E51B0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403E4F80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     DifEnumeratePluginData @ 0x14060EB40 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B85BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B85C24 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  volatile LONG *v4; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 16) & 0xF) == 1 )
  {
    v4 = (volatile LONG *)(a1 + 128);
    if ( (*(_BYTE *)(a2 + 12) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 136) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(v4);
    }
    *(_BYTE *)(a2 + 12) &= ~2u;
    *(_QWORD *)a2 = 0LL;
  }
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(result - 1)) & 0xF;
  return result;
}
