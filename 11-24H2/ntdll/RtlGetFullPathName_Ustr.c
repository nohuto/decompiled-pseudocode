/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180071600
 * Callers:
 *     RtlGetFullPathName_U @ 0x180002200 (RtlGetFullPathName_U.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     LdrpGetFullPath @ 0x1800928D0 (LdrpGetFullPath.c)
 *     RtlGetFullPathName_UstrEx @ 0x180094170 (RtlGetFullPathName_UstrEx.c)
 *     RtlGetFullPathName_UEx @ 0x1800DD740 (RtlGetFullPathName_UEx.c)
 *     RtlSetCurrentDirectory_U @ 0x1800F58F0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     RtlpCheckRelativeDrive @ 0x180008A90 (RtlpCheckRelativeDrive.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180072C30 (RtlpIsDosDeviceName_Ustr.c)
 *     NLS_UPCASE @ 0x18007BF60 (NLS_UPCASE.c)
 *     RtlpComputeBackupIndex @ 0x180093590 (RtlpComputeBackupIndex.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800940C8 (RtlUnicodeStringValidateWorker.c)
 *     RtlpReferenceCurrentDirectory @ 0x180094BF0 (RtlpReferenceCurrentDirectory.c)
 *     RtlUnicodeStringCopy @ 0x1800D7530 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x1800D75F0 (RtlUnicodeStringValidateWorker_0.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1800DDD70 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlpCheckDeviceName @ 0x18010F840 (RtlpCheckDeviceName.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
  __int64 v69; // r8
  __int64 v70; // r9
  _CURDIR *p_CurrentDirectory; // r11
  __int64 v72; // r8
  wchar_t v73; // ax
  __m128i *v74; // r11
  wchar_t v75; // r15
  __int16 v76; // r9
  size_t v77; // rax
  __int16 v78; // cx
  unsigned __int16 v79; // dx
  SIZE_T ValueLength; // r13
  NTSTATUS v81; // eax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int16 v84; // r10
  __int64 v85; // rbx
  unsigned __int16 v86; // cx
  unsigned __int64 v87; // rax
  _CURDIR *v88; // rax
  _CURDIR *v89; // r11
  int v90; // eax
  __m128i *v91; // r11
  __int64 v92; // r10
  WCHAR *v93; // r13
  unsigned __int64 v94; // r11
  PWSTR v95; // rcx
  __int64 v96; // rdx
  __m128i v97; // xmm1
  PWSTR v98; // r15
  __int64 v99; // r13
  unsigned __int64 v100; // rbx
  int v101; // edx
  __int64 v102; // r10
  unsigned __int64 v103; // r11
  int v104; // eax
  __int64 v105; // r8
  unsigned __int64 v106; // rcx
  __int16 v107; // dx
  PWSTR v108; // r11
  SIZE_T v109; // r9
  wchar_t *v110; // rcx
  __int64 v111; // r10
  int v112; // eax
  int v113; // eax
  int v114; // eax
  __int64 result; // rax
  unsigned int v116; // r14d
  unsigned int v117; // r15d
  unsigned int v118; // r12d
  unsigned __int64 v119; // rbx
  int v120; // eax
  __int64 v121; // r8
  PWSTR v122; // rdi
  int v123; // r11d
  const wchar_t *v124; // r10
  __int64 v125; // r15
  signed __int64 v126; // rdi
  __int64 v127; // rbx
  unsigned __int64 v128; // rbx
  int v129; // eax
  unsigned __int64 v130; // r9
  unsigned __int64 v131; // r10
  unsigned __int16 v132; // r11
  int v133; // ecx
  __int16 v134; // dx
  __int16 v135; // dx
  __int16 v136; // dx
  char v137; // [rsp+30h] [rbp-268h]
  bool v138; // [rsp+31h] [rbp-267h]
  int v139; // [rsp+38h] [rbp-260h]
  int v140; // [rsp+3Ch] [rbp-25Ch]
  unsigned int v141; // [rsp+3Ch] [rbp-25Ch]
  __int64 v142; // [rsp+40h] [rbp-258h] BYREF
  WCHAR *v143; // [rsp+48h] [rbp-250h]
  int v144; // [rsp+50h] [rbp-248h]
  int k; // [rsp+54h] [rbp-244h]
  unsigned int v146; // [rsp+58h] [rbp-240h]
  WCHAR v147; // [rsp+5Ch] [rbp-23Ch]
  int v148; // [rsp+60h] [rbp-238h]
  unsigned __int64 v149; // [rsp+68h] [rbp-230h]
  _CURDIR *v150; // [rsp+70h] [rbp-228h]
  __m128i v151; // [rsp+78h] [rbp-220h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-210h]
  PWSTR Value; // [rsp+90h] [rbp-208h]
  __int64 v154; // [rsp+98h] [rbp-200h]
  unsigned int v155; // [rsp+A0h] [rbp-1F8h]
  unsigned int v156; // [rsp+A4h] [rbp-1F4h]
  int v157; // [rsp+A8h] [rbp-1F0h]
  int v158; // [rsp+ACh] [rbp-1ECh]
  _CURDIR *v159; // [rsp+B0h] [rbp-1E8h]
  unsigned __int16 v160; // [rsp+B8h] [rbp-1E0h]
  int v161; // [rsp+BCh] [rbp-1DCh]
  int v162; // [rsp+C0h] [rbp-1D8h]
  int v163; // [rsp+C4h] [rbp-1D4h]
  int v164; // [rsp+C8h] [rbp-1D0h]
  int v165; // [rsp+CCh] [rbp-1CCh]
  unsigned int v166; // [rsp+D0h] [rbp-1C8h]
  PWSTR v167; // [rsp+D8h] [rbp-1C0h]
  PWSTR v168; // [rsp+E0h] [rbp-1B8h]
  unsigned __int64 v169; // [rsp+E8h] [rbp-1B0h]
  WCHAR *v170; // [rsp+F0h] [rbp-1A8h]
  unsigned __int64 v171; // [rsp+F8h] [rbp-1A0h]
  PWSTR v172; // [rsp+100h] [rbp-198h]
  unsigned __int64 v173; // [rsp+108h] [rbp-190h]
  unsigned __int64 v174; // [rsp+110h] [rbp-188h]
  unsigned __int64 v175; // [rsp+118h] [rbp-180h]
  ULONG_PTR ReturnLength; // [rsp+120h] [rbp-178h] BYREF
  PWSTR v177; // [rsp+128h] [rbp-170h]
  SIZE_T v178; // [rsp+130h] [rbp-168h]
  unsigned __int64 v179; // [rsp+138h] [rbp-160h]
  __int64 v180; // [rsp+140h] [rbp-158h]
  unsigned __int64 v181; // [rsp+148h] [rbp-150h]
  unsigned __int64 v182; // [rsp+150h] [rbp-148h]
  unsigned __int64 v183; // [rsp+158h] [rbp-140h]
  unsigned __int64 v184; // [rsp+160h] [rbp-138h]
  __int64 *v185; // [rsp+168h] [rbp-130h] BYREF
  PWSTR v186; // [rsp+170h] [rbp-128h]
  __int64 v187; // [rsp+178h] [rbp-120h]
  unsigned __int64 v188; // [rsp+180h] [rbp-118h]
  __int64 v189; // [rsp+188h] [rbp-110h]
  PWSTR v190; // [rsp+190h] [rbp-108h]
  unsigned __int64 v191; // [rsp+198h] [rbp-100h]
  __int64 v192; // [rsp+1A0h] [rbp-F8h]
  unsigned __int64 v193; // [rsp+1A8h] [rbp-F0h]
  __int64 v194; // [rsp+1B0h] [rbp-E8h]
  PWSTR v195; // [rsp+1B8h] [rbp-E0h]
  wchar_t *v196; // [rsp+1C0h] [rbp-D8h]
  SIZE_T v197; // [rsp+1C8h] [rbp-D0h]
  __int64 v198; // [rsp+1D0h] [rbp-C8h]
  __int64 v199; // [rsp+1D8h] [rbp-C0h]
  PWSTR v200; // [rsp+1E0h] [rbp-B8h]
  WCHAR *v201; // [rsp+1E8h] [rbp-B0h]
  __int64 v202; // [rsp+1F0h] [rbp-A8h]
  unsigned __int64 v203; // [rsp+1F8h] [rbp-A0h]
  __int64 v204; // [rsp+200h] [rbp-98h]
  PWSTR v205; // [rsp+208h] [rbp-90h]
  unsigned __int64 v206; // [rsp+210h] [rbp-88h]
  __int64 v207; // [rsp+218h] [rbp-80h]
  unsigned __int64 v208; // [rsp+220h] [rbp-78h]
  __int64 v209; // [rsp+228h] [rbp-70h]
  PWSTR v210; // [rsp+230h] [rbp-68h]
  WCHAR *v211; // [rsp+238h] [rbp-60h]
  __int16 v212; // [rsp+240h] [rbp-58h]
  __int16 v213; // [rsp+242h] [rbp-56h]
  wchar_t *p_String; // [rsp+248h] [rbp-50h]
  wchar_t String; // [rsp+250h] [rbp-48h] BYREF
  _BYTE v216[6]; // [rsp+252h] [rbp-46h]

  v185 = a4;
  v6 = a3;
  Value = a3;
  v154 = (__int64)a6;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  v156 = v8;
  *a6 = 0LL;
  v155 = *a1;
  v9 = v155 >> 1;
  if ( !(v155 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  v11 = v155 >> 1;
  k = v155 >> 1;
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
  v138 = v13 != 92 && v13 != 47;
  v146 = v8 >> 1;
  v166 = v8 >> 1;
  memset_thunk_772440563353939046(v6, 0, v8);
  v142 = 0LL;
  v14 = 2 * (v8 >> 1);
  v147 = v14;
  *(_DWORD *)((char *)&v142 + 2) = v14;
  v143 = v6;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v116 = HIWORD(IsDosDeviceName_Ustr);
    v117 = (unsigned __int16)IsDosDeviceName_Ustr;
    v148 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v116 || (int)RtlpCheckDeviceName(a1, v116, a5) >= 0 && !*a5 )
    {
      v118 = v117 + 8;
      if ( v117 + 8 >= v14 )
      {
        result = 0LL;
        if ( v117 + 10 <= 0xFFFF )
          return v117 + 10;
      }
      else
      {
        v119 = 0LL;
        v120 = RtlUnicodeStringValidateWorker_0(&v142);
        if ( v120 >= 0 )
          v119 = (unsigned __int64)v14 >> 1;
        v122 = Value;
        if ( v120 >= 0 )
        {
          if ( (int)RtlUnicodeStringValidateWorker_0(L"\b\n") >= 0 )
          {
            v124 = L"\\\\.\\";
            v125 = (unsigned int)(v123 + 4);
            if ( v119 )
            {
              v126 = (char *)v122 - (char *)L"\\\\.\\";
              v127 = v119 - v125;
              do
              {
                if ( !v125 )
                  break;
                *(const wchar_t *)((char *)v124 + v126) = *v124;
                ++v124;
                --v125;
                LOWORD(v123) = v123 + 1;
              }
              while ( v125 + v127 );
            }
          }
          LOWORD(v142) = 2 * v123;
          v117 = v148;
        }
        v128 = *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v116 >> 1);
        v129 = RtlUnicodeStringValidateWorker(&v142, 0LL, v121, 0LL);
        if ( v129 < 0 )
        {
          v133 = 0;
        }
        else
        {
          v133 = (int)Value;
          v131 = (unsigned __int64)v14 >> 1;
          v130 = (unsigned __int64)v132 >> 1;
        }
        if ( v129 >= 0 )
          RtlWideCharArrayCopyStringWorker(
            v133 + 2 * v130,
            v131 - v130,
            (unsigned int)&v185,
            v128,
            (unsigned __int64)v117 >> 1);
        return v118;
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
    v134 = v16[1];
    if ( v134 == 92 || v134 == 47 )
    {
      if ( v17 >= 6u && ((v135 = v16[2], v135 == 46) || v135 == 63) )
      {
        if ( v17 >= 8u && ((v136 = v16[3], v136 == 92) || v136 == 47) )
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
  v21 = v154;
  *(_DWORD *)v154 = v19;
  v151 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v150 = 0LL;
  BaseAddress = 0LL;
  v137 = 0;
  i = 0;
  if ( v19 != 2 )
  {
    switch ( v19 )
    {
      case 1:
        v105 = 0LL;
        v157 = 0;
        for ( i = 2; ; ++i )
        {
          k = i;
          v106 = i;
          if ( i >= v9 )
            break;
          v107 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i);
          if ( v107 == 92 || v107 == 47 )
          {
            v105 = (unsigned int)(v105 + 1);
            v157 = v105;
            if ( (_DWORD)v105 == 2 )
              break;
          }
        }
        v25 = i;
        v148 = i;
        v151.m128i_i64[1] = *((_QWORD *)a1 + 1);
        LOWORD(v106) = 2 * i;
        v149 = v106;
        v151.m128i_i16[0] = 2 * i;
        v151.m128i_i16[1] = a1[1];
        RtlUnicodeStringCopy(&v142, &v151, v105);
        v6 = v143;
        v22 = 0LL;
        goto LABEL_30;
      case 3:
        v68 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        v150 = v68;
        BaseAddress = v68;
        v137 = 1;
        if ( v68 )
        {
          p_CurrentDirectory = v68 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v6 = v143;
          v14 = WORD1(v142);
          v150 = 0LL;
        }
        v159 = p_CurrentDirectory;
        v160 = NLS_UPCASE(qword_1801CC038, *p_CurrentDirectory->DosPath.Buffer, v69, v70);
        v73 = NLS_UPCASE(qword_1801CC038, **((unsigned __int16 **)a1 + 1), v72, v160);
        v75 = v73;
        LOWORD(v156) = v73;
        if ( v76 == v73 )
        {
          v97 = *v74;
          v151 = *v74;
          v172 = 0LL;
          v173 = 0LL;
          if ( (int)RtlUnicodeStringValidateWorker_0(&v142) < 0 )
          {
            LOWORD(v27) = v151.m128i_i16[0];
            v26 = v142;
            goto LABEL_182;
          }
          v98 = Value;
          v172 = Value;
          v173 = (unsigned __int64)v14 >> 1;
          v99 = (unsigned int)v22;
          v100 = (unsigned int)v22;
          v174 = (unsigned int)v22;
          v175 = v22;
          v101 = RtlUnicodeStringValidateWorker_0(&v151);
          if ( v101 < 0 )
          {
            LOWORD(v27) = v151.m128i_i16[0];
          }
          else
          {
            v100 = _mm_srli_si128(v97, 8).m128i_u64[0];
            v174 = v100;
            v149 = (unsigned int)_mm_cvtsi128_si32(v97);
            v103 = (unsigned __int64)(unsigned __int16)v149 >> 1;
            v175 = v103;
            LOWORD(v27) = v149;
          }
          if ( v101 >= 0 )
          {
            v193 = v103;
            v191 = v100;
            v192 = v102;
            v190 = v98;
            v162 = 0;
            v194 = 0LL;
            while ( v102 )
            {
              if ( !v103 )
                goto LABEL_180;
              *v98++ = *(_WORD *)v100;
              v190 = v98;
              v100 += 2LL;
              v191 = v100;
              v192 = --v102;
              v193 = --v103;
              v194 = ++v99;
            }
            v113 = 0;
            if ( v103 )
              v113 = -2147483643;
            v162 = v113;
          }
LABEL_180:
          v26 = 2 * v99;
          LOWORD(v142) = 2 * v99;
        }
        else
        {
          RtlpCheckRelativeDrive(v73);
          String = 61;
          *(_WORD *)v216 = v75;
          *(_DWORD *)&v216[2] = 58;
          p_String = &String;
          v77 = 2 * wcslen(&String);
          v154 = v77;
          v78 = v77;
          v79 = v77;
          if ( v77 >= 0xFFFE )
          {
            LOWORD(v77) = -4;
            v154 = 65532LL;
            v78 = -4;
            v79 = -4;
          }
          v212 = v77;
          v213 = v78 + 2;
          ReturnLength = 0LL;
          ValueLength = (unsigned __int64)v14 >> 1;
          v81 = RtlQueryEnvironmentVariable(0LL, &String, (unsigned __int64)v79 >> 1, Value, ValueLength, &ReturnLength);
          v158 = v81;
          v84 = ReturnLength;
          v85 = 0x7FFFLL;
          if ( ReturnLength > 0x7FFF )
          {
            v81 = -1073741801;
            v158 = -1073741801;
            v26 = v142;
          }
          else
          {
            if ( v81 == -1073741789 )
              v84 = ReturnLength - 1;
            v26 = 2 * v84;
            LOWORD(v142) = v26;
          }
          if ( v81 < 0 )
          {
            if ( v81 == -1073741789 )
            {
              v27 = v26 + 2;
              v22 = 0LL;
              if ( v27 > 0xFFFF )
              {
                v28 = 0;
                v139 = 0;
                v38 = v146;
                v23 = (volatile signed __int32 *)v150;
                goto LABEL_229;
              }
              v151.m128i_i16[0] = v26 + 2;
LABEL_182:
              v25 = 3;
              v148 = 3;
              i = 2;
              goto LABEL_32;
            }
            LOWORD(v142) = 0;
            String = v75;
            *(_DWORD *)v216 = 6029370;
            *(_WORD *)&v216[4] = 0;
            v177 = 0LL;
            v178 = 0LL;
            if ( (int)RtlUnicodeStringValidateWorker(&v142, v82, v83, 0LL) >= 0 )
            {
              v108 = Value;
              v177 = Value;
              v109 = ValueLength;
              v178 = ValueLength;
              v198 = 0x7FFFLL;
              v110 = &String;
              v196 = &String;
              v197 = ValueLength;
              v195 = Value;
              v163 = 0;
              v111 = 0LL;
              v199 = 0LL;
              while ( v109 )
              {
                if ( !v85 || !*v110 )
                  goto LABEL_208;
                *v108++ = *v110;
                v195 = v108;
                v196 = ++v110;
                v197 = --v109;
                v198 = --v85;
                v199 = ++v111;
              }
              if ( v85 )
              {
                v114 = 0;
                if ( *v110 )
                  v114 = -2147483643;
                v163 = v114;
              }
LABEL_208:
              v26 = 2 * v111;
              LOWORD(v142) = v26;
            }
            LOWORD(v27) = 8;
            v151.m128i_i16[0] = 8;
          }
          else
          {
            v86 = v26;
            v87 = (unsigned __int64)v26 >> 1;
            k = v87;
            if ( (unsigned int)v87 <= 3 || (unsigned int)v87 >= v146 )
            {
              v149 = v26;
              v151.m128i_i16[0] = v26;
              LOWORD(v27) = v26;
            }
            else
            {
              Value[(unsigned int)v87] = 92;
              v26 += 2;
              LOWORD(v142) = v86 + 2;
              v149 = (unsigned __int16)(v86 + 2);
              v151.m128i_i16[0] = v86 + 2;
              LOWORD(v27) = v86 + 2;
            }
          }
        }
        v22 = 0LL;
        goto LABEL_182;
      case 4:
        LOBYTE(v21) = 1;
        v88 = (_CURDIR *)RtlpReferenceCurrentDirectory(v21, 0LL);
        v150 = v88;
        BaseAddress = v88;
        v137 = 1;
        if ( v88 )
        {
          v89 = v88 + 1;
        }
        else
        {
          v89 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v6 = v143;
          v14 = WORD1(v142);
          i = 0;
          v150 = 0LL;
        }
        v159 = v89;
        v90 = RtlpComputeBackupIndex(v89);
        v140 = v90;
        v148 = v90;
        v151 = *v91;
        if ( v90 == 3 )
        {
          v149 = 4LL;
          v151.m128i_i16[0] = 4;
        }
        else
        {
          v20 = 2 * v90;
          v149 = (unsigned __int16)(2 * v90);
          v151.m128i_i16[0] = 2 * v90;
        }
        v167 = 0LL;
        v179 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v142) < 0 )
          goto LABEL_29;
        v167 = Value;
        v179 = (unsigned __int64)v14 >> 1;
        v154 = v22;
        v180 = v22;
        v181 = v22;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v151) < 0 )
        {
          LOWORD(v96) = v154;
        }
        else
        {
          v93 = (WCHAR *)v151.m128i_i64[1];
          v180 = v151.m128i_i64[1];
          v94 = (unsigned __int64)v20 >> 1;
          v181 = v94;
          v203 = v94;
          v201 = (WCHAR *)v151.m128i_i64[1];
          v202 = v92;
          v95 = v167;
          v200 = v167;
          v164 = 0;
          v96 = 0LL;
          v204 = 0LL;
          while ( v92 )
          {
            if ( !v94 )
              goto LABEL_171;
            *v95++ = *v93;
            v200 = v95;
            v201 = ++v93;
            v202 = --v92;
            v203 = --v94;
            v204 = ++v96;
          }
          v112 = 0;
          if ( v94 )
            v112 = -2147483643;
          v164 = v112;
        }
LABEL_171:
        v26 = 2 * v96;
        LOWORD(v142) = 2 * v96;
        v22 = 0LL;
        v25 = v140;
        goto LABEL_31;
      case 5:
        v57 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        v150 = v57;
        BaseAddress = v57;
        v137 = 1;
        if ( v57 )
        {
          v58 = v57 + 1;
          *(_DWORD *)(v154 + 4) = v57[1].Handle;
        }
        else
        {
          v58 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v6 = v143;
          v14 = WORD1(v142);
          i = 0;
          v150 = 0LL;
        }
        v159 = v58;
        DosPath = (__m128i)v58->DosPath;
        v151 = (__m128i)v58->DosPath;
        v141 = RtlpComputeBackupIndex(v58);
        v148 = v141;
        v168 = 0LL;
        v182 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v142) >= 0 )
        {
          v168 = Value;
          v182 = (unsigned __int64)v14 >> 1;
          v61 = (unsigned int)v60;
          v62 = (unsigned int)v60;
          v183 = v60;
          v184 = v60;
          v63 = RtlUnicodeStringValidateWorker_0(&v151);
          if ( v63 < 0 )
          {
            LOWORD(v27) = v151.m128i_i16[0];
          }
          else
          {
            v62 = _mm_srli_si128(DosPath, 8).m128i_u64[0];
            v183 = v62;
            v149 = (unsigned __int16)_mm_cvtsi128_si32(DosPath);
            v64 = v149 >> 1;
            v184 = v149 >> 1;
            LOWORD(v27) = v149;
          }
          if ( v63 >= 0 )
          {
            v208 = v64;
            v206 = v62;
            v207 = v65;
            v66 = v168;
            v205 = v168;
            v165 = 0;
            v209 = 0LL;
            while ( v65 )
            {
              if ( !v64 )
                goto LABEL_144;
              *v66++ = *(_WORD *)v62;
              v205 = v66;
              v62 += 2LL;
              v206 = v62;
              v207 = --v65;
              v208 = --v64;
              v209 = ++v61;
            }
            v104 = 0;
            if ( v64 )
              v104 = -2147483643;
            v165 = v104;
          }
LABEL_144:
          v26 = 2 * v61;
          LOWORD(v142) = 2 * v61;
          v22 = 0LL;
          v25 = v141;
          goto LABEL_32;
        }
        LOWORD(v27) = v151.m128i_i16[0];
        v26 = v142;
        v22 = 0LL;
        v25 = v141;
        goto LABEL_32;
      case 6:
      case 7:
        v148 = 4;
        i = 4;
        if ( v9 < 4 )
          i = v9;
        v151 = *(__m128i *)L"\b\n";
        v186 = 0LL;
        v169 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v142) >= 0 )
        {
          v51 = Value;
          v186 = Value;
          v169 = (unsigned __int64)v147 >> 1;
          v52 = 0LL;
          v170 = 0LL;
          v53 = 0LL;
          v171 = 0LL;
          v54 = RtlUnicodeStringValidateWorker_0(&v151);
          if ( v54 < 0 )
          {
            LOWORD(v27) = v151.m128i_i16[0];
          }
          else
          {
            v52 = (WCHAR *)_mm_srli_si128(*(__m128i *)L"\b\n", 8).m128i_u64[0];
            v170 = v52;
            v149 = (unsigned int)_mm_cvtsi128_si32(*(__m128i *)L"\b\n");
            v53 = (unsigned __int64)(unsigned __int16)v149 >> 1;
            v171 = v53;
            LOWORD(v27) = v149;
          }
          if ( v54 >= 0 )
          {
            v188 = v53;
            v211 = v52;
            v187 = v56;
            v210 = v51;
            v161 = 0;
            v189 = 0LL;
            while ( v56 )
            {
              if ( !v53 )
                goto LABEL_129;
              *v51++ = *v52;
              v210 = v51;
              v211 = ++v52;
              v187 = --v56;
              v188 = --v53;
              v189 = ++v55;
            }
            v67 = 0;
            if ( v53 )
              v67 = -2147483643;
            v161 = v67;
          }
LABEL_129:
          v26 = 2 * v55;
          LOWORD(v142) = v26;
          v8 = v156;
          goto LABEL_130;
        }
        LOWORD(v27) = v151.m128i_i16[0];
        v26 = v142;
LABEL_130:
        if ( v26 >= 6u )
          v6[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v22 = 0LL;
        v25 = 4;
        if ( *(_DWORD *)v154 == 7 )
          v138 = 0;
        goto LABEL_32;
      default:
        v28 = 0;
        v139 = 0;
        v38 = v146;
        goto LABEL_229;
    }
  }
  v140 = 3;
  v148 = 3;
  v149 = v151.m128i_u16[0];
LABEL_29:
  v25 = v140;
LABEL_30:
  v26 = v142;
LABEL_31:
  LOWORD(v27) = v149;
LABEL_32:
  v28 = (unsigned __int16)v27;
  v29 = v155 + (unsigned __int16)v27 - 2 * i;
  v155 = v29;
  if ( (unsigned __int64)v29 + 2 > v8 )
  {
    if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
    {
      v28 = v22;
      if ( v29 + 2 <= 0xFFFF )
        v28 = v29 + 2;
      v38 = v146;
      v139 = v28;
      v23 = (volatile signed __int32 *)v150;
      goto LABEL_229;
    }
    if ( v9 != 1 )
    {
      v28 = v29;
      if ( v29 > 0xFFFF )
        v28 = v22;
      v155 = v28;
      v38 = v146;
      v139 = v28;
      v23 = (volatile signed __int32 *)v150;
      goto LABEL_229;
    }
    if ( (_WORD)v27 == 8 )
    {
      if ( v8 <= (unsigned __int16)v27 )
      {
        v28 = 10;
        v38 = v146;
        v139 = 10;
        v23 = (volatile signed __int32 *)v150;
        goto LABEL_229;
      }
    }
    else
    {
      if ( v8 < (unsigned __int16)v27 )
      {
        v38 = v146;
        v139 = (unsigned __int16)v27;
        v23 = (volatile signed __int32 *)v150;
        goto LABEL_229;
      }
      v48 = v26;
      v49 = (unsigned __int64)v26 >> 1;
      k = v49;
      if ( (_DWORD)v49 && v6[(unsigned int)(v49 - 1)] == 92 )
      {
        v26 -= 2;
        LOWORD(v142) = v48 - 2;
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
  v144 = v26 >> 1;
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
        v144 = v31;
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
          v147 = v6[v31];
          v44 = v147;
          v6[v31] = v22;
          if ( v44 == 92 )
          {
            while ( (unsigned int)v31 >= v25 )
            {
              v147 = v6[v31];
              v47 = v147;
              v6[v31] = v22;
              if ( v47 == 92 )
              {
                if ( (unsigned int)v31 >= v25 )
                  goto LABEL_96;
                goto LABEL_95;
              }
              v31 = (unsigned int)(v31 - 1);
              v144 = v31;
            }
            break;
          }
          v31 = (unsigned int)(v31 - 1);
          v144 = v31;
        }
LABEL_95:
        v31 = (unsigned int)(v31 + 1);
        v144 = v31;
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
                v144 = v31;
              }
            }
            break;
          }
          v6[v31] = v34;
          v31 = (unsigned int)(v31 + 1);
          v144 = v31;
          ++i;
        }
        --i;
      }
    }
