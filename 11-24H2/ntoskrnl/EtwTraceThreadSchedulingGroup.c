/*
 * XREFs of EtwTraceThreadSchedulingGroup @ 0x14064C7BC
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1402D6FE8 (KiSetThreadSchedulingGroup.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  _DWORD *v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  _DWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  if ( a3 != a2 )
  {
    v3 = *(_DWORD *)(a1 + 1296);
    v8[1] = 0;
    v8[0] = v3;
    v5 = v8;
    v7 = 0;
    v9 = a2;
    v10 = a3;
    v6 = 24;
    return EtwTraceKernelEvent((int)&v5, 1, 0xA0004000, 1376, 6297858);
  }
  return result;
}
