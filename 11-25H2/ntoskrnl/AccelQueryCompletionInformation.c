/*
 * XREFs of AccelQueryCompletionInformation @ 0x140659904
 * Callers:
 *     SmHwAcceleratorWaitForRequest @ 0x140603AAC (SmHwAcceleratorWaitForRequest.c)
 *     AccelCompressBuffer @ 0x14065943C (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x1406595AC (AccelDecompressBuffer.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140659FB0 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall AccelQueryCompletionInformation(__int64 a1)
{
  __int64 *v3; // rcx
  _QWORD v4[2]; // [rsp+20h] [rbp-29h] BYREF
  _DWORD v5[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h]
  int v7; // [rsp+40h] [rbp-9h]
  __int64 v8; // [rsp+48h] [rbp-1h]
  __int64 v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  int v11; // [rsp+60h] [rbp+17h]

  v5[1] = 0;
  memset_0(v5, 0, 0x6CuLL);
  v4[1] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*(_WORD *)a1 || *(_WORD *)(a1 + 2) < 0x38u )
    return 3221225561LL;
  v3 = *(__int64 **)(a1 + 8);
  v7 = 0;
  v10 = 0LL;
  v5[0] = 4;
  v6 = *v3;
  v8 = v3[3];
  v9 = v3[4];
  v11 = *(_DWORD *)(a1 + 16);
  v4[0] = a1 + 24;
  return AccelpInternalOperationHandler(v5, v4);
}
