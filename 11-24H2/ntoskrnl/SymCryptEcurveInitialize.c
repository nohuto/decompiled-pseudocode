/*
 * XREFs of SymCryptEcurveInitialize @ 0x14051FD94
 * Callers:
 *     SymCryptEcurveAllocate @ 0x14051FC64 (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptIntBitsizeOfValue @ 0x1405210E4 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140521258 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptIntToModulus @ 0x140521414 (SymCryptIntToModulus.c)
 *     SymCryptModAdd @ 0x140521458 (SymCryptModAdd.c)
 *     SymCryptModDivPow2 @ 0x140521494 (SymCryptModDivPow2.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x14052153C (SymCryptModElementIsEqual.c)
 *     SymCryptModElementSetValue @ 0x140521584 (SymCryptModElementSetValue.c)
 *     SymCryptModElementSetValueNegUint32 @ 0x140521610 (SymCryptModElementSetValueNegUint32.c)
 *     SymCryptModElementSetValueUint32 @ 0x140521630 (SymCryptModElementSetValueUint32.c)
 *     SymCryptModulusCreate @ 0x1405218E4 (SymCryptModulusCreate.c)
 *     SymCryptOfflinePrecomputation @ 0x140528040 (SymCryptOfflinePrecomputation.c)
 *     SymCryptEcpointCreate @ 0x140528190 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointSetValue @ 0x1405283D0 (SymCryptEcpointSetValue.c)
 *     SymCryptEcurveFillScratchSpaces @ 0x140528DC0 (SymCryptEcurveFillScratchSpaces.c)
 */

