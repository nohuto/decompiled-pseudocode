/*
 * XREFs of SymCryptEcDsaSignEx @ 0x1405218C0
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FC88 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x140520358 (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptIntCopy @ 0x140521090 (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x1405210C0 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14052115C (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x140521204 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x14052121C (SymCryptIntIsLessThan.c)
 *     SymCryptIntToModElement @ 0x140521358 (SymCryptIntToModElement.c)
 *     SymCryptModAdd @ 0x1405213BC (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x140521454 (SymCryptModElementCreate.c)
 *     SymCryptModElementGetValue @ 0x14052146C (SymCryptModElementGetValue.c)
 *     SymCryptModElementIsZero @ 0x1405214B8 (SymCryptModElementIsZero.c)
 *     SymCryptModElementSetValue @ 0x1405214E8 (SymCryptModElementSetValue.c)
 *     SymCryptModInv @ 0x1405216C0 (SymCryptModInv.c)
 *     SymCryptModMul @ 0x1405216FC (SymCryptModMul.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521878 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x140521890 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptEcDsaTruncateHash @ 0x140521E48 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcpointCreate @ 0x1405281D0 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x140528280 (SymCryptEcpointGetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528B20 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointScalarMul @ 0x14052C0E0 (SymCryptEcpointScalarMul.c)
 *     SymCryptEcpointSetRandom @ 0x14052C134 (SymCryptEcpointSetRandom.c)
 *     SymCryptCallbackAlloc @ 0x14069A5E0 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x14069A618 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcDsaSignEx(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // r11
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int Value; // ebx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r12
  int v32; // esi
  __int64 v33; // rdi
  int IsZero; // ebx
  void *v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+58h] [rbp-70h]
  unsigned int v38; // [rsp+60h] [rbp-68h]
  __int64 v39; // [rsp+60h] [rbp-68h]
  __int64 v40; // [rsp+68h] [rbp-60h]
  __int64 v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+70h] [rbp-58h]
  int v43; // [rsp+78h] [rbp-50h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)a1 & 0x1000) == 0 || (a6 & 0xFFFFFFF7) != 0 || !*(_BYTE *)(a1 + 4) )
  {
    Value = 32782;
    goto LABEL_36;
  }
  SymCryptEcurveDigitsofScalarMultiplier(*(_QWORD *)(a1 + 8));
  v10 = (unsigned int)SymCryptSizeofIntFromDigits();
  v11 = (unsigned int)SymCryptSizeofIntFromDigits();
  v12 = SymCryptSizeofEcpointFromCurve(v9);
  v38 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(v9 + 624));
  v13 = SymCryptEcurveSizeofFieldElement(v9);
  v14 = (unsigned int)v11;
  v15 = (unsigned int)(*(_DWORD *)(v9 + 48) + *(_DWORD *)(v9 + 52));
  v16 = *(unsigned int *)(v9 + 56);
  v17 = v13;
  v18 = (unsigned int)(*(_DWORD *)(v9 + 28) << 8);
  v19 = (unsigned int)(v18 + 64);
  v20 = v19;
  v44 = v17;
  if ( v15 > (unsigned int)v19 )
    v20 = (unsigned int)v15;
  v40 = v10;
  v21 = (unsigned int)((*(_DWORD *)(v9 + 16) << 8) + 64);
  if ( v20 > v21 )
    v21 = (unsigned int)v20;
  v22 = (unsigned int)v17;
  v23 = (unsigned int)(*(_DWORD *)(v9 + 28) << 6)
      + 64LL
      + v19
      + 2 * ((unsigned int)(*(_DWORD *)(v9 + 28) << 6) + 64LL)
      + v18;
  v24 = v12;
  if ( v21 > v23 )
    v23 = v21;
  if ( v23 > v16 )
    v16 = v23;
  v45 = v22 + v12 + v11 + v10 + v16 + 4 * v38;
  v25 = SymCryptCallbackAlloc(v45);
  v26 = v25;
  if ( !v25 )
  {
    Value = 32783;
LABEL_36:
    SymCryptWipe(a7, a8);
    return Value;
  }
  v28 = v16 + v25;
  v29 = SymCryptIntCreate();
  v30 = v14 + v40 + v28;
  v43 = SymCryptIntCreate();
  v42 = SymCryptEcpointCreate(v30, v24, v9);
  v41 = SymCryptModElementCreate();
  v36 = (void *)SymCryptModElementCreate();
  v31 = SymCryptModElementCreate();
  v37 = SymCryptModElementCreate();
  v39 = v38 + v38 + v38 + v38 + v24 + v30;
  Value = SymCryptEcDsaTruncateHash(v9, a2, a3, a6, v41, v29, v26, v16);
  if ( !Value )
  {
    v32 = 0;
    if ( !a4 )
    {
      v33 = a1;
      goto LABEL_21;
    }
    if ( (unsigned int)SymCryptIntIsEqualUint32() || (SymCryptIntFromModulus(), !(unsigned int)SymCryptIntIsLessThan()) )
    {
LABEL_30:
      Value = 32782;
    }
    else
    {
      SymCryptIntCopy();
      SymCryptIntToModElement(v43, *(_QWORD *)(v9 + 624), v37, v26, v16);
      Value = SymCryptEcpointScalarMul(v9, v43, 0, 0, v42, v26, v16);
      if ( !Value )
      {
        v33 = a1;
        while ( 1 )
        {
          Value = SymCryptModInv(*(_DWORD **)(v9 + 624), v37);
          if ( Value )
            break;
          Value = SymCryptEcpointGetValue(v9, v42, 2, 1, v39, v44, 0, v26, v16);
          if ( Value )
            break;
          Value = SymCryptModElementSetValue(v39, v44, 2, *(_DWORD **)(v9 + 624), v36, v26, v45);
          if ( Value )
            break;
          SymCryptIntToModElement(*(_QWORD *)(v33 + 24), *(_QWORD *)(v9 + 624), v31, v26, v16);
          if ( *(_DWORD *)(v9 + 64) )
          {
            do
            {
              SymCryptModAdd(*(_DWORD **)(v9 + 624), v31);
              ++Value;
            }
            while ( Value < *(_DWORD *)(v9 + 64) );
          }
          SymCryptModMul(*(_DWORD **)(v9 + 624), (__int64)v36);
          SymCryptModAdd(*(_DWORD **)(v9 + 624), v41);
          SymCryptModMul(*(_DWORD **)(v9 + 624), v31);
          IsZero = SymCryptModElementIsZero();
          if ( !((unsigned int)SymCryptModElementIsZero() | IsZero) )
          {
            Value = SymCryptModElementGetValue(*(_QWORD *)(v9 + 624), (int)v36, a7, a8 >> 1, a5, v26, v16);
            if ( !Value )
              Value = SymCryptModElementGetValue(
                        *(_QWORD *)(v9 + 624),
                        v31,
                        (unsigned int)(a8 >> 1) + (unsigned int)a7,
                        a8 >> 1,
                        a5,
                        v26,
                        v16);
            break;
          }
          if ( a4 )
            goto LABEL_30;
          if ( (unsigned int)++v32 >= 0x64 )
            goto LABEL_30;
LABEL_21:
          SymCryptEcpointSetRandom(v9, v43, v42, v26, v16);
          SymCryptIntToModElement(v43, *(_QWORD *)(v9 + 624), v37, v26, v16);
        }
      }
    }
  }
  SymCryptWipe(v26, v45);
  SymCryptCallbackFree(v26);
  if ( Value )
    goto LABEL_36;
  return Value;
}
