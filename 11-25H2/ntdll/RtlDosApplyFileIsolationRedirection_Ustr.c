/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_RespectDotLocal @ 0x1800A0C84 (sxsisol_RespectDotLocal.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A3020 (RtlGetFullPathName_UstrEx.c)
 *     RtlFindCharInUnicodeString @ 0x1800B3C00 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800F42FC (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        _OWORD *a5,
        unsigned __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v10; // r13
  __int64 v12; // r9
  int CharInUnicodeString; // eax
  int FullPathName_Ustr; // ebx
  __m128i v15; // xmm7
  __m128i v16; // xmm6
  unsigned __int64 v17; // rdi
  int v18; // ecx
  unsigned __int64 v19; // rdi
  size_t v20; // rdi
  size_t v21; // rbx
  bool v22; // di
  __int16 v23; // cx
  _QWORD *v24; // rax
  __m128i v25; // xmm0
  unsigned __int16 v26; // cx
  int v27; // eax
  int v28; // r15d
  _QWORD *v30; // rdi
  unsigned __int64 v31; // r8
  _WORD *v32; // rax
  int v33; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v34; // [rsp+4Ch] [rbp-BCh] BYREF
  __m128i v35; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[4]; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v37[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v38[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v40; // [rsp+C0h] [rbp-48h]
  __m128i v41; // [rsp+C8h] [rbp-40h]
  void *v42; // [rsp+D8h] [rbp-30h] BYREF
  _WORD *v43; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  __int64 v46; // [rsp+F8h] [rbp-10h]
  __int128 v47; // [rsp+108h] [rbp+0h] BYREF
  __int128 v48; // [rsp+118h] [rbp+10h]
  __int128 v49; // [rsp+128h] [rbp+20h]
  __int128 v50; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int128 v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+158h] [rbp+50h]
  _WORD v53[16]; // [rsp+168h] [rbp+60h] BYREF
  char v54; // [rsp+188h] [rbp+80h] BYREF

  v10 = a1;
  v12 = 0LL;
  v38[1] = &v54;
  v40 = a8;
  *(_OWORD *)&v36[1] = 0uLL;
  v38[0] = 0x800000LL;
  v41.m128i_i32[1] = 0;
  v46 = 0LL;
  v52 = 0LL;
  v39 = 0LL;
  v34 = 0;
  LODWORD(v36[0]) = 0;
  v35 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
    *a5 = 0LL;
  v44 = 32LL;
  v42 = v53;
  v43 = v53;
  v41.m128i_i64[1] = (__int64)v53;
  v45 = 32LL;
  v53[0] = 0;
  v41.m128i_i32[0] = 0x200000;
  if ( a4 && (v31 = *(unsigned __int16 *)(a4 + 2), v32 = *(_WORD **)(a4 + 8), v31 >= 2) )
  {
    *(_QWORD *)&v48 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)&v49 = v31;
    *((_QWORD *)&v48 + 1) = v32;
    *((_QWORD *)&v49 + 1) = v31;
    *((_QWORD *)&v47 + 1) = v32;
    *(_QWORD *)&v37[0] = v31;
    if ( v32 )
      *v32 = 0;
    LOWORD(v47) = 0;
    WORD1(v47) = v31;
  }
  else
  {
    *(_QWORD *)&v49 = 2LL;
    *(_QWORD *)&v48 = &v50;
    *((_QWORD *)&v48 + 1) = &v50;
    *((_QWORD *)&v47 + 1) = &v50;
    *((_QWORD *)&v49 + 1) = 2LL;
    LOWORD(v50) = 0;
    LODWORD(v47) = 0x20000;
  }
  *((_QWORD *)&v50 + 1) = a4;
  v51 = __PAIR128__(a6, (unsigned __int64)a5);
  LOBYTE(v52) = 1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_61;
  }
  if ( !a2 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_61;
  }
  if ( a4 )
  {
    if ( a5 && !a6 )
      goto LABEL_110;
  }
  else if ( !a5 && a8 )
  {
LABEL_110:
    FullPathName_Ustr = -1073741811;
    goto LABEL_61;
  }
  v35 = *a2;
  if ( a3 && a3->m128i_i16[0] )
  {
    LOWORD(v33) = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v35, &unk_180175A78, &v33);
    FullPathName_Ustr = CharInUnicodeString;
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString == -1073741275 )
      {
        v15 = *a3;
        v16 = v35;
        v17 = 0LL;
        v37[1] = v15;
        v18 = 0;
        v37[0] = v35;
        while ( v18 != 2 )
        {
          v17 += LOWORD(v37[v18]);
          if ( v17 > 0xFFFE )
            goto LABEL_125;
          ++v18;
        }
        v19 = v17 + 2;
        if ( v19 > 0xFFFE )
        {
LABEL_125:
          FullPathName_Ustr = -1073741562;
          goto LABEL_61;
        }
        if ( v19 <= v44 || (FullPathName_Ustr = RtlpEnsureBufferSize(0LL, &v42, v19), FullPathName_Ustr >= 0) )
        {
          v41.m128i_i16[1] = v19;
          v41.m128i_i16[0] = v19 - 2;
          v20 = (unsigned __int16)_mm_cvtsi128_si32(v16);
          v41.m128i_i64[1] = (__int64)v42;
          memmove(v42, (const void *)_mm_srli_si128(v16, 8).m128i_i64[0], v20);
          v21 = (unsigned __int16)_mm_cvtsi128_si32(v15);
          memmove(
            (void *)(v41.m128i_i64[1] + 2 * ((unsigned __int64)(unsigned int)v20 >> 1)),
            (const void *)_mm_srli_si128(v15, 8).m128i_i64[0],
            v21);
          v12 = 0LL;
          *(_WORD *)(v41.m128i_i64[1] + 2 * ((v21 + v20) >> 1)) = 0;
          v35 = v41;
          goto LABEL_26;
        }
      }
      goto LABEL_61;
    }
    v12 = 0LL;
  }
