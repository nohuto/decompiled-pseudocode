/*
 * XREFs of punycode_encode @ 0x1800B5968
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800B2E50 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     adapt @ 0x1800B4B08 (adapt.c)
 *     ValidateStd3Range @ 0x1800B4E00 (ValidateStd3Range.c)
 *     GetUTF32 @ 0x1800B5EDC (GetUTF32.c)
 *     FindLabelEnd @ 0x1800B5FB0 (FindLabelEnd.c)
 *     RtlStringCchCopyNExW @ 0x1800B5FEC (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x180120FE0 (_wcsnicmp.c)
 */

__int64 punycode_encode(wchar_t *String1, int a2, ...)
{
  wchar_t *v2; // r8
  _DWORD *v3; // r12
  wchar_t *i; // rbx
  wchar_t *v5; // rdi
  wchar_t *v6; // r9
  wchar_t *v7; // rbp
  wchar_t *v8; // r11
  char v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 LabelEnd; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  const wchar_t *v14; // r15
  int v15; // esi
  wchar_t *v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // r13
  int v20; // r15d
  int v21; // r10d
  int v22; // r9d
  int v23; // r11d
  wchar_t *j; // r8
  int UTF32; // eax
  __int64 v26; // r8
  __int64 v27; // rcx
  wchar_t *v28; // r12
  int v29; // r9d
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // r10
  __int64 v34; // rcx
  int v35; // r15d
  int k; // r10d
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  __int16 v40; // dx
  __int16 v41; // ax
  wchar_t v42; // ax
  int v43; // eax
  wchar_t *v45; // rdx
  wchar_t *v46; // rcx
  int v47; // [rsp+40h] [rbp-88h]
  int v48; // [rsp+44h] [rbp-84h]
  int v49; // [rsp+48h] [rbp-80h]
  unsigned __int64 v50; // [rsp+50h] [rbp-78h]
  wchar_t *v51; // [rsp+58h] [rbp-70h]
  wchar_t *v52; // [rsp+60h] [rbp-68h]
  wchar_t *v53; // [rsp+68h] [rbp-60h]
  wchar_t *v54; // [rsp+70h] [rbp-58h]
  int v55; // [rsp+D8h] [rbp+10h]
  wchar_t *v56; // [rsp+E0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+18h]
  int *v58; // [rsp+E8h] [rbp+20h]
  __int64 v59; // [rsp+F0h] [rbp+28h]
  __int64 v60; // [rsp+F8h] [rbp+30h]
  va_list va1; // [rsp+100h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v56 = va_arg(va1, wchar_t *);
  v2 = v56;
  v58 = va_arg(va1, int *);
  v59 = va_arg(va1, _QWORD);
  v60 = va_arg(va1, _QWORD);
  v3 = v58;
  i = v56;
  v51 = v56;
  v54 = v56;
  v5 = String1;
  v6 = &String1[a2];
  v53 = v6;
  v7 = String1;
  v8 = v56;
  v50 = (unsigned __int64)&v56[*v58];
  if ( a2 > 0 )
  {
    v9 = v59;
    v10 = (unsigned __int64)&v56[*v58];
    while ( 1 )
    {
      v52 = i;
      if ( v5 >= v6 )
        break;
      LOBYTE(v2) = v9;
      LabelEnd = FindLabelEnd(v7, v6, v2);
      v5 = (wchar_t *)LabelEnd;
      if ( (wchar_t *)LabelEnd == v7 )
      {
        if ( v9 || LabelEnd != v12 )
          goto LABEL_74;
        goto LABEL_64;
      }
      if ( !v9 && (_BYTE)v60 && (*v7 == 45 || LabelEnd > v13 && *(_WORD *)(LabelEnd - 2) == 45) )
        goto LABEL_74;
      v14 = L"xl--";
      if ( !v9 )
        v14 = L"xn--";
      if ( (int)RtlStringCchCopyNExW((_DWORD)i, (__int64)(v10 - (_QWORD)i) >> 1, (_DWORD)v14, v12, (__int64)va) < 0 )
      {
LABEL_73:
        *v58 = 0;
        return 3221225507LL;
      }
      i = v56;
      v15 = 0;
      v16 = v7;
      v17 = 2LL;
      while ( v16 < v5 )
      {
        v18 = *v16;
        if ( (unsigned __int16)v18 < 0x80u )
        {
          if ( !v9 && ((_BYTE)v60 && !ValidateStd3Range(v18) || (_WORD)v18 == 127 || (unsigned __int16)v18 < 0x20u)
            || !(_WORD)v18 )
          {
            goto LABEL_74;
          }
          if ( (unsigned __int64)i >= v10 )
            goto LABEL_73;
          if ( !v9 && (unsigned __int16)(v18 - 65) <= 0x19u )
            LOWORD(v18) = v18 + 32;
          *i = v18;
          i = (wchar_t *)((char *)i + v17);
          v56 = i;
          ++v15;
        }
        else if ( (unsigned __int16)(v18 + 10240) <= 0x3FFu )
        {
          v16 = (wchar_t *)((char *)v16 + v17);
        }
        v16 = (wchar_t *)((char *)v16 + v17);
      }
      v48 = v15;
      v19 = v5 - v7;
      if ( v15 == v19 )
      {
        v2 = v52;
        v45 = i - 4;
        v46 = v52;
        for ( i = v45; v46 < v45; v46 = (wchar_t *)((char *)v46 + v17) )
          *v46 = v46[4];
        v56 = v45;
      }
      else
      {
        if ( (__int64)(((char *)v53 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v7, v14, 4uLL) )
          goto LABEL_74;
        v20 = 0;
        v47 = 0;
        if ( v15 > 0 )
        {
          if ( (unsigned __int64)i >= v10 )
            goto LABEL_73;
          *i++ = 45;
          v56 = i;
        }
        v21 = 128;
        v55 = 72;
        v22 = 0;
        while ( v15 < v19 )
        {
          v23 = 0x7FFFFFF;
          for ( j = v7; j < v5; j = (wchar_t *)(v27 + v26) )
          {
            UTF32 = GetUTF32(j);
            if ( UTF32 >= v21 && UTF32 < v23 )
              v23 = UTF32;
            v27 = 4LL;
            if ( UTF32 < 0x10000 )
              v27 = 2LL;
          }
          v28 = v7;
          v29 = (v23 - v21) * (v15 - v20 + 1) + v22;
          while ( v28 < v5 )
          {
            v30 = GetUTF32(v28);
            v49 = v30;
            if ( v30 >= v23 )
              v31 = v32;
            v29 = v31;
            if ( v30 == v23 )
            {
              v35 = v31;
              for ( k = 36; ; k += 36 )
              {
                if ( k <= v55 )
                  v37 = 1;
                else
                  v37 = k < v55 + 26 ? k - v55 : 26;
                if ( v35 < v37 )
                  break;
                if ( (unsigned __int64)i >= v50 )
                  goto LABEL_73;
                v38 = (v35 - v37) % (36 - v37);
                v35 = (v35 - v37) / (36 - v37);
                v39 = v38 + v37;
                v40 = 22;
                if ( v39 <= 25 )
                  v40 = 97;
                *i++ = v39 + v40;
              }
              if ( (unsigned __int64)i >= v50 )
                goto LABEL_73;
              v41 = 22;
              if ( v35 <= 25 )
                v41 = 97;
              v42 = v35 + v41;
              v20 = v47;
              *i++ = v42;
              v56 = i;
              v43 = adapt(v29, v15 - v47 + 1, v15 == v48);
              v29 = 0;
              v55 = v43;
              ++v15;
              v33 = 2LL;
              if ( v23 >= 0x10000 )
              {
                ++v15;
                v20 = ++v47;
              }
            }
            v34 = 4LL;
            if ( v49 < 0x10000 )
              v34 = v33;
            v28 = (wchar_t *)((char *)v28 + v34);
          }
          v22 = v29 + 1;
          v21 = v23 + 1;
        }
        v10 = v50;
        v2 = v52;
      }
      if ( !v9 && (__int64)(((char *)i - (char *)v2) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_74;
      v6 = v53;
      if ( v5 == v53 )
        goto LABEL_71;
      if ( (unsigned __int64)i >= v10 )
        goto LABEL_73;
      *i++ = *v5;
      v56 = i;
      if ( v9 && *v5 == 64 )
      {
        v9 = 0;
        v51 = i;
        v8 = i;
      }
      else
      {
LABEL_71:
        v8 = v51;
      }
      v7 = v5 + 1;
    }
    if ( v9 )
      goto LABEL_65;
LABEL_64:
    if ( i - v8 > 255LL - (*(i - 1) != 46) )
      goto LABEL_74;
LABEL_65:
    if ( *(i - 1) != 64 )
    {
      *v58 = i - v54;
      return 0LL;
    }
LABEL_74:
    v3 = v58;
  }
  *v3 = 0;
  return 3221227286LL;
}
