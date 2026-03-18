/*
 * XREFs of IopSymlinkRemoveECP @ 0x14043FFF0
 * Callers:
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408EFBD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1409A7080 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