LABEL_26:
  v22 = 0;
  *(_QWORD *)&v37[0] = 0LL;
  if ( v36[2] )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_50;
  }
  if ( v35.m128i_i16[0] < 2u
    || (LODWORD(a2) = *(unsigned __int16 *)v35.m128i_i64[1], (_WORD)a2 != 92) && (_WORD)a2 != 47 )
  {
    if ( v35.m128i_i16[0] >= 4u && *(_WORD *)v35.m128i_i64[1] && *(_WORD *)(v35.m128i_i64[1] + 2) == 58 )
    {
      if ( v35.m128i_i16[0] >= 6u )
      {
        v23 = *(_WORD *)(v35.m128i_i64[1] + 4);
        if ( v23 == 92 || v23 == 47 )
        {
          v33 = 2;
          goto LABEL_36;
        }
      }
      v27 = 3;
      goto LABEL_48;
    }
LABEL_81:
    FullPathName_Ustr = 0;
    goto LABEL_50;
  }
  if ( v35.m128i_i16[0] >= 4u
    && ((LODWORD(a2) = *(unsigned __int16 *)(v35.m128i_i64[1] + 2), (_WORD)a2 == 92) || (_WORD)a2 == 47) )
  {
    if ( v35.m128i_i16[0] >= 6u )
    {
      LODWORD(a2) = *(unsigned __int16 *)(v35.m128i_i64[1] + 4);
      if ( (_WORD)a2 == 46 || (_WORD)a2 == 63 )
      {
        if ( v35.m128i_i16[0] >= 8u )
        {
          LODWORD(a2) = *(unsigned __int16 *)(v35.m128i_i64[1] + 6);
          if ( (_WORD)a2 == 92 || (_WORD)a2 == 47 )
          {
            v33 = 6;
            goto LABEL_36;
          }
        }
        if ( v35.m128i_i16[0] == 6 )
        {
          v33 = 7;
          goto LABEL_81;
        }
      }
    }
    v27 = 1;
  }
  else
  {
    v27 = 4;
  }
LABEL_48:
  v33 = v27;
  if ( v27 != 1 )
    goto LABEL_49;
