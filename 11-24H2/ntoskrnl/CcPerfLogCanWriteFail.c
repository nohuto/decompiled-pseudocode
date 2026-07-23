/*
 * XREFs of CcPerfLogCanWriteFail @ 0x14057AEFC
 * Callers:
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogCanWriteFail(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD v5[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v8 = 0;
  if ( a1 )
    v6[0] = *(_QWORD *)(a1 + 24);
  else
    v6[0] = 0LL;
  v7 = a2;
  v6[1] = a3;
  v6[2] = a4;
  v5[0] = v6;
  v5[1] = 32LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x80020000, 5638, 5249282);
}
