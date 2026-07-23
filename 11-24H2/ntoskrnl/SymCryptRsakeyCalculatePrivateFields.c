/*
 * XREFs of SymCryptRsakeyCalculatePrivateFields @ 0x14051EE5C
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14051F4C4 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptIntCopyMixedSize @ 0x140521144 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140521174 (SymCryptIntDivMod.c)
 *     SymCryptIntFromDivisor @ 0x1405211E0 (SymCryptIntFromDivisor.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqual @ 0x140521288 (SymCryptIntIsEqual.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntMulMixedSize @ 0x1405212E8 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValueUint32 @ 0x140521338 (SymCryptIntSetValueUint32.c)
 *     SymCryptIntSetValueUint64 @ 0x140521350 (SymCryptIntSetValueUint64.c)
 *     SymCryptIntSubUint32 @ 0x1405213B0 (SymCryptIntSubUint32.c)
 *     SymCryptIntToDivisor @ 0x1405213C8 (SymCryptIntToDivisor.c)
 *     SymCryptCrtGenerateInverses @ 0x1405266F0 (SymCryptCrtGenerateInverses.c)
 *     SymCryptIntExtendedGcd @ 0x140526944 (SymCryptIntExtendedGcd.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsakeyCalculatePrivateFields(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v10; // rbp
  unsigned int Inverses; // edi
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 i; // rbx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 j; // rbx
  int v25; // ebx
  int v26; // eax
  __int64 v27; // rax
  int IsEqual; // eax
  unsigned int v29; // ecx
  __int64 v32; // [rsp+58h] [rbp-100h]
  char v33; // [rsp+7Fh] [rbp-D9h] BYREF

  v10 = SymCryptIntFromDivisor(a2);
  if ( (a7 & 0xFFFFFDFF) != 0 )
    return 32782;
  v12 = SymCryptDigitsFromBits(64LL);
  v32 = SymCryptIntCreate((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL, 128LL, v12);
  Inverses = SymCryptCrtGenerateInverses(*(_DWORD *)(a1 + 28), (int)a1 + 128, 0, (int)a1 + 144, a5, a6);
  if ( Inverses )
    return Inverses;
  SymCryptIntSetValueUint32(1LL, a3);
  v13 = 0LL;
  if ( *(_DWORD *)(a1 + 28) )
  {
    while ( 1 )
    {
      v14 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * v13 + 128));
      Inverses = SymCryptIntCopyMixedSize(v14, v10);
      if ( Inverses )
        break;
      SymCryptIntSubUint32(v10, 1LL, v10);
      SymCryptIntMulMixedSize(v10, a3, a4, a5, a6);
      Inverses = SymCryptIntCopyMixedSize(a4, a3);
      if ( Inverses )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 28) )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
    {
      v16 = *(_QWORD *)(a1 + 8 * i + 56);
      if ( v16 == 1 )
        return 32782;
      if ( (v16 & 1) == 0 )
        return 32782;
      SymCryptIntSetValueUint64(v16, v10);
      SymCryptIntExtendedGcd(a3, v10, 2LL, v32, 0LL, 0LL, *(_QWORD *)(a1 + 8 * i + 160), a5, a6);
      if ( !(unsigned int)SymCryptIntIsEqualUint32(v32, 1LL) )
        return 32782;
    }
    v17 = *(_DWORD *)(a1 + 28);
    v18 = 0LL;
    if ( v17 )
    {
      while ( 1 )
      {
        v19 = SymCryptIntFromDivisor(a2);
        v20 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * v18 + 128));
        Inverses = SymCryptIntCopyMixedSize(v20, v19);
        if ( Inverses )
          break;
        v21 = SymCryptIntFromDivisor(a2);
        v22 = SymCryptIntFromDivisor(a2);
        SymCryptIntSubUint32(v22, 1LL, v21);
        v23 = SymCryptIntFromDivisor(a2);
        SymCryptIntToDivisor(v23, a2, *(_DWORD *)(a1 + 24), 0, a5, a6);
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 24); j = (unsigned int)(j + 1) )
        {
          SymCryptIntDivMod(*(_QWORD *)(a1 + 8 * j + 160), a2, 0, a3, a5, a6);
          Inverses = SymCryptIntCopyMixedSize(
                       a3,
                       *(_QWORD *)(a1 + 8LL * (unsigned int)(v18 + *(_DWORD *)(a1 + 28) * j) + 168));
          if ( Inverses )
            return Inverses;
        }
        v17 = *(_DWORD *)(a1 + 28);
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v17 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      if ( (a7 & 0x200) != 0 )
        return Inverses;
      if ( v17 != 2 )
        return 32782;
      v25 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 136));
      v26 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 128));
      SymCryptIntMulMixedSize(v26, v25, a4, a5, a6);
      v27 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 120));
      IsEqual = SymCryptIntIsEqual(a4, v27);
      v29 = Inverses;
      if ( !IsEqual )
        return 32782;
      return v29;
    }
  }
  return Inverses;
}
