/*
 * XREFs of PfpSetParameter @ 0x14073C74C
 * Callers:
 *     PfpSetBaseTime @ 0x14073C68C (PfpSetBaseTime.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     PfpParametersInitialize @ 0x140C1BC3C (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
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
