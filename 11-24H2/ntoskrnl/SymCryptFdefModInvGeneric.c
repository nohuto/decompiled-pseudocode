/*
 * XREFs of SymCryptFdefModInvGeneric @ 0x1405304B0
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x140530830 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModInvMontgomery256 @ 0x1405308E0 (SymCryptFdefModInvMontgomery256.c)
 *     SymCryptFdef369ModInvMontgomery @ 0x140533060 (SymCryptFdef369ModInvMontgomery.c)
 * Callees:
 *     SymCryptIntCopy @ 0x14052112C (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntDivPow2 @ 0x1405211A0 (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140521258 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntNeg @ 0x140521308 (SymCryptIntNeg.c)
 *     SymCryptIntSubSameSize @ 0x140521398 (SymCryptIntSubSameSize.c)
 *     SymCryptModElementCopy @ 0x1405214D8 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x140521798 (SymCryptModMul.c)
 *     SymCryptModSetRandom @ 0x140521808 (SymCryptModSetRandom.c)
 *     SymCryptModSub @ 0x1405218A8 (SymCryptModSub.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14052192C (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptFdefModDivSmallPow2 @ 0x14052FF18 (SymCryptFdefModDivSmallPow2.c)
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x1405303B0 (SymCryptFdefModElementSetValueUint32Generic.c)
 *     SymCryptFdefModElementToIntGeneric @ 0x140530434 (SymCryptFdefModElementToIntGeneric.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptFdefModInvGeneric(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // esi
  int v8; // edi
  unsigned int *v9; // r14
  __int64 v10; // r12
  int v11; // r13d
  int v12; // edi
  __int64 v13; // r15
  __int64 v14; // r12
  int v15; // r13d
  unsigned __int8 ValueLsbits32; // di
  BOOL v17; // edi
  int v18; // ebx
  __int64 v19; // rbx
  unsigned int *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+40h] [rbp-78h]
  const void *v27; // [rsp+50h] [rbp-68h]
  unsigned int *v28; // [rsp+60h] [rbp-58h]
  int v29; // [rsp+68h] [rbp-50h]
  unsigned int v30; // [rsp+70h] [rbp-48h]
  int v31; // [rsp+70h] [rbp-48h]

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 12) & 9) != 9 )
    return 32782;
  v8 = SymCryptSizeofModElementFromModulus(a1);
  v29 = SymCryptModElementCreate();
  v27 = (const void *)SymCryptModElementCreate();
  v9 = (unsigned int *)SymCryptModElementCreate();
  v10 = a6 - (unsigned int)(4 * v8);
  v28 = (unsigned int *)SymCryptModElementCreate();
  v11 = v8 + v8 + v8 + v8 + a5;
  v12 = SymCryptSizeofIntFromDigits();
  v13 = SymCryptIntCreate();
  v26 = SymCryptIntCreate();
  SymCryptIntCreate();
  v14 = v10 - (unsigned int)(3 * v12);
  v15 = v12 + v12 + v12 + v11;
  if ( (a4 & 1) == 0 )
    SymCryptModSetRandom(a1, v29, 6, v15, v14);
  SymCryptModElementCopy();
  SymCryptFdefModElementToIntGeneric(a1, v27, v13);
  SymCryptIntFromModulus();
  SymCryptIntCopy();
  ValueLsbits32 = SymCryptIntGetValueLsbits32(v26);
  v17 = (((unsigned __int8)SymCryptIntGetValueLsbits32(v13) | ValueLsbits32) & 1) == 0;
  v18 = v17 | SymCryptIntIsEqualUint32();
  if ( v18 | (unsigned int)SymCryptIntIsEqualUint32() )
  {
    return 32782;
  }
  else
  {
    v19 = v26;
    if ( !(unsigned int)SymCryptIntIsEqualUint32() )
    {
      SymCryptFdefModElementSetValueUint32Generic(1u, (_DWORD *)a1, v9);
      v21 = v28;
      SymCryptFdefModElementSetValueUint32Generic(0, (_DWORD *)a1, v28);
      while ( 1 )
      {
        while ( 1 )
        {
          v22 = SymCryptIntGetValueLsbits32(v13);
          if ( (v22 & 1) != 0 )
            break;
          if ( v22 )
            _BitScanForward(&v22, v22);
          else
            v22 = 32;
          v30 = v22;
          SymCryptIntDivPow2();
          SymCryptFdefModDivSmallPow2(a1, v9, v30, v9);
        }
        if ( (unsigned int)SymCryptIntIsEqualUint32() )
          break;
        v31 = SymCryptIntSubSameSize();
        if ( (unsigned int)SymCryptIntIsEqualUint32() )
          return 32782;
        if ( v31 )
        {
          SymCryptIntNeg();
          v24 = (__int64)v9;
        }
        else
        {
          SymCryptIntCopy();
          v23 = v19;
          v19 = v13;
          v13 = v23;
          v24 = (__int64)v21;
          v21 = v9;
          v9 = (unsigned int *)v24;
        }
        SymCryptModSub((_DWORD *)a1, v24);
      }
      SymCryptModMul((_DWORD *)a1, (__int64)v9);
    }
    SymCryptModElementCopy();
  }
  return v6;
}
