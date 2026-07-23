/*
 * XREFs of SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14051F4C4 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F310 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptDivisorFromModulus @ 0x14052106C (SymCryptDivisorFromModulus.c)
 *     SymCryptIntBitsizeOfValue @ 0x1405210E4 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCopyMixedSize @ 0x140521144 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140521174 (SymCryptIntDivMod.c)
 *     SymCryptIntDivPow2 @ 0x1405211A0 (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140521258 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntGetValueLsbits64 @ 0x140521270 (SymCryptIntGetValueLsbits64.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x1405212B8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntMulMixedSize @ 0x1405212E8 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptIntSetValueUint64 @ 0x140521350 (SymCryptIntSetValueUint64.c)
 *     SymCryptIntSubUint32 @ 0x1405213B0 (SymCryptIntSubUint32.c)
 *     SymCryptIntToModulus @ 0x140521414 (SymCryptIntToModulus.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14052153C (SymCryptModElementIsEqual.c)
 *     SymCryptModElementSetValueNegUint32 @ 0x140521610 (SymCryptModElementSetValueNegUint32.c)
 *     SymCryptModElementSetValueUint32 @ 0x140521630 (SymCryptModElementSetValueUint32.c)
 *     SymCryptModElementToInt @ 0x1405216A0 (SymCryptModElementToInt.c)
 *     SymCryptModExp @ 0x140521718 (SymCryptModExp.c)
 *     SymCryptModSetRandom @ 0x140521808 (SymCryptModSetRandom.c)
 *     SymCryptModSquare @ 0x140521874 (SymCryptModSquare.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptIntExtendedGcd @ 0x140526944 (SymCryptIntExtendedGcd.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsakeyCalculatePrimesFromPrivateExponent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // edi
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // ebp
  unsigned int v14; // r13d
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // r14
  int v22; // ebp
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r14
  int v26; // eax
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // esi
  __int64 ValueLsbits64; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v35; // [rsp+50h] [rbp-98h]
  unsigned int v38; // [rsp+64h] [rbp-84h]
  int v39; // [rsp+68h] [rbp-80h]
  int v40; // [rsp+70h] [rbp-78h]
  __int64 v42; // [rsp+80h] [rbp-68h]
  unsigned int v43; // [rsp+88h] [rbp-60h]

  v6 = *(_DWORD *)(a1 + 20);
  v8 = SymCryptSizeofIntFromDigits(v6);
  v9 = v8;
  v43 = v8;
  v10 = SymCryptDigitsFromBits(64LL);
  v11 = SymCryptSizeofIntFromDigits(v10);
  v12 = v11;
  v13 = v10 + v6;
  v38 = v11;
  v35 = SymCryptSizeofIntFromDigits(v10 + v6);
  v14 = ((*(_DWORD *)(a1 + 16) >> 9) + (((*(_DWORD *)(a1 + 16) & 0x1FFu) + 511) >> 9)) << 6;
  v15 = SymCryptIntCreate(a5, (unsigned int)v9, v6);
  v16 = v12 + v9 + a5;
  v42 = SymCryptIntCreate(v9 + a5, (unsigned int)v12, v10);
  v17 = SymCryptIntCreate(v16, v35, v13);
  v18 = v35 + v16;
  v19 = v17;
  v20 = SymCryptModElementCreate(v18, v14, *(_QWORD *)(a1 + 120));
  v21 = v14 + v18;
  v22 = v20;
  SymCryptModElementCreate(v21, v14, *(_QWORD *)(a1 + 120));
  v23 = v14 + v21;
  v24 = SymCryptModElementCreate(v23, v14, *(_QWORD *)(a1 + 120));
  v25 = v14 + v23;
  v39 = v24;
  v26 = SymCryptModElementCreate(v25, v14, *(_QWORD *)(a1 + 120));
  v27 = v14 + v25;
  v40 = v26;
  v28 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 120));
  if ( (SymCryptIntGetValueLsbits32(v28) & 1) != 0 && !(unsigned int)SymCryptIntSetValue(a2, a3, a4, v15) )
  {
    v29 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 120));
    if ( (unsigned int)SymCryptIntIsLessThan(v15, v29) )
    {
      SymCryptIntSetValueUint64(*(_QWORD *)(a1 + 56), v42);
      SymCryptIntBitsizeOfValue(v42);
      v30 = a6 - 4 * v14 - v35 - v38 - v43;
      SymCryptIntMulMixedSize(v15, v42, v19, v27, v30);
      ValueLsbits64 = SymCryptIntGetValueLsbits64(v19);
      if ( (ValueLsbits64 & 1) != 0 )
      {
        v32 = ValueLsbits64 - 1;
        if ( v32 )
        {
          _BitScanForward64((unsigned __int64 *)&v33, v32);
          if ( (_DWORD)v33 != 64 )
          {
            SymCryptIntDivPow2(v19, (unsigned int)v33, v19);
            SymCryptModElementSetValueUint32(1, *(_QWORD *)(a1 + 120), v39, v27, v30);
            SymCryptModElementSetValueNegUint32(1, *(_QWORD *)(a1 + 120), v40, v27, v30);
            SymCryptModSetRandom(*(_QWORD *)(a1 + 120), v22, 0, v27, v30);
          }
        }
      }
    }
  }
  return 32782LL;
}
