/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1408EFE78
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1408625D4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408EFA70 (FsRtlFreeExtraCreateParameterList.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408EFBD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkCleanupECP @ 0x140A55980 (IopSymlinkCleanupECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
