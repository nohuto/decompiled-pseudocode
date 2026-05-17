/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x1800A2650
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A2500 (RtlDoesFileExists_UstrEx.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800A2F78 (RtlUnicodeStringValidateWorker.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A3020 (RtlGetFullPathName_UstrEx.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A3370 (RtlDetermineDosPathNameType_Ustr.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  __int64 v67; // rdi
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // r9
  int v71; // eax
  int v73; // eax
  __int64 v74; // rax
  unsigned __int16 v75; // r9
  __int16 v76; // r10
  __int16 v77; // ax
  __int64 v78; // rdx
  unsigned __int64 v79; // rdx
  __int16 v80; // r8
  __int16 v81; // dx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r8
  unsigned __int64 v84; // rcx
  __int16 v85; // ax
  __int64 v86; // [rsp+50h] [rbp-B0h] BYREF
  void *Atom; // [rsp+58h] [rbp-A8h]
  int v88; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v89; // [rsp+68h] [rbp-98h]
  _DWORD *v90; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v91; // [rsp+78h] [rbp-88h]
  _QWORD *v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h]
  const void **v94; // [rsp+90h] [rbp-70h]
  __int128 v95; // [rsp+98h] [rbp-68h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-58h]
  __int128 v97; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v100; // [rsp+E0h] [rbp-20h]
  __int128 v101; // [rsp+F0h] [rbp-10h]
  _OWORD v102[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v103; // [rsp+120h] [rbp+20h]
  _BYTE v104[528]; // [rsp+130h] [rbp+30h] BYREF

  v11 = a1;
  v94 = a4;
  v89 = a8;
  v13 = 0LL;
  v92 = a9;
  v14 = 0;
  Atom = v104;
  v93 = a5;
  v96 = a6;
  v91 = a7;
  v86 = 34078720LL;
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
  v15 = RtlDetermineDosPathNameType_Ustr(a3, a2, a8, a9);
  v88 = v15;
  if ( (v11 & 2) != 0 )
  {
    if ( v15 != 5 )
      goto LABEL_17;
    if ( a3->m128i_i16[0] >= 4u )
    {
      v21 = (_WORD *)a3->m128i_i64[1];
      if ( *v21 == 46 )
      {
        v80 = v21[1];
        if ( v80 == 92 || v80 == 47 || v80 == 46 && a3->m128i_i16[0] >= 6u && ((v81 = v21[2], v81 == 92) || v81 == 47) )
        {
          v88 = (int)v19;
LABEL_17:
          if ( RtlDoesFileExists_UstrEx((unsigned __int16 *)a3, 1) )
          {
            FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                  (_DWORD)a3,
                                  v93,
                                  a6,
                                  (_DWORD)v91,
                                  (__int64)v89,
                                  0LL,
                                  (__int64)&v88,
                                  (__int64)v92);
            if ( FullPathName_Ustr >= 0 )
              FullPathName_Ustr = 0;
            goto LABEL_79;
          }
          if ( a4 )
          {
            v78 = *(unsigned __int16 *)a4;
            if ( (_WORD)v78 )
            {
              if ( (v11 & 4) == 0 )
              {
                v82 = a3->m128i_u16[0];
                if ( (_WORD)v82 )
                {
                  v83 = a3->m128i_u64[1];
                  v84 = v83 + 2 * (v82 >> 1);
                  while ( v84 > v83 )
                  {
                    v85 = *(_WORD *)(v84 - 2);
                    v84 -= 2LL;
                    if ( v85 == 92 || v85 == 47 )
                      break;
                    if ( v85 == 46 )
                    {
                      FullPathName_Ustr = -1073741809;
                      goto LABEL_79;
                    }
                  }
                }
              }
              v79 = a3->m128i_u16[0] + 2LL + v78;
              if ( v79 > 0xFFFE )
              {
                FullPathName_Ustr = -1073741562;
                goto LABEL_79;
              }
              if ( v79 > WORD1(v86) )
              {
                WORD1(v86) = v79;
                Atom = (void *)RtlpAllocateAtom();
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
              LOWORD(v86) = a3->m128i_i16[0] + *(_WORD *)a4;
              if ( RtlDoesFileExists_UstrEx((unsigned __int16 *)&v86, 1) )
              {
                FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                      (unsigned int)&v86,
                                      v93,
                                      a6,
                                      (_DWORD)v91,
                                      (__int64)v89,
                                      0LL,
                                      (__int64)&v88,
                                      (__int64)v92);
                if ( FullPathName_Ustr >= 0 )
                  FullPathName_Ustr = 0;
                goto LABEL_79;
              }
            }
          }
          goto LABEL_111;
        }
        v16 = v89;
      }
    }
  }
  if ( v15 != 5 )
    goto LABEL_17;
  if ( (v11 & 1) == 0 )
    goto LABEL_24;
  v90 = v19;
  v73 = RtlDosApplyFileIsolationRedirection_Ustr(
          1,
          a3,
          (__m128i *)a4,
          v18,
          (_OWORD *)a6,
          (unsigned __int64)&v90,
          v19,
          v16,
          v17);
  FullPathName_Ustr = v73;
  if ( v73 >= 0 )
  {
    if ( v91 )
      *v91 = v90;
    FullPathName_Ustr = 0;
    goto LABEL_79;
  }
  if ( v73 == -1072365560 )
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
            v94 = (const void **)v19;
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
            v74 = (v28 - v29 + 2) >> 1;
            v75 = v74 - 1;
            if ( (_WORD)v74 != 1 )
            {
              v76 = *((_WORD *)v28 - 1);
              if ( v76 != 92 && v76 != 47 )
                v75 = v74;
            }
            v28 = v30;
            if ( v75 > v13 )
              v13 = v75;
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
    v90 = (_DWORD *)v34;
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
        v77 = *(v37 - 1);
        if ( v77 != 92 && v77 != 47 )
          v40 += 2;
      }
      v42 = v33 + a3->m128i_u16[0] + v40;
      if ( WORD1(v86) < v42 + 2 )
      {
        if ( Atom != v104 || v42 > 0xFFFC )
          goto LABEL_104;
        WORD1(v86) = v34;
        Atom = (void *)RtlpAllocateAtom();
        if ( !Atom )
          goto LABEL_135;
      }
      LOWORD(v86) = 0;
      if ( (int)RtlUnicodeStringValidateWorker(&v86, v42, v34, 0LL) >= 0 )
      {
        v44 = Atom;
        v43 = (unsigned __int64)WORD1(v86) >> 1;
        v48 = v45;
        v49 = v41 >> 1;
        if ( WORD1(v86) >= 2uLL )
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
        LOWORD(v86) = v46;
      }
      if ( v40 && (_WORD)v41 != v40 )
      {
        *((_WORD *)Atom + ((unsigned __int64)v46 >> 1)) = v47;
        LOWORD(v86) = v86 + 2;
      }
      if ( (int)RtlUnicodeStringValidateWorker(&v86, v43, v44, v45) >= 0
        && (int)RtlUnicodeStringValidateWorker(a3, v50, v51, (unsigned __int64)WORD1(v86) >> 1) >= 0 )
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
        LOWORD(v86) = v53;
      }
      v57 = v94;
      if ( v94
        && (int)RtlUnicodeStringValidateWorker(&v86, v50, v51, v52) >= 0
        && (int)RtlUnicodeStringValidateWorker(v57, v58, v59, (unsigned __int64)WORD1(v86) >> 1) >= 0 )
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
        LOWORD(v86) = v53;
      }
      if ( (unsigned __int64)v53 + 2 > WORD1(v86) )
      {
LABEL_104:
        FullPathName_Ustr = -1073741595;
        goto LABEL_79;
      }
      v99 = 0LL;
      *((_WORD *)Atom + ((unsigned __int64)v53 >> 1)) = 0;
      *(_QWORD *)&v101 = 0LL;
      DWORD2(v101) = 0;
      v103 = 0LL;
      v100 = 0LL;
      v95 = 0LL;
      v97 = 0LL;
      v98 = 0LL;
      memset(v102, 0, sizeof(v102));
      if ( (int)RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (unsigned __int16 *)&v86,
                  0LL,
                  (unsigned __int16 *)&v95,
                  0LL,
                  0LL,
                  (__int64)&v97) >= 0 )
      {
        v67 = *((_QWORD *)&v95 + 1);
        if ( (_WORD)v97 )
        {
          v68 = v98;
          v95 = v97;
        }
        else
        {
          v68 = 0LL;
          *(_QWORD *)&v98 = 0LL;
        }
        *((_QWORD *)&v99 + 1) = v68;
        LODWORD(v99) = 48;
        *(_QWORD *)&v100 = &v95;
        DWORD2(v100) = 64;
        v101 = 0LL;
        v69 = ZwQueryAttributesFile(&v99, v102);
        RtlReleaseRelativeName(&v97);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v67, v70);
        if ( v69 >= 0 )
        {
          v71 = RtlGetFullPathName_UstrEx(
                  (unsigned int)&v86,
                  v93,
                  v96,
                  (_DWORD)v91,
                  (__int64)v89,
                  0LL,
                  (__int64)&v88,
                  (__int64)v92);
          FullPathName_Ustr = 0;
          if ( v71 < 0 )
            FullPathName_Ustr = v71;
          goto LABEL_79;
        }
      }
      v34 = (unsigned __int64)v90;
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
    if ( Atom != v104 )
      RtlpSysVolFree((__int64)Atom);
  }
  return (unsigned int)FullPathName_Ustr;
}
