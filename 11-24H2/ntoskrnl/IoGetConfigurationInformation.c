/*
 * XREFs of IoGetConfigurationInformation @ 0x1407141D0
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x140628720 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C1C364 (IopCreateArcNamesDisk.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140C5D8B0 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C5E0F0 (CimfsInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140FD7828;
}
