/*
 * XREFs of CmpLogHiveInitializeEvent @ 0x1407D6870
 * Callers:
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CmpLogHiveInitializeEvent(__int64 a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int16 v8; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 *v10; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v11[8]; // [rsp+50h] [rbp-11h]
  int v12; // [rsp+90h] [rbp+2Fh]
  int v13; // [rsp+94h] [rbp+33h]
  __int64 v14; // [rsp+C8h] [rbp+67h] BYREF
  int v15; // [rsp+D0h] [rbp+6Fh] BYREF
  int v16; // [rsp+E0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a2;
  v14 = a1;
  v4 = *(_QWORD *)(a1 + 64);
  v11[0] = 8LL;
  v5 = 4;
  v9 = *(_DWORD *)(v4 + 40);
  v10 = &v14;
  v11[1] = &v15;
  v11[3] = &v16;
  v11[5] = &v9;
  v8 = 0;
  v11[2] = 4LL;
  v11[4] = 4LL;
  v11[6] = 4LL;
  if ( a3 && *((_QWORD *)a3 + 1) )
  {
    v11[7] = *((_QWORD *)a3 + 1);
    v5 = 5;
    v12 = *a3;
    v13 = 0;
  }
  v6 = 2LL * v5;
  v11[v6 - 1] = &v8;
  v11[v6] = 2LL;
  return EtwTraceKernelEvent((int)&v10, v5 + 1, 0x41000000u, 2340, 6297858);
}
