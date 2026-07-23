/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x1403E4FE4
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     DifEnumeratePluginData @ 0x14060EB40 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B85BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B85C24 (VfAvlEnumerateNodes.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ViAvlRaiseIrqlSafe(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di

  v1 = a1;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      result = KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    *(_BYTE *)(v1 + 12) |= 1u;
    *(_BYTE *)(v1 + 8) = CurrentIrql;
  }
  return result;
}
