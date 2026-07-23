/*
 * XREFs of EtwTraceWorkloadClassUpdate @ 0x14064C8E8
 * Callers:
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     KeTraceHgsPlusRundown @ 0x1405BF858 (KeTraceHgsPlusRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWorkloadClassUpdate(__int64 a1, char a2, __int16 a3)
{
  int v4; // [rsp+30h] [rbp-28h] BYREF
  __int16 v5; // [rsp+34h] [rbp-24h]
  char v6; // [rsp+36h] [rbp-22h]
  char v7; // [rsp+37h] [rbp-21h]
  int *v8; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]

  v4 = *(_DWORD *)(a1 + 1296);
  v6 = a2;
  v8 = &v4;
  v10 = 0;
  v5 = a3;
  v7 = 0;
  v9 = 8;
  return EtwTraceKernelEvent((int)&v8, 1, 0xA0000100, 3961, 514);
}
