/*
 * XREFs of RtlGetNtSystemRoot @ 0x1800B2C70
 * Callers:
 *     AVrfpLoadAndInitializeProvider @ 0x180064DAC (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C00 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlQueryResourcePolicy @ 0x1800A9730 (RtlQueryResourcePolicy.c)
 *     LdrpGetModuleName @ 0x1800B0FD0 (LdrpGetModuleName.c)
 *     GetOverlayFilePathUsingChecksum @ 0x1800B25C0 (GetOverlayFilePathUsingChecksum.c)
 *     RtlpDiskSpeedInitialize @ 0x180111540 (RtlpDiskSpeedInitialize.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtSystemRoot()
{
  _DWORD *SharedData; // rax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return (__int64)NtCurrentPeb()->SharedData + 30;
  else
    return 2147352624LL;
}
