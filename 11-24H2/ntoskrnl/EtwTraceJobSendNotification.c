/*
 * XREFs of EtwTraceJobSendNotification @ 0x140861A44
 * Callers:
 *     PspSendReliableJobNotification @ 0x140861974 (PspSendReliableJobNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceJobSendNotification(__int64 a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+44h] [rbp-24h]
  _QWORD v7[2]; // [rsp+48h] [rbp-20h] BYREF

  v4 = 0uLL;
  if ( a1 )
  {
    v2 = *(_OWORD *)(a1 + 1472);
    v5 = *(_DWORD *)(a1 + 1468);
    v4 = v2;
  }
  else
  {
    v5 = 0;
  }
  v6 = a2;
  v7[0] = &v4;
  v7[1] = 24LL;
  return EtwTraceKernelEvent((int)v7, 1, 0x80000u, 1834, 6297860);
}