LABEL_48:
    ++i;
  }
  if ( v138 && (unsigned int)v31 > v25 )
  {
    v37 = (unsigned int)(v31 - 1);
    if ( v6[v37] == 92 )
      v31 = (unsigned int)v37;
    v144 = v31;
  }
  v38 = v146;
  if ( (unsigned int)v31 < v146 )
    v6[v31] = v22;
  while ( (_DWORD)v31 )
  {
    v31 = (unsigned int)(v31 - 1);
    v144 = v31;
    v39 = &v6[v31];
    if ( *v39 != 32 && *v39 != 46 )
    {
      LODWORD(v31) = v31 + 1;
      v144 = v31;
      break;
    }
    *v39 = v22;
  }
  v40 = 2 * v31;
  LOWORD(v142) = 2 * v31;
  if ( v185 )
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
      *v185 = v22;
      goto LABEL_67;
    }
    *v185 = (__int64)&v6[v45];
    v28 = v40;
    v139 = v40;
    v23 = (volatile signed __int32 *)v150;
  }
  else
  {
LABEL_67:
    v28 = v40;
    v139 = v40;
    v23 = (volatile signed __int32 *)v150;
  }
LABEL_229:
  if ( v137 )
  {
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
      {
        NtClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        LOWORD(v22) = 0;
      }
      v28 = v139;
      v6 = v143;
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
