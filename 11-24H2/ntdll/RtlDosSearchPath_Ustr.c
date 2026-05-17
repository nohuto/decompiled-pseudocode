/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x180076EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDoesFileExists_UstrEx @ 0x180076D70 (RtlDoesFileExists_UstrEx.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800777E8 (RtlUnicodeStringValidateWorker.c)
 *     RtlReleaseRelativeName @ 0x180077830 (RtlReleaseRelativeName.c)
 *     RtlGetFullPathName_UstrEx @ 0x180077890 (RtlGetFullPathName_UstrEx.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180077BE0 (RtlDetermineDosPathNameType_Ustr.c)
 *     ZwQueryAttributesFile @ 0x180162430 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        __m128i *a3,
        const void **a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v11; // bl
  unsigned __int64 v13; // rdi
  unsigned __int16 v14; // r14
  int v15; // eax
  _QWORD *v16; // r8
  _QWORD *v17; // r9
  __int64 v18; // r10
  _DWORD *v19; // r11
  int FullPathName_Ustr; // ebx
  _WORD *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  char *v28; // r10
  char *v29; // rdx
  char *v30; // rcx
  __int64 v31; // rax
  __int16 v32; // cx
  __int64 v33; // r13
  unsigned __int64 v34; // r8
  _WORD *v35; // rbx
  _WORD *v36; // r15
  _WORD *v37; // r14
  __int64 v38; // rdi
  bool v39; // zf
  unsigned __int16 v40; // di
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  _WORD *v44; // r8
  __int64 v45; // r9
  unsigned __int16 v46; // r10
  __int16 v47; // r11
  __int16 v48; // r10
  unsigned __int64 v49; // rcx
  _WORD *v50; // rdx
  _WORD *v51; // r8
  __int64 v52; // r9
  unsigned __int16 v53; // r10
  __int64 v54; // r11
  __int16 v55; // r10
  unsigned __int64 v56; // rax
  const void **v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r11
  __int16 v62; // r10
  _WORD *v63; // rdx
  unsigned __int64 v64; // rcx
  _WORD *v65; // r8
  __int64 i; // r9
  unsigned __int64 v67; // rdi
  __int64 v68; // rax
  int v69; // ebx
  int v70; // eax
  int v72; // eax
  __int64 v73; // rax
  unsigned __int16 v74; // r9
  __int16 v75; // r10
  __int16 v76; // ax
  __int64 v77; // rdx
  unsigned __int64 v78; // rdx
  __int16 v79; // r8
  __int16 v80; // dx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r8
  unsigned __int64 v83; // rcx
  __int16 v84; // ax
  __int64 v85; // [rsp+50h] [rbp-B0h] BYREF
  void *Atom; // [rsp+58h] [rbp-A8h]
  int v87; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v88; // [rsp+68h] [rbp-98h]
  _DWORD *v89; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v90; // [rsp+78h] [rbp-88h]
  _QWORD *v91; // [rsp+80h] [rbp-80h]
  __int64 v92; // [rsp+88h] [rbp-78h]
  const void **v93; // [rsp+90h] [rbp-70h]
  __int128 v94; // [rsp+98h] [rbp-68h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-58h]
  __int128 v96; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v97; // [rsp+C0h] [rbp-40h]
  __int128 v98; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v99; // [rsp+E0h] [rbp-20h]
  __int128 v100; // [rsp+F0h] [rbp-10h]
  _OWORD v101[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v102; // [rsp+120h] [rbp+20h]
  _BYTE v103[528]; // [rsp+130h] [rbp+30h] BYREF

  v11 = a1;
  v93 = a4;
  v88 = a8;
  v13 = 0LL;
  v91 = a9;
  v14 = 0;
  Atom = v103;
  v92 = a5;
  v95 = a6;
  v90 = a7;
  v85 = 34078720LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
    *a9 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || !a2 || !a3 || a5 && a6 && !a7 )
    return 3221225485LL;
  v15 = RtlDetermineDosPathNameType_Ustr(a3);
  v87 = v15;
  if ( (v11 & 2) != 0 )
  {
    if ( v15 != 5 )
      goto LABEL_17;
    if ( a3->m128i_i16[0] >= 4u )
    {
      v21 = (_WORD *)a3->m128i_i64[1];
      if ( *v21 == 46 )
      {
        v79 = v21[1];
        if ( v79 == 92 || v79 == 47 || v79 == 46 && a3->m128i_i16[0] >= 6u && ((v80 = v21[2], v80 == 92) || v80 == 47) )
        {
          v87 = (int)v19;
LABEL_17:
          if ( RtlDoesFileExists_UstrEx((unsigned __int16 *)a3, 1) )
          {
            FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                  (_DWORD)a3,
                                  v92,
                                  a6,
                                  (_DWORD)v90,
                                  (__int64)v88,
                                  0LL,
                                  (__int64)&v87,
                                  (__int64)v91);
            if ( FullPathName_Ustr >= 0 )
              FullPathName_Ustr = 0;
            goto LABEL_79;
          }
          if ( a4 )
          {
            v77 = *(unsigned __int16 *)a4;
            if ( (_WORD)v77 )
            {
              if ( (v11 & 4) == 0 )
              {
                v81 = a3->m128i_u16[0];
                if ( (_WORD)v81 )
                {
                  v82 = a3->m128i_u64[1];
                  v83 = v82 + 2 * (v81 >> 1);
                  while ( v83 > v82 )
                  {
                    v84 = *(_WORD *)(v83 - 2);
                    v83 -= 2LL;
                    if ( v84 == 92 || v84 == 47 )
                      break;
                    if ( v84 == 46 )
                    {
                      FullPathName_Ustr = -1073741809;
                      goto LABEL_79;
                    }
                  }
                }
              }
              v78 = a3->m128i_u16[0] + 2LL + v77;
              if ( v78 > 0xFFFE )
              {
                FullPathName_Ustr = -1073741562;
                goto LABEL_79;
              }
              if ( v78 > WORD1(v85) )
              {
                WORD1(v85) = v78;
                Atom = (void *)RtlpAllocateAtom((unsigned __int16)v78);
                if ( !Atom )
                {
LABEL_135:
                  FullPathName_Ustr = -1073741801;
                  goto LABEL_79;
                }
              }
              memmove(Atom, (const void *)a3->m128i_i64[1], a3->m128i_u16[0]);
              memmove((char *)Atom + 2 * ((unsigned __int64)a3->m128i_u16[0] >> 1), a4[1], *(unsigned __int16 *)a4);
              *((_WORD *)Atom + ((a3->m128i_u16[0] + (unsigned __int64)*(unsigned __int16 *)a4) >> 1)) = 0;
              LOWORD(v85) = a3->m128i_i16[0] + *(_WORD *)a4;
              if ( RtlDoesFileExists_UstrEx((unsigned __int16 *)&v85, 1) )
              {
                FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                      (unsigned int)&v85,
                                      v92,
                                      a6,
                                      (_DWORD)v90,
                                      (__int64)v88,
                                      0LL,
                                      (__int64)&v87,
                                      (__int64)v91);
                if ( FullPathName_Ustr >= 0 )
                  FullPathName_Ustr = 0;
                goto LABEL_79;
              }
            }
          }
          goto LABEL_111;
        }
        v16 = v88;
      }
    }
  }
  if ( v15 != 5 )
    goto LABEL_17;
  if ( (v11 & 1) == 0 )
    goto LABEL_24;
  v89 = v19;
  v72 = RtlDosApplyFileIsolationRedirection_Ustr(
          1,
          a3,
          (__m128i *)a4,
          v18,
          (_OWORD *)a6,
          (unsigned __int64)&v89,
          v19,
          v16,
          v17);
  FullPathName_Ustr = v72;
  if ( v72 >= 0 )
  {
    if ( v90 )
      *v90 = v89;
    FullPathName_Ustr = 0;
    goto LABEL_79;
  }
  if ( v72 == -1072365560 )
  {
    v19 = 0LL;
LABEL_24:
    if ( a4 )
    {
      v22 = a3->m128i_u16[0];
      v14 = *(_WORD *)a4;
      if ( (_WORD)v22 )
      {
        v23 = a3->m128i_u64[1];
        v24 = v23 + 2 * (v22 >> 1);
        while ( v24 > v23 )
        {
          v25 = *(_WORD *)(v24 - 2);
          v24 -= 2LL;
          if ( v25 == 92 || v25 == 47 )
            break;
          if ( v25 == 46 )
          {
            v93 = (const void **)v19;
            v14 = (unsigned __int16)v19;
            break;
          }
        }
      }
    }
    v26 = *a2;
    if ( (_WORD)v26 )
    {
      v27 = *((_QWORD *)a2 + 1);
      v28 = (char *)(v27 + 2 * (v26 >> 1));
      v29 = v28;
      if ( (unsigned __int64)v28 > v27 )
      {
        v30 = v28 - 2;
        do
        {
          if ( *(_WORD *)v30 == 59 )
          {
            v73 = (v28 - v29 + 2) >> 1;
            v74 = v73 - 1;
            if ( (_WORD)v73 != 1 )
            {
              v75 = *((_WORD *)v28 - 1);
              if ( v75 != 92 && v75 != 47 )
                v74 = v73;
            }
            v28 = v30;
            if ( v74 > v13 )
              v13 = v74;
          }
          v29 -= 2;
          v30 -= 2;
        }
        while ( (unsigned __int64)v29 > v27 );
      }
      v31 = (v28 - v29) >> 1;
      if ( (_WORD)v31 )
      {
        v32 = *((_WORD *)v28 - 1);
        if ( v32 != 92 && v32 != 47 )
          LOWORD(v31) = v31 + 1;
      }
      if ( (unsigned __int16)v31 > v13 )
        v13 = (unsigned __int16)v31;
      v13 *= 2LL;
    }
    v33 = v14;
    v34 = v14 + (unsigned __int64)a3->m128i_u16[0] + v13 + 2;
    v89 = (_DWORD *)v34;
    if ( v34 > 0xFFFE )
    {
      FullPathName_Ustr = -1073741562;
      goto LABEL_79;
    }
    v35 = (_WORD *)*((_QWORD *)a2 + 1);
    v36 = &v35[(unsigned __int64)*a2 >> 1];
    while ( v35 < v36 )
    {
      v37 = v35;
      do
      {
        if ( *v37 == 59 )
          break;
        ++v37;
      }
      while ( v37 != v36 );
      v38 = v37 - v35;
      v39 = 2 * (_WORD)v38 == 0;
      v40 = 2 * v38;
      v41 = v40;
      if ( !v39 )
      {
        v76 = *(v37 - 1);
        if ( v76 != 92 && v76 != 47 )
          v40 += 2;
      }
      v42 = v33 + a3->m128i_u16[0] + v40;
      if ( WORD1(v85) < v42 + 2 )
      {
        if ( Atom != v103 || v42 > 0xFFFC )
          goto LABEL_104;
        WORD1(v85) = v34;
        Atom = (void *)RtlpAllocateAtom((unsigned __int16)v34);
        if ( !Atom )
          goto LABEL_135;
      }
      LOWORD(v85) = 0;
      if ( (int)RtlUnicodeStringValidateWorker(&v85, v42, v34, 0LL) >= 0 )
      {
        v44 = Atom;
        v43 = (unsigned __int64)WORD1(v85) >> 1;
        v48 = v45;
        v49 = v41 >> 1;
        if ( WORD1(v85) >= 2uLL )
        {
          do
          {
            if ( !v49 )
              break;
            if ( !*v35 )
              break;
            *v44++ = *v35++;
            --v49;
            ++v48;
            --v43;
          }
          while ( v43 );
        }
        v46 = 2 * v48;
        LOWORD(v85) = v46;
      }
      if ( v40 && (_WORD)v41 != v40 )
      {
        *((_WORD *)Atom + ((unsigned __int64)v46 >> 1)) = v47;
        LOWORD(v85) = v85 + 2;
      }
      if ( (int)RtlUnicodeStringValidateWorker(&v85, v43, v44, v45) >= 0
        && (int)RtlUnicodeStringValidateWorker(a3, v50, v51, (unsigned __int64)WORD1(v85) >> 1) >= 0 )
      {
        v55 = 0;
        v50 = (_WORD *)a3->m128i_i64[1];
        v56 = (unsigned __int64)a3->m128i_u16[0] >> 1;
        v51 = (char *)Atom + 2 * v54;
        for ( v52 -= v54; v52; --v52 )
        {
          if ( !v56 )
            break;
          --v56;
          *v51++ = *v50++;
          ++v55;
        }
        v53 = 2 * (v54 + v55);
        LOWORD(v85) = v53;
      }
      v57 = v93;
      if ( v93
        && (int)RtlUnicodeStringValidateWorker(&v85, v50, v51, v52) >= 0
        && (int)RtlUnicodeStringValidateWorker(v57, v58, v59, (unsigned __int64)WORD1(v85) >> 1) >= 0 )
      {
        v62 = 0;
        v63 = v57[1];
        v64 = (unsigned __int64)*(unsigned __int16 *)v57 >> 1;
        v65 = (char *)Atom + 2 * v61;
        for ( i = v60 - v61; i; --i )
        {
          if ( !v64 )
            break;
          --v64;
          *v65++ = *v63++;
          ++v62;
        }
        v53 = 2 * (v61 + v62);
        LOWORD(v85) = v53;
      }
      if ( (unsigned __int64)v53 + 2 > WORD1(v85) )
      {
LABEL_104:
        FullPathName_Ustr = -1073741595;
        goto LABEL_79;
      }
      v98 = 0LL;
      *((_WORD *)Atom + ((unsigned __int64)v53 >> 1)) = 0;
      *(_QWORD *)&v100 = 0LL;
      DWORD2(v100) = 0;
      v102 = 0LL;
      v99 = 0LL;
      v94 = 0LL;
      v96 = 0LL;
      v97 = 0LL;
      memset(v101, 0, sizeof(v101));
      if ( (int)RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (unsigned __int16 *)&v85,
                  0LL,
                  (unsigned __int16 *)&v94,
                  0LL,
                  0LL,
                  (__int64)&v96) >= 0 )
      {
        v67 = *((_QWORD *)&v94 + 1);
        if ( (_WORD)v96 )
        {
          v68 = v97;
          v94 = v96;
        }
        else
        {
          v68 = 0LL;
          *(_QWORD *)&v97 = 0LL;
        }
        *((_QWORD *)&v98 + 1) = v68;
        LODWORD(v98) = 48;
        *(_QWORD *)&v99 = &v94;
        DWORD2(v99) = 64;
        v100 = 0LL;
        v69 = ZwQueryAttributesFile(&v98, v101);
        RtlReleaseRelativeName(&v96);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v67);
        if ( v69 >= 0 )
        {
          v70 = RtlGetFullPathName_UstrEx(
                  (unsigned int)&v85,
                  v92,
                  v95,
                  (_DWORD)v90,
                  (__int64)v88,
                  0LL,
                  (__int64)&v87,
                  (__int64)v91);
          FullPathName_Ustr = 0;
          if ( v70 < 0 )
            FullPathName_Ustr = v70;
          goto LABEL_79;
        }
      }
      v34 = (unsigned __int64)v89;
      if ( v37 == v36 )
        v35 = v37;
      else
        v35 = v37 + 1;
    }
LABEL_111:
    FullPathName_Ustr = -1073741809;
  }
LABEL_79:
  if ( Atom )
  {
    if ( Atom != v103 )
      RtlpSysVolFree((__int64)Atom);
  }
  return (unsigned int)FullPathName_Ustr;
}
