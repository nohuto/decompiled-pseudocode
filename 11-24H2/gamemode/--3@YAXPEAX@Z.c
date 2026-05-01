/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180002CD8
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x180002604 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180002610 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
