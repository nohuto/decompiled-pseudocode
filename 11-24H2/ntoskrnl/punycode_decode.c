/*
 * XREFs of punycode_decode @ 0x1407847CC
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405EBF3C (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x1405EBEA4 (FindLabelEnd.c)
 *     InsertChar @ 0x1405EBF14 (InsertChar.c)
 *     ValidateStd3Range @ 0x1405EC554 (ValidateStd3Range.c)
 *     adapt @ 0x1405EC590 (adapt.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *Str1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  char v11; // r12
  unsigned __int16 *v12; // rbp
  char v13; // r13
  wchar_t *v14; // rdi
  __int64 v15; // rax
  wchar_t *v16; // r14
  wchar_t *v17; // rdx
  unsigned __int16 *v18; // r15
  wchar_t *v19; // rsi
  wchar_t *LabelEnd; // rax
  unsigned __int16 v21; // r9
  unsigned __int64 v22; // r10
  int v23; // r11d
  const wchar_t *v24; // rdx
  int v25; // eax
  wchar_t *j; // r8
  wchar_t *v27; // r9
  int v28; // r15d
  __int64 v29; // r10
  unsigned __int16 v30; // cx
  int v31; // eax
  int v32; // ebp
  int v33; // r11d
  wchar_t *v34; // r12
  int v35; // r9d
  int v36; // r10d
  int k; // r8d
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  __int64 v42; // r11
  __int64 v43; // r11
  __int64 v44; // rax
  __int64 v45; // rbp
  unsigned __int16 *v46; // r10
  int m; // ecx
  unsigned __int16 v48; // r11
  __int16 v49; // r11
  __int64 v50; // r10
  wchar_t *i; // r8
  unsigned __int16 v52; // ax
  bool v53; // zf
  int v55; // [rsp+20h] [rbp-78h]
  unsigned __int16 *v56; // [rsp+28h] [rbp-70h]
  unsigned __int64 v57; // [rsp+30h] [rbp-68h]
  wchar_t *v58; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v59; // [rsp+40h] [rbp-58h]
  int v60; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v61; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v62; // [rsp+B8h] [rbp+20h]

  v62 = a4;
  v61 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = a6;
  v12 = &v9[v10];
  v13 = a5;
  v14 = Str1;
  v15 = a2;
  v16 = Str1;
  v17 = Str1 - 1;
  v59 = v9;
  v58 = Str1 - 1;
  v18 = v9;
  v57 = (unsigned __int64)v12;
  v19 = &Str1[v15];
  *a8 = v9 - 1;
  while ( 1 )
  {
    v56 = v18;
    if ( v14 >= v19 )
      goto LABEL_107;
    LabelEnd = FindLabelEnd(v16, (unsigned __int64)v19, v13);
    v14 = LabelEnd;
    if ( LabelEnd == v16 )
      break;
    if ( !v13
      && (v11 && (*v16 == 45 || (unsigned __int64)LabelEnd > v22 && *(LabelEnd - 1) == 45)
       || (__int64)(((char *)LabelEnd - (char *)v16) & 0xFFFFFFFFFFFFFFFEuLL) > 126) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v19 - (char *)v16) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_80;
    v24 = L"xl--";
    if ( !v13 )
      v24 = L"xn--";
    v25 = wcsnicmp(v16, v24, 4uLL);
    v23 = 0;
    if ( v25 )
    {
      v21 = 128;
LABEL_80:
      if ( (__int64)(((char *)v12 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v14 - (char *)v16) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      for ( i = v16; i < v14; ++i )
      {
        if ( v13 )
        {
          v52 = *i;
          v53 = *i == 0;
        }
        else
        {
          if ( v11 && !ValidateStd3Range(*i) )
            return 3221227286LL;
          v52 = *i;
          if ( *i < 0x20u )
            return 3221227286LL;
          v53 = v52 == 127;
        }
        if ( v53 || v52 >= v21 )
          return 3221227286LL;
        *v9++ = v52;
        v61 = v9;
      }
      goto LABEL_93;
    }
    v16 += 4;
    *a7 = 0;
    for ( j = v14 - 1; j >= v16; --j )
    {
      if ( *j == 45 )
        goto LABEL_20;
    }
    j = 0LL;
LABEL_20:
    if ( j == v14 - 1 )
      return 3221227286LL;
    if ( j && j > v16 )
    {
      v27 = v16;
      v28 = 128;
      v29 = j - v16;
      while ( v27 != j )
      {
        if ( v9 >= v12 )
          return 3221227286LL;
        if ( v13 )
        {
          v30 = *v27;
          if ( !*v27 )
            return 3221227286LL;
        }
        else
        {
          if ( v11 && !ValidateStd3Range(*v27) || *v27 < 0x20u || *v27 == 127 )
            return 3221227286LL;
          v30 = *v27;
        }
        if ( v30 >= 0x80u )
          return 3221227286LL;
        if ( !v13 && (unsigned __int16)(v30 - 65) <= 0x19u )
          v30 += 32;
        *v9++ = v30;
        v61 = v9;
        ++v27;
      }
    }
    else
    {
      LODWORD(v29) = 0;
      v28 = 128;
    }
    v31 = v29 + 1;
    if ( (int)v29 <= 0 )
      v31 = v23;
    v32 = 0;
    v60 = 0;
    v33 = 72;
    v34 = &v16[v31];
    while ( 2 )
    {
      if ( v34 < v14 )
      {
        v35 = 1;
        v36 = v32;
        for ( k = 36; ; k += 36 )
        {
          if ( v34 >= v14 )
            return 3221227286LL;
          v38 = *v34;
          if ( (unsigned __int16)(v38 - 48) > 9u )
          {
            v40 = 97;
            if ( (unsigned __int16)(v38 - 97) > 0x19u )
            {
              v40 = 65;
              if ( (unsigned __int16)(v38 - 65) > 0x19u )
                return 3221227286LL;
            }
            v39 = v38 - v40;
          }
          else
          {
            v39 = v38 - 22;
          }
          ++v34;
          if ( v39 < 0 || v39 > (0x7FFFFFF - v32) / v35 )
            return 3221227286LL;
          v32 += v35 * v39;
          if ( k > v33 )
            v41 = k < v33 + 26 ? k - v33 : 26;
          else
            v41 = 1;
          if ( v39 < v41 )
            break;
          if ( v35 > 0x7FFFFFF / (36 - v41) )
            return 3221227286LL;
          v35 *= 36 - v41;
        }
        v55 = adapt(v32 - v36, (unsigned int)(v9 - v56) - v60 + 1, v36 == 0);
        v43 = v42 - v60 + 1;
        v44 = v32 / v43;
        v45 = v32 % v43;
        if ( v44 <= 0x7FFFFFF - v28 )
        {
          v28 += v44;
          if ( (unsigned int)(v28 - 128) <= 0x10FF7F && (unsigned int)(v28 - 55296) > 0x7FF )
          {
            if ( v60 <= 0 )
            {
              v46 = &v56[(int)v45];
            }
            else
            {
              v46 = v56;
              for ( m = v45; m > 0; --m )
              {
                if ( v46 >= v9 )
                  return 3221227286LL;
                if ( (unsigned __int16)(*v46 + 10240) <= 0x7FFu )
                  ++v46;
                ++v46;
              }
            }
            if ( v28 >= 0x10000 )
            {
              if ( (unsigned __int64)v9 < v57 - 2 && v46 <= v9 )
              {
                InsertChar((v28 - 0x10000) / 1024 - 10240, v46, &v61);
                ++v60;
                v48 = v49 - 9216;
                v46 = (unsigned __int16 *)(v50 + 2);
                goto LABEL_78;
              }
            }
            else if ( (unsigned __int64)v9 < v57 && v46 <= v9 )
            {
              v48 = v28;
LABEL_78:
              InsertChar(v48, v46, &v61);
              v9 = v61;
              v32 = v45 + 1;
              v33 = v55;
              continue;
            }
          }
        }
        return 3221227286LL;
      }
      break;
    }
    v18 = v56;
    LOBYTE(v23) = 0;
    v12 = (unsigned __int16 *)v57;
    v11 = a6;
LABEL_93:
    if ( !v13 && ((__int64)(((char *)v14 - (char *)v16) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v18) )
      return 3221227286LL;
    if ( v14 != v19 )
    {
      if ( v9 >= v12 )
        return 3221227286LL;
      *v9++ = *v14;
      v61 = v9;
    }
    if ( v13 )
    {
      v17 = v14;
      v58 = v14;
      v13 = v23;
      *a8 = (char *)v9 - (v19 != v14 ? 2 : 0);
      if ( v14 == v19 - 1 )
        return 3221227286LL;
    }
    else
    {
      v17 = v58;
    }
    v16 = v14 + 1;
    v18 = v9;
  }
  if ( !v13 && LabelEnd == v19 )
  {
    v17 = v58;
LABEL_107:
    if ( v9 != v59 && (v13 || v19 - v17 <= 256LL - (*(v19 - 1) != 46)) )
    {
      *v62 = v9 - v59;
      return 0LL;
    }
  }
  return 3221227286LL;
}
