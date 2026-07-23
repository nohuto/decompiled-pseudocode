/*
 * XREFs of RtlFormatMessageEx @ 0x1800CD590
 * Callers:
 *     RtlFormatMessage @ 0x180146770 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x18007B880 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  PPARSE_MESSAGE_CONTEXT v10; // r13
  PWSTR v11; // r11
  PWSTR v12; // r10
  signed int v13; // r14d
  PWSTR v14; // rdi
  WCHAR *v15; // rsi
  __int64 v16; // r15
  PWSTR v17; // rbx
  PWSTR v18; // r8
  __int16 v19; // ax
  int v21; // ecx
  PWSTR v22; // r13
  unsigned int v23; // eax
  unsigned int v24; // r9d
  __int16 v25; // cx
  __int64 v26; // r10
  unsigned int v27; // r11d
  __int64 v28; // r9
  unsigned int v29; // r12d
  __int64 v30; // rcx
  wchar_t *p_Format; // rdx
  wchar_t v32; // ax
  wchar_t *v33; // rax
  char v34; // dl
  __int64 v35; // rax
  WCHAR *v36; // r8
  int v37; // eax
  __int64 v38; // rax
  va_list *v39; // r11
  __int64 v40; // rdx
  unsigned int v41; // r8d
  _QWORD *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r10
  va_list v45; // r9
  va_list v46; // r8
  WCHAR *i; // rax
  WCHAR v48; // cx
  unsigned int v49; // eax
  int v50; // ecx
  SIZE_T iwDst; // rcx
  SIZE_T iwDstSpace; // rax
  _WORD *v53; // rdi
  __int16 v54; // ax
  char *v55; // rcx
  BOOLEAN v56; // cl
  __int64 v57; // rax
  unsigned int v58; // r12d
  char *v59; // rdx
  WCHAR *v60; // rdx
  __int64 v61; // rax
  _WORD *v62; // rsi
  _WORD *v63; // rdi
  unsigned int v64; // eax
  int v65; // edx
  __int64 v66; // rdx
  signed __int64 v67; // r8
  __int16 v68; // ax
  unsigned int v69; // eax
  int v70; // edx
  signed __int64 v71; // r8
  __int16 v72; // ax
  char *v73; // rax
  __int16 v74; // ax
  WCHAR *v75; // rcx
  va_list *v76; // rcx
  va_list *v77; // rcx
  unsigned int v78; // eax
  char Args[8]; // [rsp+30h] [rbp-D0h]
  unsigned int v82; // [rsp+54h] [rbp-ACh]
  PWSTR v83; // [rsp+58h] [rbp-A8h]
  ULONG v84; // [rsp+60h] [rbp-A0h]
  wchar_t *v85; // [rsp+68h] [rbp-98h] BYREF
  PWSTR v86; // [rsp+70h] [rbp-90h]
  va_list *v87; // [rsp+78h] [rbp-88h]
  PPARSE_MESSAGE_CONTEXT v88; // [rsp+80h] [rbp-80h]
  PWSTR v89; // [rsp+88h] [rbp-78h]
  PULONG v90; // [rsp+98h] [rbp-68h]
  char v91[8]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Format; // [rsp+6F0h] [rbp+5F0h] BYREF
  _WORD v93[30]; // [rsp+6F2h] [rbp+5F2h] BYREF
  WCHAR v94[9]; // [rsp+72Eh] [rbp+62Eh] BYREF

  v10 = ParseContext;
  v11 = MessageFormat;
  v12 = Buffer;
  v90 = ReturnLength;
  v13 = Length >> 1;
  v84 = MaximumWidth;
  v89 = MessageFormat;
  v87 = Arguments;
  v86 = Buffer;
  v88 = ParseContext;
  v85 = 0LL;
  v82 = 0;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    LODWORD(v16) = ParseContext->cwSavColumn;
    ParseContext->fFlags &= ~1u;
    v15 = 0LL;
    v17 = &MessageFormat[ParseContext->iwSrc];
    iwDst = ParseContext->iwDst;
    iwDstSpace = ParseContext->iwDstSpace;
    v18 = v17;
    v83 = v17;
    v14 = &Buffer[iwDst];
    if ( iwDstSpace != -1LL )
      v15 = &Buffer[iwDstSpace];
    v13 -= iwDst;
    if ( !ArgumentsAreAnArray && Arguments )
      *Arguments = ParseContext->lpvArgStart;
    if ( (ParseContext->fFlags & 2) != 0 )
    {
      ParseContext->fFlags &= ~2u;
      goto LABEL_16;
    }
  }
  else
  {
    v14 = Buffer;
    v15 = 0LL;
    LODWORD(v16) = 0;
    v17 = MessageFormat;
    v18 = MessageFormat;
    v83 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  while ( 1 )
  {
    v19 = *v17;
    if ( !*v17 )
      break;
    ++v17;
    switch ( v19 )
    {
      case 37:
        v21 = *v17;
        v22 = v14;
        if ( (unsigned __int16)(v21 - 49) <= 8u )
        {
          v23 = v17[1];
          v24 = v21 - 48;
          ++v17;
          v25 = v23;
          if ( v23 >= 0x30 && v23 <= 0x39 )
          {
            ++v17;
            v24 = v23 + 2 * (5 * v24 - 24);
            v49 = *v17;
            v25 = *v17;
            if ( v49 >= 0x30 && v49 <= 0x39 )
            {
              ++v17;
              v24 = v49 + 2 * (5 * v24 - 24);
              v25 = *v17;
              if ( *v17 <= 0x39u && *v17 >= 0x30u )
                return -1073741811;
            }
          }
          v26 = 0LL;
          v27 = v24;
          v28 = v24 - 1;
          v29 = 0;
          if ( v25 == 33 )
          {
            v36 = v93;
            Format = 37;
            v34 = 0;
            for ( i = v93; ; i = v36 )
            {
              v48 = v17[1];
              ++v17;
              if ( v48 == 33 )
                break;
              if ( !v48 )
                return -1073741811;
              if ( i >= v94 )
                return -1073741811;
              if ( v48 == 42 )
              {
                v78 = v29++;
                if ( v78 > 1 )
                  return -1073741811;
              }
              *v36++ = v48;
            }
            ++v17;
            *v36 = 0;
          }
          else
          {
            v30 = 32LL;
            p_Format = &Format;
            do
            {
              if ( v30 == -2147483614 )
                break;
              v32 = *(wchar_t *)((char *)p_Format + (char *)L"%s" - (char *)&Format);
              if ( !v32 )
                break;
              *p_Format = v32;
              ++v26;
              ++p_Format;
              --v30;
            }
            while ( v30 );
            v33 = p_Format - 1;
            if ( v30 )
              v33 = p_Format;
            v34 = 1;
            *v33 = 0;
            v35 = v26 - 1;
            if ( v30 )
              v35 = v26;
            v36 = &v93[v35 - 1];
          }
          if ( IgnoreInserts )
          {
            if ( v34 == 1 )
              goto LABEL_42;
            v50 = Format - 37;
            if ( Format == 37 )
            {
              v50 = v93[0] - 115;
              if ( v93[0] == 115 )
                v50 = v93[1];
            }
            if ( !v50 )
            {
LABEL_42:
              *(_DWORD *)Args = v27;
              v37 = RtlStringCchPrintfExW(v14, v13, &v85, 0LL, 0, (wchar_t *)L"%%%u", *(_QWORD *)Args);
            }
            else
            {
              *(_DWORD *)Args = v27;
              v37 = RtlStringCchPrintfExW(v14, v13, &v85, 0LL, 0, (wchar_t *)L"%%%u!%s!", *(_QWORD *)Args, v93);
            }
LABEL_43:
            v12 = v86;
            if ( v37 < 0 || (v38 = v85 - v14, v13 -= v38, v13 < 0) )
            {
              v18 = v83;
LABEL_49:
              v10 = v88;
              if ( !v88 )
                return -2147483643;
              v11 = v89;
LABEL_98:
              v10->cwSavColumn = v16;
              v10->iwSrc = v18 - v11;
              v10->iwDst = v14 - v12;
              v10->fFlags |= 1u;
              if ( v15 )
                v10->iwDstSpace = v15 - v12;
              else
                v10->iwDstSpace = -1LL;
              return -2147483643;
            }
            MaximumWidth = v84;
            v14 += (int)v38;
            goto LABEL_46;
          }
          v39 = v87;
          if ( !v87 || v29 + (unsigned int)v28 >= 0xC8 )
            return -1073741811;
          if ( !ArgumentsAreAnsi )
            goto LABEL_68;
          v54 = *(v36 - 1);
          v55 = (char *)(v36 - 1);
          if ( v54 == 99 )
          {
            v64 = *(v36 - 2);
            LOWORD(v64) = v64 - 104;
            if ( (unsigned __int16)v64 <= 0xFu )
            {
              v65 = 32785;
              if ( _bittest(&v65, v64) )
                goto LABEL_68;
            }
            v66 = 3LL;
            v67 = (char *)L"hc" - v55;
            while ( v66 != -2147483643 )
            {
              v68 = *(_WORD *)&v55[v67];
              if ( !v68 )
                break;
              *(_WORD *)v55 = v68;
              v55 += 2;
              if ( !--v66 )
              {
                *((_WORD *)v55 - 1) = 0;
                goto LABEL_68;
              }
            }
          }
          else
          {
            if ( v54 != 115 )
            {
              if ( v54 == 83 )
              {
                *(_WORD *)v55 = 115;
              }
              else if ( v54 == 67 )
              {
                *(_WORD *)v55 = 99;
              }
              goto LABEL_68;
            }
            v69 = *(v36 - 2);
            LOWORD(v69) = v69 - 104;
            if ( (unsigned __int16)v69 <= 0xFu )
            {
              v70 = 32785;
              if ( _bittest(&v70, v69) )
              {
LABEL_68:
                v40 = v82;
                if ( (unsigned int)v28 >= v82 )
                {
                  do
                  {
                    v41 = v40 + 1;
                    if ( ArgumentsAreAnArray )
                    {
                      v43 = (__int64)*v39++;
                    }
                    else
                    {
                      v42 = *v39;
                      *v39 += 8;
                      v43 = *v42;
                    }
                    *(_QWORD *)&v91[8 * v40] = v43;
                    v40 = v41;
                  }
                  while ( v41 <= (unsigned int)v28 );
                  LODWORD(v40) = v41;
                  v87 = v39;
                  v82 = v41;
                  v22 = v14;
                }
                v44 = *(_QWORD *)&v91[8 * v28];
                v45 = 0LL;
                v46 = 0LL;
                if ( v29 )
                {
                  v56 = ArgumentsAreAnArray;
                  if ( ArgumentsAreAnArray )
                  {
                    v45 = *v39;
                    v57 = (unsigned int)v40;
                    LODWORD(v40) = v40 + 1;
                    ++v39;
                    v82 = v40;
                    v87 = v39;
                    *(_QWORD *)&v91[8 * v57] = v45;
                  }
                  else
                  {
                    v77 = (va_list *)*v39;
                    *v39 += 8;
                    v45 = *v77;
                    v56 = 0;
                  }
                  if ( v29 > 1 )
                  {
                    v58 = ++v82;
                    v59 = &v91[8 * (unsigned int)v40];
                    if ( v56 )
                    {
                      v46 = *v39;
                      v87 = v39 + 1;
                    }
                    else
                    {
                      v76 = (va_list *)*v39;
                      v82 = v58;
                      *v39 += 8;
                      v46 = *v76;
                    }
                    *(_QWORD *)v59 = v46;
                  }
                }
                v37 = RtlStringCchPrintfExW(v14, v13, &v85, 0LL, 0, &Format, v44, v45, v46);
                goto LABEL_43;
              }
            }
            v66 = 3LL;
            v71 = (char *)L"hs" - v55;
            do
            {
              if ( v66 == -2147483643 )
                break;
              v72 = *(_WORD *)&v55[v71];
              if ( !v72 )
                break;
              *(_WORD *)v55 = v72;
              v55 += 2;
              --v66;
            }
            while ( v66 );
          }
          v73 = v55 - 2;
          if ( v66 )
            v73 = v55;
          *(_WORD *)v73 = 0;
          goto LABEL_68;
        }
        if ( v21 == 48 )
          goto LABEL_20;
        if ( !(_WORD)v21 )
          return -1073741811;
        switch ( v21 )
        {
          case 'r':
            if ( --v13 < 0 )
              goto LABEL_49;
            *v14 = 13;
            v15 = 0LL;
            ++v14;
            LODWORD(v16) = 0;
            ++v17;
            goto LABEL_13;
          case 'n':
            v13 -= 2;
            if ( v13 < 0 )
              goto LABEL_49;
            *(_DWORD *)v14 = 655373;
            v14 += 2;
            ++v17;
            goto LABEL_77;
          case 't':
            if ( --v13 < 0 )
              goto LABEL_49;
            if ( (v16 & 7) != 0 )
              LODWORD(v16) = (v16 + 7) & 0xFFFFFFF8;
            else
              LODWORD(v16) = v16 + 8;
            v15 = v14;
            *v14 = 9;
LABEL_60:
            ++v14;
            ++v17;
            break;
          case 'b':
            if ( --v13 < 0 )
              goto LABEL_49;
            v15 = v14;
            *v14++ = 32;
            ++v17;
            break;
          default:
            if ( !IgnoreInserts )
            {
              if ( --v13 < 0 )
                goto LABEL_49;
              *v14 = v21;
              goto LABEL_60;
            }
            v13 -= 2;
            if ( v13 < 0 )
              goto LABEL_49;
            *v14 = 37;
            v14[1] = *v17;
            v14 += 2;
            ++v17;
            break;
        }
LABEL_46:
        if ( v22 )
        {
          LODWORD(v16) = v14 - v22 + v16;
          goto LABEL_13;
        }
LABEL_77:
        v15 = 0LL;
        LODWORD(v16) = 0;
LABEL_13:
        v83 = v17;
        v18 = v17;
        if ( MaximumWidth - 1 <= 0xFFFFFFFD && (unsigned int)v16 >= MaximumWidth )
        {
          v10 = v88;
          v11 = v89;
LABEL_16:
          if ( v15 )
          {
            v60 = v15;
            do
            {
              if ( *v60 != 32 && *v60 != 9 )
                break;
              ++v60;
            }
            while ( v60 != v14 );
            if ( v15 > v12 )
            {
              do
              {
                v74 = *(v15 - 1);
                v75 = v15 - 1;
                if ( v74 != 9 && v74 != 32 )
                  break;
                --v15;
              }
              while ( v75 > v12 );
            }
            v61 = v60 - v15;
            if ( (_DWORD)v61 == 1 )
            {
              if ( --v13 < 0 )
              {
LABEL_18:
                if ( !v10 )
                  return -2147483643;
                v10->fFlags |= 2u;
                goto LABEL_98;
              }
            }
            else if ( (unsigned int)v61 > 2 )
            {
              v13 = v61 + v13 - 2;
            }
            v16 = v14 - v60;
            memmove(v15 + 2, v60, 2 * v16);
            MaximumWidth = v84;
            v18 = v83;
            v12 = v86;
            *v15 = 13;
            v62 = v15 + 1;
            *v62 = 10;
            v63 = &v62[(unsigned int)v16];
            v15 = 0LL;
            v14 = v63 + 1;
          }
          else
          {
            v13 -= 2;
            if ( v13 < 0 )
              goto LABEL_18;
            v18 = v83;
            LODWORD(v16) = 0;
            v12 = v86;
            v15 = 0LL;
            *v14 = 13;
            v53 = v14 + 1;
            *v53 = 10;
            v14 = v53 + 1;
          }
        }
        break;
      case 13:
        if ( *v17 != 10 )
          goto LABEL_26;
LABEL_25:
        ++v17;
        goto LABEL_26;
      case 10:
        if ( *v17 == 13 )
          goto LABEL_25;
LABEL_26:
        if ( MaximumWidth )
        {
          v15 = v14;
          v19 = 32;
LABEL_9:
          if ( --v13 < 0 )
            goto LABEL_49;
          *v14 = v19;
          if ( v19 == 32 )
            v15 = v14;
          ++v14;
          LODWORD(v16) = v16 + 1;
          goto LABEL_13;
        }
        v13 -= 2;
        if ( v13 < 0 )
          goto LABEL_49;
        *(_DWORD *)v14 = 655373;
        v15 = 0LL;
        v14 += 2;
        v83 = v17;
        LODWORD(v16) = 0;
        v18 = v17;
        break;
      default:
        goto LABEL_9;
    }
  }
LABEL_20:
  if ( v13 < 1 )
    goto LABEL_49;
  *v14 = 0;
  if ( v90 )
    *v90 = 2 * (((char *)v14 - (char *)v12 + 2) >> 1);
  return 0;
}
