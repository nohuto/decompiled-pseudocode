/*
 * XREFs of RtlFormatMessageEx @ 0x140A685FC
 * Callers:
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x14077EDB0 (RtlFormatMessage.c)
 *     PiGetDeviceRegProperty @ 0x1408BA9AC (PiGetDeviceRegProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCbCopyExW @ 0x1404447AC (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  va_list *v10; // r11
  unsigned int v11; // r12d
  BOOLEAN v13; // r10
  PWSTR v14; // r8
  PWSTR v15; // rbx
  ULONG v16; // r9d
  signed int v17; // r14d
  unsigned int v18; // esi
  PWSTR v19; // r13
  WCHAR v20; // ax
  bool v21; // zf
  PWSTR v22; // rdx
  PULONG v23; // rcx
  _WORD *v25; // rbx
  int v26; // ecx
  PWSTR v27; // rdx
  unsigned int v28; // esi
  unsigned int v29; // edx
  WCHAR v30; // ax
  unsigned int v31; // edx
  unsigned int v32; // r15d
  __int64 v33; // rsi
  va_list v34; // r9
  wchar_t *v35; // rcx
  char v36; // r8
  PWSTR v37; // rdi
  wchar_t *v38; // rax
  WCHAR v39; // dx
  unsigned int v40; // eax
  int v41; // ecx
  NTSTATUS v42; // eax
  wchar_t *v43; // r9
  __int16 v44; // ax
  unsigned int v45; // eax
  int v46; // ecx
  const wchar_t *v47; // r8
  unsigned int v48; // eax
  int v49; // ecx
  unsigned int v50; // r15d
  unsigned int v51; // r8d
  __int64 v52; // rax
  _QWORD *v53; // rcx
  wchar_t *v54; // r10
  va_list v55; // r8
  __int64 v56; // rax
  va_list *v57; // rcx
  __int64 v58; // rdx
  unsigned int v59; // r15d
  va_list *v60; // rcx
  __int64 v61; // rax
  _WORD *v62; // rbx
  PWSTR v63; // rcx
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // rbx
  _WORD *v67; // r13
  _WORD *v68; // rbx
  __int64 v69; // [rsp+38h] [rbp-D0h]
  unsigned int v72; // [rsp+5Ch] [rbp-ACh]
  unsigned int v73; // [rsp+60h] [rbp-A8h]
  va_list *v74; // [rsp+68h] [rbp-A0h]
  unsigned int v75; // [rsp+70h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v78; // [rsp+80h] [rbp-88h] BYREF
  int v79; // [rsp+88h] [rbp-80h]
  int v80; // [rsp+8Ch] [rbp-7Ch]
  PWSTR v81; // [rsp+90h] [rbp-78h]
  __int64 v82; // [rsp+98h] [rbp-70h]
  PWSTR v83; // [rsp+A0h] [rbp-68h]
  PULONG v84; // [rsp+A8h] [rbp-60h]
  _QWORD v85[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v87[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  wchar_t v88[9]; // [rsp+736h] [rbp+62Eh] BYREF

  v10 = Arguments;
  v11 = 0;
  v13 = IgnoreInserts;
  v14 = Buffer;
  v84 = ReturnLength;
  v15 = Buffer;
  v16 = MaximumWidth;
  v74 = Arguments;
  v81 = Buffer;
  ppszDestEnd = 0LL;
  v78 = 0LL;
  v72 = 0;
  v17 = Length >> 1;
  v79 = 37;
  v82 = 8LL;
  v80 = 32;
LABEL_2:
  v18 = 0;
  v73 = 0;
LABEL_3:
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *MessageFormat;
    if ( !*MessageFormat )
      break;
    ++MessageFormat;
    if ( v20 != (_WORD)v79 )
    {
      if ( v20 == 13 )
      {
        if ( *MessageFormat == 10 )
          goto LABEL_117;
      }
      else
      {
        if ( v20 != 10 )
        {
LABEL_8:
          if ( --v17 < 0 )
            return -2147483643;
          v21 = v20 == (WCHAR)v80;
          *v15 = v20;
          if ( v21 )
            v19 = v15;
          ++v15;
          ++v18;
          goto LABEL_12;
        }
        if ( *MessageFormat == 13 )
LABEL_117:
          ++MessageFormat;
      }
      if ( !v16 )
      {
        v17 -= 2;
        if ( v17 >= 0 )
        {
          *v15 = 13;
          v25 = v15 + 1;
          *v25 = 10;
          v15 = v25 + 1;
          goto LABEL_2;
        }
        return -2147483643;
      }
      v19 = v15;
      v20 = 32;
      goto LABEL_8;
    }
    v26 = *MessageFormat;
    v27 = v15;
    v83 = v15;
    if ( (unsigned __int16)(v26 - 49) <= (unsigned __int16)v82 )
    {
      ++MessageFormat;
      v28 = v26 - 48;
      v29 = *MessageFormat;
      v30 = v29;
      if ( (unsigned __int16)v29 >= 0x30u && v29 <= 0x39 )
      {
        ++MessageFormat;
        v28 = v29 + 2 * (5 * v28 - 24);
        v31 = *MessageFormat;
        v30 = v31;
        if ( (unsigned __int16)v31 >= 0x30u && v31 <= 0x39 )
        {
          ++MessageFormat;
          v28 = v31 + 2 * (5 * v28 - 24);
          v30 = *MessageFormat;
          if ( *MessageFormat >= 0x30u && *MessageFormat <= 0x39u )
            return -1073741811;
        }
      }
      v32 = v28;
      v75 = 0;
      v33 = v28 - 1;
      if ( v30 == 33 )
      {
        v34 = 0LL;
        v35 = v87;
        v36 = 0;
        v37 = MessageFormat + 1;
        pszDest = 37;
        v38 = v87;
        while ( 1 )
        {
          v39 = *v37;
          ppszDestEnd = v35;
          if ( v39 == 33 )
            break;
          if ( !v39 )
            return -1073741811;
          if ( v38 >= v88 )
            return -1073741811;
          if ( v39 == 42 )
          {
            v40 = v11++;
            v75 = v11;
            if ( v40 > 1 )
              return -1073741811;
          }
          *v35 = v39;
          ++v37;
          v38 = ++v35;
          v34 = 0LL;
        }
        MessageFormat = v37 + 1;
        *v35 = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        v35 = ppszDestEnd;
        v36 = 1;
        v10 = v74;
        v34 = 0LL;
        v13 = IgnoreInserts;
      }
      if ( v13 )
      {
        if ( v36 == 1 )
        {
          v11 = 0;
        }
        else
        {
          v41 = pszDest - 37;
          if ( pszDest == 37 && (v41 = v87[0] - 115, v87[0] == 115) )
          {
            v11 = 0;
            v41 = v87[1];
          }
          else
          {
            v11 = 0;
          }
          if ( v41 )
          {
            LODWORD(v69) = v32;
            v42 = RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, L"%%%u!%s!", v69, v87);
            goto LABEL_88;
          }
        }
        LODWORD(v69) = v32;
        v42 = RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, L"%%%u", v69);
LABEL_88:
        if ( v42 < 0 )
          return -2147483643;
        v61 = v78 - v15;
        v17 -= v61;
        if ( v17 < 0 )
          return -2147483643;
        v18 = v73;
        v27 = v83;
        v10 = v74;
        v14 = v81;
        v16 = MaximumWidth;
        v13 = IgnoreInserts;
        v15 += (int)v61;
        goto LABEL_115;
      }
      if ( !v10 || v11 + (unsigned int)v33 >= 0xC8 )
        return -1073741811;
      if ( ArgumentsAreAnsi )
      {
        v43 = v35 - 1;
        v44 = *(v35 - 1);
        switch ( v44 )
        {
          case 'c':
            v45 = *(v35 - 2);
            LOWORD(v45) = v45 - 104;
            if ( (unsigned __int16)v45 > 0xFu || (v46 = 32785, !_bittest(&v46, v45)) )
            {
              v47 = L"hc";
              goto LABEL_62;
            }
            break;
          case 's':
            v48 = *(v35 - 2);
            LOWORD(v48) = v48 - 104;
            if ( (unsigned __int16)v48 > 0xFu || (v49 = 32785, !_bittest(&v49, v48)) )
            {
              v47 = L"hs";
LABEL_62:
              RtlStringCchCopyW(v43, 3uLL, v47);
            }
            break;
          case 'S':
            *v43 = 115;
            break;
          case 'C':
            *v43 = 99;
            break;
        }
        v34 = 0LL;
      }
      v50 = v72;
      if ( (unsigned int)v33 >= v72 )
      {
        do
        {
          v51 = v50 + 1;
          if ( ArgumentsAreAnArray )
          {
            v52 = (__int64)*v10++;
          }
          else
          {
            v53 = *v10;
            *v10 += 8;
            v52 = *v53;
          }
          v85[v50++] = v52;
        }
        while ( v51 <= (unsigned int)v33 );
        v11 = v75;
        v74 = v10;
        v72 = v51;
      }
      v54 = (wchar_t *)v85[v33];
      ppszDestEnd = v54;
      v55 = 0LL;
      if ( !v11 )
        goto LABEL_86;
      if ( ArgumentsAreAnArray )
      {
        v34 = *v10;
        v56 = v50++;
        v72 = v50;
        v85[v56] = *v10++;
        v74 = v10;
      }
      else
      {
        v57 = (va_list *)*v10;
        *v10 += 8;
        v34 = *v57;
      }
      if ( v11 > 1 )
      {
        v58 = v50;
        v11 = 0;
        v59 = v50 + 1;
        v72 = v59;
        if ( ArgumentsAreAnArray )
        {
          v55 = *v10;
          v74 = v10 + 1;
          v85[v58] = *v10;
        }
        else
        {
          v60 = (va_list *)*v10;
          v72 = v59;
          *v10 += 8;
          v55 = *v60;
          v85[v58] = *v60;
        }
      }
      else
      {
LABEL_86:
        v11 = 0;
      }
      v42 = RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, &pszDest, v54, v34, v55);
      goto LABEL_88;
    }
    if ( (_WORD)v26 == 48 )
      break;
    if ( !(_WORD)v26 )
      return -1073741811;
    switch ( v26 )
    {
      case 'r':
        if ( --v17 < 0 )
          return -2147483643;
        *v15++ = 13;
        ++MessageFormat;
LABEL_96:
        v19 = 0LL;
        v18 = 0;
        goto LABEL_12;
      case 'n':
        v17 -= 2;
        if ( v17 < 0 )
          return -2147483643;
        *v15 = 13;
        v62 = v15 + 1;
        *v62 = 10;
        v15 = v62 + 1;
        ++MessageFormat;
        goto LABEL_96;
      case 't':
        if ( --v17 < 0 )
          return -2147483643;
        if ( (v18 & 7) != 0 )
          v18 = (v18 + 7) & 0xFFFFFFF8;
        else
          v18 += 8;
        v19 = v15;
        *v15 = 9;
        break;
      case 'b':
        if ( --v17 < 0 )
          return -2147483643;
        v19 = v15;
        *v15 = 32;
        break;
      default:
        if ( v13 )
        {
          v17 -= 2;
          if ( v17 < 0 )
            return -2147483643;
          *v15++ = 37;
          *v15 = *MessageFormat;
        }
        else
        {
          if ( --v17 < 0 )
            return -2147483643;
          *v15 = v26;
        }
        break;
    }
    ++v15;
    ++MessageFormat;
LABEL_115:
    if ( !v27 )
      goto LABEL_96;
    v18 += v15 - v27;
LABEL_12:
    v73 = v18;
    if ( v16 - 1 <= 0xFFFFFFFD && v18 >= v16 )
    {
      if ( v19 )
      {
        v22 = v19;
        do
        {
          if ( *v22 != 32 && *v22 != 9 )
            break;
          ++v22;
        }
        while ( v22 != v15 );
        v11 = 0;
        if ( v19 > v14 )
        {
          do
          {
            v63 = v19 - 1;
            v64 = *(v19 - 1);
            if ( v64 != 32 && v64 != 9 )
              break;
            --v19;
          }
          while ( v63 > v14 );
        }
        v65 = v22 - v19;
        if ( (_DWORD)v65 == 1 )
        {
          if ( --v17 >= 0 )
            goto LABEL_132;
          return -2147483643;
        }
        if ( (unsigned int)v65 > 2 )
          v17 = v65 + v17 - 2;
LABEL_132:
        v66 = v15 - v22;
        v18 = v66;
        v73 = v66;
        memmove(v19 + 2, v22, 2 * v66);
        v16 = MaximumWidth;
        *v19 = 13;
        v67 = v19 + 1;
        *v67 = 10;
        v68 = &v67[(unsigned int)v66];
      }
      else
      {
        v17 -= 2;
        if ( v17 < 0 )
          return -2147483643;
        *v15 = 13;
        v18 = 0;
        v68 = v15 + 1;
        v73 = 0;
        *v68 = 10;
      }
      v10 = v74;
      v15 = v68 + 1;
      v14 = v81;
      v13 = IgnoreInserts;
      goto LABEL_3;
    }
  }
  if ( v17 < 1 )
    return -2147483643;
  v23 = v84;
  *v15 = 0;
  if ( v23 )
    *v23 = 2 * (((char *)v15 - (char *)v14 + 2) >> 1);
  return 0;
}
