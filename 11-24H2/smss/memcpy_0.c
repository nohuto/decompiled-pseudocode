/*
 * XREFs of memcpy_0 @ 0x14001EF87
 * Callers:
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmpSaveRegistryValue_U @ 0x140008890 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureSharedSessionData @ 0x14000A3D0 (SmpConfigureSharedSessionData.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F56C (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpCheckFolderForRedirections @ 0x140013900 (SmpCheckFolderForRedirections.c)
 *     SmpConfigureEnvironment @ 0x140013BB0 (SmpConfigureEnvironment.c)
 *     SmpConfigureS0InitCmd @ 0x1400141F0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001B0E4 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001B4A0 (BasepGetVolumeGUIDFromNTName.c)
 *     InternalFindFirstFileExW @ 0x14001DDF8 (InternalFindFirstFileExW.c)
 *     NtPnpGetObjectProperty @ 0x14001E870 (NtPnpGetObjectProperty.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
