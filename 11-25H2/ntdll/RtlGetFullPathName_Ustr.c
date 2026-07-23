/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180017680
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpGetFullPath @ 0x180070F10 (LdrpGetFullPath.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A11C0 (RtlSetCurrentDirectory_U.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A3020 (RtlGetFullPathName_UstrEx.c)
 *     RtlGetFullPathName_U @ 0x1800AA590 (RtlGetFullPathName_U.c)
 *     RtlGetFullPathName_UEx @ 0x1800DEE40 (RtlGetFullPathName_UEx.c)
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x180018CB0 (RtlpIsDosDeviceName_Ustr.c)
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpCheckDeviceName @ 0x1800A0BCC (RtlpCheckDeviceName.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1800A13F0 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A1730 (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x1800A2440 (RtlpComputeBackupIndex.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800A2F78 (RtlUnicodeStringValidateWorker.c)
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     RtlpCheckRelativeDrive @ 0x1800AEF70 (RtlpCheckRelativeDrive.c)
 *     RtlUnicodeStringCopy @ 0x1800DB8E0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x1800DB9A0 (RtlUnicodeStringValidateWorker_0.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        WCHAR *a3,
        __int64 *a4,
        _BYTE *a5,
        _QWORD *a6)
{
  WCHAR *v6; // r14
  unsigned int v8; // r12d
  unsigned int v9; // edi
  _WORD *v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int16 v13; // ax
  WCHAR v14; // r13
  unsigned int IsDosDeviceName_Ustr; // eax
  _WORD *v16; // rax
  unsigned __int16 v17; // cx
  __int16 v18; // cx
  int v19; // eax
  unsigned __int16 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r11
  volatile signed __int32 *v23; // rdx
  unsigned int i; // ebx
  unsigned int v25; // r13d
  unsigned __int16 v26; // r10
  unsigned int v27; // r8d
  unsigned int v28; // r15d
  unsigned int v29; // edx
  unsigned int j; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int16 v33; // ax
  WCHAR v34; // r8
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned int v38; // ebx
  WCHAR *v39; // rcx
  unsigned __int16 v40; // r8
  __int64 v41; // r8
  __int16 v42; // r9
  __int64 v43; // rax
  WCHAR v44; // cx
  unsigned int v45; // ecx
  __int64 v46; // r9
  WCHAR v47; // cx
  unsigned __int16 v48; // dx
  unsigned __int64 v49; // rax
  __int16 v50; // r8
  PWSTR v51; // r13
  WCHAR *v52; // r12
  unsigned __int64 v53; // r15
  int v54; // edx
  __int64 v55; // r10
  __int64 v56; // r11
  _CURDIR *v57; // rax
  _CURDIR *v58; // rdx
  __m128i DosPath; // xmm1
  unsigned __int64 v60; // r10
  __int64 v61; // r13
  unsigned __int64 v62; // r15
  int v63; // eax
  unsigned __int64 v64; // r10
  __int64 v65; // r11
  PWSTR v66; // rcx
  int v67; // eax
  _CURDIR *v68; // rax
  _CURDIR *p_CurrentDirectory; // r11
  wchar_t v70; // ax
  __m128i *v71; // r11
  wchar_t v72; // r15
  __int16 v73; // r9
  size_t v74; // rax
  __int16 v75; // cx
  unsigned __int16 v76; // dx
  SIZE_T ValueLength; // r13
  NTSTATUS v78; // eax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int16 v81; // r10
  __int64 v82; // rbx
  unsigned __int16 v83; // cx
  unsigned __int64 v84; // rax
  _CURDIR *v85; // rax
  _CURDIR *v86; // r11
  int v87; // eax
  __m128i *v88; // r11
  __int64 v89; // r10
  WCHAR *v90; // r13
  unsigned __int64 v91; // r11
  PWSTR v92; // rcx
  __int64 v93; // rdx
  __m128i v94; // xmm1
  PWSTR v95; // r15
  __int64 v96; // r13
  unsigned __int64 v97; // rbx
  int v98; // edx
  __int64 v99; // r10
  unsigned __int64 v100; // r11
  int v101; // eax
  __int64 v102; // r8
  unsigned __int64 v103; // rcx
  __int16 v104; // dx
  PWSTR v105; // r11
  SIZE_T v106; // r9
  wchar_t *v107; // rcx
  __int64 v108; // r10
  int v109; // eax
  int v110; // eax
  int v111; // eax
  __int64 result; // rax
  unsigned int v113; // r14d
  unsigned int v114; // r15d
  unsigned int v115; // r12d
  unsigned __int64 v116; // rbx
  int v117; // eax
  __int64 v118; // r8
  PWSTR v119; // rdi
  int v120; // r11d
  const wchar_t *v121; // r10
  __int64 v122; // r15
  signed __int64 v123; // rdi
  __int64 v124; // rbx
  unsigned __int64 v125; // rbx
  int v126; // eax
  unsigned __int64 v127; // r9
  unsigned __int64 v128; // r10
  unsigned __int16 v129; // r11
  int v130; // ecx
  __int16 v131; // dx
  __int16 v132; // dx
  __int16 v133; // dx
  char v134; // [rsp+30h] [rbp-268h]
  bool v135; // [rsp+31h] [rbp-267h]
  int v136; // [rsp+38h] [rbp-260h]
  int v137; // [rsp+3Ch] [rbp-25Ch]
  unsigned int v138; // [rsp+3Ch] [rbp-25Ch]
  __int64 v139; // [rsp+40h] [rbp-258h] BYREF
  WCHAR *v140; // [rsp+48h] [rbp-250h]
  int v141; // [rsp+50h] [rbp-248h]
  int k; // [rsp+54h] [rbp-244h]
  unsigned int v143; // [rsp+58h] [rbp-240h]
  WCHAR v144; // [rsp+5Ch] [rbp-23Ch]
  int v145; // [rsp+60h] [rbp-238h]
  unsigned __int64 v146; // [rsp+68h] [rbp-230h]
  _CURDIR *v147; // [rsp+70h] [rbp-228h]
  __m128i v148; // [rsp+78h] [rbp-220h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-210h]
  PWSTR Value; // [rsp+90h] [rbp-208h]
  __int64 v151; // [rsp+98h] [rbp-200h]
  unsigned int v152; // [rsp+A0h] [rbp-1F8h]
  unsigned int v153; // [rsp+A4h] [rbp-1F4h]
  int v154; // [rsp+A8h] [rbp-1F0h]
  int v155; // [rsp+ACh] [rbp-1ECh]
  _CURDIR *v156; // [rsp+B0h] [rbp-1E8h]
  __int16 v157; // [rsp+B8h] [rbp-1E0h]
  int v158; // [rsp+BCh] [rbp-1DCh]
  int v159; // [rsp+C0h] [rbp-1D8h]
  int v160; // [rsp+C4h] [rbp-1D4h]
  int v161; // [rsp+C8h] [rbp-1D0h]
  int v162; // [rsp+CCh] [rbp-1CCh]
  unsigned int v163; // [rsp+D0h] [rbp-1C8h]
  PWSTR v164; // [rsp+D8h] [rbp-1C0h]
  PWSTR v165; // [rsp+E0h] [rbp-1B8h]
  unsigned __int64 v166; // [rsp+E8h] [rbp-1B0h]
  WCHAR *v167; // [rsp+F0h] [rbp-1A8h]
  unsigned __int64 v168; // [rsp+F8h] [rbp-1A0h]
  PWSTR v169; // [rsp+100h] [rbp-198h]
  unsigned __int64 v170; // [rsp+108h] [rbp-190h]
  unsigned __int64 v171; // [rsp+110h] [rbp-188h]
  unsigned __int64 v172; // [rsp+118h] [rbp-180h]
  ULONG_PTR ReturnLength; // [rsp+120h] [rbp-178h] BYREF
  PWSTR v174; // [rsp+128h] [rbp-170h]
  SIZE_T v175; // [rsp+130h] [rbp-168h]
  unsigned __int64 v176; // [rsp+138h] [rbp-160h]
  __int64 v177; // [rsp+140h] [rbp-158h]
  unsigned __int64 v178; // [rsp+148h] [rbp-150h]
  unsigned __int64 v179; // [rsp+150h] [rbp-148h]
  unsigned __int64 v180; // [rsp+158h] [rbp-140h]
  unsigned __int64 v181; // [rsp+160h] [rbp-138h]
  __int64 *v182; // [rsp+168h] [rbp-130h] BYREF
  PWSTR v183; // [rsp+170h] [rbp-128h]
  __int64 v184; // [rsp+178h] [rbp-120h]
  unsigned __int64 v185; // [rsp+180h] [rbp-118h]
  __int64 v186; // [rsp+188h] [rbp-110h]
  PWSTR v187; // [rsp+190h] [rbp-108h]
  unsigned __int64 v188; // [rsp+198h] [rbp-100h]
  __int64 v189; // [rsp+1A0h] [rbp-F8h]
  unsigned __int64 v190; // [rsp+1A8h] [rbp-F0h]
  __int64 v191; // [rsp+1B0h] [rbp-E8h]
  PWSTR v192; // [rsp+1B8h] [rbp-E0h]
  wchar_t *v193; // [rsp+1C0h] [rbp-D8h]
  SIZE_T v194; // [rsp+1C8h] [rbp-D0h]
  __int64 v195; // [rsp+1D0h] [rbp-C8h]
  __int64 v196; // [rsp+1D8h] [rbp-C0h]
  PWSTR v197; // [rsp+1E0h] [rbp-B8h]
  WCHAR *v198; // [rsp+1E8h] [rbp-B0h]
  __int64 v199; // [rsp+1F0h] [rbp-A8h]
  unsigned __int64 v200; // [rsp+1F8h] [rbp-A0h]
  __int64 v201; // [rsp+200h] [rbp-98h]
  PWSTR v202; // [rsp+208h] [rbp-90h]
  unsigned __int64 v203; // [rsp+210h] [rbp-88h]
  __int64 v204; // [rsp+218h] [rbp-80h]
  unsigned __int64 v205; // [rsp+220h] [rbp-78h]
  __int64 v206; // [rsp+228h] [rbp-70h]
  PWSTR v207; // [rsp+230h] [rbp-68h]
  WCHAR *v208; // [rsp+238h] [rbp-60h]
  __int16 v209; // [rsp+240h] [rbp-58h]
  __int16 v210; // [rsp+242h] [rbp-56h]
  wchar_t *p_String; // [rsp+248h] [rbp-50h]
  wchar_t String; // [rsp+250h] [rbp-48h] BYREF
  _BYTE v213[6]; // [rsp+252h] [rbp-46h]

  v182 = a4;
  v6 = a3;
  Value = a3;
  v151 = (__int64)a6;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  v153 = v8;
  *a6 = 0LL;
  v152 = *a1;
  v9 = v152 >> 1;
  if ( !(v152 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  v11 = v152 >> 1;
  k = v152 >> 1;
  do
  {
    v12 = v11 - 1;
    if ( v10[v12] != 32 )
      break;
    --v11;
  }
  while ( (_DWORD)v12 );
  k = v11;
  if ( !v11 )
    return 0LL;
  v13 = v10[v9 - 1];
  v135 = v13 != 92 && v13 != 47;
  v143 = v8 >> 1;
  v163 = v8 >> 1;
  memset_thunk_772440563353939046(v6, 0, v8);
  v139 = 0LL;
  v14 = 2 * (v8 >> 1);
  v144 = v14;
  *(_DWORD *)((char *)&v139 + 2) = v14;
  v140 = v6;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v113 = HIWORD(IsDosDeviceName_Ustr);
    v114 = (unsigned __int16)IsDosDeviceName_Ustr;
    v145 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v113 || (int)RtlpCheckDeviceName(a1, v113, a5) >= 0 && !*a5 )
    {
      v115 = v114 + 8;
      if ( v114 + 8 >= v14 )
      {
        result = 0LL;
        if ( v114 + 10 <= 0xFFFF )
          return v114 + 10;
      }
      else
      {
        v116 = 0LL;
        v117 = RtlUnicodeStringValidateWorker_0(&v139);
        if ( v117 >= 0 )
          v116 = (unsigned __int64)v14 >> 1;
        v119 = Value;
        if ( v117 >= 0 )
        {
          if ( (int)RtlUnicodeStringValidateWorker_0(L"\b\n") >= 0 )
          {
            v121 = L"\\\\.\\";
            v122 = (unsigned int)(v120 + 4);
            if ( v116 )
            {
              v123 = (char *)v119 - (char *)L"\\\\.\\";
              v124 = v116 - v122;
              do
              {
                if ( !v122 )
                  break;
                *(const wchar_t *)((char *)v121 + v123) = *v121;
                ++v121;
                --v122;
                LOWORD(v120) = v120 + 1;
              }
              while ( v122 + v124 );
            }
          }
          LOWORD(v139) = 2 * v120;
          v114 = v145;
        }
        v125 = *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v113 >> 1);
        v126 = RtlUnicodeStringValidateWorker(&v139, 0LL, v118, 0LL);
        if ( v126 < 0 )
        {
          v130 = 0;
        }
        else
        {
          v130 = (int)Value;
          v128 = (unsigned __int64)v14 >> 1;
          v127 = (unsigned __int64)v129 >> 1;
        }
        if ( v126 >= 0 )
          RtlWideCharArrayCopyStringWorker(
            v130 + 2 * v127,
            v128 - v127,
            (unsigned int)&v182,
            v125,
            (unsigned __int64)v114 >> 1);
        return v115;
      }
      return result;
    }
    return 0LL;
  }
  v16 = (_WORD *)*((_QWORD *)a1 + 1);
  v17 = *a1;
  if ( *a1 < 2u || *v16 != 92 && *v16 != 47 )
  {
    if ( v17 >= 4u && *v16 && v16[1] == 58 )
    {
      if ( v17 < 6u || (v18 = v16[2], v18 != 92) && v18 != 47 )
      {
        v19 = 3;
        v20 = 4;
        goto LABEL_27;
      }
      v19 = 2;
    }
    else
    {
      v19 = 5;
    }
LABEL_26:
    v20 = 4;
    goto LABEL_27;
  }
  if ( v17 >= 4u )
  {
    v131 = v16[1];
    if ( v131 == 92 || v131 == 47 )
    {
      if ( v17 >= 6u && ((v132 = v16[2], v132 == 46) || v132 == 63) )
      {
        if ( v17 >= 8u && ((v133 = v16[3], v133 == 92) || v133 == 47) )
        {
          v19 = 6;
        }
        else
        {
          v19 = 1;
          if ( v17 == 6 )
            v19 = 7;
        }
      }
      else
      {
        v19 = 1;
      }
      goto LABEL_26;
    }
  }
  v20 = 4;
  v19 = 4;
LABEL_27:
  v21 = v151;
  *(_DWORD *)v151 = v19;
  v148 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v147 = 0LL;
  BaseAddress = 0LL;
  v134 = 0;
  i = 0;
  if ( v19 != 2 )
  {
    switch ( v19 )
    {
      case 1:
        v102 = 0LL;
        v154 = 0;
        for ( i = 2; ; ++i )
        {
          k = i;
          v103 = i;
          if ( i >= v9 )
            break;
          v104 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i);
          if ( v104 == 92 || v104 == 47 )
          {
            v102 = (unsigned int)(v102 + 1);
            v154 = v102;
            if ( (_DWORD)v102 == 2 )
              break;
          }
        }
        v25 = i;
        v145 = i;
        v148.m128i_i64[1] = *((_QWORD *)a1 + 1);
        LOWORD(v103) = 2 * i;
        v146 = v103;
        v148.m128i_i16[0] = 2 * i;
        v148.m128i_i16[1] = a1[1];
        RtlUnicodeStringCopy(&v139, &v148, v102);
        v6 = v140;
        v22 = 0LL;
        goto LABEL_30;
      case 3:
        v68 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        v147 = v68;
        BaseAddress = v68;
        v134 = 1;
        if ( v68 )
        {
          p_CurrentDirectory = v68 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v6 = v140;
          v14 = WORD1(v139);
          v147 = 0LL;
        }
        v156 = p_CurrentDirectory;
        v157 = NLS_UPCASE(qword_1801CF038, *p_CurrentDirectory->DosPath.Buffer);
        v70 = NLS_UPCASE(qword_1801CF038, **((unsigned __int16 **)a1 + 1));
        v72 = v70;
        LOWORD(v153) = v70;
        if ( v73 == v70 )
        {
          v94 = *v71;
          v148 = *v71;
          v169 = 0LL;
          v170 = 0LL;
          if ( (int)RtlUnicodeStringValidateWorker_0(&v139) < 0 )
          {
            LOWORD(v27) = v148.m128i_i16[0];
            v26 = v139;
            goto LABEL_182;
          }
          v95 = Value;
          v169 = Value;
          v170 = (unsigned __int64)v14 >> 1;
          v96 = (unsigned int)v22;
          v97 = (unsigned int)v22;
          v171 = (unsigned int)v22;
          v172 = v22;
          v98 = RtlUnicodeStringValidateWorker_0(&v148);
          if ( v98 < 0 )
          {
            LOWORD(v27) = v148.m128i_i16[0];
          }
          else
          {
            v97 = _mm_srli_si128(v94, 8).m128i_u64[0];
            v171 = v97;
            v146 = (unsigned int)_mm_cvtsi128_si32(v94);
            v100 = (unsigned __int64)(unsigned __int16)v146 >> 1;
            v172 = v100;
            LOWORD(v27) = v146;
          }
          if ( v98 >= 0 )
          {
            v190 = v100;
            v188 = v97;
            v189 = v99;
            v187 = v95;
            v159 = 0;
            v191 = 0LL;
            while ( v99 )
            {
              if ( !v100 )
                goto LABEL_180;
              *v95++ = *(_WORD *)v97;
              v187 = v95;
              v97 += 2LL;
              v188 = v97;
              v189 = --v99;
              v190 = --v100;
              v191 = ++v96;
            }
            v110 = 0;
            if ( v100 )
              v110 = -2147483643;
            v159 = v110;
          }
LABEL_180:
          v26 = 2 * v96;
          LOWORD(v139) = 2 * v96;
        }
        else
        {
          RtlpCheckRelativeDrive(v70);
          String = 61;
          *(_WORD *)v213 = v72;
          *(_DWORD *)&v213[2] = 58;
          p_String = &String;
          v74 = 2 * wcslen(&String);
          v151 = v74;
          v75 = v74;
          v76 = v74;
          if ( v74 >= 0xFFFE )
          {
            LOWORD(v74) = -4;
            v151 = 65532LL;
            v75 = -4;
            v76 = -4;
          }
          v209 = v74;
          v210 = v75 + 2;
          ReturnLength = 0LL;
          ValueLength = (unsigned __int64)v14 >> 1;
          v78 = RtlQueryEnvironmentVariable(0LL, &String, (unsigned __int64)v76 >> 1, Value, ValueLength, &ReturnLength);
          v155 = v78;
          v81 = ReturnLength;
          v82 = 0x7FFFLL;
          if ( ReturnLength > 0x7FFF )
          {
            v78 = -1073741801;
            v155 = -1073741801;
            v26 = v139;
          }
          else
          {
            if ( v78 == -1073741789 )
              v81 = ReturnLength - 1;
            v26 = 2 * v81;
            LOWORD(v139) = v26;
          }
          if ( v78 < 0 )
          {
            if ( v78 == -1073741789 )
            {
              v27 = v26 + 2;
              v22 = 0LL;
              if ( v27 > 0xFFFF )
              {
                v28 = 0;
                v136 = 0;
                v38 = v143;
                v23 = (volatile signed __int32 *)v147;
                goto LABEL_229;
              }
              v148.m128i_i16[0] = v26 + 2;
LABEL_182:
              v25 = 3;
              v145 = 3;
              i = 2;
              goto LABEL_32;
            }
            LOWORD(v139) = 0;
            String = v72;
            *(_DWORD *)v213 = 6029370;
            *(_WORD *)&v213[4] = 0;
            v174 = 0LL;
            v175 = 0LL;
            if ( (int)RtlUnicodeStringValidateWorker(&v139, v79, v80, 0LL) >= 0 )
            {
              v105 = Value;
              v174 = Value;
              v106 = ValueLength;
              v175 = ValueLength;
              v195 = 0x7FFFLL;
              v107 = &String;
              v193 = &String;
              v194 = ValueLength;
              v192 = Value;
              v160 = 0;
              v108 = 0LL;
              v196 = 0LL;
              while ( v106 )
              {
                if ( !v82 || !*v107 )
                  goto LABEL_208;
                *v105++ = *v107;
                v192 = v105;
                v193 = ++v107;
                v194 = --v106;
                v195 = --v82;
                v196 = ++v108;
              }
              if ( v82 )
              {
                v111 = 0;
                if ( *v107 )
                  v111 = -2147483643;
                v160 = v111;
              }
LABEL_208:
              v26 = 2 * v108;
              LOWORD(v139) = v26;
            }
            LOWORD(v27) = 8;
            v148.m128i_i16[0] = 8;
          }
          else
          {
            v83 = v26;
            v84 = (unsigned __int64)v26 >> 1;
            k = v84;
            if ( (unsigned int)v84 <= 3 || (unsigned int)v84 >= v143 )
            {
              v146 = v26;
              v148.m128i_i16[0] = v26;
              LOWORD(v27) = v26;
            }
            else
            {
              Value[(unsigned int)v84] = 92;
              v26 += 2;
              LOWORD(v139) = v83 + 2;
              v146 = (unsigned __int16)(v83 + 2);
              v148.m128i_i16[0] = v83 + 2;
              LOWORD(v27) = v83 + 2;
            }
          }
        }
        v22 = 0LL;
        goto LABEL_182;
      case 4:
        LOBYTE(v21) = 1;
        v85 = (_CURDIR *)RtlpReferenceCurrentDirectory(v21, 0LL);
        v147 = v85;
        BaseAddress = v85;
        v134 = 1;
        if ( v85 )
        {
          v86 = v85 + 1;
        }
        else
        {
          v86 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v6 = v140;
          v14 = WORD1(v139);
          i = 0;
          v147 = 0LL;
        }
        v156 = v86;
        v87 = RtlpComputeBackupIndex(v86);
        v137 = v87;
        v145 = v87;
        v148 = *v88;
        if ( v87 == 3 )
        {
          v146 = 4LL;
          v148.m128i_i16[0] = 4;
        }
        else
        {
          v20 = 2 * v87;
          v146 = (unsigned __int16)(2 * v87);
          v148.m128i_i16[0] = 2 * v87;
        }
        v164 = 0LL;
        v176 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v139) < 0 )
          goto LABEL_29;
        v164 = Value;
        v176 = (unsigned __int64)v14 >> 1;
        v151 = v22;
        v177 = v22;
        v178 = v22;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v148) < 0 )
        {
          LOWORD(v93) = v151;
        }
        else
        {
          v90 = (WCHAR *)v148.m128i_i64[1];
          v177 = v148.m128i_i64[1];
          v91 = (unsigned __int64)v20 >> 1;
          v178 = v91;
          v200 = v91;
          v198 = (WCHAR *)v148.m128i_i64[1];
          v199 = v89;
          v92 = v164;
          v197 = v164;
          v161 = 0;
          v93 = 0LL;
          v201 = 0LL;
          while ( v89 )
          {
            if ( !v91 )
              goto LABEL_171;
            *v92++ = *v90;
            v197 = v92;
            v198 = ++v90;
            v199 = --v89;
            v200 = --v91;
            v201 = ++v93;
          }
          v109 = 0;
          if ( v91 )
            v109 = -2147483643;
          v161 = v109;
        }
LABEL_171:
        v26 = 2 * v93;
        LOWORD(v139) = 2 * v93;
        v22 = 0LL;
        v25 = v137;
        goto LABEL_31;
      case 5:
        v57 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        v147 = v57;
        BaseAddress = v57;
        v134 = 1;
        if ( v57 )
        {
          v58 = v57 + 1;
          *(_DWORD *)(v151 + 4) = v57[1].Handle;
        }
        else
        {
          v58 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v6 = v140;
          v14 = WORD1(v139);
          i = 0;
          v147 = 0LL;
        }
        v156 = v58;
        DosPath = (__m128i)v58->DosPath;
        v148 = (__m128i)v58->DosPath;
        v138 = RtlpComputeBackupIndex(v58);
        v145 = v138;
        v165 = 0LL;
        v179 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v139) >= 0 )
        {
          v165 = Value;
          v179 = (unsigned __int64)v14 >> 1;
          v61 = (unsigned int)v60;
          v62 = (unsigned int)v60;
          v180 = v60;
          v181 = v60;
          v63 = RtlUnicodeStringValidateWorker_0(&v148);
          if ( v63 < 0 )
          {
            LOWORD(v27) = v148.m128i_i16[0];
          }
          else
          {
            v62 = _mm_srli_si128(DosPath, 8).m128i_u64[0];
            v180 = v62;
            v146 = (unsigned __int16)_mm_cvtsi128_si32(DosPath);
            v64 = v146 >> 1;
            v181 = v146 >> 1;
            LOWORD(v27) = v146;
          }
          if ( v63 >= 0 )
          {
            v205 = v64;
            v203 = v62;
            v204 = v65;
            v66 = v165;
            v202 = v165;
            v162 = 0;
            v206 = 0LL;
            while ( v65 )
            {
              if ( !v64 )
                goto LABEL_144;
              *v66++ = *(_WORD *)v62;
              v202 = v66;
              v62 += 2LL;
              v203 = v62;
              v204 = --v65;
              v205 = --v64;
              v206 = ++v61;
            }
            v101 = 0;
            if ( v64 )
              v101 = -2147483643;
            v162 = v101;
          }
LABEL_144:
          v26 = 2 * v61;
          LOWORD(v139) = 2 * v61;
          v22 = 0LL;
          v25 = v138;
          goto LABEL_32;
        }
        LOWORD(v27) = v148.m128i_i16[0];
        v26 = v139;
        v22 = 0LL;
        v25 = v138;
        goto LABEL_32;
      case 6:
      case 7:
        v145 = 4;
        i = 4;
        if ( v9 < 4 )
          i = v9;
        v148 = *(__m128i *)L"\b\n";
        v183 = 0LL;
        v166 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v139) >= 0 )
        {
          v51 = Value;
          v183 = Value;
          v166 = (unsigned __int64)v144 >> 1;
          v52 = 0LL;
          v167 = 0LL;
          v53 = 0LL;
          v168 = 0LL;
          v54 = RtlUnicodeStringValidateWorker_0(&v148);
          if ( v54 < 0 )
          {
            LOWORD(v27) = v148.m128i_i16[0];
          }
          else
          {
            v52 = (WCHAR *)_mm_srli_si128(*(__m128i *)L"\b\n", 8).m128i_u64[0];
            v167 = v52;
            v146 = (unsigned int)_mm_cvtsi128_si32(*(__m128i *)L"\b\n");
            v53 = (unsigned __int64)(unsigned __int16)v146 >> 1;
            v168 = v53;
            LOWORD(v27) = v146;
          }
          if ( v54 >= 0 )
          {
            v185 = v53;
            v208 = v52;
            v184 = v56;
            v207 = v51;
            v158 = 0;
            v186 = 0LL;
            while ( v56 )
            {
              if ( !v53 )
                goto LABEL_129;
              *v51++ = *v52;
              v207 = v51;
              v208 = ++v52;
              v184 = --v56;
              v185 = --v53;
              v186 = ++v55;
            }
            v67 = 0;
            if ( v53 )
              v67 = -2147483643;
            v158 = v67;
          }
LABEL_129:
          v26 = 2 * v55;
          LOWORD(v139) = v26;
          v8 = v153;
          goto LABEL_130;
        }
        LOWORD(v27) = v148.m128i_i16[0];
        v26 = v139;
