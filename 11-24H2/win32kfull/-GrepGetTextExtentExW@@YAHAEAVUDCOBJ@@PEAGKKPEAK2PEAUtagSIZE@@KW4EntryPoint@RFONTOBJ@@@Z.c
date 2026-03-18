/*
 * XREFs of ?GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400ACFE4
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x140260B20 (NtGdiGetTextExtentExW.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140310390 (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AD5F0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetTextExtentExW(
        struct UDCOBJ *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        _DWORD *a7,
        char a8,
        int a9)
{
  int *v9; // rdi
  int *v11; // rbx
  unsigned int v13; // r12d
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r8
  __m128i v20; // xmm0
  int v21; // r9d
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm0
  int v27; // r9d
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int i; // eax
  __int64 v34; // rcx
  const unsigned __int16 *v35; // rdx
  __int16 v36; // r8
  const unsigned __int16 *v37; // rcx
  __m128i v38; // xmm0
  int v39; // r9d
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v48; // [rsp+98h] [rbp-78h]
  _DWORD *v49; // [rsp+A0h] [rbp-70h]
  _DWORD v50[2]; // [rsp+A8h] [rbp-68h] BYREF
  _BYTE v51[16]; // [rsp+B0h] [rbp-60h] BYREF
  char v52[56]; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-18h]
  __int64 v54; // [rsp+100h] [rbp-10h]
  int v55; // [rsp+120h] [rbp+10h]
  int v56; // [rsp+124h] [rbp+14h]
  int v57; // [rsp+128h] [rbp+18h]
  int v58; // [rsp+12Ch] [rbp+1Ch]
  int v59; // [rsp+130h] [rbp+20h]
  int v60; // [rsp+1A8h] [rbp+98h]
  void *v61; // [rsp+1C8h] [rbp+B8h]
  char v62; // [rsp+200h] [rbp+F0h] BYREF

  v9 = 0LL;
  v11 = a6;
  v48 = a4;
  v13 = 0;
  v14 = a3;
  v49 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      v15 = *(_QWORD *)a1;
      v50[0] = a9;
      v50[1] = *(unsigned __int16 *)(v15 + 12);
      DC::QuickInitXform(v15, v51, 516LL);
      v47 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit(
                           (RFONTOBJ *)&v47,
                           a1,
                           0LL,
                           2 * (a8 & 1u) + 2,
                           (const struct RFONTOBJ::Tag *)v50) )
        GreAcquireSemaphore<5,RFONT *>(v47);
      if ( v47 )
      {
        if ( (*(_DWORD *)(v47 + 84) & 4) != 0 )
        {
          v34 = *(_QWORD *)(v47 + 120);
          v35 = a2;
          v36 = *(unsigned __int8 *)(*(_QWORD *)(v34 + 32) + 108LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v34 + 16) + 4LL) & 2) != 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v34 + 32) + 108LL) )
            {
              v37 = &a2[v14];
              if ( a2 < v37 )
              {
                do
                  *v35++ -= v36;
                while ( v35 < v37 );
              }
            }
          }
        }
        if ( !a6 && a5 )
        {
          if ( (unsigned int)v14 > 0x28 )
          {
            if ( !(4 * (_DWORD)v14) || (v9 = (int *)Win32AllocPoolZInit((unsigned int)(4 * v14), 1954051143LL)) == 0LL )
              EngSetLastError(8u);
            v11 = v9;
          }
          else
          {
            v11 = (int *)&v62;
          }
        }
        ESTROBJ::vInit(
          (ESTROBJ *)v52,
          a2,
          v14,
          a1,
          (struct RFONTOBJ *)&v47,
          (struct EXFORMOBJ *)v51,
          0LL,
          0,
          *(_DWORD *)(*(_QWORD *)a1 + 1756LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 280LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 284LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 288LL),
          0,
          0,
          0,
          v11,
          0LL,
          0);
        v16 = v60;
        if ( (v60 & 4) != 0 )
        {
          v17 = v53;
          LODWORD(v18) = 0;
          v19 = 118LL;
          if ( (v60 & 8) != 0 )
          {
            v38 = (__m128i)COERCE_UNSIGNED_INT((float)(v57 - v55));
            *(float *)v38.m128i_i32 = *(float *)v38.m128i_i32 * *(float *)(*(_QWORD *)v53 + 404LL);
            v39 = _mm_cvtsi128_si32(v38);
            v40 = (unsigned __int8)(v39 >> 23);
            if ( v40 <= 0x9E )
            {
              v41 = v39 & 0x7FFFFFLL | 0x800000;
              v42 = v40 < 0x76 ? v41 >> (118 - (unsigned __int8)v40) : v41 << ((unsigned __int8)v40 - 118);
              v18 = (v42 + 0x80000000LL) >> 32;
              if ( v39 < 0 )
                LODWORD(v18) = -(int)v18;
            }
            *v49 = v18;
            v31 = 0LL;
            v43 = (__m128i)COERCE_UNSIGNED_INT((float)(v56 - v58));
            *(float *)v43.m128i_i32 = *(float *)v43.m128i_i32 * *(float *)(*(_QWORD *)v17 + 424LL);
            v44 = _mm_cvtsi128_si32(v43);
            v25 = (unsigned __int8)(v44 >> 23);
            if ( (unsigned int)v25 <= 0x9E )
            {
              v45 = v44 & 0x7FFFFFLL | 0x800000;
              if ( (unsigned int)v25 < 0x76 )
              {
                v19 = (unsigned int)(118 - v25);
                v46 = v45 >> (118 - (unsigned __int8)v25);
              }
              else
              {
                v46 = v45 << ((unsigned __int8)v25 - 118);
              }
              v31 = (v46 + 0x80000000LL) >> 32;
              if ( v44 < 0 )
                v31 = (unsigned int)-(int)v31;
            }
          }
          else
          {
            v20 = (__m128i)COERCE_UNSIGNED_INT((float)v59);
            *(float *)v20.m128i_i32 = *(float *)v20.m128i_i32 * *(float *)(*(_QWORD *)v53 + 404LL);
            v21 = _mm_cvtsi128_si32(v20);
            v22 = (unsigned __int8)(v21 >> 23);
            if ( v22 <= 0x9E )
            {
              v23 = v21 & 0x7FFFFFLL | 0x800000;
              v24 = v22 < 0x76 ? v23 >> (118 - (unsigned __int8)v22) : v23 << ((unsigned __int8)v22 - 118);
              v18 = (v24 + 0x80000000LL) >> 32;
              if ( v21 < 0 )
                LODWORD(v18) = -(int)v18;
            }
            v25 = 0LL;
            *v49 = v18;
            v26 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * *(_DWORD *)(*(_QWORD *)v17 + 348LL)));
            *(float *)v26.m128i_i32 = *(float *)v26.m128i_i32 * *(float *)(*(_QWORD *)v17 + 424LL);
            v27 = _mm_cvtsi128_si32(v26);
            v28 = (unsigned __int8)(v27 >> 23);
            if ( v28 <= 0x9E )
            {
              v29 = v27 & 0x7FFFFFLL | 0x800000;
              if ( v28 < 0x76 )
              {
                v19 = 118 - v28;
                v30 = v29 >> (118 - (unsigned __int8)v28);
              }
              else
              {
                v30 = v29 << ((unsigned __int8)v28 - 118);
              }
              v25 = (v30 + 0x80000000LL) >> 32;
              if ( v27 < 0 )
                v25 = (unsigned int)-(int)v25;
            }
            v31 = (unsigned int)v25;
          }
          v49[1] = v31;
          W32GetSessionState(v31, v25, v19);
          if ( a5 && v11 )
          {
            for ( i = 0; i < (unsigned int)v14; ++v11 )
            {
              if ( *v11 > v48 )
                break;
              ++i;
            }
            *a5 = i;
          }
          v16 = v60;
          v13 = 1;
        }
        if ( v9 )
        {
          Win32FreePool(v9);
          v16 = v60;
        }
        if ( (v16 & 0x801) != 0 )
        {
          if ( (v16 & 1) != 0 )
          {
            FreeTmpBuffer(v54);
            v16 = v60;
          }
          if ( (v16 & 0x800) != 0 )
            Win32FreePool(v61);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
      return v13;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
