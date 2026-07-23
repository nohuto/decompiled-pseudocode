/*
 * XREFs of KsepRegistryQueryDWORD @ 0x14073E998
 * Callers:
 *     KsepEngineReadFlags @ 0x140C2E280 (KsepEngineReadFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall KsepRegistryQueryDWORD(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-50h] BYREF
  int v12; // [rsp+4Ch] [rbp-4Ch]
  int v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+54h] [rbp-44h]

  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = -1073740768;
    KsepHistoryErrors[2 * v6] = 262790;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x286u, 0LL);
  }
  if ( !a3 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = -1073740768;
    KsepHistoryErrors[2 * v7] = 262791;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Value != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x287u, 0LL);
  }
  *a3 = 0;
  ResultLength = 20;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( !result )
  {
    if ( v13 == 4 && v12 == 4 )
      *a3 = v14;
    else
      return -1073741788;
  }
  return result;
}
