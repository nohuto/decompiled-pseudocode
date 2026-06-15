/*
 * XREFs of free @ 0x18002123C
 * Callers:
 *     ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x18001F68C (--1_ATL_BASE_MODULE70@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x18001F7B0 (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
