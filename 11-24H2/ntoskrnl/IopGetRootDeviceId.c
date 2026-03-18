/*
 * XREFs of IopGetRootDeviceId @ 0x14071D754
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     IopGetOriginalServiceName @ 0x14071D6C8 (IopGetOriginalServiceName.c)
 */

int __fastcall IopGetRootDeviceId(PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  int result; // eax
  int v5; // edi
  unsigned __int64 Length; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  Destination->Length = 0;
  result = RtlAppendUnicodeToString(Destination, L"ROOT\\");
  v5 = result;
  if ( result >= 0 )
  {
    Length = Destination->Length;
    v7 = Destination->MaximumLength - (_DWORD)Length;
    if ( (int)IopGetOriginalServiceName((__int64)Source, (__int64)&Destination->Buffer[Length >> 1], &v7) < 0 )
      return RtlAppendUnicodeStringToString(Destination, Source);
    Destination->Length += v7 - 2;
    return v5;
  }
  return result;
}
