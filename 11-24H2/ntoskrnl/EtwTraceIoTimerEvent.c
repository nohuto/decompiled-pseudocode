/*
 * XREFs of EtwTraceIoTimerEvent @ 0x14064BFD4
 * Callers:
 *     IopDisableTimer @ 0x140593020 (IopDisableTimer.c)
 *     IopEnableTimer @ 0x140593260 (IopEnableTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceIoTimerEvent(__int16 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[1] = a3;
  v5 = v4;
  v7 = 0;
  v4[0] = a2;
  v6 = 16;
  return EtwTraceKernelEvent((int)&v5, 1, 0x40800000u, a1, 6297602);
}
