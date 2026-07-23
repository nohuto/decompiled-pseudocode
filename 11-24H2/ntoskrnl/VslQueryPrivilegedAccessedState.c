/*
 * XREFs of VslQueryPrivilegedAccessedState @ 0x140399854
 * Callers:
 *     MiQueryVpabAccessedState @ 0x1403994CC (MiQueryVpabAccessedState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslQueryPrivilegedAccessedState(char *Src, unsigned int a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  _BYTE v11[96]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a3;
  memset_0(v9, 0, 0x68uLL);
  while ( a2 )
  {
    v7 = 11;
    v10 = v4;
    if ( a2 < 0xB )
      v7 = a2;
    memmove(v11, Src, 8LL * v7);
    if ( v7 < 0xB )
      *(_QWORD *)&v11[8 * v7] = 0LL;
    LOBYTE(v8) = 2;
    result = VslpEnterIumSecureMode(v8, 248LL, 0LL, v9);
    if ( (int)result < 0 )
      return result;
    Src += 8 * v7;
    a2 -= v7;
  }
  return 0LL;
}