LABEL_130:
        if ( v26 >= 6u )
          v6[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v22 = 0LL;
        v25 = 4;
        if ( *(_DWORD *)v151 == 7 )
          v135 = 0;
        goto LABEL_32;
      default:
        v28 = 0;
        v136 = 0;
        v38 = v143;
        goto LABEL_229;
    }
  }
  v137 = 3;
  v145 = 3;
  v146 = v148.m128i_u16[0];
LABEL_29:
  v25 = v137;
LABEL_30:
  v26 = v139;
LABEL_31:
  LOWORD(v27) = v146;
LABEL_32:
  v28 = (unsigned __int16)v27;
  v29 = v152 + (unsigned __int16)v27 - 2 * i;
  v152 = v29;
  if ( (unsigned __int64)v29 + 2 > v8 )
  {
    if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
    {
      v28 = v22;
      if ( v29 + 2 <= 0xFFFF )
        v28 = v29 + 2;
      v38 = v143;
      v136 = v28;
      v23 = (volatile signed __int32 *)v147;
      goto LABEL_229;
    }
    if ( v9 != 1 )
    {
      v28 = v29;
      if ( v29 > 0xFFFF )
        v28 = v22;
      v152 = v28;
      v38 = v143;
      v136 = v28;
      v23 = (volatile signed __int32 *)v147;
      goto LABEL_229;
    }
    if ( (_WORD)v27 == 8 )
    {
      if ( v8 <= (unsigned __int16)v27 )
      {
        v28 = 10;
        v38 = v143;
        v136 = 10;
        v23 = (volatile signed __int32 *)v147;
        goto LABEL_229;
      }
    }
    else
    {
      if ( v8 < (unsigned __int16)v27 )
      {
        v38 = v143;
        v136 = (unsigned __int16)v27;
        v23 = (volatile signed __int32 *)v147;
        goto LABEL_229;
      }
      v48 = v26;
      v49 = (unsigned __int64)v26 >> 1;
      k = v49;
      if ( (_DWORD)v49 && v6[(unsigned int)(v49 - 1)] == 92 )
      {
        v26 -= 2;
        LOWORD(v139) = v48 - 2;
      }
    }
  }
  for ( j = v22; ; ++j )
  {
    k = j;
    if ( j >= v26 >> 1 )
      break;
    if ( v6[j] == 47 )
      v6[j] = 92;
  }
  v31 = v26 >> 1;
  v141 = v26 >> 1;
  while ( i < v9 )
  {
    v32 = *((_QWORD *)a1 + 1);
    v33 = *(_WORD *)(v32 + 2LL * i);
    if ( v33 == 47 )
      goto LABEL_49;
    if ( v33 != 46 )
    {
      if ( v33 != 92 )
        goto LABEL_40;
LABEL_49:
      if ( !(_DWORD)v31 || v6[(unsigned int)(v31 - 1)] != 92 )
      {
        v6[v31] = 92;
        v31 = (unsigned int)(v31 + 1);
        v141 = v31;
      }
      goto LABEL_48;
    }
    v41 = i + 1;
    if ( (_DWORD)v41 != v9 )
    {
      v42 = *(_WORD *)(v32 + 2 * v41);
      if ( v42 == 92 || v42 == 47 )
      {
        ++i;
      }
      else if ( v42 == 46
             && ((v43 = i + 2, (_DWORD)v43 == v9) || (v50 = *(_WORD *)(v32 + 2 * v43), v50 == 47) || v50 == 92) )
      {
        while ( (unsigned int)v31 >= v25 )
        {
          v144 = v6[v31];
          v44 = v144;
          v6[v31] = v22;
          if ( v44 == 92 )
          {
            while ( (unsigned int)v31 >= v25 )
            {
              v144 = v6[v31];
              v47 = v144;
              v6[v31] = v22;
              if ( v47 == 92 )
              {
                if ( (unsigned int)v31 >= v25 )
                  goto LABEL_96;
                goto LABEL_95;
              }
              v31 = (unsigned int)(v31 - 1);
              v141 = v31;
            }
            break;
          }
          v31 = (unsigned int)(v31 - 1);
          v141 = v31;
        }
LABEL_95:
        v31 = (unsigned int)(v31 + 1);
        v141 = v31;
LABEL_96:
        ++i;
      }
      else
      {
LABEL_40:
        while ( i < v9 )
        {
          v34 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i);
          if ( v34 == 92 || v34 == 47 )
            v35 = 1;
          else
            v35 = v22;
          if ( v35 )
          {
            if ( i < v9 && (unsigned int)v31 >= 2 )
            {
              v36 = (unsigned int)(v31 - 1);
              if ( v6[v36] == 46 )
              {
                if ( v6[(unsigned int)(v31 - 2)] != 46 )
                  v31 = (unsigned int)v36;
                v141 = v31;
              }
            }
            break;
          }
          v6[v31] = v34;
          v31 = (unsigned int)(v31 + 1);
          v141 = v31;
          ++i;
        }
        --i;
      }
    }
