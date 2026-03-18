/*
 * XREFs of VrpFindExactNamespaceNode @ 0x140928D78
 * Callers:
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     VrpDestroyNamespaceNode @ 0x140929080 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092A0C4 (VrpAddNamespaceNodeToList.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140928DA0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
