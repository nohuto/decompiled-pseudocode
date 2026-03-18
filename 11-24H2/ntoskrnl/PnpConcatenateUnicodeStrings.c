/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140A0D474
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1404A117C (IoGetDeviceInstanceName.c)
 *     IoGetDeviceDirectory @ 0x14071EEF0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14071F3DC (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14071F6D8 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140722CD0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140A0D4B0 (IopAllocateUnicodeString.c)
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
