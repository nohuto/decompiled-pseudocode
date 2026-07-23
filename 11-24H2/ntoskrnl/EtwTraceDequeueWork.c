/*
 * XREFs of EtwTraceDequeueWork @ 0x1402D5778
 * Callers:
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceDequeueWork(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  _DWORD v5[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h]
  _QWORD v7[3]; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1296);
  v6 = 0LL;
  v5[0] = v3;
  v7[0] = v5;
  v7[2] = a2;
  v7[1] = 8LL;
  v8 = 8 * a3;
  v9 = 0;
  v5[1] = a3;
  return EtwTraceKernelEvent((int)v7, 2, 0x21000000u, 1343, 23076354);
}
