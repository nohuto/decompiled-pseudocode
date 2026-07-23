/*
 * XREFs of PfpSetParameter @ 0x140746A4C
 * Callers:
 *     PfpSetBaseTime @ 0x14074698C (PfpSetBaseTime.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfpParametersInitialize @ 0x140C2EE60 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
