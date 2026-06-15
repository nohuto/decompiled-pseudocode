/*
 * XREFs of free @ 0x14005A06C
 * Callers:
 *     ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x140057A10 (--1_ATL_BASE_MODULE70@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x140057DF0 (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140058CD8 (--3@YAXPEAX@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140074558 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x14008A748 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
