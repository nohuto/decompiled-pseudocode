/*
 * XREFs of AccelBuildDescriptorMemoryCompress @ 0x140663CD8
 * Callers:
 *     AccelCompressBuffer @ 0x140663FEC (AccelCompressBuffer.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelBuildDescriptorMemoryCompress(__int64 a1)
{
  __int64 *v2; // rsi
  _DWORD *v3; // rdi
  _DWORD v5[2]; // [rsp+28h] [rbp-19h] BYREF
  __int64 v6; // [rsp+30h] [rbp-11h]
  int v7; // [rsp+38h] [rbp-9h]
  __int64 v8; // [rsp+40h] [rbp-1h]
  __int64 v9; // [rsp+48h] [rbp+7h]
  __int64 v10; // [rsp+50h] [rbp+Fh]
  __int64 v11; // [rsp+58h] [rbp+17h]
  int v12; // [rsp+60h] [rbp+1Fh]
  __int64 v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  _DWORD *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]
  __int64 v18; // [rsp+88h] [rbp+47h]

  v5[1] = 0;
  memset_0(v5, 0, 0x6CuLL);
  v2 = *(__int64 **)(a1 + 8);
  if ( !v2 )
    return 3221225485LL;
  v3 = *(_DWORD **)(a1 + 24);
  if ( !v3 || v3[1] != 6 || v3[2] != *(_DWORD *)(a1 + 16) || v3[3] != *(_DWORD *)(a1 + 20) )
    return 3221225485LL;
  memset_0((void *)v2[3], 0, *(unsigned int *)(*(_QWORD *)(*v2 + 16) + 268LL));
  memset_0((void *)v2[4], 0, *(unsigned int *)(*(_QWORD *)(*v2 + 16) + 272LL));
  v6 = *v2;
  v7 = *((_DWORD *)v2 + 4);
  v8 = v2[3];
  v9 = v2[4];
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_DWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 56);
  v14 = *(_DWORD *)(a1 + 64);
  v16 = *(_DWORD *)(a1 + 16);
  v17 = *(_DWORD *)(a1 + 20);
  v18 = a1 + 68;
  v5[0] = 11;
  v15 = v3;
  return AccelpInternalOperationHandler((__int64)v5);
}
