/*
 * XREFs of ?Free@TokenQueueTableEntry@CTokenManager@@SAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1400124B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall CTokenManager::TokenQueueTableEntry::Free(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Buffer);
}
