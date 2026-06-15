/*
 * XREFs of free @ 0x1800A8B4C
 * Callers:
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x1800889F4 (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x1800A2628 (--1_ATL_BASE_MODULE70@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
