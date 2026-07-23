/*
 * XREFs of IopGetRootDeviceId @ 0x14071B2E4
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     IopGetOriginalServiceName @ 0x14071B258 (IopGetOriginalServiceName.c)
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
