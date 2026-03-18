/*
 * XREFs of MiComparePageFileMemoryExtents @ 0x14068E304
 * Callers:
 *     MiFindPageFileMemoryExtent @ 0x14068E68C (MiFindPageFileMemoryExtent.c)
 *     MiInsertPageFileMemoryExtents @ 0x14068E7E8 (MiInsertPageFileMemoryExtents.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComparePageFileMemoryExtents(_DWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_DWORD *)(a2 + 28) )
    return (unsigned int)-(*a1 < *(_DWORD *)(a2 + 24));
  else
    return 1LL;
}
