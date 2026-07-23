/*
 * XREFs of EtwpLogTxREvent @ 0x1407A9FCC
 * Callers:
 *     EtwpTraceRegistryTransaction @ 0x140AA4AF0 (EtwpTraceRegistryTransaction.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwpLogTxREvent(
        unsigned int a1,
        unsigned __int8 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-21h] BYREF
  __int128 v16; // [rsp+38h] [rbp-19h]
  int v17; // [rsp+48h] [rbp-9h]
  int v18; // [rsp+4Ch] [rbp-5h]
  __int64 v19; // [rsp+50h] [rbp-1h]
  __int64 *v20; // [rsp+58h] [rbp+7h] BYREF
  int v21; // [rsp+60h] [rbp+Fh]
  int v22; // [rsp+64h] [rbp+13h]
  __int64 v23; // [rsp+68h] [rbp+17h]
  int v24; // [rsp+70h] [rbp+1Fh]
  int v25; // [rsp+74h] [rbp+23h]

  v7 = *a3;
  v19 = 0LL;
  v22 = 0;
  v17 = a4;
  v9 = 1;
  v16 = v7;
  v21 = 32;
  v10 = *a6;
  v18 = a5;
  v15 = v10;
  v20 = &v15;
  v11 = *(_WORD *)a7 & 0xFFFE;
  if ( v11 )
  {
    v12 = *(_QWORD *)(a7 + 8);
    v9 = 2;
    v25 = 0;
    v23 = v12;
    v24 = v11;
  }
  v13 = 2LL * v9;
  *(&v22 + 2 * v13) = 0;
  (&v20)[v13] = (__int64 *)&EtwpNull;
  *(&v21 + 2 * v13) = 2;
  return EtwpLogKernelEvent((__int64)&v20, EtwpHostSiloState, a1, v9 + 1, a2 | 0x900, 0x601902u);
}
