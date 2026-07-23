/*
 * XREFs of _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140818C3C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1408E1294 (PiDqGetRelativeObjectRegPath.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCatExW @ 0x140476350 (RtlStringCchCatExW.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     ScanHexFormat @ 0x1408C8740 (ScanHexFormat.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeyPath(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        int a4,
        __int64 a5,
        wchar_t *a6,
        unsigned int cchDest,
        size_t a8)
{
  char v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  _WORD *v15; // rbx
  int v16; // edi
  unsigned __int64 Length; // r8
  _QWORD *v18; // rdx
  _WORD *i; // rcx
  NTSTATUS inited; // ebx
  wchar_t *v22; // rsi
  unsigned __int64 v23; // rbx
  WCHAR *v24; // rcx
  __int64 v25; // r15
  __int64 j; // r8
  WCHAR v27; // ax
  WCHAR *v28; // rax
  unsigned int v29; // r8d
  char *v30; // rcx
  char *v31; // rdx
  char v32; // al
  wchar_t *v33; // rax
  wchar_t *v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  WCHAR *v39; // rcx
  size_t v40; // r8
  WCHAR v41; // ax
  WCHAR *v42; // rax
  size_t v43; // r8
  __int64 v44; // r9
  wchar_t *v45; // rdi
  unsigned __int64 v46; // r14
  __int64 v47; // rcx
  signed __int64 v48; // r13
  wchar_t *v49; // rdx
  wchar_t v50; // ax
  wchar_t *v51; // rax
  size_t v52; // rax
  size_t v53; // rcx
  wchar_t *v54; // rdx
  wchar_t *v55; // r15
  size_t v56; // r14
  int v57; // edx
  __int64 v58; // rax
  int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // r9
  unsigned __int64 v62; // rcx
  wchar_t *v63; // r15
  NTSTATUS v64; // eax
  NTSTRSAFE_PWSTR *v65; // r9
  __int64 v66; // r8
  size_t v67; // rcx
  wchar_t *v68; // rdx
  wchar_t v69; // ax
  wchar_t *v70; // rax
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // r8
  wchar_t *v74; // r9
  size_t v75; // rdx
  signed __int64 v76; // rsi
  wchar_t *v77; // rcx
  wchar_t v78; // ax
  wchar_t *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  size_t *pcchRemaining; // [rsp+20h] [rbp-E0h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-E0h]
  char *dwFlags; // [rsp+28h] [rbp-D8h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-D8h]
  wchar_t *P; // [rsp+70h] [rbp-90h]
  char v87; // [rsp+78h] [rbp-88h]
  int v89; // [rsp+84h] [rbp-7Ch]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  size_t v91; // [rsp+98h] [rbp-68h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+A0h] [rbp-60h]
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+A8h] [rbp-58h] BYREF
  int v94; // [rsp+B0h] [rbp-50h]
  size_t v95; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t *v96; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v98; // [rsp+D8h] [rbp-28h] BYREF
  GUID Guid; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v100; // [rsp+F8h] [rbp-8h] BYREF
  WCHAR v101[40]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SourceString[40]; // [rsp+160h] [rbp+60h] BYREF

  pszDest = a6;
  v95 = a8;
  v94 = a3;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    return 3221225485LL;
  v89 = (unsigned __int8)a3;
  if ( (((unsigned __int8)a3 - 48) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned __int8)a3 != 49 )
      return 3221225485LL;
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  v10 = -1LL;
  v11 = -1LL;
  v87 = v9;
  do
    v12 = a2[++v11] == 0;
  while ( !v12 );
  v13 = 2 * v11 + 6;
  if ( v13 > 0xFFFFFFFF )
    return 3221225621LL;
  v14 = v13;
  P = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v13, 0x52504E50u);
  if ( P )
  {
    v91 = v14 >> 1;
    v96 = 0LL;
    v15 = 0LL;
    Guid = 0LL;
    v16 = 0;
    GuidString = 0LL;
    DestinationString = 0LL;
    v98 = 0LL;
    if ( RtlInitUnicodeStringEx(&DestinationString, a2) < 0 || (DestinationString.MaximumLength & 0xFFFEu) < 0x62 )
      goto LABEL_26;
    PsGetCurrentServerSiloGlobals();
    Length = DestinationString.Length;
    if ( DestinationString.Length < 8u || *(_QWORD *)L"\\??\\" != *(_QWORD *)DestinationString.Buffer )
    {
      PsGetCurrentServerSiloGlobals();
      if ( (unsigned int)Length < 8 || *(_QWORD *)L"\\\\?\\" != *v18 )
        goto LABEL_26;
    }
    for ( i = a2 + 4; *i; ++i )
    {
      if ( *i == 92 )
      {
        if ( (unsigned int)++v16 > 1 )
          goto LABEL_26;
        v15 = i;
      }
    }
    v23 = v15 ? v15 - a2 : Length >> 1;
    if ( v23 > 0xFFFFFFFF || (unsigned int)v23 < 0x30 )
    {
LABEL_26:
      v22 = P;
      inited = -1073741773;
      goto LABEL_22;
    }
    v24 = SourceString;
    v25 = 39LL;
    for ( j = 39LL; j != 1; --j )
    {
      v27 = *(WCHAR *)((char *)v24 + (char *)&a2[(unsigned int)v23 - 38] - (char *)SourceString);
      if ( !v27 )
        break;
      *v24++ = v27;
    }
    v28 = v24 - 1;
    inited = -2147483643;
    if ( j )
    {
      v28 = v24;
      inited = 0;
    }
    *v28 = 0;
    if ( !j )
    {
      StringExHandleOtherFlagsW(SourceString, 0x4EuLL, 0LL, &ppszDestEnd, &v95, 0x800u);
      goto LABEL_21;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( inited < 0 )
    {
LABEL_21:
      v22 = P;
LABEL_22:
      ExFreePoolWithTag(v22, 0);
      return (unsigned int)inited;
    }
    dwFlags = (char *)&v98 + 6;
    pcchRemaining = (size_t *)((char *)&v98 + 4);
    v100 = 0LL;
    if ( (unsigned int)ScanHexFormat(
                         DestinationString.Buffer,
                         DestinationString.Length >> 1,
                         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                         &v98) != -1 )
    {
      v29 = 0;
      v30 = (char *)&v98 + 9;
      v31 = (char *)&v100 + 2;
      do
      {
        v29 += 8;
        *(v30 - 1) = *(v31 - 2);
        v30 += 8;
        v32 = *v31;
        v31 += 16;
        *(v30 - 8) = v32;
        *(v30 - 7) = *(v31 - 14);
        *(v30 - 6) = *(v31 - 12);
        *(v30 - 5) = *(v31 - 10);
        *(v30 - 4) = *(v31 - 8);
        *(v30 - 3) = *(v31 - 6);
        *(v30 - 2) = *(v31 - 4);
      }
      while ( v29 < 8 );
      v33 = wcschr(a2 + 4, 0x5Cu);
      if ( v33 )
      {
        v34 = v33 + 1;
        v35 = v33 - a2;
      }
      else
      {
        v34 = 0LL;
        v35 = -1LL;
        do
          ++v35;
        while ( a2[v35] );
      }
      if ( v35 > 0xFFFFFFFF )
        goto LABEL_20;
      if ( (unsigned int)v35 >= 0x30 )
      {
        v36 = (unsigned int)(v35 + 1);
        if ( v9 )
        {
          v36 += 2LL;
          if ( v34 )
          {
            v37 = -1LL;
            do
              ++v37;
            while ( v34[v37] );
            v36 += v37;
          }
        }
        if ( v36 <= 0xFFFFFFFF )
        {
          v38 = (unsigned int)v35;
          v39 = v101;
          v40 = (char *)&a2[v38 - 38] - (char *)v101;
          while ( v25 != 1 )
          {
            v41 = *(WCHAR *)((char *)v39 + v40);
            if ( !v41 )
              break;
            *v39 = v41;
            --v25;
            ++v39;
          }
          v42 = v39 - 1;
          inited = -2147483643;
          if ( v25 )
          {
            v42 = v39;
            inited = 0;
          }
          *v42 = 0;
          if ( !v25 )
          {
            StringExHandleOtherFlagsW(v101, 0x4EuLL, v40, &ppszDestEnd, &v95, 0x800u);
            goto LABEL_21;
          }
          inited = RtlInitUnicodeStringEx(&GuidString, v101);
          if ( inited < 0 || (inited = RtlGUIDFromString(&GuidString, &Guid), inited < 0) )
          {
            v45 = P;
            goto LABEL_82;
          }
          if ( (unsigned int)v36 > (unsigned int)v91 )
          {
LABEL_77:
            inited = -1073741789;
            goto LABEL_21;
          }
          v44 = (unsigned int)v91;
          if ( !(_DWORD)v91 )
            goto LABEL_145;
          v45 = P;
          *(_QWORD *)&DestinationString.Length = P;
          v91 = (unsigned int)v91;
          if ( v38 >= 0x7FFFFFFF )
          {
            inited = -1073741811;
            *P = 0;
          }
          else
          {
            v46 = v38 - (unsigned int)v91;
            v47 = (unsigned int)v91;
            v48 = (char *)a2 - (char *)P;
            v49 = P;
            v43 = 0LL;
            do
            {
              if ( !(v46 + v47) )
                break;
              v50 = *(wchar_t *)((char *)v49 + v48);
              if ( !v50 )
                break;
              *v49 = v50;
              ++v43;
              ++v49;
              --v47;
            }
            while ( v47 );
            v51 = v49 - 1;
            inited = -2147483643;
            if ( v47 )
            {
              v51 = v49;
              inited = 0;
            }
            *v51 = 0;
            v52 = v43 - 1;
            if ( v47 )
              v52 = v43;
            v53 = v44 - v52;
            v91 = v44 - v52;
            v54 = &P[v52];
            *(_QWORD *)&DestinationString.Length = v54;
            if ( inited >= 0 )
              goto LABEL_75;
          }
          StringExHandleOtherFlagsW(P, 2 * v44, v43, (STRSAFE_LPWSTR *)&DestinationString, &v91, 0x800u);
          if ( inited != -2147483643 )
          {
            v56 = (size_t)v96;
            v55 = v96;
            goto LABEL_81;
          }
          v54 = *(wchar_t **)&DestinationString.Length;
          v53 = v91;
LABEL_75:
          v55 = v54;
          v56 = v53;
LABEL_81:
          if ( inited >= 0 )
          {
            *(_QWORD *)P = 0x23003F00230023LL;
            if ( v87 )
            {
              if ( v56 - 1 > 0x7FFFFFFE )
              {
                v71 = -1073741811;
                inited = -1073741811;
                if ( v56 )
                {
                  *v55 = 0;
                  v22 = P;
                  goto LABEL_22;
                }
              }
              else
              {
                v66 = 0LL;
                v67 = v56;
                v68 = v55;
                do
                {
                  if ( !(2147483646 - v56 + v67) )
                    break;
                  v69 = *(wchar_t *)((char *)v68 + (char *)L"\\#" - (char *)v55);
                  if ( !v69 )
                    break;
                  *v68 = v69;
                  ++v66;
                  ++v68;
                  --v67;
                }
                while ( v67 );
                v70 = v68 - 1;
                if ( v67 )
                  v70 = v68;
                v71 = -2147483643;
                if ( v67 )
                  v71 = 0;
                *v70 = 0;
                v72 = v66 - 1;
                if ( v67 )
                  v72 = v66;
                v73 = v56 - v72;
                v74 = &v55[v72];
                if ( !v67 && (v56 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
                {
                  v74 = v55;
                  *v55 = 0;
                  v73 = v56 & 0x7FFFFFFFFFFFFFFFLL;
                }
                v55 = v74;
                v56 = v73;
              }
              inited = v71;
              if ( v71 >= 0 && v34 )
              {
                if ( v56 - 1 > 0x7FFFFFFE )
                {
                  inited = -1073741811;
                  if ( v56 )
                    *v55 = 0;
                }
                else
                {
                  v75 = v56;
                  v76 = (char *)v34 - (char *)v55;
                  v77 = v55;
                  do
                  {
                    if ( !(2147483646 - v56 + v75) )
                      break;
                    v78 = *(wchar_t *)((char *)v77 + v76);
                    if ( !v78 )
                      break;
                    *v77++ = v78;
                    --v75;
                  }
                  while ( v75 );
                  v79 = v77 - 1;
                  inited = -2147483643;
                  if ( v75 )
                  {
                    v79 = v77;
                    inited = 0;
                  }
                  *v79 = 0;
                  if ( !v75 && (v56 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
                    *v55 = 0;
                }
              }
            }
          }
LABEL_82:
          if ( inited < 0 )
            goto LABEL_21;
          v57 = v94 & 0x200;
          if ( (v94 & 0x200) != 0 )
          {
            v59 = a4;
            if ( a4 )
            {
              v61 = 0xFFFFFFFFLL;
              if ( a4 == -1 )
                goto LABEL_145;
              v81 = -1LL;
              do
                ++v81;
              while ( v101[v81] );
              v60 = v81 + 96;
              goto LABEL_88;
            }
            v80 = -1LL;
            do
              ++v80;
            while ( v101[v80] );
            v60 = v80 + 99;
          }
          else
          {
            v58 = -1LL;
            do
              ++v58;
            while ( v101[v58] );
            v59 = a4;
            v60 = v58 + 48;
          }
          v61 = 0xFFFFFFFFLL;
          do
LABEL_88:
            v12 = v45[++v10] == 0;
          while ( !v12 );
          v62 = v60 + v10 + 1;
          if ( v89 == 49 || v89 == 48 )
          {
LABEL_90:
            if ( v62 <= 0xFFFFFFFF )
            {
              inited = 0;
              if ( v95 )
                *(_DWORD *)v95 = v62;
              if ( (unsigned int)v62 <= cchDest )
              {
                v22 = P;
                v63 = pszDest;
                if ( v57 )
                {
                  if ( v59 )
                  {
                    if ( v59 == -1 )
                      goto LABEL_97;
                    v64 = RtlStringCchPrintfExW(pszDest, cchDest, 0LL, 0LL, 0x800u, L"%s\\%04u\\%s\\%s\\%s");
                  }
                  else
                  {
                    v64 = RtlStringCchPrintfExW(pszDest, cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s\\%s");
                  }
                }
                else
                {
                  v64 = RtlStringCchPrintfExW(pszDest, cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s");
                }
                inited = v64;
LABEL_97:
                if ( inited >= 0 && v89 == 50 )
                {
                  inited = RtlStringCchCatExW(
                             v63,
                             cchDest,
                             L"\\",
                             (NTSTRSAFE_PWSTR *)v61,
                             pcchRemaining,
                             (ULONG)dwFlags);
                  if ( inited >= 0 )
                    inited = RtlStringCchCatExW(v63, cchDest, L"Device Parameters", v65, pcchRemaininga, dwFlagsa);
                }
                goto LABEL_22;
              }
              goto LABEL_77;
            }
            goto LABEL_20;
          }
          if ( v89 == 50 )
          {
            v62 += 18LL;
            goto LABEL_90;
          }
LABEL_145:
          inited = -1073741811;
          goto LABEL_21;
        }
LABEL_20:
        inited = -1073741675;
        goto LABEL_21;
      }
    }
    inited = -1073741773;
    goto LABEL_21;
  }
  return 3221225495LL;
}
