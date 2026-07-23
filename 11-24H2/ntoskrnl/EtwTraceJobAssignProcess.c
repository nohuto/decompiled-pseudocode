/*
 * XREFs of EtwTraceJobAssignProcess @ 0x140A10328
 * Callers:
 *     PspAssignProcessToJobList @ 0x140A10154 (PspAssignProcessToJobList.c)
 *     NtAssignProcessToJobObject @ 0x140A10200 (NtAssignProcessToJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceJobAssignProcess(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int128 v4; // xmm0
  __int128 v6; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+44h] [rbp-2Ch]
  int v9; // [rsp+48h] [rbp-28h]
  _QWORD v10[2]; // [rsp+50h] [rbp-20h] BYREF

  v6 = 0uLL;
  v3 = 0;
  if ( a2 )
    v3 = *(_DWORD *)(a2 + 464);
  if ( a1 )
  {
    v4 = *(_OWORD *)(a1 + 1472);
    v7 = *(_DWORD *)(a1 + 1468);
    v6 = v4;
  }
  else
  {
    v7 = 0;
  }
  v8 = v3;
  v9 = a3;
  v10[0] = &v6;
  v10[1] = 28LL;
  return EtwTraceKernelEvent((int)v10, 1, 0x80000u, 1827, 6297860);
}
