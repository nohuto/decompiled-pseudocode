/*
 * XREFs of IopSymlinkGetECP @ 0x1404513D8
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x14099D29C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x14099D708 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140988560 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
