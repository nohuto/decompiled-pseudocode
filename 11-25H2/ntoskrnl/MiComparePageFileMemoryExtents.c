/*
 * XREFs of MiComparePageFileMemoryExtents @ 0x140682A74
 * Callers:
 *     MiFindPageFileMemoryExtent @ 0x140682DFC (MiFindPageFileMemoryExtent.c)
 *     MiInsertPageFileMemoryExtents @ 0x140682F58 (MiInsertPageFileMemoryExtents.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407EDFFC (MiCreatePagefileMemoryExtents.c)
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
