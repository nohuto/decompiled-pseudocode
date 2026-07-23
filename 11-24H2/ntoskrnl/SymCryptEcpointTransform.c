/*
 * XREFs of SymCryptEcpointTransform @ 0x1405285D8
 * Callers:
 *     SymCryptEcpointGetValue @ 0x140528240 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x1405283D0 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptModElementCopy @ 0x1405214D8 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsZero @ 0x140521554 (SymCryptModElementIsZero.c)
 *     SymCryptModElementSetValueUint32 @ 0x140521630 (SymCryptModElementSetValueUint32.c)
 *     SymCryptModInv @ 0x14052175C (SymCryptModInv.c)
 *     SymCryptModMul @ 0x140521798 (SymCryptModMul.c)
 *     SymCryptEcpointCopy @ 0x140528154 (SymCryptEcpointCopy.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptEcpointTransform(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        int a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  unsigned int v9; // ebx
  int v13; // r9d
  int v14; // ecx
  int v15; // esi
  int v16; // ecx
  __int64 *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rax
  _BYTE *v20; // rbx
  _BYTE *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r12
  _BYTE *v25; // rbx
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF

  v8 = a7;
  v9 = 0;
  v27 = 0LL;
  v13 = a4 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      return 32782;
    v14 = 34;
  }
  else
  {
    v14 = 17;
  }
  v15 = *(_DWORD *)(a1 + 8);
  if ( !a5 )
  {
    v15 = v14;
    v14 = *(_DWORD *)(a1 + 8);
  }
  if ( v14 == v15 )
  {
    SymCryptEcpointCopy(a1, a2, a3);
    return v9;
  }
  switch ( v14 )
  {
    case 17:
      if ( v15 == 34 )
      {
        SymCryptModElementCopy();
        SymCryptModElementSetValueUint32(
          0,
          *(_DWORD **)(a1 + 616),
          (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
          a7,
          a8);
        return v9;
      }
      if ( v15 == 98 )
      {
        SymCryptModElementCopy();
        goto LABEL_22;
      }
      return 32779;
    case 34:
      if ( v15 == 17 || (unsigned int)(v15 - 67) <= 0x1F && (v16 = -2147352575, _bittest(&v16, v15 - 67)) )
      {
        SymCryptModElementCopy();
        if ( v15 == 67 || v15 == 84 )
        {
          SymCryptModElementCopy();
          SymCryptModElementSetValueUint32(
            1,
            *(_DWORD **)(a1 + 616),
            (__int64)&a3[2 * *(_DWORD *)(a1 + 36) + 32],
            a7,
            a8);
          if ( v15 == 84 )
            SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
          goto LABEL_25;
        }
        if ( v15 != 98 )
          return v9;
LABEL_22:
        SymCryptModElementSetValueUint32(
          1,
          *(_DWORD **)(a1 + 616),
          (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
          a7,
          a8);
LABEL_25:
        *a3 = 1;
        return v9;
      }
      return 32779;
    case 67:
      if ( v15 != 17 && v15 != 34 )
        return 32779;
      v17 = (__int64 *)&v27;
      v18 = 2LL;
      do
      {
        *v17++ = SymCryptModElementCreate();
        v19 = *(unsigned int *)(a1 + 36);
        v8 += v19;
        --v18;
      }
      while ( v18 );
      v20 = &a2[(unsigned int)(2 * v19)];
      if ( (unsigned int)SymCryptModElementIsZero() )
        return 32785;
      v9 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v20 + 32));
      if ( !v9 )
      {
        SymCryptModMul(*(_DWORD **)(a1 + 616), v27);
        SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
        if ( v15 == 34 )
        {
          SymCryptModMul(*(_DWORD **)(a1 + 616), v27);
          goto LABEL_42;
        }
      }
      break;
    case 84:
      if ( v15 != 17 && v15 != 34 )
        return 32779;
      SymCryptModElementCreate();
      v21 = &a2[2 * *(_DWORD *)(a1 + 36)];
      if ( (unsigned int)SymCryptModElementIsZero() )
        return 32785;
      v9 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v21 + 32));
      if ( !v9 )
      {
        SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
        if ( v15 == 34 )
LABEL_42:
          SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)&a2[*(unsigned int *)(a1 + 36) + 32]);
      }
      break;
    case 98:
      if ( v15 == 17 || v15 == 34 )
      {
        SymCryptModElementCreate();
        v22 = *(unsigned int *)(a1 + 36);
        v23 = v22 + a7;
        v24 = a8 - v22;
        v25 = &a2[v22];
        if ( (unsigned int)SymCryptModElementIsZero() )
          return 32785;
        v9 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v25 + 32));
        if ( !v9 )
        {
          SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
          if ( v15 == 34 )
            SymCryptModElementSetValueUint32(
              0,
              *(_DWORD **)(a1 + 616),
              (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
              v23,
              v24);
        }
      }
      break;
    default:
      return 32779;
  }
  return v9;
}
