/*
 * XREFs of EtwTraceEnterVtl1 @ 0x14049EA1C
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceEnterVtl1(__int16 a1, __int16 a2)
{
  _WORD v3[4]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v6 = 0;
  v3[1] = a2;
  v3[0] = a1;
  v4 = v3;
  v5 = 4;
  return EtwTraceKernelEvent((int)&v4, 1, 0xA0000008, 1353, 5249282);
}
