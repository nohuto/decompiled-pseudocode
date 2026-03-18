/*
 * XREFs of SymCryptRsakeyCalculatePrivateFields @ 0x14052158C
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x140523724 (SymCryptDigitsFromBits.c)
 *     SymCryptIntCopyMixedSize @ 0x14052382C (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x140523844 (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x14052385C (SymCryptIntDivMod.c)
 *     SymCryptIntFromDivisor @ 0x1405238C8 (SymCryptIntFromDivisor.c)
 *     SymCryptIntFromModulus @ 0x1405238E0 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x140523988 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntMulMixedSize @ 0x1405239D0 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValueUint32 @ 0x140523A20 (SymCryptIntSetValueUint32.c)
 *     SymCryptIntSetValueUint64 @ 0x140523A38 (SymCryptIntSetValueUint64.c)
 *     SymCryptIntSubUint32 @ 0x140523A98 (SymCryptIntSubUint32.c)
 *     SymCryptIntToDivisor @ 0x140523AB0 (SymCryptIntToDivisor.c)
 *     SymCryptCrtGenerateInverses @ 0x140528DD0 (SymCryptCrtGenerateInverses.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsakeyCalculatePrivateFields(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int Inverses; // esi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 i; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 j; // rbx
  __int64 v25; // [rsp+58h] [rbp-100h]
  char v26; // [rsp+7Fh] [rbp-D9h] BYREF

  v9 = SymCryptIntFromDivisor(a2);
  v10 = SymCryptDigitsFromBits(64LL);
  v25 = SymCryptIntCreate((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFE0uLL, 128LL, v10);
  Inverses = SymCryptCrtGenerateInverses(*(_DWORD *)(a1 + 28), (int)a1 + 128, 0, (int)a1 + 144, a5, a6);
  if ( !Inverses )
  {
    SymCryptIntSetValueUint32(1LL, a3);
    v12 = 0LL;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( 1 )
      {
        v13 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * v12 + 128));
        Inverses = SymCryptIntCopyMixedSize(v13, v9);
        if ( Inverses )
          break;
        SymCryptIntSubUint32(v9, 1LL, v9);
        SymCryptIntMulMixedSize(v9, a3, a4, a5, a6);
        Inverses = SymCryptIntCopyMixedSize(a4, a3);
        if ( Inverses )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 28) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v14 = 0LL;
      if ( *(_DWORD *)(a1 + 24) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(a1 + 8 * v14 + 56);
          if ( v15 == 1 )
            return 32782;
          if ( (v15 & 1) == 0 )
            return 32782;
          SymCryptIntSetValueUint64(v15, v9);
          SymCryptIntExtendedGcd(a3, v9, 2LL, v25, 0LL, 0LL, *(_QWORD *)(a1 + 8 * v14 + 160), a5, a6);
          if ( !(unsigned int)SymCryptIntIsEqualUint32(v25, 1LL) )
            return 32782;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 24) )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 28); i = (unsigned int)(i + 1) )
        {
          v17 = SymCryptIntFromDivisor(a2);
          v18 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * i + 128));
          Inverses = SymCryptIntCopyMixedSize(v18, v17);
          if ( Inverses )
            break;
          v19 = SymCryptIntFromDivisor(a2);
          v20 = SymCryptIntFromDivisor(a2);
          SymCryptIntSubUint32(v20, 1LL, v19);
          v21 = SymCryptIntFromDivisor(a2);
          SymCryptIntToDivisor(v21, a2, *(_DWORD *)(a1 + 24), 0, a5, a6);
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 24); j = (unsigned int)(j + 1) )
          {
            SymCryptIntDivMod(*(_QWORD *)(a1 + 8 * j + 160), a2, 0, a3, a5, a6);
            Inverses = SymCryptIntCopyMixedSize(
                         a3,
                         *(_QWORD *)(a1 + 8LL * (unsigned int)(i + *(_DWORD *)(a1 + 28) * j) + 168));
            if ( Inverses )
              return Inverses;
          }
        }
      }
    }
  }
  return Inverses;
}
