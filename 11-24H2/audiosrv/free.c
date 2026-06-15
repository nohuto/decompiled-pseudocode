/*
 * XREFs of free @ 0x1800A4E3C
 * Callers:
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x180075EF4 (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x18009EB88 (--1_ATL_BASE_MODULE70@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
