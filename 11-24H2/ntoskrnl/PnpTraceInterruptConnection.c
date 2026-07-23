/*
 * XREFs of PnpTraceInterruptConnection @ 0x1409C07A0
 * Callers:
 *     IoDisconnectInterrupt @ 0x1409C05D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PnpTraceInterruptConnection(char a1)
{
  char v1; // al
  char v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v5[32]; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  char *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  __int64 *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140E06FA8 > 5 )
  {
    if ( (qword_140E06FB8 & 0x400000000000LL) == 0 || (v1 = 1, (qword_140E06FC0 & 0x400000000000LL) != qword_140E06FC0) )
      v1 = 0;
    if ( v1 )
    {
      v2 = a1;
      v6 = &v3;
      v3 = 1LL;
      v8 = &v2;
      v7 = 8LL;
      v10 = &v4;
      v9 = 1LL;
      v4 = 0x1000000LL;
      v11 = 8LL;
      tlgWriteAgg((__int64)&dword_140E06FA8, (unsigned __int8 *)byte_140046F3D, 0LL, 5u, (__int64)v5);
    }
  }
}
