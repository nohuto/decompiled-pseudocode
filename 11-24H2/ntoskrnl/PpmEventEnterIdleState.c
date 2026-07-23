/*
 * XREFs of PpmEventEnterIdleState @ 0x1404C9C9C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventEnterIdleState(int a1, __int16 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-38h] BYREF
  __int16 v6; // [rsp+34h] [rbp-34h]
  char v7; // [rsp+36h] [rbp-32h]
  char v8; // [rsp+37h] [rbp-31h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  int *v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v5 = a1;
    v6 = a2;
    v8 = 0;
    v10 = &v5;
    v12 = 0;
    v7 = a3;
    v9 = a4;
    v11 = 16;
    return EtwTraceKernelEvent((int)&v10, 1, 0x40008000u, 4665, 1538);
  }
  return result;
}
