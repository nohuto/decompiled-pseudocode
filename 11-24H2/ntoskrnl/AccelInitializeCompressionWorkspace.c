/*
 * XREFs of AccelInitializeCompressionWorkspace @ 0x140664264
 * Callers:
 *     SmHwAcceleratorCreate @ 0x14079BD4C (SmHwAcceleratorCreate.c)
 *     SmHwInitializeAccelDescriptor @ 0x14079CECC (SmHwInitializeAccelDescriptor.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelInitializeCompressionWorkspace(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 *v4; // rdx
  int v5; // r9d
  int v6; // r10d
  int v7; // r8d
  int v8; // [rsp+28h] [rbp-21h]
  _DWORD v9[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h]
  int v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h]
  __int64 v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  __int64 v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  int v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+74h] [rbp+2Bh]

  v9[1] = 0;
  memset_0(v9, 0, 0x6CuLL);
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
  v10 = *v4;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_DWORD *)(a1 + 24);
  v18 = v3;
  v9[0] = 13;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v17 = v6;
  v19 = v7;
  v8 = v5;
  result = AccelpInternalOperationHandler((__int64)v9);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741789 )
    *(_DWORD *)(a1 + 56) = v8;
  return result;
}
