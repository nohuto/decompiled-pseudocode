/*
 * XREFs of EtwTraceForceParkTransition @ 0x14064BED4
 * Callers:
 *     KeTraceParkingRundown @ 0x1405C5874 (KeTraceParkingRundown.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceForceParkTransition(__int64 a1, char a2, char a3)
{
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v4 = 0LL;
  LODWORD(v4) = *(_DWORD *)(a1 + 36);
  BYTE4(v4) = a2;
  v5 = &v4;
  v7 = 0;
  BYTE5(v4) = a3;
  v6 = 8;
  return EtwTraceKernelEvent((int)&v5, 1, 0xA0002000, 3965, 514);
}
