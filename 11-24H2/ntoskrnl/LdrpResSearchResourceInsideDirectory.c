/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1409E1CE0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14044EAD4 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     LdrpResCompareResourceNames @ 0x1409E28B8 (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1409E2D94 (LdrpSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int16 a6,
        wchar_t **a7,
        int a8,
        signed __int16 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v14; // r10
  int v16; // edx
  wchar_t **v17; // r11
  int v18; // r8d
  int v19; // r9d
  int v20; // r15d
  __int64 result; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdi
  unsigned int *v24; // r13
  unsigned int v25; // ebx
  int v26; // eax
  int v27; // ecx
  unsigned __int64 v28; // r14
  __int64 v29; // r13
  unsigned int *v30; // r11
  unsigned __int64 v31; // rax
  char *v32; // rcx
  unsigned __int64 v33; // r8
  int *v34; // rdx
  unsigned __int64 v35; // rax
  int v36; // r14d
  int v37; // ecx
  int v38; // r14d
  int v39; // eax
  int v40; // r8d
  int v41; // eax
  __int64 v42; // rax
  bool v43; // zf
  char v44; // r14
  __int64 v45; // rax
  int *v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // r9d
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r10
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rdx
  int v58; // edx
  int v59; // r8d
  int v60; // r8d
  __int16 v61; // ax
  unsigned int v62; // eax
  __int64 v63; // rax
  int v64; // r8d
  int v65; // r9d
  unsigned __int64 v66; // r15
  __int64 v67; // rax
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // r14
  __int64 v71; // rax
  unsigned __int64 v72; // r9
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r9
  unsigned __int16 *v76; // r15
  unsigned __int64 v77; // rdx
  wchar_t *v78; // r13
  __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rsi
  __int64 v82; // [rsp+40h] [rbp-E8h]
  int v83; // [rsp+50h] [rbp-D8h] BYREF
  int v84; // [rsp+54h] [rbp-D4h]
  unsigned int *v85; // [rsp+58h] [rbp-D0h]
  unsigned int *v86; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v87; // [rsp+68h] [rbp-C0h]
  __int16 v88; // [rsp+70h] [rbp-B8h]
  int v89; // [rsp+74h] [rbp-B4h]
  int v90; // [rsp+78h] [rbp-B0h]
  int v91; // [rsp+7Ch] [rbp-ACh]
  unsigned __int64 v92; // [rsp+80h] [rbp-A8h]
  wchar_t *Str1; // [rsp+88h] [rbp-A0h]
  int *v94; // [rsp+90h] [rbp-98h]
  __int64 v95; // [rsp+98h] [rbp-90h]
  __int16 v96; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v97; // [rsp+A8h] [rbp-80h]
  int *v98; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v99; // [rsp+B8h] [rbp-70h]
  int v100; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v101; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v102; // [rsp+D0h] [rbp-58h]
  wchar_t **v103; // [rsp+E0h] [rbp-48h]
  char v104; // [rsp+138h] [rbp+10h]
  char v106; // [rsp+148h] [rbp+20h]
  signed __int16 v107; // [rsp+158h] [rbp+30h]

  v14 = a3;
  HIDWORD(v82) = 0;
  v83 = 0;
  v107 = 0;
  LOWORD(v16) = 0;
  v89 = 0;
  if ( !a4 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v17 = a7;
  if ( !a7 )
    return 3221225485LL;
  v18 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  v19 = a12;
  v84 = a12;
  if ( (a12 & 0x8000) != 0 )
    return 3221225485LL;
  v20 = a12 & 0x1000;
  v104 = v20 != 0;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( (a12 & 0x8800) == 0x8800 || !a1 )
    return 3221225485LL;
  v22 = a8;
  v91 = a8;
  v23 = a4;
  v24 = 0LL;
  v85 = 0LL;
  v92 = 0LL;
  if ( a13 )
    *a13 = 0;
  v25 = -1073741811;
LABEL_14:
  if ( !v23 )
    goto LABEL_74;
  v26 = v22;
  v27 = v22 - 1;
  v91 = v27;
  v100 = v27;
  if ( !v26 )
    goto LABEL_74;
  v28 = (unsigned __int64)*v17;
  Str1 = (wchar_t *)v28;
  v97 = v28;
  if ( !v27 && v18 == 3 )
  {
    v92 = v23;
    v101 = v23;
    if ( !a9 )
      return v25;
    v107 = *a9;
    v96 = *a9;
    v89 = 0;
    v88 = 0;
    if ( (~(_BYTE)v19 & 4) != 0 )
    {
      v28 = (unsigned __int16)a9[2];
      Str1 = (wchar_t *)v28;
      v97 = v28;
    }
  }
  if ( v20 && (v23 + 24 < v23 || v23 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    return (unsigned int)-1073741701;
  v29 = *(unsigned __int16 *)(v23 + 12);
  v90 = v29;
  if ( (_DWORD)v29 )
  {
    if ( v20 )
    {
      v95 = 8 * v29;
      v47 = (unsigned int)(8 * v29);
      if ( v23 + v47 + 16 < v23 || v47 + v23 + 16 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
  }
  v30 = (unsigned int *)(v23 + 16);
  v95 = v23 + 16;
  v94 = (int *)(v23 + 16);
  if ( (v28 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v29 )
    {
      if ( v20 && (unsigned int *)((char *)v30 + (int)v29) < v30 )
        return (unsigned int)-1073741701;
      v30 += 2 * v29;
      v95 = (__int64)v30;
      v94 = (int *)v30;
    }
    LODWORD(v29) = *(unsigned __int16 *)(v23 + 14);
    v90 = v29;
    if ( v20 )
    {
      v31 = 8LL * (unsigned int)v29;
      v102 = v31;
      if ( v31 > 0xFFFFFFFF )
        return (unsigned int)-1073741701;
      v32 = (char *)v30 + (unsigned int)v31;
      if ( v32 < (char *)v30 || (unsigned __int64)v32 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
  }
  if ( !(_DWORD)v29 )
  {
    v87 = 0LL;
    goto LABEL_116;
  }
LABEL_28:
  if ( v92 && (v19 & 0x20) != 0 )
  {
    v23 = 0LL;
    v87 = 0LL;
    v48 = v30[1];
    v24 = (unsigned int *)(v48 + a4);
    if ( v20 && (unsigned __int64)v24 < a4 )
      return (unsigned int)-1073741701;
    v86 = (unsigned int *)(v48 + a4);
    v16 = *v30;
    v97 = *v30;
    v18 = a8;
LABEL_74:
    v49 = v19 & 2;
    if ( v24 && !v49 )
    {
      if ( v20 )
      {
        if ( (unsigned __int64)v24 <= a4 )
          goto LABEL_121;
        v50 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (unsigned __int64)(v24 + 4) > (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v14 )
          goto LABEL_121;
      }
      else
      {
        v50 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a13 )
        *a13 = v16;
      if ( (a1 & 1) != 0 )
      {
        v61 = *(_WORD *)(a5 + 24);
        if ( v61 == 267 )
        {
          v62 = *(_DWORD *)(a5 + 136);
        }
        else if ( v61 == 523 )
        {
          v62 = *(_DWORD *)(a5 + 152);
        }
        else
        {
          v62 = 0;
        }
        if ( !v62 )
        {
          v86 = 0LL;
          return (unsigned int)-1073741687;
        }
        if ( v20 && (v62 + v50 < v50 || v62 + v50 < a4) )
          return (unsigned int)-1073741701;
        v51 = v62 + v50 - a4;
        v63 = LdrpSectionTableFromVirtualAddress(v50, v14, a5, 0, v62, v104);
        if ( !v63 )
          goto LABEL_121;
        if ( *v24 > *(_DWORD *)(v63 + 8) )
        {
          v66 = *(unsigned int *)(v63 + 12);
          v67 = LdrpSectionTableFromVirtualAddress(v50, a3, v64, v65, *v24, v104);
          if ( !v67 )
          {
            v86 = 0LL;
            return (unsigned int)-1073741701;
          }
          v70 = *(unsigned int *)(v67 + 12);
          v71 = LdrpSectionTableFromVirtualAddress(v50, a3, v68, v69, v70, v104);
          if ( v71 )
          {
            if ( (a12 & 0x1000) != 0 )
            {
              v72 = v50 + (unsigned int)v70 - (unsigned __int64)*(unsigned int *)(v71 + 12);
              if ( v72 < v50 || v72 + *(unsigned int *)(v71 + 20) < v72 )
                return (unsigned int)-1073741701;
            }
            v73 = v70 + v50 + *(unsigned int *)(v71 + 20) - (unsigned __int64)*(unsigned int *)(v71 + 12);
          }
          else
          {
            v73 = 0LL;
          }
          if ( (a12 & 0x1000) != 0 )
          {
            v74 = *(unsigned int *)(v71 + 12);
            if ( v74 < v66 || v74 - v66 < v73 - a4 )
              return (unsigned int)-1073741701;
          }
          v51 += a4 + *(unsigned int *)(v71 + 12) - v66 - v73;
          v20 = a12 & 0x1000;
        }
      }
      else
      {
        v51 = 0LL;
      }
      v52 = v24[1];
      if ( !v20 )
      {
        v54 = 0LL;
        v55 = a3;
LABEL_90:
        if ( a10 )
        {
          if ( v20 )
          {
            v56 = v50 + v54;
            if ( v50 + v54 < v50 || v56 > v50 + v55 )
              return (unsigned int)-1073741701;
            *a10 = v56;
          }
          else
          {
            *a10 = v50 + *v24 - v51;
          }
        }
        if ( a11 )
        {
          if ( v20 )
          {
            if ( a10 )
            {
              v57 = *a10 + v52;
              if ( v57 < *a10 || v57 > v55 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                return (unsigned int)-1073741701;
            }
          }
          *a11 = v52;
        }
        return 0;
      }
      v53 = *v24;
      if ( v53 < v51 )
        return (unsigned int)-1073741701;
      v54 = v53 - v51;
      if ( v54 >= a4 - a1 )
      {
        v55 = a3;
        if ( v54 <= a3 && (_DWORD)v52 && v52 <= a3 && v54 + (unsigned int)v52 <= a3 )
          goto LABEL_90;
      }
LABEL_121:
      v86 = 0LL;
      return (unsigned int)-1073741701;
    }
    if ( v23 && v49 )
    {
      if ( v20 )
      {
        if ( v23 + 24 < v23 || (v81 = a1 & 0xFFFFFFFFFFFFFFFCuLL, v23 + 24 > v81 + v14) )
        {
          v87 = 0LL;
          return (unsigned int)-1073741701;
        }
      }
      else
      {
        v81 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a10 )
      {
        if ( v20 && (v23 < v81 || v23 > v81 + v14) )
          return (unsigned int)-1073741701;
        *a10 = v23;
      }
      return 0;
    }
LABEL_116:
    v59 = v18 - v91 - 1;
    if ( v59 )
    {
      v60 = v59 - 1;
      if ( v60 )
      {
        if ( v60 == 1 )
          return (unsigned int)-1073741308;
      }
      else
      {
        return (unsigned int)-1073741685;
      }
    }
    else
    {
      return (unsigned int)-1073741686;
    }
    return v25;
  }
  v33 = (unsigned __int64)Str1;
LABEL_30:
  v23 = 0LL;
  v87 = 0LL;
  v34 = (int *)v30;
  v94 = (int *)v30;
  v35 = (unsigned __int64)&v30[2 * (int)v29 - 2];
  v99 = v35;
  v36 = v29;
  while ( 1 )
  {
    if ( (unsigned __int64)v34 > v35 )
      goto LABEL_52;
    LODWORD(v29) = (int)v29 >> 1;
    if ( !(_DWORD)v29 )
    {
      if ( !v36 )
      {
LABEL_52:
        v24 = v85;
LABEL_53:
        v19 = v84;
        if ( !v92 || v24 )
          goto LABEL_54;
        if ( (v84 & 4) != 0 )
        {
          v18 = a8;
          v14 = a3;
          LOWORD(v16) = (_WORD)Str1;
          goto LABEL_74;
        }
        HIWORD(v58) = HIWORD(v89);
        LOWORD(v58) = v89 + 1;
        v89 = v58;
        v88 = v58;
        if ( (unsigned __int16)v58 >= v107 )
        {
          if ( *((_BYTE *)a9 + 516) )
          {
LABEL_54:
            v17 = a7 + 1;
            a7 = v17;
            v103 = v17;
            v18 = a8;
            v14 = a3;
            LOWORD(v16) = (_WORD)Str1;
            v22 = v91;
            goto LABEL_14;
          }
          v19 = v84 | 0x20;
          v84 |= 0x20u;
          v14 = a3;
          v30 = (unsigned int *)v95;
          LODWORD(v29) = v90;
          goto LABEL_28;
        }
        v33 = (unsigned __int16)a9[4 * (unsigned __int16)v58 + 2];
        Str1 = (wchar_t *)v33;
        v97 = v33;
        v14 = a3;
        v30 = (unsigned int *)v95;
        LODWORD(v29) = v90;
        goto LABEL_30;
      }
      v37 = v19 & 0x1000;
      if ( !v34 )
      {
        v38 = -1073741811;
        LODWORD(v82) = -1073741811;
        v41 = HIDWORD(v82);
LABEL_43:
        if ( v38 < 0 )
          return (unsigned int)v38;
        if ( !v41 )
        {
          v42 = (unsigned int)v34[1];
          if ( (int)v42 >= 0 )
            goto LABEL_111;
LABEL_46:
          if ( v20 )
          {
            if ( v92 )
              return (unsigned int)-1073741701;
            LODWORD(v42) = v42 & 0x7FFFFFFF;
            v23 = v42 + a4;
            if ( v42 + a4 < a4 )
              return (unsigned int)-1073741701;
          }
          else
          {
            v23 = a4 + (v42 & 0xFFFFFFFF7FFFFFFFuLL);
          }
          v87 = v23;
        }
        goto LABEL_52;
      }
      v38 = 0;
      v39 = *v34;
      if ( (v33 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        if ( v39 < 0 )
        {
          if ( (v19 & 0x1000) == 0 || (*v34 & 0xFFFF0000) != 0 )
          {
            v41 = 1;
            HIDWORD(v82) = 1;
            v83 = 1;
            goto LABEL_42;
          }
        }
        else if ( (v19 & 0x1000) == 0 || (*v34 & 0xFFFF0000) == 0 )
        {
          v40 = v33 - *v34;
          HIDWORD(v82) = v40;
LABEL_40:
          v83 = v40;
LABEL_41:
          v41 = HIDWORD(v82);
LABEL_42:
          LODWORD(v82) = v38;
          v34 = v94;
          goto LABEL_43;
        }
        v38 = -1073741701;
        goto LABEL_41;
      }
      if ( v39 >= 0 )
      {
        HIDWORD(v82) = -1;
        v83 = -1;
        goto LABEL_41;
      }
      v75 = (unsigned int)v39;
      LODWORD(v75) = v39 & 0x7FFFFFFF;
      v76 = (unsigned __int16 *)(v75 + a4);
      if ( v37 )
      {
        if ( (unsigned __int64)v76 < a4 )
          goto LABEL_173;
        if ( (unsigned __int64)(v76 + 2) < a4 )
          goto LABEL_173;
        v77 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (unsigned __int64)(v76 + 2) > (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v14 )
          goto LABEL_173;
      }
      else
      {
        v77 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( !v37 || (v80 = v75 + a4 + 2 * (*v76 + 2LL), v80 >= a4) && v80 <= v77 + v14 )
      {
        if ( ((unsigned __int64)(v76 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
        {
          v78 = Str1;
          v40 = wcsncmp(Str1, v76 + 1, *v76);
          HIDWORD(v82) = v40;
          if ( !v40 )
          {
            v79 = -1LL;
            do
              ++v79;
            while ( v78[v79] );
            if ( v79 != *v76 )
            {
              v41 = 1;
              HIDWORD(v82) = 1;
              v83 = 1;
              v20 = a12 & 0x1000;
              goto LABEL_42;
            }
          }
          v20 = a12 & 0x1000;
          goto LABEL_40;
        }
      }
LABEL_173:
      v38 = -1073741701;
      v20 = a12 & 0x1000;
      goto LABEL_41;
    }
    v98 = v34;
    v44 = v36 & 1;
    v43 = v44 == 0;
    v106 = v44;
    v36 = v29 - 1;
    v45 = (int)v29;
    if ( v43 )
      v45 = v36;
    v46 = &v34[2 * v45];
    v98 = v46;
    result = LdrpResCompareResourceNames(a1, v34, v14, v33, a4, v46, v19, &v83, v82);
    LODWORD(v82) = result;
    if ( (int)result < 0 )
      return result;
    HIDWORD(v82) = v83;
    if ( !v83 )
      break;
    if ( v83 < 0 )
    {
      v35 = (unsigned __int64)(v46 - 2);
      v99 = (unsigned __int64)(v46 - 2);
      if ( v106 )
        v36 = v29;
      else
        LODWORD(v29) = v29 - 1;
      v34 = v94;
    }
    else
    {
      v34 = v46 + 2;
      v94 = v46 + 2;
      v36 = v29;
      v35 = v99;
    }
    v20 = a12 & 0x1000;
    v14 = a3;
    v19 = v84;
    v33 = (unsigned __int64)Str1;
  }
  v42 = (unsigned int)v46[1];
  v20 = a12 & 0x1000;
  if ( (int)v42 < 0 )
    goto LABEL_46;
  v23 = 0LL;
  v87 = 0LL;
LABEL_111:
  if ( !v20 )
  {
    v24 = (unsigned int *)(a4 + v42);
    v85 = (unsigned int *)(a4 + v42);
    goto LABEL_113;
  }
  if ( v92 )
  {
    v24 = (unsigned int *)(a4 + v42);
    v85 = (unsigned int *)(a4 + v42);
    if ( a4 + v42 >= a4 )
    {
LABEL_113:
      v86 = v24;
      goto LABEL_53;
    }
  }
  return (unsigned int)-1073741701;
}
