/*
 * XREFs of IoGetConfigurationInformation @ 0x1407080D0
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x14061C760 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C0B190 (IopCreateArcNamesDisk.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140C4C530 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C4CD70 (CimfsInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140FD7828;
}
