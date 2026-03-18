/*
 * XREFs of MiLogRemoveWsleEvent @ 0x1404CC120
 * Callers:
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogRemoveWsleEvent(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( a2 )
    v2 |= 2uLL;
  v7 = 0;
  v4 = v2;
  v5 = &v4;
  v6 = 8;
  return EtwTraceKernelEvent((int)&v5, 1, 0x28000000u, 643, 290462466);
}
