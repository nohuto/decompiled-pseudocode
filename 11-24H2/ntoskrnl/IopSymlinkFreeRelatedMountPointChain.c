/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1408AB168
 * Callers:
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408AAEC0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     IopSymlinkCleanupECP @ 0x1408ABC30 (IopSymlinkCleanupECP.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopSymlinkFreeRelatedMountPointChain(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
