/*
 * XREFs of SymCryptRsakeySetValueInternal @ 0x14051F4C4
 * Callers:
 *     SymCryptRsakeySetValue @ 0x14051F45C (SymCryptRsakeySetValue.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE5C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F310 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptDivisorCreate @ 0x140521054 (SymCryptDivisorCreate.c)
 *     SymCryptIntBitsizeOfValue @ 0x1405210E4 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140521258 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptIntToModulus @ 0x140521414 (SymCryptIntToModulus.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x1405218FC (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsakeySetValueInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        int a9,
        unsigned int a10,
        int a11,
        __int64 a12)
{
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned int v15; // edi
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  unsigned __int64 v23; // r15
  unsigned int v24; // eax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r10
  int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r9
  unsigned int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // r8
  int v33; // edi
  int v34; // edi
  int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // r15d
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r8
  int v43; // r14d
  int v44; // r14d
  int v45; // eax
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ebp
  __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rcx
  unsigned int v56; // ebp
  unsigned int v57; // eax
  __int64 v58; // rbx
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdi
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // rdi
  __int64 v70; // rax
  unsigned int v71; // [rsp+40h] [rbp-78h]
  unsigned int v72; // [rsp+40h] [rbp-78h]
  int i; // [rsp+40h] [rbp-78h]
  unsigned int v74; // [rsp+44h] [rbp-74h]
  unsigned int v75; // [rsp+48h] [rbp-70h]
  unsigned int v76; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v77; // [rsp+50h] [rbp-68h]
  unsigned int v78; // [rsp+54h] [rbp-64h]
  int v79; // [rsp+58h] [rbp-60h]
  __int64 v80; // [rsp+58h] [rbp-60h]
  unsigned __int64 v81; // [rsp+60h] [rbp-58h]
  unsigned __int64 v82; // [rsp+60h] [rbp-58h]
  unsigned __int64 v83; // [rsp+68h] [rbp-50h]
  unsigned __int64 v84; // [rsp+70h] [rbp-48h]
  unsigned __int64 v85; // [rsp+78h] [rbp-40h]

  v12 = a11;
  v13 = a2;
  v14 = a1;
  v76 = 0;
  v71 = 0;
  v75 = 0;
  if ( (a11 & 0xFFFFCCFF) != 0 || (a11 & 0x3000) == 0 || (a11 & 0x300) == 0x200 || !a1 || !a2 || a4 != 1 || !a3 )
    return 32782;
  if ( a9 == 2 )
  {
    if ( !a7 || !a8 || !*a7 || !a7[1] || !*a8 || !a8[1] )
      return 32782;
LABEL_18:
    v17 = *(_DWORD *)(a12 + 20);
    if ( a5 || a9 )
    {
      if ( *(_DWORD *)(a12 + 28) != 2 )
        return 32782;
      v71 = SymCryptSizeofIntFromDigits(v17);
      v75 = SymCryptSizeofIntFromDigits(2 * v17);
      v76 = SymCryptSizeofDivisorFromDigits(v17);
      v77 = 16 * v17;
      v19 = v17 << 7;
      v20 = v17 * (16 * v17 < 32 * v17 ? 32 : 16);
      if ( (int)v19 + 64 > (unsigned int)v20 )
        v20 = (unsigned int)(v19 + 64);
      v21 = v17 << 6;
      v22 = v20;
      v23 = v20 + 6 * v21 + v19 + 512;
      v78 = v21 + 64;
      v24 = v21 + 64;
      v84 = v23;
      if ( 16 * v17 > (int)v21 + 64 )
        v24 = 16 * v17;
      v25 = v24;
      v26 = v24;
      if ( v23 > v24 )
        v26 = v20 + 6LL * (v17 << 6) + v19 + 512;
      v27 = v17 << 8;
      v28 = (v17 << 8) + 64;
      v74 = (v17 << 8) + 64;
      if ( v23 > (unsigned int)v28 )
        v28 = v23;
      v29 = v28 + 2 * (v21 + 64);
      v30 = v27 + 192;
      if ( v77 > v27 + 192 )
        v30 = 16 * v17;
      v81 = v30;
      v79 = v22 + ((v17 + 1) << 9);
      v31 = (v17 << 8) + 64;
      v32 = v26;
      if ( v29 > v26 )
        v32 = v29;
      if ( v23 > v74 )
        v31 = v79;
      if ( v23 > v25 )
        LODWORD(v25) = v79;
      if ( v29 > v26 )
        LODWORD(v25) = v31 + v19 + 128;
      if ( v81 > v32 )
        LODWORD(v25) = v81;
      v18 = v76 + v71 + v75 + v25;
      v12 = a11;
      if ( a5 )
      {
        v33 = SymCryptSizeofIntFromDigits(v17 + 1);
        v34 = SymCryptSizeofIntFromDigits(v17) + v33;
        v35 = v34 + SymCryptSizeofIntFromDigits(1LL);
        v36 = v78;
        v37 = ((*(_DWORD *)(a12 + 12) >> 9) + (((*(_DWORD *)(a12 + 12) & 0x1FFu) + 511) >> 9)) << 8;
        if ( (unsigned int)v81 > v78 )
          v36 = v81;
        v38 = v36;
        v39 = v36;
        if ( v84 > v36 )
          v39 = v84;
        v40 = v39;
        v82 = v39;
        if ( 4480 * v17 + 64 > v39 )
          v40 = 4480 * v17 + 64;
        v85 = v40;
        v41 = v40;
        if ( v74 > v40 )
          v41 = v74;
        v83 = v41;
        v42 = v41;
        if ( v77 + 16 > v41 )
          v42 = v77 + 16;
        if ( v18 <= v37 + v35 + v42 )
        {
          v43 = SymCryptSizeofIntFromDigits(v17 + 1);
          v44 = SymCryptSizeofIntFromDigits(v17) + v43;
          v45 = SymCryptSizeofIntFromDigits(1LL);
          if ( v84 > v38 )
            LODWORD(v38) = v79;
          if ( 4480 * v17 + 64 > v82 )
            LODWORD(v38) = 4480 * v17 + 64;
          if ( v74 > v85 )
            LODWORD(v38) = (v17 << 8) + 64;
          if ( v77 + 16 > v83 )
            LODWORD(v38) = v77 + 16;
          v18 = v37 + v38 + v45 + v44;
        }
        v14 = a1;
      }
      v13 = a2;
    }
    else
    {
      v18 = (v17 << 8) + 192;
      if ( 16 * v17 > v18 )
        v18 = 16 * v17;
    }
    v46 = SymCryptCallbackAlloc(v18);
    if ( !v46 )
      return 32783;
    v47 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 120));
    v15 = SymCryptIntSetValue(v14, v13, a10, v47);
    if ( v15 )
    {
LABEL_99:
      SymCryptWipe(v46, v18);
      SymCryptCallbackFree(v46);
      return v15;
    }
    v48 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 120));
    v49 = SymCryptIntBitsizeOfValue(v48);
    *(_DWORD *)(a12 + 16) = v49;
    if ( v49 > *(_DWORD *)(a12 + 12) )
    {
LABEL_71:
      v15 = 32782;
      goto LABEL_99;
    }
    if ( v49 < 0x100 )
    {
LABEL_73:
      v15 = 32769;
      goto LABEL_99;
    }
    v50 = *(_QWORD *)(a12 + 120);
    v51 = SymCryptIntFromModulus(v50);
    SymCryptIntToModulus(v51, v50, v49, 1, v46, v18);
    v52 = 0LL;
    *(_DWORD *)(a12 + 24) = 1;
    do
    {
      *(_QWORD *)(a12 + 8 * v52 + 56) = *(_QWORD *)(a3 + 8 * v52);
      v52 = (unsigned int)(v52 + 1);
    }
    while ( (unsigned int)v52 < *(_DWORD *)(a12 + 24) );
    if ( a5 )
    {
      v15 = SymCryptRsakeyCalculatePrimesFromPrivateExponent(a12, a5, a6, a10, v46, v18);
      if ( v15 )
        goto LABEL_99;
      v80 = SymCryptIntCreate(v46, v71, v17);
      v56 = v18 - v71;
      v54 = v71 + v46;
    }
    else
    {
      if ( !a9 )
        goto LABEL_95;
      v53 = SymCryptIntCreate(v46, v71, v17);
      *(_DWORD *)(a12 + 48) = 0;
      v54 = v71 + v46;
      v80 = v53;
      v55 = v53;
      v56 = v18 - v71;
      v57 = 0;
      v72 = 0;
      if ( *(_DWORD *)(a12 + 28) )
      {
        while ( 1 )
        {
          v58 = v57;
          v15 = SymCryptIntSetValue(a7[v57], a8[v57], a10, v55);
          if ( v15 )
            goto LABEL_99;
          v59 = SymCryptIntBitsizeOfValue(v80);
          *(_DWORD *)(a12 + 4 * v58 + 32) = v59;
          v60 = SymCryptDigitsFromBits(v59);
          *(_DWORD *)(a12 + 4 * v58 + 40) = v60;
          if ( *(_DWORD *)(a12 + 48) > v60 )
            v60 = *(_DWORD *)(a12 + 48);
          *(_DWORD *)(a12 + 48) = v60;
          if ( *(_DWORD *)(a12 + 4 * v58 + 32) < 0x80u )
            goto LABEL_73;
          v57 = v72 + 1;
          v72 = v57;
          if ( v57 >= *(_DWORD *)(a12 + 28) )
            break;
          v55 = v80;
        }
      }
      SymCryptRsakeyCreateAllObjects((_DWORD *)a12);
      v61 = 0LL;
      for ( i = 0; (unsigned int)v61 < *(_DWORD *)(a12 + 28); i = v61 )
      {
        v62 = (unsigned int)v61;
        v63 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 8 * v61 + 128));
        v15 = SymCryptIntSetValue(a7[v62], a8[v62], a10, v63);
        if ( v15 )
          goto LABEL_99;
        v64 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 8 * v62 + 128));
        if ( (SymCryptIntGetValueLsbits32(v64) & 1) == 0 )
          goto LABEL_71;
        v65 = *(_QWORD *)(a12 + 8 * v62 + 128);
        v66 = SymCryptIntFromModulus(v65);
        SymCryptIntToModulus(v66, v65, *(_DWORD *)(a12 + 16), 10, v54, v56);
        v61 = (unsigned int)(i + 1);
      }
    }
    v67 = SymCryptIntCreate(v54, v75, 2 * v17);
    v68 = v75 + v54;
    v69 = v67;
    v70 = SymCryptDivisorCreate(v68, v76, v17);
    v15 = SymCryptRsakeyCalculatePrivateFields(a12, v70, v80, v69, v76 + v68, v56 - v75 - v76, a11 & 0x200);
    if ( v15 )
      goto LABEL_99;
    v12 = a11;
    *(_BYTE *)(a12 + 8) = 1;
LABEL_95:
    *(_DWORD *)a12 = v12;
    if ( (v12 & 0x100) == 0 )
    {
      if ( (g_SymCryptFipsSelftestsPerformed & 8) == 0 )
      {
        SymCryptRsaSelftest();
        _InterlockedOr(&g_SymCryptFipsSelftestsPerformed, 8u);
      }
      *(_DWORD *)a12 |= 1u;
    }
    goto LABEL_99;
  }
  if ( !a9 )
    goto LABEL_18;
  return 32782;
}
