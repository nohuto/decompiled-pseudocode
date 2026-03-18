/*
 * XREFs of IopSymlinkGetECP @ 0x14044FBB0
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x140862168 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x1408625D4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140986000 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
