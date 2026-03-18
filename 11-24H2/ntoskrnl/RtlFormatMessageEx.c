/*
 * XREFs of RtlFormatMessageEx @ 0x140A6F178
 * Callers:
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x14077EE80 (RtlFormatMessage.c)
 *     PiGetDeviceRegProperty @ 0x1408BD05C (PiGetDeviceRegProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140424CB0 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyW @ 0x14043FE9C (RtlStringCchCopyW.c)
 *     RtlStringCbCopyExW @ 0x14044D8AC (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        NTSTRSAFE_PWSTR a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 *v9; // r11
  unsigned int v10; // r12d
  char v12; // r10
  NTSTRSAFE_PWSTR v13; // r8
  NTSTRSAFE_PWSTR v14; // rbx
  unsigned int v15; // r9d
  signed int v16; // r14d
  unsigned int v17; // esi
  NTSTRSAFE_PWSTR v18; // r13
  __int16 v19; // ax
  bool v20; // zf
  NTSTRSAFE_PWSTR v21; // rdx
  _DWORD *v22; // rcx
  _WORD *v24; // rbx
  int v25; // ecx
  NTSTRSAFE_PWSTR v26; // rdx
  unsigned int v27; // esi
  unsigned int v28; // edx
  __int16 v29; // ax
  unsigned int v30; // edx
  unsigned int v31; // r15d
  __int64 v32; // rsi
  __int64 *v33; // r9
  wchar_t *v34; // rcx
  char v35; // r8
  wchar_t *v36; // rdi
  wchar_t *v37; // rax
  wchar_t v38; // dx
  unsigned int v39; // eax
  int v40; // ecx
  NTSTATUS v41; // eax
  wchar_t *v42; // r9
  __int16 v43; // ax
  unsigned int v44; // eax
  int v45; // ecx
  const wchar_t *v46; // r8
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // r15d
  unsigned int v50; // r8d
  __int64 v51; // rax
  __int64 *v52; // rcx
  wchar_t *v53; // r10
  __int64 *v54; // r8
  __int64 v55; // rax
  __int64 *v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // r15d
  __int64 *v59; // rcx
  __int64 v60; // rax
  _WORD *v61; // rbx
  NTSTRSAFE_PWSTR v62; // rcx
  __int16 v63; // ax
  __int64 v64; // rax
  __int64 v65; // rbx
  _WORD *v66; // r13
  _WORD *v67; // rbx
  __int64 v68; // [rsp+38h] [rbp-D0h]
  unsigned int v71; // [rsp+5Ch] [rbp-ACh]
  unsigned int v72; // [rsp+60h] [rbp-A8h]
  __int64 v73; // [rsp+68h] [rbp-A0h]
  unsigned int v74; // [rsp+70h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v77; // [rsp+80h] [rbp-88h] BYREF
  int v78; // [rsp+88h] [rbp-80h]
  int v79; // [rsp+8Ch] [rbp-7Ch]
  NTSTRSAFE_PWSTR v80; // [rsp+90h] [rbp-78h]
  __int64 v81; // [rsp+98h] [rbp-70h]
  NTSTRSAFE_PWSTR v82; // [rsp+A0h] [rbp-68h]
  __int64 v83; // [rsp+A8h] [rbp-60h]
  _QWORD v84[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v86[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  wchar_t v87[9]; // [rsp+736h] [rbp+62Eh] BYREF

  v9 = a6;
  v10 = 0;
  v12 = a3;
  v13 = a7;
  v83 = a9;
  v14 = a7;
  v15 = a2;
  v73 = (__int64)a6;
  v80 = a7;
  ppszDestEnd = 0LL;
  v77 = 0LL;
  v71 = 0;
  v16 = a8 >> 1;
  v78 = 37;
  v81 = 8LL;
  v79 = 32;
LABEL_2:
  v17 = 0;
  v72 = 0;
LABEL_3:
  v18 = 0LL;
  while ( 1 )
  {
    v19 = *a1;
    if ( !*a1 )
      break;
    ++a1;
    if ( v19 != (_WORD)v78 )
    {
      if ( v19 == 13 )
      {
        if ( *a1 == 10 )
          goto LABEL_117;
      }
      else
      {
        if ( v19 != 10 )
        {
LABEL_8:
          if ( --v16 < 0 )
            return 2147483653LL;
          v20 = v19 == (__int16)v79;
          *v14 = v19;
          if ( v20 )
            v18 = v14;
          ++v14;
          ++v17;
          goto LABEL_12;
        }
        if ( *a1 == 13 )
LABEL_117:
          ++a1;
      }
      if ( !v15 )
      {
        v16 -= 2;
        if ( v16 >= 0 )
        {
          *v14 = 13;
          v24 = v14 + 1;
          *v24 = 10;
          v14 = v24 + 1;
          goto LABEL_2;
        }
        return 2147483653LL;
      }
      v18 = v14;
      v19 = 32;
      goto LABEL_8;
    }
    v25 = (unsigned __int16)*a1;
    v26 = v14;
    v82 = v14;
    if ( (unsigned __int16)(v25 - 49) <= (unsigned __int16)v81 )
    {
      ++a1;
      v27 = v25 - 48;
      v28 = (unsigned __int16)*a1;
      v29 = v28;
      if ( (unsigned __int16)v28 >= 0x30u && v28 <= 0x39 )
      {
        ++a1;
        v27 = v28 + 2 * (5 * v27 - 24);
        v30 = (unsigned __int16)*a1;
        v29 = v30;
        if ( (unsigned __int16)v30 >= 0x30u && v30 <= 0x39 )
        {
          ++a1;
          v27 = v30 + 2 * (5 * v27 - 24);
          v29 = *a1;
          if ( (unsigned __int16)*a1 >= 0x30u && (unsigned __int16)*a1 <= 0x39u )
            return 3221225485LL;
        }
      }
      v31 = v27;
      v74 = 0;
      v32 = v27 - 1;
      if ( v29 == 33 )
      {
        v33 = 0LL;
        v34 = v86;
        v35 = 0;
        v36 = (wchar_t *)(a1 + 1);
        pszDest = 37;
        v37 = v86;
        while ( 1 )
        {
          v38 = *v36;
          ppszDestEnd = v34;
          if ( v38 == 33 )
            break;
          if ( !v38 )
            return 3221225485LL;
          if ( v37 >= v87 )
            return 3221225485LL;
          if ( v38 == 42 )
          {
            v39 = v10++;
            v74 = v10;
            if ( v39 > 1 )
              return 3221225485LL;
          }
          *v34 = v38;
          ++v36;
          v37 = ++v34;
          v33 = 0LL;
        }
        a1 = (__int16 *)(v36 + 1);
        *v34 = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        v34 = ppszDestEnd;
        v35 = 1;
        v9 = (__int64 *)v73;
        v33 = 0LL;
        v12 = a3;
      }
      if ( v12 )
      {
        if ( v35 == 1 )
        {
          v10 = 0;
        }
        else
        {
          v40 = pszDest - 37;
          if ( pszDest == 37 && (v40 = v86[0] - 115, v86[0] == 115) )
          {
            v10 = 0;
            v40 = v86[1];
          }
          else
          {
            v10 = 0;
          }
          if ( v40 )
          {
            LODWORD(v68) = v31;
            v41 = RtlStringCchPrintfExW(v14, v16, &v77, 0LL, 0, L"%%%u!%s!", v68, v86);
            goto LABEL_88;
          }
        }
        LODWORD(v68) = v31;
        v41 = RtlStringCchPrintfExW(v14, v16, &v77, 0LL, 0, L"%%%u", v68);
LABEL_88:
        if ( v41 < 0 )
          return 2147483653LL;
        v60 = v77 - v14;
        v16 -= v60;
        if ( v16 < 0 )
          return 2147483653LL;
        v17 = v72;
        v26 = v82;
        v9 = (__int64 *)v73;
        v13 = v80;
        v15 = a2;
        v12 = a3;
        v14 += (int)v60;
        goto LABEL_115;
      }
      if ( !v9 || v10 + (unsigned int)v32 >= 0xC8 )
        return 3221225485LL;
      if ( a4 )
      {
        v42 = v34 - 1;
        v43 = *(v34 - 1);
        switch ( v43 )
        {
          case 'c':
            v44 = *(v34 - 2);
            LOWORD(v44) = v44 - 104;
            if ( (unsigned __int16)v44 > 0xFu || (v45 = 32785, !_bittest(&v45, v44)) )
            {
              v46 = L"hc";
              goto LABEL_62;
            }
            break;
          case 's':
            v47 = *(v34 - 2);
            LOWORD(v47) = v47 - 104;
            if ( (unsigned __int16)v47 > 0xFu || (v48 = 32785, !_bittest(&v48, v47)) )
            {
              v46 = L"hs";
LABEL_62:
              RtlStringCchCopyW(v42, 3uLL, v46);
            }
            break;
          case 'S':
            *v42 = 115;
            break;
          case 'C':
            *v42 = 99;
            break;
        }
        v33 = 0LL;
      }
      v49 = v71;
      if ( (unsigned int)v32 >= v71 )
      {
        do
        {
          v50 = v49 + 1;
          if ( a5 )
          {
            v51 = *v9++;
          }
          else
          {
            v52 = (__int64 *)*v9;
            *v9 += 8LL;
            v51 = *v52;
          }
          v84[v49++] = v51;
        }
        while ( v50 <= (unsigned int)v32 );
        v10 = v74;
        v73 = (__int64)v9;
        v71 = v50;
      }
      v53 = (wchar_t *)v84[v32];
      ppszDestEnd = v53;
      v54 = 0LL;
      if ( !v10 )
        goto LABEL_86;
      if ( a5 )
      {
        v33 = (__int64 *)*v9;
        v55 = v49++;
        v71 = v49;
        v84[v55] = *v9++;
        v73 = (__int64)v9;
      }
      else
      {
        v56 = (__int64 *)*v9;
        *v9 += 8LL;
        v33 = (__int64 *)*v56;
      }
      if ( v10 > 1 )
      {
        v57 = v49;
        v10 = 0;
        v58 = v49 + 1;
        v71 = v58;
        if ( a5 )
        {
          v54 = (__int64 *)*v9;
          v73 = (__int64)(v9 + 1);
          v84[v57] = *v9;
        }
        else
        {
          v59 = (__int64 *)*v9;
          v71 = v58;
          *v9 += 8LL;
          v54 = (__int64 *)*v59;
          v84[v57] = *v59;
        }
      }
      else
      {
LABEL_86:
        v10 = 0;
      }
      v41 = RtlStringCchPrintfExW(v14, v16, &v77, 0LL, 0, &pszDest, v53, v33, v54);
      goto LABEL_88;
    }
    if ( (_WORD)v25 == 48 )
      break;
    if ( !(_WORD)v25 )
      return 3221225485LL;
    switch ( v25 )
    {
      case 'r':
        if ( --v16 < 0 )
          return 2147483653LL;
        *v14++ = 13;
        ++a1;
LABEL_96:
        v18 = 0LL;
        v17 = 0;
        goto LABEL_12;
      case 'n':
        v16 -= 2;
        if ( v16 < 0 )
          return 2147483653LL;
        *v14 = 13;
        v61 = v14 + 1;
        *v61 = 10;
        v14 = v61 + 1;
        ++a1;
        goto LABEL_96;
      case 't':
        if ( --v16 < 0 )
          return 2147483653LL;
        if ( (v17 & 7) != 0 )
          v17 = (v17 + 7) & 0xFFFFFFF8;
        else
          v17 += 8;
        v18 = v14;
        *v14 = 9;
        break;
      case 'b':
        if ( --v16 < 0 )
          return 2147483653LL;
        v18 = v14;
        *v14 = 32;
        break;
      default:
        if ( v12 )
        {
          v16 -= 2;
          if ( v16 < 0 )
            return 2147483653LL;
          *v14++ = 37;
          *v14 = *a1;
        }
        else
        {
          if ( --v16 < 0 )
            return 2147483653LL;
          *v14 = v25;
        }
        break;
    }
    ++v14;
    ++a1;
LABEL_115:
    if ( !v26 )
      goto LABEL_96;
    v17 += v14 - v26;
LABEL_12:
    v72 = v17;
    if ( v15 - 1 <= 0xFFFFFFFD && v17 >= v15 )
    {
      if ( v18 )
      {
        v21 = v18;
        do
        {
          if ( *v21 != 32 && *v21 != 9 )
            break;
          ++v21;
        }
        while ( v21 != v14 );
        v10 = 0;
        if ( v18 > v13 )
        {
          do
          {
            v62 = v18 - 1;
            v63 = *(v18 - 1);
            if ( v63 != 32 && v63 != 9 )
              break;
            --v18;
          }
          while ( v62 > v13 );
        }
        v64 = v21 - v18;
        if ( (_DWORD)v64 == 1 )
        {
          if ( --v16 >= 0 )
            goto LABEL_132;
          return 2147483653LL;
        }
        if ( (unsigned int)v64 > 2 )
          v16 = v64 + v16 - 2;
LABEL_132:
        v65 = v14 - v21;
        v17 = v65;
        v72 = v65;
        memmove(v18 + 2, v21, 2 * v65);
        v15 = a2;
        *v18 = 13;
        v66 = v18 + 1;
        *v66 = 10;
        v67 = &v66[(unsigned int)v65];
      }
      else
      {
        v16 -= 2;
        if ( v16 < 0 )
          return 2147483653LL;
        *v14 = 13;
        v17 = 0;
        v67 = v14 + 1;
        v72 = 0;
        *v67 = 10;
      }
      v9 = (__int64 *)v73;
      v14 = v67 + 1;
      v13 = v80;
      v12 = a3;
      goto LABEL_3;
    }
  }
  if ( v16 < 1 )
    return 2147483653LL;
  v22 = (_DWORD *)v83;
  *v14 = 0;
  if ( v22 )
    *v22 = 2 * (((char *)v14 - (char *)v13 + 2) >> 1);
  return 0LL;
}
