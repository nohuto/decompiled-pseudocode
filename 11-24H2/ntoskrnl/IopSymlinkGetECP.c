/*
 * XREFs of IopSymlinkGetECP @ 0x140446838
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x140A2F13C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140A2F1E8 (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140970D40 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
