/*
 * XREFs of SymCryptEcDsaVerify @ 0x140521FF0
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14083044C (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FD4C (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1405203EC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x1405212B8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x1405213F4 (SymCryptIntToModElement.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14052153C (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x140521554 (SymCryptModElementIsZero.c)
 *     SymCryptModElementToInt @ 0x1405216A0 (SymCryptModElementToInt.c)
 *     SymCryptModInv @ 0x14052175C (SymCryptModInv.c)
 *     SymCryptModMul @ 0x140521798 (SymCryptModMul.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14052192C (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptEcDsaTruncateHash @ 0x140521F1C (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcpointCreate @ 0x140528190 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x140528240 (SymCryptEcpointGetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528AE0 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x140528C18 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointMultiScalarMul @ 0x140528C44 (SymCryptEcpointMultiScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptEcDsaVerify(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  bool v10; // zf
  unsigned int v11; // r15d
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // r10d
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // r15
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // r12
  unsigned int v31; // ebx
  int IsEqual; // eax
  unsigned __int64 v34; // [rsp+50h] [rbp-D8h]
  unsigned int v35; // [rsp+58h] [rbp-D0h]
  __int64 v36; // [rsp+58h] [rbp-D0h]
  unsigned int v37; // [rsp+60h] [rbp-C8h]
  __int64 v38; // [rsp+60h] [rbp-C8h]
  unsigned int v39; // [rsp+68h] [rbp-C0h]
  __int64 v40; // [rsp+68h] [rbp-C0h]
  __int64 v41; // [rsp+70h] [rbp-B8h]
  __int128 v44; // [rsp+90h] [rbp-98h]
  __int64 v46; // [rsp+A8h] [rbp-80h]
  __int128 v47; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-60h] BYREF

  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v10 = (*(_DWORD *)a1 & 0x1000) == 0;
  v48 = 0LL;
  v47 = 0LL;
  if ( !v10 && (a7 & 0xFFFFFFF7) == 0 )
  {
    v11 = *(_DWORD *)(v8 + 16);
    if ( v11 <= *(_DWORD *)(v8 + 28) )
      v11 = *(_DWORD *)(v8 + 28);
    if ( v11 <= (unsigned int)SymCryptDigitsFromBits() )
      SymCryptDigitsFromBits();
    SymCryptEcurveDigitsofScalarMultiplier(v8);
    v12 = (unsigned int)SymCryptSizeofIntFromDigits();
    v39 = SymCryptSizeofIntFromDigits();
    v35 = SymCryptSizeofEcpointFromCurve(v8);
    v37 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(v8 + 624));
    v13 = SymCryptEcurveSizeofFieldElement(v8);
    v14 = *(_DWORD *)(v8 + 28);
    v15 = *(unsigned int *)(v8 + 44);
    v16 = (unsigned int)(*(_DWORD *)(v8 + 48) + 2 * *(_DWORD *)(v8 + 52));
    v41 = v13;
    v17 = (unsigned int)((v14 << 8) + 64);
    if ( v16 <= v17 )
      v16 = (unsigned int)v17;
    v18 = (unsigned int)((*(_DWORD *)(v8 + 16) << 8) + 64);
    if ( v16 > v18 )
      v18 = (unsigned int)v16;
    v19 = (unsigned int)v12;
    v20 = v17 + (unsigned int)(v14 << 6) + 64LL + 2 * ((unsigned int)(v14 << 6) + 64LL) + (unsigned int)(v14 << 8);
    if ( v18 > v20 )
      v20 = v18;
    if ( v20 <= *(unsigned int *)(v8 + 56) )
      v20 = *(unsigned int *)(v8 + 56);
    if ( v20 > v15 )
      v15 = v20;
    v21 = v15 + v13 + 4 * v37 + v12 + 2 * v35 + 2 * v39;
    v34 = v21;
    v22 = SymCryptCallbackAlloc(v21);
    v7 = v22;
    if ( v22 )
    {
      v23 = v15 + v22;
      v24 = SymCryptIntCreate();
      *(_QWORD *)&v44 = SymCryptIntCreate();
      v25 = v39 + v39 + v19 + v23;
      *((_QWORD *)&v44 + 1) = SymCryptIntCreate();
      v26 = SymCryptEcpointCreate(v25, v35, v8);
      v27 = v35 + v25;
      v46 = v26;
      SymCryptEcpointCreate(v27, v35, v8);
      v28 = v37;
      v29 = v37 + v35 + v27;
      v38 = SymCryptModElementCreate();
      v40 = SymCryptModElementCreate();
      v30 = SymCryptModElementCreate();
      v36 = SymCryptModElementCreate();
      if ( (unsigned int)SymCryptIntSetValue() )
        goto LABEL_33;
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        goto LABEL_33;
      SymCryptIntToModElement(v24, *(_QWORD *)(v8 + 624), v40, v7, v15);
      if ( (unsigned int)SymCryptModElementIsZero() )
        goto LABEL_33;
      if ( (unsigned int)SymCryptIntSetValue() )
        goto LABEL_33;
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        goto LABEL_33;
      SymCryptIntToModElement(v24, *(_QWORD *)(v8 + 624), v30, v7, v15);
      if ( (unsigned int)SymCryptModElementIsZero()
        || (unsigned int)SymCryptModInv(*(_DWORD **)(v8 + 624), v30)
        || (unsigned int)SymCryptEcDsaTruncateHash(v8, a2, a3, a7, v38, v24, v7, v15)
        || (SymCryptModMul(*(_DWORD **)(v8 + 624), v38),
            SymCryptModMul(*(_DWORD **)(v8 + 624), v40),
            SymCryptModElementToInt(*(_DWORD **)(v8 + 624), v38, v44, v7, v15),
            SymCryptModElementToInt(*(_DWORD **)(v8 + 624), v36, SDWORD2(v44), v7, v15),
            *((_QWORD *)&v48 + 1) = *(_QWORD *)(a1 + 16),
            v47 = v44,
            (unsigned int)SymCryptEcpointMultiScalarMul(v8, (unsigned int)&v47, (unsigned int)&v48, 2, 1, v46, v7, v15))
        || (unsigned int)SymCryptEcpointIsZero(v8, v46, v7, v15)
        || (unsigned int)SymCryptEcpointGetValue(v8, v46, 2, 1, v28 + v28 + v28 + v29, v41, 1, v7, v15)
        || (v31 = SymCryptIntSetValue()) != 0 )
      {
LABEL_33:
        v9 = v34;
      }
      else
      {
        SymCryptIntToModElement(v24, *(_QWORD *)(v8 + 624), v36, v7, v15);
        IsEqual = SymCryptModElementIsEqual();
        v9 = v34;
        if ( IsEqual )
        {
LABEL_35:
          SymCryptWipe(v7, v9);
          SymCryptCallbackFree(v7);
          return v31;
        }
      }
    }
    else
    {
      v9 = v21;
    }
  }
  v31 = 32784;
  if ( v7 )
    goto LABEL_35;
  return v31;
}
