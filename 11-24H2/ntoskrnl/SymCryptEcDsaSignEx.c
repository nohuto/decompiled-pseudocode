/*
 * XREFs of SymCryptEcDsaSignEx @ 0x14052195C
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FD4C (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1405203EC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptIntCopy @ 0x14052112C (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x1405212B8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntToModElement @ 0x1405213F4 (SymCryptIntToModElement.c)
 *     SymCryptModAdd @ 0x140521458 (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementGetValue @ 0x140521508 (SymCryptModElementGetValue.c)
 *     SymCryptModElementIsZero @ 0x140521554 (SymCryptModElementIsZero.c)
 *     SymCryptModElementSetValue @ 0x140521584 (SymCryptModElementSetValue.c)
 *     SymCryptModInv @ 0x14052175C (SymCryptModInv.c)
 *     SymCryptModMul @ 0x140521798 (SymCryptModMul.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14052192C (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptEcDsaTruncateHash @ 0x140521F1C (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcpointCreate @ 0x140528190 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x140528240 (SymCryptEcpointGetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528AE0 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointScalarMul @ 0x140528D0C (SymCryptEcpointScalarMul.c)
 *     SymCryptEcpointSetRandom @ 0x140528D60 (SymCryptEcpointSetRandom.c)
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
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
  __int64 v8; // r14
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
  int v32; // edi
  __int64 v33; // rsi
  int IsZero; // ebx
  void *v36; // [rsp+50h] [rbp-88h]
  __int64 v37; // [rsp+58h] [rbp-80h]
  int v38; // [rsp+60h] [rbp-78h]
  __int64 v39; // [rsp+68h] [rbp-70h]
  __int64 v40; // [rsp+68h] [rbp-70h]
  int v41; // [rsp+70h] [rbp-68h]
  __int64 v42; // [rsp+78h] [rbp-60h]
  int v43; // [rsp+80h] [rbp-58h]
  __int64 v44; // [rsp+88h] [rbp-50h]
  __int64 v45; // [rsp+90h] [rbp-48h]
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]
  unsigned int v50; // [rsp+108h] [rbp+30h]

  v8 = *(_QWORD *)(a1 + 8);
  v38 = a6 & 1;
  v41 = a6 & 8;
  if ( (*(_DWORD *)a1 & 0x1000) == 0 || (a6 & 0xFFFFFFF6) != 0 || !*(_BYTE *)(a1 + 4) )
  {
    Value = 32782;
    goto LABEL_36;
  }
  SymCryptEcurveDigitsofScalarMultiplier(v8);
  v10 = (unsigned int)SymCryptSizeofIntFromDigits();
  v11 = (unsigned int)SymCryptSizeofIntFromDigits();
  v12 = SymCryptSizeofEcpointFromCurve(v8);
  v50 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(v8 + 624));
  v13 = SymCryptEcurveSizeofFieldElement(v8);
  v14 = (unsigned int)v11;
  v15 = (unsigned int)(*(_DWORD *)(v8 + 48) + *(_DWORD *)(v8 + 52));
  v16 = *(unsigned int *)(v8 + 56);
  v17 = v13;
  v18 = (unsigned int)(*(_DWORD *)(v8 + 28) << 8);
  v19 = (unsigned int)(v18 + 64);
  v20 = v19;
  v44 = v17;
  if ( v15 > (unsigned int)v19 )
    v20 = (unsigned int)v15;
  v39 = v10;
  v21 = (unsigned int)((*(_DWORD *)(v8 + 16) << 8) + 64);
  if ( v20 > v21 )
    v21 = (unsigned int)v20;
  v22 = (unsigned int)v17;
  v23 = (unsigned int)(*(_DWORD *)(v8 + 28) << 6)
      + 64LL
      + v19
      + 2 * ((unsigned int)(*(_DWORD *)(v8 + 28) << 6) + 64LL)
      + v18;
  v24 = v12;
  if ( v21 > v23 )
    v23 = v21;
  if ( v23 > v16 )
    v16 = v23;
  v46 = v22 + v12 + v11 + v10 + v16 + 4 * v50;
  v25 = SymCryptCallbackAlloc(v46);
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
  v30 = v14 + v39 + v28;
  v43 = SymCryptIntCreate();
  v42 = SymCryptEcpointCreate(v30, v24, v8);
  v40 = SymCryptModElementCreate();
  v36 = (void *)SymCryptModElementCreate();
  v31 = SymCryptModElementCreate();
  v37 = SymCryptModElementCreate();
  v45 = v50 + v50 + v50 + v50 + v24 + v30;
  Value = SymCryptEcDsaTruncateHash(v8, a2, a3, v41, v40, v29, v26, v16);
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
      SymCryptIntToModElement(v43, *(_QWORD *)(v8 + 624), v37, v26, v16);
      Value = SymCryptEcpointScalarMul(v8, v43, 0, 0, v42, v26, v16);
      if ( !Value )
      {
        v33 = a1;
        while ( 1 )
        {
          Value = SymCryptModInv(*(_DWORD **)(v8 + 624), v37);
          if ( Value )
            break;
          Value = SymCryptEcpointGetValue(v8, v42, 2, 1, v45, v44, v38, v26, v16);
          if ( Value )
            break;
          Value = SymCryptModElementSetValue(v45, v44, 2, *(_DWORD **)(v8 + 624), v36, v26, v46);
          if ( Value )
            break;
          SymCryptIntToModElement(*(_QWORD *)(v33 + 24), *(_QWORD *)(v8 + 624), v31, v26, v16);
          if ( *(_DWORD *)(v8 + 64) )
          {
            do
            {
              SymCryptModAdd(*(_DWORD **)(v8 + 624), v31);
              ++Value;
            }
            while ( Value < *(_DWORD *)(v8 + 64) );
          }
          SymCryptModMul(*(_DWORD **)(v8 + 624), (__int64)v36);
          SymCryptModAdd(*(_DWORD **)(v8 + 624), v40);
          SymCryptModMul(*(_DWORD **)(v8 + 624), v31);
          IsZero = SymCryptModElementIsZero();
          if ( !((unsigned int)SymCryptModElementIsZero() | IsZero) )
          {
            Value = SymCryptModElementGetValue(*(_QWORD *)(v8 + 624), (int)v36, a7, a8 >> 1, a5, v26, v16);
            if ( !Value )
              Value = SymCryptModElementGetValue(
                        *(_QWORD *)(v8 + 624),
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
          SymCryptEcpointSetRandom(v8, v43, v42, v26, v16);
          SymCryptIntToModElement(v43, *(_QWORD *)(v8 + 624), v37, v26, v16);
        }
      }
    }
  }
  SymCryptWipe(v26, v46);
  SymCryptCallbackFree(v26);
  if ( Value )
    goto LABEL_36;
  return Value;
}
