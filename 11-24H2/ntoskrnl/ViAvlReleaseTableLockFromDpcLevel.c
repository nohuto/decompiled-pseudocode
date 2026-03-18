/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x1403F1490
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403F0144 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403F0328 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403F1260 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     DifEnumeratePluginData @ 0x140610580 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B83BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B83C24 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
