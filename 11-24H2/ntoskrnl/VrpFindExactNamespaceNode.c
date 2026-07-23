/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14092AEB8
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092C204 (VrpAddNamespaceNodeToList.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14092AEE0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
