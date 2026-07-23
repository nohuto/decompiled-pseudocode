/*
 * XREFs of PpmEventExitIdleState @ 0x14048F314
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventExitIdleState(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v6 = 0;
    v3[0] = a1;
    v3[1] = a2;
    v4 = v3;
    v5 = 8;
    return EtwTraceKernelEvent((int)&v4, 1, 0x40008000u, 4666, 1538);
  }
  return result;
}
