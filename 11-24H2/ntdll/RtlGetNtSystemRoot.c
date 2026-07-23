/*
 * XREFs of RtlGetNtSystemRoot @ 0x18007F510
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     LdrpGetModuleName @ 0x18007D870 (LdrpGetModuleName.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18007EE60 (GetOverlayFilePathUsingChecksum.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800ACC7C (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlQueryResourcePolicy @ 0x18010B000 (RtlQueryResourcePolicy.c)
 *     RtlpDiskSpeedInitialize @ 0x18010C950 (RtlpDiskSpeedInitialize.c)
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
