/*
 * XREFs of IopSymlinkRemoveECP @ 0x14043FFB0
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408A2820 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1409A75C0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
