/*
 * XREFs of EtwTraceWakeEvent @ 0x1406F8978
 * Callers:
 *     PspSendWakeNotification @ 0x140859738 (PspSendWakeNotification.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     PspChargeJobWakeCounter @ 0x1409AECC0 (PspChargeJobWakeCounter.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWakeEvent(__int64 a1, __int16 a2)
{
  __int64 *v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+3Ch] [rbp-1Ch]
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1;
  v3 = &v6;
  v5 = 0;
  v4 = 8;
  return EtwTraceKernelEvent((int)&v3, 1, 0x80000400, a2 + 864, 6297858);
}
