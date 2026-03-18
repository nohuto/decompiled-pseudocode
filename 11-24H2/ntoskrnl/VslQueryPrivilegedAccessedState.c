/*
 * XREFs of VslQueryPrivilegedAccessedState @ 0x1403AB140
 * Callers:
 *     MiQueryVpabAccessedState @ 0x1403AACE4 (MiQueryVpabAccessedState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslQueryPrivilegedAccessedState(char *Src, unsigned int a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // edi
  _BYTE v8[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+28h] [rbp-90h]
  _BYTE v10[96]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a3;
  memset_0(v8, 0, 0x68uLL);
  while ( a2 )
  {
    v7 = 11;
    v9 = v4;
    if ( a2 < 0xB )
      v7 = a2;
    memmove(v10, Src, 8LL * v7);
    if ( v7 < 0xB )
      *(_QWORD *)&v10[8 * v7] = 0LL;
    result = VslpEnterIumSecureMode(2u, 248LL, 0, (__int64)v8);
    if ( (int)result < 0 )
      return result;
    Src += 8 * v7;
    a2 -= v7;
  }
  return 0LL;
}
