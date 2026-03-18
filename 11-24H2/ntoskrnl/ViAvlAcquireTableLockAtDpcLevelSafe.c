/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403F1260
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403F0144 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403F0328 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     DifEnumeratePluginData @ 0x140610580 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B83BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B83C24 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403F1490 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403F1694 (ViAvlAcquireTableLockAtDpcLevel.c)
 */

__int64 __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 12) & 2) != 0 && *(_QWORD *)a2 != a1 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
  if ( *(struct _KTHREAD **)(a1 + 136) != KeGetCurrentThread() )
    return ViAvlAcquireTableLockAtDpcLevel(a1, a2);
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(result + 1)) & 0xF;
  return result;
}
