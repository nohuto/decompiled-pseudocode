/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x1409BB878
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14049B9DC (IoGetDeviceInstanceName.c)
 *     IoGetDeviceDirectory @ 0x14071CA80 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14071CF6C (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14071D268 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140720860 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1409BB8B4 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString(DestinationString);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
