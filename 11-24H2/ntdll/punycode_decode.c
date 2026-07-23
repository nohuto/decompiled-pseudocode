/*
 * XREFs of punycode_decode @ 0x1800B3650
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1800B3250 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     adapt @ 0x1800B4B08 (adapt.c)
 *     ValidateStd3Range @ 0x1800B4E00 (ValidateStd3Range.c)
 *     _wcsnicmp @ 0x180120FE0 (_wcsnicmp.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *String1,
        int a2,
        wchar_t *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // r15
  __int64 v10; // r8
  char v11; // r13
  wchar_t *v12; // r10
  __int64 v13; // rax
  wchar_t *v14; // r9
  __int64 v15; // rdx
  wchar_t *i; // rbx
  wchar_t *v17; // r14
  unsigned __int16 v18; // r11
  wchar_t *v19; // rdi
  char v20; // bp
  const wchar_t *v21; // rdx
  wchar_t *j; // r8
  unsigned __int16 v23; // ax
  bool v24; // zf
  wchar_t *v26; // r14
  wchar_t *k; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r11
  wchar_t *v30; // r10
  int v31; // eax
  int v32; // ebp
  wchar_t *v33; // r15
  int v34; // r14d
  int v35; // r13d
  int v36; // r9d
  int v37; // r10d
  int v38; // r12d
  __int64 m; // r8
  int v40; // ecx
  int v41; // ecx
  int v42; // edx
  __int64 v43; // r11
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // rbp
  wchar_t *v47; // r8
  wchar_t *jj; // rcx
  __int64 v49; // rcx
  wchar_t *ii; // rcx
  wchar_t *v51; // r8
  wchar_t *v52; // rcx
  __int16 v53; // ax
  int n; // ecx
  wchar_t v55; // cx
  unsigned __int64 v56; // [rsp+20h] [rbp-68h]
  wchar_t *v57; // [rsp+28h] [rbp-60h]
  wchar_t *v58; // [rsp+30h] [rbp-58h]
  wchar_t *v59; // [rsp+38h] [rbp-50h]
  wchar_t *v60; // [rsp+40h] [rbp-48h]
  wchar_t *v61; // [rsp+90h] [rbp+8h]
  int v62; // [rsp+98h] [rbp+10h]

  v61 = String1;
  v8 = a7;
  v10 = *a4;
  *a4 = 0;
  *a7 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = a6;
  v12 = String1 - 1;
  v13 = a2;
  v14 = &a3[v10];
  v15 = (__int64)a8;
  i = String1;
  v17 = String1;
  v58 = String1 - 1;
  v60 = a3;
  v18 = 128;
  v19 = &String1[v13];
  v56 = (unsigned __int64)v14;
  *a8 = a3 - 1;
  while ( 1 )
  {
    v20 = a5;
    v57 = a3;
    if ( i >= v19 )
      goto LABEL_30;
    i = v17;
    if ( (_BYTE)a5 )
    {
      for ( i = v19 - 1; i >= v17; --i )
      {
        if ( *i == 64 )
          goto LABEL_9;
      }
    }
    else
    {
      while ( i < v19 )
      {
        if ( *i == 46 )
          goto LABEL_9;
        ++i;
      }
    }
    i = v19;
LABEL_9:
    if ( i == v17 )
      break;
    if ( !(_BYTE)a5
      && (v11 && (*v17 == 45 || i > String1 && *(i - 1) == 45)
       || (__int64)(((char *)i - (char *)v17) & 0xFFFFFFFFFFFFFFFEuLL) > 126) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v19 - (char *)v17) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_18;
    v21 = L"xl--";
    if ( !(_BYTE)a5 )
      v21 = L"xn--";
    if ( wcsnicmp(v17, v21, 4uLL) )
    {
      v14 = (wchar_t *)v56;
      v18 = 128;
LABEL_18:
      if ( (__int64)(((char *)v14 - (char *)a3) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)i - (char *)v17) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      for ( j = v17; j < i; ++j )
      {
        if ( (_BYTE)a5 )
        {
          v23 = *j;
          v24 = *j == 0;
        }
        else
        {
          if ( v11 && !(unsigned __int8)ValidateStd3Range(*j, v15, j, v14) )
            return 3221227286LL;
          v23 = *j;
          if ( *j < 0x20u )
            return 3221227286LL;
          v24 = v23 == 127;
        }
        if ( v24 || v23 >= v18 )
          return 3221227286LL;
        *a3++ = v23;
      }
      goto LABEL_36;
    }
    v26 = v17 + 4;
    *v8 = 0;
    v59 = v26;
    for ( k = i - 1; k >= v26; --k )
    {
      if ( *k == 45 )
        goto LABEL_50;
    }
    k = 0LL;
LABEL_50:
    if ( k == i - 1 )
      return 3221227286LL;
    if ( k && k > v26 )
    {
      v29 = v56;
      v30 = v26;
      v28 = k - v26;
      while ( v30 != k )
      {
        if ( (unsigned __int64)a3 >= v29 )
          return 3221227286LL;
        if ( (_BYTE)a5 )
        {
          v55 = *v30;
          if ( !*v30 )
            return 3221227286LL;
        }
        else
        {
          if ( v11 && !(unsigned __int8)ValidateStd3Range(*v30, v15, k, v28) || *v30 < 0x20u || *v30 == 127 )
            return 3221227286LL;
          v55 = *v30;
        }
        if ( v55 >= 0x80u )
          return 3221227286LL;
        if ( !(_BYTE)a5 && (unsigned __int16)(v55 - 65) <= 0x19u )
          v55 += 32;
        *a3++ = v55;
        ++v30;
      }
    }
    else
    {
      LODWORD(v28) = 0;
    }
    v31 = v28 + 1;
    v62 = 0;
    v32 = 0;
    if ( (int)v28 <= 0 )
      v31 = 0;
    v33 = &v26[v31];
    v34 = 128;
    v35 = 72;
    while ( 2 )
    {
      if ( v33 < i )
      {
        v36 = 1;
        v37 = v32;
        v38 = v32;
        for ( m = 36LL; ; m = (unsigned int)(m + 36) )
        {
          if ( v33 >= i )
            return 3221227286LL;
          v40 = *v33;
          if ( (unsigned __int16)(v40 - 48) <= 9u )
          {
            v41 = v40 - 22;
          }
          else if ( (unsigned __int16)(v40 - 97) > 0x19u )
          {
            if ( (unsigned __int16)(v40 - 65) > 0x19u )
              return 3221227286LL;
            v41 = v40 - 65;
          }
          else
          {
            v41 = v40 - 97;
          }
          ++v33;
          if ( v41 < 0 || v41 > (0x7FFFFFF - v32) / v36 )
            return 3221227286LL;
          v32 += v36 * v41;
          if ( (int)m <= v35 )
          {
            v42 = 1;
          }
          else
          {
            v42 = m - v35;
            if ( (int)m >= v35 + 26 )
              v42 = 26;
          }
          if ( v41 < v42 )
            break;
          if ( v36 > 0x7FFFFFF / (36 - v42) )
            return 3221227286LL;
          v36 *= 36 - v42;
        }
        LOBYTE(m) = v38 == 0;
        v35 = adapt((unsigned int)(v32 - v37), (unsigned int)(a3 - v57) - v62 + 1, m);
        v44 = v43 - v62 + 1;
        v45 = v32 / v44;
        v46 = v32 % v44;
        if ( v45 <= 0x7FFFFFF - v34 )
        {
          v34 += v45;
          if ( (unsigned int)(v34 - 128) <= 0x10FF7F )
          {
            v15 = 2047LL;
            if ( (unsigned int)(v34 - 55296) > 0x7FF )
            {
              if ( v62 > 0 )
              {
                v47 = v57;
                for ( n = v46; n > 0; --n )
                {
                  if ( v47 >= a3 )
                    return 3221227286LL;
                  if ( (unsigned __int16)(*v47 + 10240) <= 0x7FFu )
                    ++v47;
                  ++v47;
                }
              }
              else
              {
                v47 = &v57[(int)v46];
              }
              if ( v34 >= 0x10000 )
              {
                if ( v47 <= a3 && (unsigned __int64)a3 < v56 - 2 )
                {
                  for ( ii = a3 - 1; ii >= v47; --ii )
                    ii[1] = *ii;
                  v15 = ((v34 - 0x10000) >> 31) & 0x3FF;
                  *v47 = (v34 - 0x10000) / 1024 - 10240;
                  v51 = v47 + 1;
                  if ( a3 >= v51 )
                  {
                    v52 = a3;
                    do
                    {
                      v52[1] = *v52;
                      --v52;
                    }
                    while ( v52 >= v51 );
                  }
                  v53 = v34 & 0x3FF;
                  if ( v34 - 0x10000 < 0 )
                    v53 = ((v53 - 1) | 0xFC00) + 1;
                  ++v62;
                  *v51 = v53 - 9216;
                  a3 += 2;
                  goto LABEL_82;
                }
              }
              else if ( (unsigned __int64)a3 < v56 && v47 <= a3 )
              {
                for ( jj = a3 - 1; jj >= v47; --jj )
                  jj[1] = *jj;
                *v47 = v34;
                ++a3;
LABEL_82:
                v32 = v46 + 1;
                continue;
              }
            }
          }
        }
        return 3221227286LL;
      }
      break;
    }
    v17 = v59;
    v20 = a5;
    v18 = 128;
    v8 = a7;
    v11 = a6;
    v14 = (wchar_t *)v56;
LABEL_36:
    if ( !v20 && (a3 == v57 || (__int64)(((char *)i - (char *)v17) & 0xFFFFFFFFFFFFFFFEuLL) > 126) )
      return 3221227286LL;
    if ( i != v19 )
    {
      if ( a3 >= v14 )
        return 3221227286LL;
      *a3++ = *i;
    }
    if ( v20 )
    {
      LOBYTE(a5) = 0;
      v58 = i;
      v49 = 0LL;
      v12 = i;
      if ( i != v19 )
        v49 = 2LL;
      *a8 = &a3[v49 / 0xFFFFFFFFFFFFFFFEuLL];
      if ( i == v19 - 1 )
        return 3221227286LL;
    }
    else
    {
      v12 = v58;
    }
    String1 = v61;
    v17 = i + 1;
  }
  if ( !(_BYTE)a5 && i == v19 )
  {
LABEL_30:
    if ( a3 != v60 && ((_BYTE)a5 || v19 - v12 <= (*(v19 - 1) == 46) + 255LL) )
    {
      *a4 = a3 - v60;
      return 0LL;
    }
  }
  return 3221227286LL;
}
