/*
 * XREFs of LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F8DC4
 * Callers:
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F8D08 (LdrpInitializeSmtDelayedSleep.c)
 * Callees:
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpInitializeSmtDelayedSleepQueryRegistry(void *a1, _UNICODE_STRING *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+44h] [rbp-64h]
  int v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+4Ch] [rbp-5Ch]

  ResultLength[0] = 0;
  result = NtQueryValueKey(a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x50u, ResultLength);
  if ( result >= 0 && v7 == 4 && v8 == 4 )
    *a3 = v9;
  return result;
}
