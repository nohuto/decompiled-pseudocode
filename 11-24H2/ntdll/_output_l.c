/*
 * XREFs of _output_l @ 0x180126900
 * Callers:
 *     _snprintf @ 0x1801202D0 (_snprintf.c)
 *     _vsprintf_l @ 0x180120B10 (_vsprintf_l.c)
 *     _vsnprintf_l @ 0x180120CCC (_vsnprintf_l.c)
 *     sprintf @ 0x1801245C0 (sprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     write_char @ 0x180127178 (write_char.c)
 *     write_multi_char @ 0x1801271C8 (write_multi_char.c)
 *     write_string @ 0x180127220 (write_string.c)
 *     _get_printf_count_output @ 0x18012A4E8 (_get_printf_count_output.c)
 *     wctomb_s @ 0x18012A5C4 (wctomb_s.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, wchar_t *a4)
{
  int v5; // r15d
  int v6; // r13d
  int v7; // esi
  char *v8; // rbx
  wchar_t *v10; // rdi
  char v11; // r9
  int v12; // r14d
  unsigned int v13; // r10d
  wchar_t *v14; // r8
  int v15; // ecx
  char *v16; // rax
  __int64 i; // rcx
  unsigned __int64 v18; // r10
  wchar_t *v19; // rdi
  __int64 v20; // rax
  unsigned __int16 *v21; // rdx
  const wchar_t *v22; // rax
  int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  int v26; // ecx
  char v27; // si
  int v28; // r9d
  int v29; // eax
  int v30; // edx
  int v31; // eax
  bool v32; // zf
  unsigned int v33; // r14d
  unsigned int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // r14
  int v37; // edi
  wchar_t *v38; // r14
  wchar_t v39; // r9
  __int64 v40; // rcx
  _WORD *v41; // rdi
  char v42; // cl
  int v43; // eax
  int v45; // r8d
  int v46; // ecx
  int v47; // eax
  int v48; // r8d
  int v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v51[4]; // [rsp+38h] [rbp-C8h] BYREF
  int SizeConverted; // [rsp+3Ch] [rbp-C4h] BYREF
  int v53; // [rsp+40h] [rbp-C0h]
  unsigned int v54; // [rsp+44h] [rbp-BCh]
  int v55; // [rsp+48h] [rbp-B8h]
  wchar_t *v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+5Ch] [rbp-A4h]
  __int64 v59; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+68h] [rbp-98h] BYREF
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  char v63; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v64[8]; // [rsp+270h] [rbp+170h] BYREF

  v59 = a1;
  v56 = a4;
  v58 = 0;
  v5 = 0;
  v55 = 0;
  v6 = 0;
  v7 = 0;
  v49 = 0;
  v57 = 0;
  v8 = 0LL;
  v10 = a4;
  memset_thunk_772440563353939046(MbCh, 0, 0x200uLL);
  v53 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v50 = 0;
    v13 = 0;
    SizeConverted = 0;
    if ( v11 )
    {
      do
      {
        ++a2;
        v14 = v10;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v11 - 32] & 0xF;
        v16 = _lookuptable;
        v13 = _lookuptable[v13 + 8 * v15] >> 4;
        v54 = v13;
        i = v13;
        switch ( v13 )
        {
          case 0u:
            goto LABEL_165;
          case 1u:
            v57 = 0;
            v7 = 0;
            v55 = 0;
            v5 = 0;
            v49 = 0;
            v6 = -1;
            v53 = 0;
            goto LABEL_168;
          case 2u:
            switch ( v11 )
            {
              case ' ':
                v5 |= 2u;
                break;
              case '#':
                v5 |= 0x80u;
                break;
              case '+':
                v5 |= 1u;
                break;
              case '-':
                v5 |= 4u;
                break;
              case '0':
                v5 |= 8u;
                break;
            }
            goto LABEL_168;
          case 3u:
            if ( v11 == 42 )
            {
              v45 = *(_DWORD *)v10;
              v56 = v10 + 4;
              v46 = v45;
              if ( v45 < 0 )
                v5 |= 4u;
              v47 = v45;
              v48 = -v45;
              if ( v47 >= 0 )
                v48 = v46;
              v55 = v48;
            }
            else
            {
              v55 = v11 + 2 * (5 * v55 - 24);
            }
            goto LABEL_168;
          case 4u:
            v6 = 0;
            goto LABEL_168;
          case 5u:
            if ( v11 == 42 )
            {
              v6 = *(_DWORD *)v10;
              v56 = v10 + 4;
              if ( v6 < 0 )
                v6 = -1;
            }
            else
            {
              v6 = v11 + 2 * (5 * v6 - 24);
            }
            goto LABEL_168;
        }
        i = v13 - 6;
        if ( v13 == 6 )
        {
          switch ( v11 )
          {
            case 'I':
              goto LABEL_147;
            case 'h':
              v5 |= 0x20u;
              break;
            case 'j':
              goto LABEL_147;
            case 'l':
              v42 = *a2;
              if ( *a2 == 108 )
                ++a2;
              v43 = 4096;
              if ( v42 != 108 )
                v43 = 16;
              v5 |= v43;
              break;
            case 't':
              goto LABEL_147;
            case 'w':
              v5 |= 0x800u;
              break;
            case 'z':
LABEL_147:
              v5 |= 0x8000u;
              if ( v11 == 73 )
              {
                if ( *a2 == 54 )
                {
                  if ( a2[1] != 52 )
                    goto LABEL_162;
                  a2 += 2;
                }
                else
                {
                  if ( *a2 != 51 || a2[1] != 50 )
                  {
LABEL_162:
                    LOBYTE(v16) = *a2 - 88;
                    if ( (unsigned __int8)v16 <= 0x20u )
                    {
                      i = 0x120821001LL;
                      if ( _bittest64(&i, (unsigned __int64)v16) )
                        break;
                    }
                    v54 = 0;
LABEL_165:
                    LOBYTE(i) = v11;
                    v53 = 0;
                    write_char(i, v59, &v50);
LABEL_166:
                    v12 = v50;
                    goto LABEL_167;
                  }
                  a2 += 2;
                  v5 &= ~0x8000u;
                }
              }
              else if ( v11 != 106 )
              {
                goto LABEL_162;
              }
              break;
          }
        }
        else if ( v13 == 7 )
        {
          if ( v11 <= 105 )
          {
            if ( v11 == 105 )
              goto LABEL_24;
            if ( v11 == 67 )
            {
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x800u;
              goto LABEL_51;
            }
            if ( v11 != 83 )
            {
              if ( v11 != 88 )
              {
                if ( v11 == 90 )
                {
                  v21 = *(unsigned __int16 **)v10;
                  v56 = v10 + 4;
                  if ( v21 && (v8 = (char *)*((_QWORD *)v21 + 1)) != 0LL )
                  {
                    if ( v21[1] < *v21 )
                      goto LABEL_193;
                    i = *v21;
                    if ( (v5 & 0x800) != 0 )
                    {
                      if ( (*v21 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                        goto LABEL_193;
                      v53 = 1;
                      i = (unsigned int)i >> 1;
                    }
                    else
                    {
                      v53 = 0;
                    }
                  }
                  else
                  {
                    i = -1LL;
                    v8 = "(null)";
                    do
                      ++i;
                    while ( aNull[i] );
                  }
                  SizeConverted = i;
                  goto LABEL_107;
                }
                if ( v11 != 99 )
                {
                  if ( v11 == 100 )
                  {
LABEL_24:
                    v5 |= 0x40u;
                    goto LABEL_25;
                  }
LABEL_107:
                  if ( v57 )
                    goto LABEL_167;
                  if ( (v5 & 0x40) == 0 )
                    goto LABEL_116;
                  if ( (v5 & 0x100) != 0 )
                  {
                    v51[0] = 45;
                    goto LABEL_113;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v51[0] = 43;
                    goto LABEL_113;
                  }
                  if ( (v5 & 2) != 0 )
                  {
                    v51[0] = 32;
LABEL_113:
                    v33 = 1;
                    v49 = 1;
                  }
                  else
                  {
LABEL_116:
                    v33 = v49;
                  }
                  v34 = v55 - SizeConverted - v33;
                  if ( (v5 & 0xC) == 0 )
                  {
                    LOBYTE(i) = 32;
                    write_multi_char(i, v34, v59, &v50);
                  }
                  write_string(v51, v33, v59, &v50);
                  v36 = v59;
                  if ( (v5 & 0xC) == 8 )
                  {
                    LOBYTE(v35) = 48;
                    write_multi_char(v35, v34, v59, &v50);
                  }
                  v37 = SizeConverted;
                  if ( v53 && SizeConverted > 0 )
                  {
                    v60 = 0;
                    v38 = (wchar_t *)v8;
                    while ( 1 )
                    {
                      v39 = *v38++;
                      --v37;
                      if ( wctomb_s(&v60, v64, 6uLL, v39) || !v60 )
                        break;
                      write_string(v64, (unsigned int)v60, v59, &v50);
                      if ( !v37 )
                        goto LABEL_130;
                    }
                    v12 = -1;
                    v50 = -1;
                  }
                  else
                  {
                    write_string(v8, (unsigned int)SizeConverted, v36, &v50);
LABEL_130:
                    v12 = v50;
                  }
                  if ( v12 >= 0 && (v5 & 4) != 0 )
                  {
                    LOBYTE(v40) = 32;
                    write_multi_char(v40, v34, v59, &v50);
                    v7 = v49;
                    goto LABEL_166;
                  }
                  v7 = v49;
LABEL_167:
                  v13 = v54;
                  goto LABEL_168;
                }
LABEL_51:
                v56 = v10 + 4;
                if ( (v5 & 0x810) != 0 )
                {
                  if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *v10) )
                    v57 = 1;
                }
                else
                {
                  MbCh[0] = *(_BYTE *)v10;
                  SizeConverted = 1;
                }
                v8 = MbCh;
                goto LABEL_107;
              }
LABEL_76:
              v23 = 7;
LABEL_77:
              v58 = v23;
              if ( (v5 & 0x80u) != 0 )
              {
                v51[0] = 48;
                v51[1] = v23 + 81;
                v7 = 2;
              }
              v18 = 16LL;
              goto LABEL_26;
            }
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
LABEL_43:
            v8 = *(char **)v10;
            i = (unsigned int)v6;
            if ( v6 == -1 )
              i = 0x7FFFFFFFLL;
            v56 = v10 + 4;
            if ( (v5 & 0x810) != 0 )
            {
              v22 = (const wchar_t *)v8;
              if ( !v8 )
              {
                v8 = (char *)L"(null)";
                v22 = L"(null)";
              }
              v53 = 1;
              while ( (_DWORD)i )
              {
                i = (unsigned int)(i - 1);
                if ( !*v22 )
                  break;
                ++v22;
              }
              v24 = ((char *)v22 - v8) >> 1;
            }
            else
            {
              v24 = (__int64)"(null)";
              if ( v8 )
                v24 = (__int64)v8;
              v8 = (char *)v24;
              while ( (_DWORD)i )
              {
                i = (unsigned int)(i - 1);
                if ( !*(_BYTE *)v24 )
                  break;
                ++v24;
              }
              LODWORD(v24) = v24 - (_DWORD)v8;
            }
            SizeConverted = v24;
            goto LABEL_107;
          }
          switch ( v11 )
          {
            case 'n':
              v56 = v10 + 4;
              v41 = *(_WORD **)v10;
              if ( !get_printf_count_output() )
                goto LABEL_193;
              if ( (v5 & 0x20) != 0 )
                *v41 = v12;
              else
                *(_DWORD *)v41 = v12;
              v57 = 1;
              goto LABEL_167;
            case 'o':
              v18 = 8LL;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_26;
            case 'p':
              v6 = 16;
              v5 |= 0x8000u;
              goto LABEL_76;
            case 's':
              goto LABEL_43;
          }
          if ( v11 != 117 )
          {
            if ( v11 != 120 )
              goto LABEL_107;
            v23 = 39;
            goto LABEL_77;
          }
LABEL_25:
          v18 = 10LL;
LABEL_26:
          v19 = v10 + 4;
          v56 = v19;
          if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
          {
            v20 = *(_QWORD *)v14;
            if ( (v5 & 0x40) != 0 )
              goto LABEL_88;
LABEL_91:
            v25 = (unsigned int)v20;
            if ( (v5 & 0x9000) != 0 )
              v25 = v20;
            if ( v6 >= 0 )
            {
              v5 &= ~8u;
              if ( v6 > 512 )
                v6 = 512;
            }
            else
            {
              v6 = 1;
            }
            v26 = v25 != 0 ? v7 : 0;
            v27 = v58;
            v49 = v26;
            v28 = v26;
            for ( i = (__int64)&v63; ; --i )
            {
              v29 = v6--;
              if ( v29 <= 0 && !v25 )
                break;
              v30 = v25 % v18 + 48;
              v25 /= v18;
              if ( v30 > 57 )
                LOBYTE(v30) = v27 + v30;
              *(_BYTE *)i = v30;
            }
            v7 = v28;
            v31 = (unsigned int)&v62 + 367 - i;
            v8 = (char *)(i + 1);
            SizeConverted = v31;
            if ( (v5 & 0x200) != 0 )
            {
              if ( !v31 || (v32 = *v8 == 48, v56 = v19, v49 = v28, !v32) )
              {
                v8 = (char *)i;
                v56 = v19;
                v49 = v28;
                SizeConverted = v31 + 1;
                v7 = v28;
                *(_BYTE *)i = 48;
              }
            }
            goto LABEL_107;
          }
          if ( (v5 & 0x20) != 0 )
          {
            if ( (v5 & 0x40) == 0 )
            {
              v20 = *v14;
              goto LABEL_91;
            }
            v20 = (__int16)*v14;
          }
          else
          {
            if ( (v5 & 0x40) == 0 )
            {
              v20 = *(unsigned int *)v14;
              goto LABEL_91;
            }
            v20 = *(int *)v14;
          }
LABEL_88:
          if ( v20 < 0 )
          {
            v20 = -v20;
            v5 |= 0x100u;
          }
          goto LABEL_91;
        }
LABEL_168:
        v11 = *a2;
        v10 = v56;
      }
      while ( *a2 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_193:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
