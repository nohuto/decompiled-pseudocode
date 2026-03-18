/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1409F2C00
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1402F4C50 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpResCompareResourceNames @ 0x1409F35FC (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1409F3AD8 (LdrpSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        unsigned int *a7,
        int a8,
        signed __int16 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11,
        unsigned int a12,
        _WORD *a13)
{
  unsigned __int64 v14; // r10
  unsigned int v16; // ebx
  unsigned int *v17; // r9
  __int64 v18; // rdx
  int v19; // r13d
  __int64 result; // rax
  int v21; // ecx
  unsigned __int64 v22; // rdi
  unsigned int *v23; // r15
  int v24; // eax
  int v25; // ecx
  __int64 v26; // r11
  unsigned __int64 v27; // rax
  char *v28; // rcx
  unsigned int *v29; // r8
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rax
  bool v34; // zf
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // edx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rdx
  int v48; // r11d
  __int16 v49; // ax
  unsigned int v50; // eax
  __int64 v51; // rax
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  unsigned int v58; // r9d
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  unsigned int v61; // r9d
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  __int64 v64; // [rsp+40h] [rbp-D8h]
  int v65; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int *v66; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v67; // [rsp+58h] [rbp-C0h]
  __int16 v68; // [rsp+60h] [rbp-B8h]
  int v69; // [rsp+64h] [rbp-B4h]
  int v70; // [rsp+68h] [rbp-B0h]
  int v71; // [rsp+6Ch] [rbp-ACh]
  unsigned __int64 v72; // [rsp+70h] [rbp-A8h]
  __int64 v73; // [rsp+78h] [rbp-A0h]
  __int64 v74; // [rsp+80h] [rbp-98h]
  unsigned int *v75; // [rsp+88h] [rbp-90h]
  unsigned int *v76; // [rsp+90h] [rbp-88h]
  __int16 v77; // [rsp+98h] [rbp-80h]
  unsigned __int64 v78; // [rsp+A0h] [rbp-78h]
  __int128 v79; // [rsp+A8h] [rbp-70h]
  unsigned int *v80; // [rsp+B8h] [rbp-60h]
  int v81; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v82; // [rsp+C8h] [rbp-50h]
  unsigned int *v83; // [rsp+D0h] [rbp-48h]
  char v84; // [rsp+128h] [rbp+10h]
  unsigned __int64 v85; // [rsp+130h] [rbp+18h]
  char v86; // [rsp+138h] [rbp+20h]
  unsigned int v87; // [rsp+138h] [rbp+20h]
  signed __int16 v88; // [rsp+148h] [rbp+30h]
  unsigned int v89; // [rsp+148h] [rbp+30h]

  v85 = a3;
  v14 = a3;
  v16 = 0;
  v65 = 0;
  v79 = 0LL;
  v88 = 0;
  LOWORD(a3) = 0;
  v69 = 0;
  if ( !a4 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v17 = a7;
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  HIDWORD(v64) = a12;
  v18 = a12;
  if ( (a12 & 0x8000) != 0 )
    return 3221225485LL;
  v19 = a12 & 0x1000;
  v84 = v19 != 0;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( (a12 & 0x8800) == 0x8800 || !a1 )
    return 3221225485LL;
  v21 = a8;
  v71 = a8;
  v22 = a4;
  v23 = 0LL;
  v72 = 0LL;
  if ( a13 )
    *a13 = 0;
LABEL_13:
  if ( !v22 )
    goto LABEL_60;
  v24 = v21;
  v25 = v21 - 1;
  v71 = v25;
  v81 = v25;
  if ( !v24 )
    goto LABEL_60;
  v73 = *(_QWORD *)v17;
  v74 = v73;
  if ( !v25 && a8 == 3 )
  {
    v72 = v22;
    v82 = v22;
    if ( !a9 )
      return (unsigned int)-1073741811;
    v88 = *a9;
    v77 = *a9;
    v69 = 0;
    v68 = 0;
    if ( (~(_BYTE)v18 & 4) != 0 )
    {
      v73 = (unsigned __int16)a9[2];
      v74 = v73;
    }
  }
  if ( v19 && (v22 + 24 < v22 || v22 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    return (unsigned int)-1073741701;
  v26 = *(unsigned __int16 *)(v22 + 12);
  v70 = v26;
  if ( (_DWORD)v26 )
  {
    if ( v19 )
    {
      *(_QWORD *)&v79 = 8 * v26;
      v37 = (unsigned int)(8 * v26);
      if ( v22 + v37 + 16 < v22 || v37 + v22 + 16 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
  }
  v17 = (unsigned int *)(v22 + 16);
  *(_QWORD *)&v79 = v22 + 16;
  v76 = (unsigned int *)(v22 + 16);
  if ( (v73 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v26 )
    {
      if ( v19 && (unsigned int *)((char *)v17 + (int)v26) < v17 )
        return (unsigned int)-1073741701;
      v17 += 2 * v26;
      *(_QWORD *)&v79 = v17;
      v76 = v17;
    }
    LODWORD(v26) = *(unsigned __int16 *)(v22 + 14);
    v70 = v26;
    if ( v19 )
    {
      v27 = 8LL * (unsigned int)v26;
      v78 = v27;
      if ( v27 > 0xFFFFFFFF )
        return (unsigned int)-1073741701;
      v28 = (char *)v17 + (unsigned int)v27;
      if ( v28 < (char *)v17 || (unsigned __int64)v28 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
  }
  if ( !(_DWORD)v26 )
  {
    v67 = 0LL;
LABEL_108:
    switch ( a8 - v71 )
    {
      case 1:
        return (unsigned int)-1073741686;
      case 2:
        return (unsigned int)-1073741685;
      case 3:
        return (unsigned int)-1073741308;
    }
    return (unsigned int)-1073741811;
  }
LABEL_27:
  if ( v72 && (v18 & 0x20) != 0 )
  {
    v22 = 0LL;
    v67 = 0LL;
    v38 = v17[1];
    v23 = (unsigned int *)(v38 + a4);
    if ( v19 && (unsigned __int64)v23 < a4 )
      return (unsigned int)-1073741701;
    v66 = (unsigned int *)(v38 + a4);
    LODWORD(a3) = *v17;
    v74 = *v17;
LABEL_60:
    v39 = v18 & 2;
    if ( v23 && !v39 )
    {
      if ( v19 )
      {
        if ( (unsigned __int64)v23 <= a4 )
          goto LABEL_65;
        v40 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (unsigned __int64)(v23 + 4) > (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v14 )
          goto LABEL_65;
      }
      else
      {
        v40 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a13 )
        *a13 = a3;
      if ( (a1 & 1) != 0 )
      {
        v49 = *(_WORD *)(a5 + 24);
        if ( v49 == 267 )
        {
          v50 = *(_DWORD *)(a5 + 136);
        }
        else if ( v49 == 523 )
        {
          v50 = *(_DWORD *)(a5 + 152);
        }
        else
        {
          v50 = 0;
        }
        if ( !v50 )
        {
          v66 = 0LL;
          return (unsigned int)-1073741687;
        }
        if ( v19 && (v50 + v40 < v40 || v50 + v40 < a4) )
          return (unsigned int)-1073741701;
        v41 = v40 + v50 - a4;
        v51 = LdrpSectionTableFromVirtualAddress(v40, v14, a5, (_DWORD)v17, v50, v84);
        if ( !v51 )
          goto LABEL_65;
        if ( *v23 > *(_DWORD *)(v51 + 8) )
        {
          v89 = *(_DWORD *)(v51 + 12);
          v54 = LdrpSectionTableFromVirtualAddress(v40, v85, v52, v53, *v23, v84);
          if ( !v54 )
            goto LABEL_65;
          v87 = *(_DWORD *)(v54 + 12);
          v57 = LdrpSectionTableFromVirtualAddress(v40, v85, v55, v56, v87, v84);
          if ( v57 )
          {
            if ( v19 )
            {
              v58 = v87;
              v59 = v40 + v87 - (unsigned __int64)*(unsigned int *)(v57 + 12);
              if ( v59 < v40 || v59 + *(unsigned int *)(v57 + 20) < v59 )
                return (unsigned int)-1073741701;
            }
            else
            {
              v58 = v87;
            }
            v60 = v40 + *(unsigned int *)(v57 + 20) - (unsigned __int64)*(unsigned int *)(v57 + 12) + v58;
          }
          else
          {
            v60 = 0LL;
          }
          if ( v19 )
          {
            v61 = v89;
            v62 = *(unsigned int *)(v57 + 12);
            if ( v62 < v89 || v62 - v89 < v60 - a4 )
              return (unsigned int)-1073741701;
          }
          else
          {
            v61 = v89;
          }
          v41 += a4 + *(unsigned int *)(v57 + 12) - (unsigned __int64)v61 - v60;
        }
      }
      else
      {
        v41 = 0LL;
      }
      v42 = v23[1];
      if ( !v19 )
      {
        v44 = 0LL;
        v45 = v85;
LABEL_78:
        if ( a10 )
        {
          if ( v19 )
          {
            v46 = v40 + v44;
            if ( v40 + v44 < v40 || v46 > v40 + v45 )
              return (unsigned int)-1073741701;
            *a10 = v46;
          }
          else
          {
            *a10 = v40 + *v23 - v41;
          }
        }
        if ( a11 )
        {
          if ( v19 )
          {
            if ( a10 )
            {
              v47 = *a10 + v42;
              if ( v47 < *a10 || v47 > v45 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                return (unsigned int)-1073741701;
            }
          }
          *a11 = v42;
        }
        return v16;
      }
      v43 = *v23;
      if ( v43 < v41 )
        return (unsigned int)-1073741701;
      v44 = v43 - v41;
      if ( v44 >= a4 - a1 )
      {
        v45 = v85;
        if ( v44 <= v85 && (_DWORD)v42 && v42 <= v85 && v44 + (unsigned int)v42 <= v85 )
          goto LABEL_78;
      }
LABEL_65:
      v66 = 0LL;
      return (unsigned int)-1073741701;
    }
    if ( v22 && v39 )
    {
      if ( v19 )
      {
        if ( v22 + 24 < v22 || (v63 = a1 & 0xFFFFFFFFFFFFFFFCuLL, v22 + 24 > v63 + v14) )
        {
          v67 = 0LL;
          return (unsigned int)-1073741701;
        }
      }
      else
      {
        v63 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a10 )
      {
        if ( v19 && (v22 < v63 || v22 > v63 + v14) )
          return (unsigned int)-1073741701;
        *a10 = v22;
      }
      return v16;
    }
    goto LABEL_108;
  }
LABEL_28:
  v22 = 0LL;
  v67 = 0LL;
  v29 = v17;
  v76 = v17;
  v17 = &v17[2 * (int)v26 - 2];
  v80 = v17;
  v30 = v26;
  v31 = v26;
  while ( 1 )
  {
    if ( v29 > v17 )
      goto LABEL_39;
    v32 = v31 >> 1;
    LODWORD(v78) = v32;
    if ( !v32 )
    {
      if ( v30 )
      {
        result = LdrpResCompareResourceNames(a1, v18, v14, v73, a4, v29, v18, &v65, v64);
        LODWORD(v64) = result;
        if ( (int)result < 0 )
          return result;
        if ( !v65 )
        {
          v33 = v76[1];
          if ( (int)v33 >= 0 )
            goto LABEL_94;
LABEL_35:
          if ( v19 )
          {
            if ( v72 )
              return (unsigned int)-1073741701;
            LODWORD(v33) = v33 & 0x7FFFFFFF;
            v22 = v33 + a4;
            if ( v33 + a4 < a4 )
              return (unsigned int)-1073741701;
          }
          else
          {
            v22 = a4 + (v33 & 0xFFFFFFFF7FFFFFFFuLL);
          }
          v67 = v22;
        }
LABEL_38:
        v18 = HIDWORD(v64);
        v14 = v85;
      }
LABEL_39:
      if ( !v72 || v23 )
        goto LABEL_40;
      if ( (v18 & 4) != 0 )
      {
        LOWORD(a3) = v73;
        goto LABEL_60;
      }
      HIWORD(v48) = HIWORD(v69);
      LOWORD(v48) = v69 + 1;
      v69 = v48;
      v68 = v48;
      if ( (unsigned __int16)v48 >= v88 )
      {
        if ( *((_BYTE *)a9 + 516) )
        {
LABEL_40:
          v17 = a7 + 2;
          a7 = v17;
          v83 = v17;
          LOWORD(a3) = v73;
          v21 = v71;
          goto LABEL_13;
        }
        v18 = (unsigned int)v18 | 0x20;
        HIDWORD(v64) = v18;
        v17 = (unsigned int *)v79;
        LODWORD(v26) = v70;
        goto LABEL_27;
      }
      v73 = (unsigned __int16)a9[4 * (unsigned __int16)v48 + 2];
      v74 = v73;
      v17 = (unsigned int *)v79;
      LODWORD(v26) = v70;
      goto LABEL_28;
    }
    v75 = v29;
    v35 = v30 & 1;
    v34 = v35 == 0;
    v86 = v35;
    LODWORD(v36) = v32 - 1;
    LODWORD(v74) = v32 - 1;
    if ( v34 )
      v36 = (int)v36;
    else
      v36 = v32;
    v75 = &v29[2 * v36];
    result = LdrpResCompareResourceNames(a1, v18, v14, v73, a4, v75, v18, &v65, v64);
    LODWORD(v64) = result;
    if ( (int)result < 0 )
      return result;
    if ( !v65 )
      break;
    if ( v65 < 0 )
    {
      v17 = v75 - 2;
      v80 = v75 - 2;
      if ( v86 )
      {
        v31 = v78;
        v30 = v78;
      }
      else
      {
        v30 = v74;
        v31 = v74;
      }
      v29 = v76;
    }
    else
    {
      v29 = v75 + 2;
      v76 = v75 + 2;
      v31 = v78;
      v30 = v78;
      v17 = v80;
    }
    v18 = HIDWORD(v64);
    v14 = v85;
  }
  v33 = v75[1];
  if ( (int)v33 < 0 )
    goto LABEL_35;
  v22 = 0LL;
  v67 = 0LL;
LABEL_94:
  if ( !v19 )
  {
    v23 = (unsigned int *)(a4 + v33);
    goto LABEL_149;
  }
  if ( v72 )
  {
    v23 = (unsigned int *)(a4 + v33);
    if ( a4 + v33 >= a4 )
    {
LABEL_149:
      v66 = v23;
      goto LABEL_38;
    }
  }
  return (unsigned int)-1073741701;
}
