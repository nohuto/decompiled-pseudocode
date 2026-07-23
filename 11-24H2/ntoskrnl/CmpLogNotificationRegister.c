/*
 * XREFs of CmpLogNotificationRegister @ 0x1407D6B24
 * Callers:
 *     CmpNotifyChangeKey @ 0x140AE6344 (CmpNotifyChangeKey.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CmpLogNotificationRegister(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  char v7; // [rsp+40h] [rbp-20h]
  char v8; // [rsp+41h] [rbp-1Fh]
  char v9; // [rsp+42h] [rbp-1Eh]
  int v10; // [rsp+43h] [rbp-1Dh]
  char v11; // [rsp+47h] [rbp-19h]
  _QWORD v12[2]; // [rsp+48h] [rbp-18h] BYREF

  v9 = a5;
  v6[0] = a1;
  v6[1] = a2;
  v7 = a3;
  v8 = a4;
  v10 = 0;
  v11 = 0;
  v12[0] = v6;
  v12[1] = 19LL;
  return EtwTraceKernelEvent((int)v12, 1, 0x42000000u, 2352, 6297858);
}
