/*
 * XREFs of LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F7164
 * Callers:
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F70A8 (LdrpInitializeSmtDelayedSleep.c)
 * Callees:
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpInitializeSmtDelayedSleepQueryRegistry(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  _DWORD v5[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v6[4]; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+44h] [rbp-64h]
  int v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+4Ch] [rbp-5Ch]

  v5[0] = 0;
  result = NtQueryValueKey(a1, a2, 2LL, v6, 80, v5);
  if ( (int)result >= 0 && v7 == 4 && v8 == 4 )
    *a3 = v9;
  return result;
}
