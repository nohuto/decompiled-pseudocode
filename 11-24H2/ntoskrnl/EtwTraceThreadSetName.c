/*
 * XREFs of EtwTraceThreadSetName @ 0x1408EADD8
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadSetName(__int64 a1)
{
  unsigned __int16 *v1; // rdx
  int v2; // r10d
  unsigned int v3; // eax
  _DWORD v5[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-40h] BYREF
  int *v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  int *v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]

  v1 = *(unsigned __int16 **)(a1 + 1696);
  v5[0] = *(_DWORD *)(a1 + 1288);
  v2 = 2;
  v5[1] = *(_DWORD *)(a1 + 1296);
  v6[0] = v5;
  v5[2] = 0;
  v6[1] = 8LL;
  if ( v1 && *((_QWORD *)v1 + 1) )
  {
    v3 = 2048;
    if ( *v1 < 0x800u )
      v3 = *v1;
    v7 = (int *)*((_QWORD *)v1 + 1);
    v8 = v3;
    if ( !v3 || *(_WORD *)(*((_QWORD *)v1 + 1) + 2 * ((unsigned __int64)v3 >> 1) - 2) )
    {
      v10 = 2LL;
      v9 = &EtwpNull;
      v2 = 3;
    }
  }
  else
  {
    v8 = 2LL;
    v7 = &EtwpNull;
  }
  return EtwTraceKernelEvent((int)v6, v2, 2u, 1352, 6297602);
}