LABEL_36:
  FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                        (unsigned int)&v35,
                        (unsigned int)v38,
                        (unsigned int)&v36[1],
                        (unsigned int)v37,
                        0LL,
                        0LL,
                        (__int64)&v33,
                        0LL);
  if ( FullPathName_Ustr >= 0 )
  {
    v24 = *(_QWORD **)&v37[0];
    v25 = **(__m128i **)&v37[0];
    v37[0] = **(_OWORD **)&v37[0];
    if ( v33 == 6 && *(_WORD *)(v35.m128i_i64[1] + 10) == 58 && *(_WORD *)(v35.m128i_i64[1] + 12) == 92 )
    {
      *((_QWORD *)&v37[0] + 1) += 8LL;
      v35.m128i_i16[1] -= 8;
      v26 = v35.m128i_i16[0] - 8;
      v35.m128i_i64[1] += 8LL;
      LODWORD(a2) = LOWORD(v37[0]);
      LOWORD(a2) = LOWORD(v37[0]) - 8;
      v35.m128i_i16[0] -= 8;
      WORD1(v37[0]) -= 8;
      LOWORD(v37[0]) -= 8;
      v25 = (__m128i)v37[0];
    }
    else
    {
      v26 = v35.m128i_i16[0];
      LODWORD(a2) = _mm_cvtsi128_si32(v25);
    }
    if ( v26 > (unsigned __int16)a2 )
    {
      v35 = v25;
      v22 = v24 == &v36[1];
    }
    v12 = 0LL;
LABEL_49:
    FullPathName_Ustr = 0;
    if ( v22 )
      goto LABEL_52;
  }
LABEL_50:
  if ( v36[2] )
  {
    RtlpSysVolFree(v36[2]);
    v36[1] = 0LL;
    v36[2] = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
LABEL_52:
  if ( FullPathName_Ustr >= 0 )
  {
    if ( (v10 & 1) == 0
      || !NtCurrentPeb()->ProcessParameters
      || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
      || (FullPathName_Ustr = sxsisol_RespectDotLocal(&v35, &v47, v36, v12), FullPathName_Ustr >= 0) )
    {
      v28 = v36[0];
      if ( (v36[0] & 1) != 0
        || (!a4 && !a5 ? (LOBYTE(a2) = 1) : (LOBYTE(a2) = 0),
            FullPathName_Ustr = sxsisol_SearchActCtxForDllName(
                                  (unsigned int)&v35,
                                  (_DWORD)a2,
                                  (unsigned int)&v39,
                                  (_DWORD)a7,
                                  (__int64)&v47),
            FullPathName_Ustr >= 0) )
      {
        if ( a5 || !a4 || *((_QWORD *)&v47 + 1) == *(_QWORD *)(a4 + 8) )
        {
          v30 = v40;
          if ( v40 )
          {
            FullPathName_Ustr = RtlFindCharInUnicodeString(1LL, &v47, &RtlDosPathSeperatorsString, &v34);
            if ( FullPathName_Ustr < 0 )
              goto LABEL_61;
            *v30 = ((unsigned __int64)v34 >> 1) + 1;
          }
          FullPathName_Ustr = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v47);
          if ( FullPathName_Ustr >= 0 )
          {
            if ( a7 )
              *a7 = v28;
            FullPathName_Ustr = 0;
          }
        }
        else
        {
          FullPathName_Ustr = -1073741789;
        }
      }
    }
  }
LABEL_61:
  if ( FullPathName_Ustr >= 0 )
    goto LABEL_69;
  while ( 1 )
  {
    if ( (_BYTE)v52 )
    {
      if ( (_QWORD)v48 && (_QWORD)v48 != *((_QWORD *)&v48 + 1) )
        RtlpSysVolFree(v48);
      if ( *((_QWORD *)&v48 + 1) )
        **((_WORD **)&v48 + 1) = 0;
    }
    v47 = 0LL;
    v52 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
LABEL_69:
    if ( v36[2] )
    {
      RtlpSysVolFree(v36[2]);
      *(_OWORD *)&v36[1] = 0LL;
    }
    if ( v42 )
    {
      if ( v42 != v43 )
        RtlpSysVolFree((__int64)v42);
      v42 = v43;
      v44 = v45;
    }
    v41.m128i_i64[1] = (__int64)v43;
    if ( v43 )
      *v43 = 0;
    v41.m128i_i16[1] = v45;
    v41.m128i_i16[0] = 0;
    if ( FullPathName_Ustr != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      433LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    FullPathName_Ustr = -1073741595;
  }
  return (unsigned int)FullPathName_Ustr;
}