__int64 __fastcall SymCryptEcurveInitialize(_DWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4, __int64 a5)
{
  _DWORD *v5; // rbx
  _DWORD *v6; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // eax
  char *v14; // rbx
  char *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rbx
  char *v19; // r14
  __int64 v20; // rax
  char *v21; // rbx
  __int64 v22; // rax
  int v23; // r13d
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned int v28; // eax
  char *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // r15d
  char *v34; // rbx
  __int64 v35; // r14
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  char *v39; // rbx
  __int64 v40; // rax
  int v41; // ebx
  __int64 *v42; // rcx
  int v43; // eax
  unsigned int v44; // edx
  int v45; // r8d

  *a4 = 1;
  v5 = a4 + 168;
  v6 = a1 + 7;
  a4[1] = a1[1];
  a4[2] = a3[10];
  v9 = (__int64)a4;
  a4[4] = *a3;
  a4[7] = a3[1];
  a4[5] = a1[3];
  a4[8] = a1[4];
  a4[9] = a3[5];
  a4[10] = a3[3];
  v10 = SymCryptModulusCreate(a4 + 168, a3[4], *a3);
  *(_QWORD *)(v9 + 616) = v10;
  if ( !v10 )
    goto LABEL_45;
  v11 = SymCryptIntFromModulus(v10);
  v12 = v11;
  if ( !v11 )
    goto LABEL_45;
  if ( (unsigned int)SymCryptIntSetValue(v6, (unsigned int)a1[3], 2LL, v11) )
    goto LABEL_45;
  v13 = SymCryptIntBitsizeOfValue(v12);
  *(_DWORD *)(v9 + 12) = v13;
  if ( v13 < 0x20 )
    goto LABEL_45;
  if ( (SymCryptIntGetValueLsbits32(v12) & 1) == 0 )
    goto LABEL_45;
  SymCryptIntToModulus(v12, *(_QWORD *)(v9 + 616), 800 * a1[3], 9, a5, a3[9]);
  v14 = (char *)v5 + a3[4];
  v15 = (char *)v6 + (unsigned int)a1[3];
  v16 = SymCryptModElementCreate(v14, a3[5], *(_QWORD *)(v9 + 616));
  *(_QWORD *)(v9 + 632) = v16;
  if ( !v16 )
    goto LABEL_45;
  if ( (unsigned int)SymCryptModElementSetValue((_DWORD)v15, a1[3], 2, *(_QWORD *)(v9 + 616), v16, a5, a3[9]) )
    goto LABEL_45;
  v17 = a3[5];
  v18 = &v14[v17];
  v19 = &v15[a1[3]];
  v20 = SymCryptModElementCreate(v18, v17, *(_QWORD *)(v9 + 616));
  *(_QWORD *)(v9 + 640) = v20;
  if ( !v20 )
    goto LABEL_45;
  if ( a1[1] == 1 )
  {
    SymCryptModElementSetValueNegUint32(3, *(_QWORD *)(v9 + 616), v20, a5, a3[9]);
    if ( (unsigned int)SymCryptModElementIsEqual(*(_QWORD *)(v9 + 616), *(_QWORD *)(v9 + 632), *(_QWORD *)(v9 + 640)) )
      *(_DWORD *)(v9 + 4) = 4;
  }
  if ( (unsigned int)SymCryptModElementSetValue(
                       (_DWORD)v19,
                       a1[3],
                       2,
                       *(_QWORD *)(v9 + 616),
                       *(_QWORD *)(v9 + 640),
                       a5,
                       a3[9]) )
    goto LABEL_45;
  v21 = &v18[a3[5]];
  v22 = (unsigned int)a1[3];
  v23 = v22 + (_DWORD)v19;
  v24 = (__int64)&v19[v22 + (unsigned int)(2 * v22)];
  v25 = SymCryptModulusCreate(v21, a3[7], a3[1]);
  *(_QWORD *)(v9 + 624) = v25;
  if ( !v25 )
    goto LABEL_45;
  v26 = SymCryptIntFromModulus(v25);
  v27 = v26;
  if ( !v26 )
    goto LABEL_45;
  if ( (unsigned int)SymCryptIntSetValue(v24, (unsigned int)a1[4], 2LL, v26) )
    goto LABEL_45;
  v28 = SymCryptIntBitsizeOfValue(v27);
  *(_DWORD *)(v9 + 24) = v28;
  if ( v28 < 0x20 )
    goto LABEL_45;
  if ( (SymCryptIntGetValueLsbits32(v27) & 1) == 0 )
    goto LABEL_45;
  SymCryptIntToModulus(v27, *(_QWORD *)(v9 + 624), 1, 9, a5, a3[9]);
  v29 = &v21[a3[7]];
  v30 = (unsigned int)a1[4] + v24;
  v31 = SymCryptIntCreate(v29, a3[8], a3[2]);
  *(_QWORD *)(v9 + 656) = v31;
  if ( !v31 )
    goto LABEL_45;
  if ( (unsigned int)SymCryptIntSetValue(v30, (unsigned int)a1[5], 2LL, v31) )
    goto LABEL_45;
  v32 = SymCryptIntBitsizeOfValue(*(_QWORD *)(v9 + 656)) - 1;
  *(_DWORD *)(v9 + 64) = v32;
  if ( v32 > 8 )
    goto LABEL_45;
  v33 = 1;
  if ( !(unsigned int)SymCryptIntIsEqualUint32(*(_QWORD *)(v9 + 656), (unsigned int)(1 << v32)) )
    goto LABEL_45;
  v34 = &v29[a3[8]];
  v35 = (unsigned int)a1[5] + v30;
  v36 = a1[1];
  if ( v36 == 1 || v36 == 2 )
  {
    v37 = *(_DWORD *)(v9 + 24) + 1;
    *(_DWORD *)(v9 + 92) = 16;
    *(_DWORD *)(v9 + 96) = v37;
    *(_DWORD *)(v9 + 88) = 6;
  }
  SymCryptEcurveFillScratchSpaces(v9);
  v38 = SymCryptEcpointCreate(v34, a3[6], v9);
  *(_QWORD *)(v9 + 648) = v38;
  if ( !v38 || (unsigned int)SymCryptEcpointSetValue(v9, v23, 2 * a1[3], 2, 2, v38, 1, a5, a3[9]) )
    goto LABEL_45;
  v39 = &v34[a3[6]];
  if ( (unsigned int)(a1[1] - 1) <= 1 )
  {
    *(_QWORD *)(v9 + 104) = *(_QWORD *)(v9 + 648);
    if ( *(_DWORD *)(v9 + 92) > 1u )
    {
      do
      {
        v40 = SymCryptEcpointCreate(v39, a3[6], v9);
        *(_QWORD *)(v9 + 8LL * v33 + 104) = v40;
        if ( !v40 )
          goto LABEL_45;
        ++v33;
        v39 += a3[6];
      }
      while ( v33 < *(_DWORD *)(v9 + 92) );
    }
    SymCryptOfflinePrecomputation(v9, a5, a3[9]);
  }
  if ( a1[1] == 3 )
  {
    v41 = SymCryptModElementCreate(a5, a3[5], *(_QWORD *)(v9 + 616));
    SymCryptModElementSetValueUint32(2, *(_QWORD *)(v9 + 616), v41, a5 + a3[5], a3[9] - a3[5]);
    SymCryptModAdd(*(_QWORD *)(v9 + 616), *(_QWORD *)(v9 + 632), v41, *(_QWORD *)(v9 + 632), a5 + a3[5], a3[9] - a3[5]);
    SymCryptModDivPow2(
      *(_QWORD *)(v9 + 616),
      *(_QWORD *)(v9 + 632),
      2,
      *(_QWORD *)(v9 + 632),
      a5 + a3[5],
      a3[9] - a3[5]);
  }
  if ( *a1 == 2 )
  {
    v42 = (__int64 *)(v35 + (unsigned int)a1[6]);
  }
  else
  {
    v43 = a1[1];
    if ( v43 == 1 )
    {
      v42 = (__int64 *)SymCryptEcurveParamsV2ExtensionShortWeierstrass;
    }
    else if ( v43 == 2 )
    {
      v42 = (__int64 *)SymCryptEcurveParamsV2ExtensionTwistedEdwards;
    }
    else
    {
      v42 = 0LL;
      if ( v43 == 3 )
        v42 = (__int64 *)SymCryptEcurveParamsV2ExtensionMontgomery;
    }
  }
  *(_DWORD *)(v9 + 68) = *(_DWORD *)v42;
  v44 = *((_DWORD *)v42 + 1);
  *(_DWORD *)(v9 + 72) = v44;
  v45 = *((_DWORD *)v42 + 2);
  *(_DWORD *)(v9 + 76) = v45;
  *(_DWORD *)(v9 + 80) = *((_DWORD *)v42 + 3);
  if ( v44 > 0x20 || v44 && v44 + v45 > *(_DWORD *)(v9 + 24) + *(_DWORD *)(v9 + 64) )
  {
LABEL_45:
    SymCryptWipe(v9, a3[3]);
    return 0LL;
  }
  return v9;
}
