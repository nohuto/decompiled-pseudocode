/*
 * XREFs of SmpQueryDwordFromRegistry @ 0x14001262C
 * Callers:
 *     SmpPagefileInitialize @ 0x140011310 (SmpPagefileInitialize.c)
 *     SmpGetCrashParameters @ 0x14001227C (SmpGetCrashParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpQueryDwordFromRegistry(__int64 a1, struct _UNICODE_STRING *a2, int a3, _DWORD *a4)
{
  ULONG ResultLength[4]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-228h] BYREF
  int v9; // [rsp+44h] [rbp-224h]
  int v10; // [rsp+4Ch] [rbp-21Ch]

  ResultLength[0] = 528;
  if ( NtQueryValueKey(SmpCrashDumpKey, a2, KeyValuePartialInformation, KeyValueInformation, 0x210u, ResultLength) >= 0
    && v9 == 4 )
  {
    a3 = v10;
  }
  *a4 = a3;
  return 0LL;
}
