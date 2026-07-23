/*
 * XREFs of RtlGetNtSystemRoot @ 0x18006C630
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180038570 (RtlQueryResourcePolicy.c)
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18006BF80 (GetOverlayFilePathUsingChecksum.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D04C4 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800E2F40 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpDiskSpeedInitialize @ 0x180114640 (RtlpDiskSpeedInitialize.c)
 * Callees:
 *     <none>
 */

PWSTR RtlGetNtSystemRoot(void)
{
  _DWORD *SharedData; // rax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
