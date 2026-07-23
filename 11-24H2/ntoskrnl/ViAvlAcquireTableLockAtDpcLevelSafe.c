/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403E4F80
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     DifEnumeratePluginData @ 0x14060EB40 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B85BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B85C24 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403E51B0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403E53B4 (ViAvlAcquireTableLockAtDpcLevel.c)
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
