/*
 * XREFs of AccelQueryCompletionInformation @ 0x140665B48
 * Callers:
 *     SmHwAcceleratorWaitForRequest @ 0x14060FA6C (SmHwAcceleratorWaitForRequest.c)
 *     AccelCompressBuffer @ 0x1406656FC (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x14066586C (AccelDecompressBuffer.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x14040A7AC (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall AccelQueryCompletionInformation(__int64 a1)
{
  __int64 *v3; // rcx
  _DWORD v4[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+38h] [rbp-11h]
  int v6; // [rsp+40h] [rbp-9h]
  __int64 v7; // [rsp+48h] [rbp-1h]
  __int64 v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+60h] [rbp+17h]

  v4[1] = 0;
  memset_0(v4, 0, 0x6CuLL);
  if ( !a1 )
    return 3221225485LL;
  if ( !*(_WORD *)a1 || *(_WORD *)(a1 + 2) < 0x38u )
    return 3221225561LL;
  v3 = *(__int64 **)(a1 + 8);
  v6 = 0;
  v9 = 0LL;
  v4[0] = 4;
  v5 = *v3;
  v7 = v3[3];
  v8 = v3[4];
  v10 = *(_DWORD *)(a1 + 16);
  return AccelpInternalOperationHandler((__int64)v4);
}
