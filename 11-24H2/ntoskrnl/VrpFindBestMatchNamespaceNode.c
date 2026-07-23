/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x14092B39C
 * Callers:
 *     VrpCreateNamespaceNode @ 0x14092BCA8 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14092AEE0 (VrpFindNamespaceNode.c)
 */

unsigned __int16 *__fastcall VrpFindBestMatchNamespaceNode(
        unsigned __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0LL, a3);
}
