/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x14096AEA0
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1404A1948 (IoGetDeviceInstanceName.c)
 *     IoGetDeviceDirectory @ 0x140712DF0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x1407132DC (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1407135D8 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140716BD0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x14096AEDC (IopAllocateUnicodeString.c)
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
