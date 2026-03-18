/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x1403F12C4
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403F0144 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403F0328 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     DifEnumeratePluginData @ 0x140610580 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B83BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B83C24 (VfAvlEnumerateNodes.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
