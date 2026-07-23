/*
 * XREFs of _CmGetDeviceInterfaceSubkeyPath @ 0x1408C6D90
 * Callers:
 *     _CmGetDeviceInterfaceClassGuid @ 0x1408C9070 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1409C3AD4 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1408C8740 (ScanHexFormat.c)
 */

__int64 __fastcall CmGetDeviceInterfaceSubkeyPath(
        __int64 a1,
        const WCHAR *a2,
        char a3,
        const WCHAR *a4,
        wchar_t *a5,
        unsigned int a6)
{
  wchar_t *v6; // r14
  int v7; // edi
  _WORD *v8; // rbx
  unsigned __int64 Length; // r8
  _QWORD *v12; // rdx
  _WORD *i; // rax
  unsigned __int64 v14; // rbx
  unsigned int inited; // edi
  WCHAR *v17; // rcx
  __int64 v18; // r15
  __int64 j; // r8
  WCHAR v20; // ax
  WCHAR *v21; // rax
  unsigned int v22; // r8d
  char *v23; // rcx
  char *v24; // rdx
  wchar_t *v25; // rax
  size_t v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rsi
  wchar_t *v30; // r10
  WCHAR *v31; // rcx
  size_t v32; // r8
  WCHAR v33; // ax
  WCHAR *v34; // rax
  char *v35; // rcx
  char *v36; // rdx
  char v37; // al
  STRSAFE_LPWSTR v38; // r15
  __int64 v39; // rcx
  signed __int64 v40; // r12
  STRSAFE_LPWSTR v41; // rdx
  wchar_t v42; // ax
  STRSAFE_LPWSTR v43; // rax
  int v44; // esi
  size_t v45; // rax
  wchar_t *v46; // rcx
  const WCHAR *v47; // rdx
  STRSAFE_LPWSTR v48; // r12
  signed __int64 v49; // r11
  signed __int64 v50; // rcx
  STRSAFE_LPWSTR v51; // rdx
  __int64 v52; // r8
  wchar_t v53; // ax
  STRSAFE_LPWSTR v54; // rax
  int v55; // edx
  __int64 v56; // rax
  __int64 v57; // r8
  wchar_t *v58; // r9
  signed __int64 v59; // rdx
  signed __int64 v60; // r14
  STRSAFE_LPWSTR v61; // rcx
  wchar_t v62; // ax
  STRSAFE_LPWSTR v63; // rax
  STRSAFE_LPWSTR pszDest[2]; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v65; // [rsp+80h] [rbp-80h] BYREF
  size_t pcchRemaining; // [rsp+88h] [rbp-78h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v69; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v70; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v71; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v72; // [rsp+D8h] [rbp-28h] BYREF
  WCHAR SourceString[40]; // [rsp+F0h] [rbp-10h] BYREF

  pszDest[0] = a5;
  v6 = 0LL;
  v65 = a4;
  ppszDestEnd = 0LL;
  v71 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v69 = 0LL;
  DestinationString = 0LL;
  v70 = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, a2) < 0 || (DestinationString.MaximumLength & 0xFFFEu) < 0x62 )
    return (unsigned int)-1073741773;
  PsGetCurrentServerSiloGlobals();
  Length = DestinationString.Length;
  if ( DestinationString.Length < 8u || *(_QWORD *)L"\\??\\" != *(_QWORD *)DestinationString.Buffer )
  {
    PsGetCurrentServerSiloGlobals();
    if ( (unsigned int)Length < 8 || *(_QWORD *)L"\\\\?\\" != *v12 )
      return (unsigned int)-1073741773;
  }
  for ( i = a2 + 4; *i; ++i )
  {
    if ( *i == 92 )
    {
      if ( (unsigned int)++v7 > 1 )
        return (unsigned int)-1073741773;
      v8 = i;
    }
  }
  v14 = v8 ? v8 - a2 : Length >> 1;
  if ( v14 > 0xFFFFFFFF || (unsigned int)v14 < 0x30 )
    return (unsigned int)-1073741773;
  v17 = SourceString;
  v18 = 39LL;
  for ( j = 39LL; j != 1; --j )
  {
    v20 = *(WCHAR *)((char *)v17 + (char *)&a2[(unsigned int)v14 - 38] - (char *)SourceString);
    if ( !v20 )
      break;
    *v17++ = v20;
  }
  v21 = v17 - 1;
  inited = -2147483643;
  if ( j )
  {
    v21 = v17;
    inited = 0;
  }
  *v21 = 0;
  if ( !j )
  {
    StringExHandleOtherFlagsW(SourceString, 0x4EuLL, 0LL, &ppszDestEnd, &pcchRemaining, 0x800u);
    return inited;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  v72 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       DestinationString.Buffer,
                       DestinationString.Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       &v70,
                       (char *)&v70 + 4,
                       (char *)&v70 + 6,
                       &v72,
                       (char *)&v72 + 2,
                       (char *)&v72 + 4,
                       (char *)&v72 + 6,
                       (char *)&v72 + 8,
                       (char *)&v72 + 10,
                       (char *)&v72 + 12,
                       (char *)&v72 + 14) == -1 )
    return (unsigned int)-1073741773;
  v22 = 0;
  v23 = (char *)&v70 + 9;
  v24 = (char *)&v72 + 2;
  do
  {
    v22 += 8;
    v23 += 8;
    v24 += 16;
  }
  while ( v22 < 8 );
  v25 = wcschr(a2 + 4, 0x5Cu);
  v27 = -1LL;
  if ( v25 )
  {
    v6 = v25 + 1;
    v28 = v25 - a2;
  }
  else
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a2[v28] );
  }
  if ( v28 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (unsigned int)v28 < 0x30 )
    return (unsigned int)-1073741773;
  v29 = (unsigned int)(v28 + 1);
  if ( a3 )
  {
    v29 += 2LL;
    if ( v6 )
    {
      do
        ++v27;
      while ( v6[v27] );
      v29 += v27;
    }
  }
  if ( v29 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v30 = (wchar_t *)v65;
  if ( v65 )
  {
    v31 = (WCHAR *)v65;
    v32 = (char *)&a2[(unsigned int)v28 - 38] - (char *)v65;
    while ( v18 != 1 )
    {
      v33 = *(WCHAR *)((char *)v31 + v32);
      if ( !v33 )
        break;
      *v31 = v33;
      --v18;
      ++v31;
    }
    v34 = v31 - 1;
    inited = -2147483643;
    if ( v18 )
    {
      v34 = v31;
      inited = 0;
    }
    *v34 = 0;
    if ( !v18 )
    {
      StringExHandleOtherFlagsW(v30, 0x4EuLL, v32, &ppszDestEnd, &pcchRemaining, 0x800u);
      return inited;
    }
    inited = RtlInitUnicodeStringEx(&v69, v30);
    if ( (inited & 0x80000000) != 0 )
      return inited;
    v72 = 0LL;
    if ( (unsigned int)ScanHexFormat(
                         v69.Buffer,
                         v69.Length >> 1,
                         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                         &v71,
                         (char *)&v71 + 4,
                         (char *)&v71 + 6,
                         &v72,
                         (char *)&v72 + 2,
                         (char *)&v72 + 4,
                         (char *)&v72 + 6,
                         (char *)&v72 + 8,
                         (char *)&v72 + 10,
                         (char *)&v72 + 12,
                         (char *)&v72 + 14) == -1 )
      return (unsigned int)-1073741811;
    v35 = (char *)&v71 + 9;
    LODWORD(v26) = 0;
    v36 = (char *)&v72 + 2;
    do
    {
      v26 = (unsigned int)(v26 + 8);
      *(v35 - 1) = *(v36 - 2);
      v35 += 8;
      v37 = *v36;
      v36 += 16;
      *(v35 - 8) = v37;
      *(v35 - 7) = *(v36 - 14);
      *(v35 - 6) = *(v36 - 12);
      *(v35 - 5) = *(v36 - 10);
      *(v35 - 4) = *(v36 - 8);
      *(v35 - 3) = *(v36 - 6);
      *(v35 - 2) = *(v36 - 4);
    }
    while ( (unsigned int)v26 < 8 );
  }
  if ( (unsigned int)v29 > a6 )
    return (unsigned int)-1073741789;
  v38 = pszDest[0];
  if ( (unsigned __int64)a6 - 1 > 0x7FFFFFFE )
  {
    v44 = -1073741811;
    inited = -1073741811;
    if ( a6 )
    {
      *pszDest[0] = 0;
      return inited;
    }
    goto LABEL_71;
  }
  v65 = pszDest[0];
  pszDest[0] = (STRSAFE_LPWSTR)a6;
  if ( (unsigned int)v28 >= 0x7FFFFFFFuLL )
  {
    v44 = -1073741811;
    *v38 = 0;
  }
  else
  {
    v39 = a6;
    v40 = (char *)a2 - (char *)v38;
    v41 = v38;
    v26 = 0LL;
    do
    {
      if ( !((unsigned int)v28 - (unsigned __int64)a6 + v39) )
        break;
      v42 = *(STRSAFE_LPWSTR)((char *)v41 + v40);
      if ( !v42 )
        break;
      *v41 = v42;
      ++v26;
      ++v41;
      --v39;
    }
    while ( v39 );
    v43 = v41 - 1;
    v44 = -2147483643;
    if ( v39 )
    {
      v43 = v41;
      v44 = 0;
    }
    *v43 = 0;
    v45 = v26 - 1;
    if ( v39 )
      v45 = v26;
    v46 = (wchar_t *)(a6 - v45);
    pszDest[0] = v46;
    v47 = &v38[v45];
    v65 = v47;
    if ( v44 >= 0 )
      goto LABEL_66;
  }
  StringExHandleOtherFlagsW(v38, 2LL * a6, v26, (STRSAFE_LPWSTR *)&v65, (size_t *)pszDest, 0x800u);
  if ( v44 != -2147483643 )
  {
LABEL_71:
    v49 = (signed __int64)ppszDestEnd;
    v48 = ppszDestEnd;
    goto LABEL_72;
  }
  v47 = v65;
  v46 = pszDest[0];
LABEL_66:
  v48 = (STRSAFE_LPWSTR)v47;
  v49 = (signed __int64)v46;
LABEL_72:
  inited = v44;
  if ( v44 >= 0 )
  {
    *(_QWORD *)v38 = 0x23003F00230023LL;
    if ( a3 )
    {
      if ( (unsigned __int64)(v49 - 1) > 0x7FFFFFFE )
      {
        v55 = -1073741811;
        inited = -1073741811;
        if ( v49 )
        {
          *v48 = 0;
          return inited;
        }
      }
      else
      {
        v50 = v49;
        v51 = v48;
        v52 = 0LL;
        do
        {
          if ( !(2147483646 - v49 + v50) )
            break;
          v53 = *(STRSAFE_LPWSTR)((char *)v51 + (char *)L"\\#" - (char *)v48);
          if ( !v53 )
            break;
          *v51 = v53;
          ++v52;
          ++v51;
          --v50;
        }
        while ( v50 );
        v54 = v51 - 1;
        if ( v50 )
          v54 = v51;
        v55 = -2147483643;
        if ( v50 )
          v55 = 0;
        *v54 = 0;
        v56 = v52 - 1;
        if ( v50 )
          v56 = v52;
        v57 = v49 - v56;
        v58 = &v48[v56];
        if ( !v50 && (v49 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v58 = v48;
          *v48 = 0;
          v57 = v49 & 0x7FFFFFFFFFFFFFFFLL;
        }
        v48 = v58;
        v49 = v57;
      }
      inited = v55;
      if ( v55 >= 0 && v6 )
      {
        if ( (unsigned __int64)(v49 - 1) > 0x7FFFFFFE )
        {
          inited = -1073741811;
          if ( v49 )
            *v48 = 0;
        }
        else
        {
          v59 = v49;
          v60 = (char *)v6 - (char *)v48;
          v61 = v48;
          do
          {
            if ( !(2147483646 - v49 + v59) )
              break;
            v62 = *(STRSAFE_LPWSTR)((char *)v61 + v60);
            if ( !v62 )
              break;
            *v61++ = v62;
            --v59;
          }
          while ( v59 );
          v63 = v61 - 1;
          inited = -2147483643;
          if ( v59 )
          {
            v63 = v61;
            inited = 0;
          }
          *v63 = 0;
          if ( !v59 && (v49 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
            *v48 = 0;
        }
      }
    }
  }
  return inited;
}
