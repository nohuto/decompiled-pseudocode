/*
 * XREFs of SymCryptEckeySetValue @ 0x140520824
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14083044C (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FD4C (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1405203EC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptFdefIntGetValueLsbits32 @ 0x1405203F8 (SymCryptFdefIntGetValueLsbits32.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14052070C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptDivisorFromModulus @ 0x14052106C (SymCryptDivisorFromModulus.c)
 *     SymCryptIntCopy @ 0x14052112C (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140521174 (SymCryptIntDivMod.c)
 *     SymCryptIntDivPow2 @ 0x1405211A0 (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetBits @ 0x140521228 (SymCryptIntGetBits.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x1405212B8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x1405213F4 (SymCryptIntToModElement.c)
 *     SymCryptModDivPow2 @ 0x140521494 (SymCryptModDivPow2.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x1405216A0 (SymCryptModElementToInt.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     SymCryptEcpointCreate @ 0x140528190 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointSetValue @ 0x1405283D0 (SymCryptEcpointSetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528AE0 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsEqual @ 0x140528BD8 (SymCryptEcpointIsEqual.c)
 *     SymCryptEcpointScalarMul @ 0x140528D0C (SymCryptEcpointScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeySetValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v12; // rsi
  unsigned int v14; // ebx
  unsigned int v16; // edi
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  int v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+58h] [rbp-50h]
  int v35; // [rsp+C8h] [rbp+20h]
  unsigned int v36; // [rsp+E0h] [rbp+38h]
  unsigned int v37; // [rsp+E8h] [rbp+40h]
  unsigned int v38; // [rsp+E8h] [rbp+40h]
  int v39; // [rsp+E8h] [rbp+40h]

  v35 = a4;
  v9 = a4;
  v10 = a3;
  v12 = *(_QWORD *)(a8 + 8);
  v37 = *(_DWORD *)(v12 + 36);
  v28 = SymCryptEcurveDigitsofScalarMultiplier(v12);
  if ( (a7 & 0xFFFFCCFF) != 0 || (a7 & 0x3000) == 0 || (a7 & 0x300) == 0x200 )
    return 32782;
  if ( a2 )
  {
    if ( a2 != (unsigned int)SymCryptFdefIntGetValueLsbits32(*(_QWORD *)(a8 + 8)) )
      return 32782;
    if ( !v9 )
    {
LABEL_11:
      v16 = *(_DWORD *)(v12 + 60);
      v36 = v16;
      v17 = SymCryptCallbackAlloc(v16);
      if ( !v17 )
        return 32783;
      if ( a1 )
      {
        v18 = (unsigned int)SymCryptSizeofIntFromDigits(v28);
        v19 = SymCryptIntCreate(v17, v18, v28);
        v29 = v37 + v18 + v17;
        v30 = SymCryptModElementCreate(v18 + v17, v37, *(_QWORD *)(v12 + 624));
        v38 = v36 - v37 - v18;
        v14 = SymCryptIntSetValue(a1, a2, a5, v19);
        if ( v14 )
        {
LABEL_54:
          SymCryptWipe(v17, v36);
          SymCryptCallbackFree(v17);
          return v14;
        }
        if ( (a7 & 0x200) == 0 )
        {
          if ( *(_DWORD *)(v12 + 68) == 1 )
          {
            v20 = SymCryptIntFromModulus(*(_QWORD *)(v12 + 624));
            if ( !(unsigned int)SymCryptIntIsLessThan(v19, v20) )
              goto LABEL_18;
          }
          if ( *(_DWORD *)(v12 + 64) && *(_DWORD *)(v12 + 68) == 3 && (unsigned int)SymCryptIntGetBits(v19, 0LL)
            || *(_DWORD *)(v12 + 72)
            && (unsigned int)SymCryptIntGetBits(v19, *(unsigned int *)(v12 + 76)) != *(_DWORD *)(v12 + 80) )
          {
            goto LABEL_18;
          }
        }
        v21 = *(_DWORD *)(v12 + 64);
        if ( v21 )
        {
          if ( *(_DWORD *)(v12 + 68) == 3 )
            SymCryptIntDivPow2(v19, v21, v19);
          v22 = v29;
          if ( *(_DWORD *)(v12 + 68) == 1 )
          {
            SymCryptIntToModElement(v19, *(_QWORD *)(v12 + 624), v30, v29, v38);
            SymCryptModDivPow2(*(_QWORD *)(v12 + 624), v30, *(_DWORD *)(v12 + 64), v30, v29, v38);
            SymCryptModElementToInt(*(_QWORD *)(v12 + 624), v30, v19, v29, v38);
          }
        }
        else
        {
          v22 = v29;
        }
        v23 = SymCryptDivisorFromModulus(*(_QWORD *)(v12 + 624));
        SymCryptIntDivMod(v19, v23, 0, v19, v22, v38);
        if ( (unsigned int)SymCryptIntIsEqualUint32(v19, 0LL) )
        {
LABEL_18:
          v14 = 32782;
          goto LABEL_54;
        }
        SymCryptIntCopy(v19, *(_QWORD *)(a8 + 24));
        v16 = v36;
        LODWORD(v9) = v35;
        v10 = a3;
        *(_BYTE *)(a8 + 4) = 1;
      }
      if ( !v10 )
        goto LABEL_38;
      v14 = SymCryptEcpointSetValue(v12, v10, v9, a5, a6, *(_QWORD *)(a8 + 16), 1, v17, v16);
      if ( v14 )
        goto LABEL_54;
      if ( (a7 & 0x200) == 0 )
      {
        v14 = SymCryptEckeyPerformPublicKeyValidation(a8, (a7 & 0x100) == 0, v17, v16);
        if ( v14 )
          goto LABEL_54;
      }
      if ( (a7 & 0x100) == 0 && a1 )
      {
LABEL_38:
        v24 = v17;
        v25 = *(_QWORD *)(a8 + 16);
        v39 = v25;
        v26 = v16;
        if ( a3 )
        {
          v27 = (unsigned int)SymCryptSizeofEcpointFromCurve(v12);
          v25 = SymCryptEcpointCreate(v17, v27, v12);
          v39 = v25;
          v24 = v27 + v17;
          v26 = v36 - (unsigned int)v27;
          v16 = v36;
        }
        v31 = v26;
        v14 = SymCryptEcpointScalarMul(v12, *(_QWORD *)(a8 + 24), 0, 32, v25, v24, v26);
        if ( v14 )
          goto LABEL_54;
        if ( a3 )
        {
          if ( !(unsigned int)SymCryptEcpointIsEqual(v12, v39, *(_QWORD *)(a8 + 16), 0, v24, v31) )
            goto LABEL_18;
        }
        else if ( (a7 & 0x200) == 0 )
        {
          v14 = SymCryptEckeyPerformPublicKeyValidation(a8, (a7 & 0x100) == 0, v17, v16);
          if ( v14 )
            goto LABEL_54;
        }
      }
      *(_DWORD *)a8 = a7;
      if ( (a7 & 0x100) == 0 )
      {
        if ( (a7 & 0x1000) != 0 )
        {
          if ( (g_SymCryptFipsSelftestsPerformed & 4) == 0 )
          {
            SymCryptEcDsaSelftest();
            _InterlockedOr(&g_SymCryptFipsSelftestsPerformed, 4u);
          }
          *(_DWORD *)a8 |= 1u;
        }
        if ( (a7 & 0x2000) != 0 && (g_SymCryptFipsSelftestsPerformed & 0x20) == 0 )
        {
          SymCryptEcDhSecretAgreementSelftest();
          _InterlockedOr(&g_SymCryptFipsSelftestsPerformed, 0x20u);
        }
      }
      goto LABEL_54;
    }
LABEL_10:
    if ( v9 != *((_DWORD *)SymCryptEcpointFormatNumberofElements + a6)
             * (unsigned int)SymCryptEcurveSizeofFieldElement(*(_QWORD *)(a8 + 8)) )
      return 32782;
    goto LABEL_11;
  }
  if ( v9 )
    goto LABEL_10;
  return 32782;
}
