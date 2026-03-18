/*
 * XREFs of AccelInitializeCompressionWorkspace @ 0x140659730
 * Callers:
 *     SmHwAcceleratorCreate @ 0x14078C87C (SmHwAcceleratorCreate.c)
 *     SmHwInitializeAccelDescriptor @ 0x14078D9FC (SmHwInitializeAccelDescriptor.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140659FB0 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall AccelInitializeCompressionWorkspace(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 *v4; // rdx
  int v5; // r9d
  int v6; // r10d
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-29h] BYREF
  int v10; // [rsp+28h] [rbp-21h]
  int v11; // [rsp+2Ch] [rbp-1Dh]
  _DWORD v12[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v13; // [rsp+38h] [rbp-11h]
  int v14; // [rsp+40h] [rbp-9h]
  __int64 v15; // [rsp+48h] [rbp-1h]
  __int64 v16; // [rsp+50h] [rbp+7h]
  __int64 v17; // [rsp+58h] [rbp+Fh]
  __int64 v18; // [rsp+60h] [rbp+17h]
  int v19; // [rsp+68h] [rbp+1Fh]
  int v20; // [rsp+6Ch] [rbp+23h]
  int v21; // [rsp+70h] [rbp+27h]
  int v22; // [rsp+74h] [rbp+2Bh]

  v12[1] = 0;
  memset_0(v12, 0, 0x6CuLL);
  v11 = 0;
  if ( !a1 )
    return 3221225485LL;
  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 == 1 && (unsigned int)(*(_DWORD *)(a1 + 36) - 2) <= 2 )
    return 3221225474LL;
  if ( !*(_WORD *)a1 || *(_WORD *)(a1 + 2) < 0x40u )
    return 3221225561LL;
  v4 = *(__int64 **)(a1 + 8);
  if ( !v4 )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 56);
  if ( v5 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v6 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)(v6 - 6) > 1 )
    return 3221225485LL;
  if ( (unsigned int)(v3 - 1) > 1 )
    return 3221225485LL;
  v7 = *(_DWORD *)(a1 + 36);
  if ( (unsigned int)(v7 - 1) > 3 )
    return 3221225485LL;
  v13 = *v4;
  v18 = *(_QWORD *)(a1 + 16);
  v19 = *(_DWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 48);
  v21 = v3;
  v9 = v8;
  v12[0] = 13;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v20 = v6;
  v22 = v7;
  v10 = v5;
  result = AccelpInternalOperationHandler(v12, &v9);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741789 )
    *(_DWORD *)(a1 + 56) = v10;
  return result;
}