LABEL_48:
    ++i;
  }
  if ( v135 && (unsigned int)v31 > v25 )
  {
    v37 = (unsigned int)(v31 - 1);
    if ( v6[v37] == 92 )
      v31 = (unsigned int)v37;
    v141 = v31;
  }
  v38 = v143;
  if ( (unsigned int)v31 < v143 )
    v6[v31] = v22;
  while ( (_DWORD)v31 )
  {
    v31 = (unsigned int)(v31 - 1);
    v141 = v31;
    v39 = &v6[v31];
    if ( *v39 != 32 && *v39 != 46 )
    {
      LODWORD(v31) = v31 + 1;
      v141 = v31;
      break;
    }
    *v39 = v22;
  }
  v40 = 2 * v31;
  LOWORD(v139) = 2 * v31;
  if ( v182 )
  {
    v45 = v31;
    for ( k = v31; v45; k = v46 )
    {
      v46 = v45 - 1;
      if ( v6[v46] == 92 )
        break;
      --v45;
    }
    if ( v45 < v25 || v45 >= (unsigned int)v31 )
    {
      *v182 = v22;
      goto LABEL_67;
    }
    *v182 = (__int64)&v6[v45];
    v28 = v40;
    v136 = v40;
    v23 = (volatile signed __int32 *)v147;
  }
  else
  {
LABEL_67:
    v28 = v40;
    v136 = v40;
    v23 = (volatile signed __int32 *)v147;
  }
LABEL_229:
  if ( v134 )
  {
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
      {
        NtClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        LOWORD(v22) = 0;
      }
      v28 = v136;
      v6 = v140;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
      LOWORD(v22) = 0;
    }
  }
  if ( v28 >= 2 * (unsigned __int64)v38 && v38 )
    *v6 = v22;
  return v28;
}
