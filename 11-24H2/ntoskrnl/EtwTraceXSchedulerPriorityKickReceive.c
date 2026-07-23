/*
 * XREFs of EtwTraceXSchedulerPriorityKickReceive @ 0x14064C968
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceXSchedulerPriorityKickReceive(__int64 a1, int a2)
{
  int v2; // eax
  _DWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v2 = *(_DWORD *)(a1 + 1296);
  v7 = 0;
  v4[0] = v2;
  v4[1] = a2;
  v5 = v4;
  v6 = 8;
  return EtwTraceKernelEvent((int)&v5, 1, 0xA0000020, 3956, 514);
}
