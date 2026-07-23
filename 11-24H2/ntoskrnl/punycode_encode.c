/*
 * XREFs of punycode_encode @ 0x140784DD4
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1405EC1F8 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140423600 (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x1405EBEA4 (FindLabelEnd.c)
 *     GetUTF32 @ 0x1405EBEE0 (GetUTF32.c)
 *     ValidateStd3Range @ 0x1405EC554 (ValidateStd3Range.c)
 *     adapt @ 0x1405EC590 (adapt.c)
 */

__int64 __fastcall punycode_encode(wchar_t *Str1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  _DWORD *v6; // r12
  wchar_t *v7; // rbx
  size_t *pcchRemaining; // r11
  wchar_t *v9; // rdi
  wchar_t *v10; // r15
  wchar_t *v11; // r14
  wchar_t *v12; // r10
  char v13; // si
  wchar_t *v14; // r12
  wchar_t *LabelEnd; // rax
  unsigned __int64 v16; // r9
  const wchar_t *v17; // r8
  NTSTATUS v18; // eax
  int v19; // ebp
  wchar_t *i; // r8
  int v21; // ecx
  bool v22; // zf
  __int64 v23; // r13
  wchar_t *v24; // r8
  wchar_t *j; // rcx
  const wchar_t *v26; // rdx
  int v27; // eax
  int v28; // edx
  int v29; // r15d
  int v30; // r10d
  int v31; // r11d
  unsigned __int16 *v32; // r9
  int UTF32; // eax
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int16 *v36; // r12
  int v37; // r10d
  int v38; // eax
  int v39; // r9d
  int v40; // r10d
  int v41; // r15d
  int k; // r9d
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  __int16 v46; // dx
  __int16 v47; // ax
  int v48; // eax
  __int64 v49; // rcx
  int v51; // [rsp+40h] [rbp-88h]
  int v52; // [rsp+44h] [rbp-84h]
  int v53; // [rsp+48h] [rbp-80h]
  wchar_t *v54; // [rsp+50h] [rbp-78h]
  wchar_t *v55; // [rsp+58h] [rbp-70h]
  wchar_t *v56; // [rsp+60h] [rbp-68h]
  wchar_t *v57; // [rsp+68h] [rbp-60h]
  int v59; // [rsp+D8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E0h] [rbp+18h] BYREF
  _DWORD *v61; // [rsp+E8h] [rbp+20h]

  v61 = a4;
  ppszDestEnd = a3;
  v6 = a4;
  v7 = a3;
  LODWORD(pcchRemaining) = 0;
  v55 = a3;
  v9 = Str1;
  v10 = &Str1[a2];
  v57 = v10;
  v11 = Str1;
  v12 = a3;
  v54 = &a3[*a4];
  if ( a2 <= 0 )
  {
LABEL_93:
    *v6 = (_DWORD)pcchRemaining;
    return 3221227286LL;
  }
  v13 = a5;
  v14 = &a3[*a4];
  while ( 1 )
  {
    v56 = v7;
    if ( v9 >= v10 )
    {
      if ( !v13 )
        goto LABEL_95;
      goto LABEL_96;
    }
    LabelEnd = FindLabelEnd(v11, (unsigned __int64)v10, v13);
    v9 = LabelEnd;
    if ( LabelEnd == v11 )
      break;
    if ( !v13 && a6 != (_BYTE)pcchRemaining && (*v11 == 45 || (unsigned __int64)LabelEnd > v16 && *(LabelEnd - 1) == 45) )
      goto LABEL_92;
    v17 = L"xl--";
    if ( !v13 )
      v17 = L"xn--";
    v18 = RtlStringCchCopyNExW(v7, v14 - v7, v17, 4uLL, &ppszDestEnd, pcchRemaining, (ULONG)pcchRemaining);
    LODWORD(pcchRemaining) = 0;
    if ( v18 < 0 )
    {
LABEL_89:
      *v61 = (_DWORD)pcchRemaining;
      return 3221225507LL;
    }
    v7 = ppszDestEnd;
    v19 = 0;
    for ( i = v11; i < v9; ++i )
    {
      v21 = *i;
      if ( (unsigned __int16)v21 >= 0x80u )
      {
        if ( (unsigned __int16)(v21 + 10240) <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( v13 )
        {
          v22 = (_WORD)v21 == 0;
        }
        else
        {
          if ( a6 != (_BYTE)pcchRemaining && !ValidateStd3Range(v21) || (unsigned __int16)v21 < 0x20u )
            goto LABEL_92;
          v22 = (_WORD)v21 == 127;
        }
        if ( v22 )
          goto LABEL_92;
        if ( v7 >= v14 )
          goto LABEL_89;
        if ( !v13 && (unsigned __int16)(v21 - 65) <= 0x19u )
          LOWORD(v21) = v21 + 32;
        *v7++ = v21;
        ppszDestEnd = v7;
        ++v19;
      }
    }
    v52 = v19;
    v23 = v9 - v11;
    if ( v19 == v23 )
    {
      v24 = v56;
      for ( j = v56; j < v7 - 4; ++j )
        *j = j[4];
      v7 -= 4;
      ppszDestEnd = v7;
    }
    else
    {
      if ( (__int64)(((char *)v10 - (char *)v11) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
      {
        v26 = L"xl--";
        if ( !v13 )
          v26 = L"xn--";
        v27 = wcsnicmp(v11, v26, 4uLL);
        LODWORD(pcchRemaining) = 0;
        if ( !v27 )
          goto LABEL_92;
      }
      v28 = (int)pcchRemaining;
      v59 = (int)pcchRemaining;
      if ( v19 > 0 )
      {
        if ( v7 >= v14 )
          goto LABEL_89;
        *v7++ = 45;
        ppszDestEnd = v7;
      }
      v29 = 128;
      v51 = 72;
      v30 = (int)pcchRemaining;
      while ( v19 < v23 )
      {
        v31 = 0x7FFFFFF;
        v32 = v11;
        if ( v11 < v9 )
        {
          do
          {
            UTF32 = GetUTF32(v32);
            if ( UTF32 >= v29 && UTF32 < v31 )
              v31 = UTF32;
            v35 = 4LL;
            if ( UTF32 < 0x10000 )
              v35 = 2LL;
            v32 = (unsigned __int16 *)(v35 + v34);
          }
          while ( v32 < v9 );
          v28 = v59;
        }
        v36 = v11;
        v37 = (v31 - v29) * (v19 - v28 + 1) + v30;
        while ( v36 < v9 )
        {
          v38 = GetUTF32(v36);
          v53 = v38;
          if ( v38 >= v31 )
            v39 = v40;
          v37 = v39;
          if ( v38 == v31 )
          {
            v41 = v39;
            for ( k = 36; ; k += 36 )
            {
              if ( k > v51 )
                v43 = k < v51 + 26 ? k - v51 : 26;
              else
                v43 = 1;
              if ( v41 < v43 )
                break;
              if ( v7 >= v54 )
                goto LABEL_88;
              v44 = (v41 - v43) % (36 - v43);
              v41 = (v41 - v43) / (36 - v43);
              v45 = v44 + v43;
              v46 = 22;
              if ( v45 <= 25 )
                v46 = 97;
              *v7++ = v45 + v46;
            }
            if ( v7 >= v54 )
            {
LABEL_88:
              LODWORD(pcchRemaining) = 0;
              goto LABEL_89;
            }
            v47 = 22;
            if ( v41 <= 25 )
              v47 = 97;
            *v7++ = v41 + v47;
            ppszDestEnd = v7;
            v48 = adapt(v37, v19 - v59 + 1, v19 == v52);
            v28 = v59;
            v37 = 0;
            ++v19;
            v51 = v48;
            if ( v31 >= 0x10000 )
            {
              ++v19;
              v28 = ++v59;
            }
          }
          else
          {
            v28 = v59;
          }
          v49 = 4LL;
          if ( v53 < 0x10000 )
            v49 = 2LL;
          v36 = (unsigned __int16 *)((char *)v36 + v49);
        }
        v30 = v37 + 1;
        v29 = v31 + 1;
      }
      v10 = v57;
      LODWORD(pcchRemaining) = 0;
      v14 = v54;
      v24 = v56;
    }
    if ( !v13 && (__int64)(((char *)v7 - (char *)v24) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_92;
    if ( v9 == v10 )
      goto LABEL_86;
    if ( v7 >= v14 )
      goto LABEL_89;
    *v7++ = *v9;
    ppszDestEnd = v7;
    if ( v13 && *v9 == 64 )
    {
      v13 = (char)pcchRemaining;
      v55 = v7;
      v12 = v7;
    }
    else
    {
LABEL_86:
      v12 = v55;
    }
    v11 = v9 + 1;
  }
  if ( v13 || LabelEnd != v10 )
    goto LABEL_92;
LABEL_95:
  if ( v7 - v12 > 255LL - (*(v7 - 1) != 46) )
  {
LABEL_92:
    v6 = v61;
    goto LABEL_93;
  }
LABEL_96:
  if ( *(v7 - 1) == 64 )
    goto LABEL_92;
  *v61 = v7 - a3;
  return 0LL;
}
