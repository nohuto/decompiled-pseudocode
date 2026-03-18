/*
 * XREFs of BiDoesHiveExist @ 0x1409C2478
 * Callers:
 *     BiLoadHive @ 0x1409C2190 (BiLoadHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1406A6BB0 (ZwQueryAttributesFile.c)
 */

bool __fastcall BiDoesHiveExist(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-19h] BYREF
  _DWORD v3[2]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v4; // [rsp+38h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp+7h]
  int v6; // [rsp+48h] [rbp+Fh]
  int v7; // [rsp+4Ch] [rbp+13h]
  __int128 v8; // [rsp+50h] [rbp+17h]
  _OWORD v9[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v10; // [rsp+80h] [rbp+47h]

  v7 = 0;
  v3[1] = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 12));
  v4 = 0LL;
  p_DestinationString = &DestinationString;
  v3[0] = 48;
  v6 = 576;
  v8 = 0LL;
  return (int)ZwQueryAttributesFile((__int64)v3, (__int64)v9) >= 0 && (v10 & 0x10) == 0;
}
