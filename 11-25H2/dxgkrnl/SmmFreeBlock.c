/*
 * XREFs of SmmFreeBlock @ 0x140092F10
 * Callers:
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x14027FBE0 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall SmmFreeBlock(__int64 a1, void *a2)
{
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
}
