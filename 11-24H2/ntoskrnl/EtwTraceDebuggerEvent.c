/*
 * XREFs of EtwTraceDebuggerEvent @ 0x1404C1F80
 * Callers:
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     NtDebugContinue @ 0x1409E3960 (NtDebugContinue.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceDebuggerEvent(__int64 a1, __int64 a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[0] = *(_DWORD *)(a1 + 464);
  v4[1] = *(_DWORD *)(a2 + 1296);
  v5 = v4;
  v7 = 0;
  v4[2] = a3;
  v6 = 12;
  return EtwTraceKernelEvent((int)&v5, 1, 0x400000u, 880, 5249538);
}
