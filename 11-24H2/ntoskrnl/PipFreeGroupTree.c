/*
 * XREFs of PipFreeGroupTree @ 0x140C227E4
 * Callers:
 *     PipFreeGroupTree @ 0x140C227E4 (PipFreeGroupTree.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140C227E4 (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
