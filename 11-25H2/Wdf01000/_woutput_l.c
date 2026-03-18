/*
 * XREFs of _woutput_l @ 0x14008464C
 * Callers:
 *     _vsnwprintf_l @ 0x140084544 (_vsnwprintf_l.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x140076E90 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     write_char @ 0x140084F58 (write_char.c)
 *     write_multi_char @ 0x140084FAC (write_multi_char.c)
 *     write_string @ 0x140085004 (write_string.c)
 *     _get_printf_count_output @ 0x140085078 (_get_printf_count_output.c)
 *     mbtowc @ 0x1400850E4 (mbtowc.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall woutput_l(_iobuf *stream, wchar_t *format, localeinfo_struct *plocinfo, char *argptr)
{
  int v5; // edi
  int v6; // esi
  $B4FF2100EA110D8CD0B9C89F852FB035 *p_buffer; // rbx
  char *v9; // r15
  wchar_t v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  int v13; // r10d
  char *v14; // r8
  int v15; // ecx
  unsigned __int64 v16; // r10
  char *v17; // r15
  __int64 v18; // rax
  unsigned __int16 *v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  const char *v22; // rax
  wchar_t v23; // ax
  int v24; // eax
  const wchar_t *v25; // rax
  unsigned __int64 v26; // r8
  char v27; // r11
  int v28; // r9d
  char *i; // rcx
  int v30; // eax
  int v31; // edx
  wchar_t v32; // ax
  int v33; // r14d
  int v34; // r15d
  _iobuf *v35; // rsi
  const char *v36; // r14
  int v37; // esi
  int v38; // eax
  __int64 v39; // r12
  _WORD *v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r8d
  int v45; // ecx
  int v46; // eax
  int v47; // r8d
  int charsout; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+34h] [rbp-CCh]
  int v50; // [rsp+38h] [rbp-C8h]
  wchar_t wchar; // [rsp+3Ch] [rbp-C4h] BYREF
  int v52; // [rsp+40h] [rbp-C0h]
  int v53; // [rsp+44h] [rbp-BCh]
  char tempchar[4]; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t prefix[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v56; // [rsp+50h] [rbp-B0h]
  char *v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+60h] [rbp-A0h]
  _iobuf *f; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+70h] [rbp-90h]
  const wchar_t *v61; // [rsp+78h] [rbp-88h]
  $B4FF2100EA110D8CD0B9C89F852FB035 buffer; // [rsp+90h] [rbp-70h] BYREF

  f = stream;
  v57 = argptr;
  v60 = 0;
  v5 = 0;
  v56 = 0;
  v6 = 0;
  v50 = 0;
  p_buffer = 0LL;
  v49 = 0;
  v58 = 0;
  v9 = argptr;
  memset(&buffer, 0, sizeof(buffer));
  wchar = 0;
  v52 = 0;
  if ( stream && format )
  {
    v10 = *format;
    v11 = 0;
    charsout = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      do
      {
        ++format;
        v14 = v9;
        v61 = format;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v13 = _lookuptable[8 * v15 + v13] >> 4;
        v53 = v13;
        switch ( v13 )
        {
          case 0:
            goto $NORMAL_STATE;
          case 1:
            v6 = -1;
            v58 = 0;
            v50 = -1;
            v5 = 0;
            v56 = 0;
            v49 = 0;
            v52 = 0;
            break;
          case 2:
            switch ( v10 )
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
            break;
          case 3:
            if ( v10 == 42 )
            {
              v44 = *(_DWORD *)v9;
              v57 = v9 + 8;
              v45 = v44;
              if ( v44 < 0 )
                v5 |= 4u;
              v46 = v44;
              v47 = -v44;
              if ( v46 >= 0 )
                v47 = v45;
              v56 = v47;
            }
            else
            {
              v56 = v10 + 2 * (5 * v56 - 24);
            }
            break;
          case 4:
            v6 = 0;
            v50 = 0;
            break;
          case 5:
            if ( v10 == 42 )
            {
              v6 = *(_DWORD *)v9;
              v57 = v9 + 8;
              v50 = v6;
              if ( v6 < 0 )
              {
                v6 = -1;
                v50 = -1;
              }
            }
            else
            {
              v6 = v10 + 2 * (5 * v6 - 24);
              v50 = v6;
            }
            break;
          case 6:
            switch ( v10 )
            {
              case 'I':
                goto LABEL_149;
              case 'h':
                v5 |= 0x20u;
                goto LABEL_134;
              case 'j':
                goto LABEL_149;
              case 'l':
                if ( *format == 108 )
                {
                  ++format;
                  v5 |= 0x1000u;
                }
                else
                {
                  v5 |= 0x10u;
                }
                goto LABEL_134;
              case 't':
                goto LABEL_149;
              case 'w':
                v5 |= 0x800u;
                goto LABEL_134;
              case 'z':
LABEL_149:
                v5 |= 0x8000u;
                if ( v10 == 73 )
                {
                  if ( *format == 54 )
                  {
                    if ( format[1] == 52 )
                    {
                      format += 2;
                      goto LABEL_134;
                    }
                  }
                  else if ( *format == 51 && format[1] == 50 )
                  {
                    format += 2;
                    v5 &= ~0x8000u;
                    goto LABEL_134;
                  }
                }
                else if ( v10 == 106 )
                {
                  goto LABEL_134;
                }
                v42 = *format;
                LOWORD(v42) = v42 - 88;
                if ( (unsigned __int16)v42 <= 0x20u )
                {
                  v43 = 0x120821001LL;
                  if ( _bittest64(&v43, v42) )
                    goto LABEL_134;
                }
                v53 = 0;
$NORMAL_STATE:
                v52 = 1;
                write_char(v10, f, &charsout);
LABEL_132:
                v11 = charsout;
LABEL_133:
                v13 = v53;
                break;
            }
            break;
          case 7:
            if ( v10 <= 0x69u )
            {
              if ( v10 == 105 )
                goto LABEL_24;
              if ( v10 == 67 )
              {
                if ( (v5 & 0x830) == 0 )
                  v5 |= 0x20u;
                goto LABEL_54;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v19 = *(unsigned __int16 **)v9;
                    v57 = v9 + 8;
                    if ( v19 && (p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)*((_QWORD *)v19 + 1)) != 0LL )
                    {
                      v20 = *v19;
                      if ( v19[1] < (unsigned __int16)v20 )
                        goto LABEL_189;
                      LODWORD(v12) = *v19;
                      if ( (v5 & 0x800) != 0 )
                      {
                        if ( (v20 & 1) != 0 || ((unsigned __int8)p_buffer & 1) != 0 )
                          goto LABEL_189;
                        LODWORD(v12) = v20 >> 1;
                        v52 = 1;
                      }
                      else
                      {
                        v52 = 0;
                      }
                    }
                    else
                    {
                      v12 = -1LL;
                      p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                      do
                        ++v12;
                      while ( aNull_0[v12] );
                    }
                    goto LABEL_105;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 == 100 )
                    {
LABEL_24:
                      v5 |= 0x40u;
                      goto LABEL_25;
                    }
LABEL_105:
                    if ( v58 )
                      goto LABEL_133;
                    if ( (v5 & 0x40) != 0 )
                    {
                      if ( (v5 & 0x100) != 0 )
                      {
                        v32 = 45;
                        goto LABEL_111;
                      }
                      if ( (v5 & 1) != 0 )
                      {
                        v32 = 43;
LABEL_111:
                        prefix[0] = v32;
LABEL_112:
                        v33 = 1;
                        v49 = 1;
LABEL_116:
                        v34 = v56 - v12 - v33;
                        if ( (v5 & 0xC) == 0 )
                          write_multi_char(0x20u, v34, f, &charsout);
                        write_string(prefix, v33, f, &charsout);
                        v35 = f;
                        if ( (v5 & 0xC) == 8 )
                          write_multi_char(0x30u, v34, f, &charsout);
                        if ( v52 || (int)v12 <= 0 )
                        {
                          write_string((wchar_t *)p_buffer, v12, v35, &charsout);
LABEL_128:
                          v11 = charsout;
                        }
                        else
                        {
                          v36 = (const char *)p_buffer;
                          v37 = v12;
                          while ( 1 )
                          {
                            v38 = mbtowc(&wchar, v36, _mb_cur_max);
                            v39 = v38;
                            v37 -= (v38 == 2) + 1;
                            if ( v38 <= 0 )
                              break;
                            write_char(wchar, f, &charsout);
                            v36 += v39;
                            if ( v37 <= 0 )
                            {
                              format = (wchar_t *)v61;
                              v35 = f;
                              goto LABEL_128;
                            }
                          }
                          format = (wchar_t *)v61;
                          v11 = -1;
                          v35 = f;
                          charsout = -1;
                        }
                        if ( v11 < 0 || (v5 & 4) == 0 )
                          goto LABEL_141;
                        write_multi_char(0x20u, v34, v35, &charsout);
                        v6 = v50;
                        goto LABEL_132;
                      }
                      if ( (v5 & 2) != 0 )
                      {
                        prefix[0] = 32;
                        goto LABEL_112;
                      }
                    }
                    v33 = v49;
                    goto LABEL_116;
                  }
LABEL_54:
                  v23 = *(_WORD *)v9;
                  v52 = 1;
                  v57 = v9 + 8;
                  wchar = v23;
                  if ( (v5 & 0x20) != 0 )
                  {
                    tempchar[0] = v23;
                    tempchar[1] = 0;
                    if ( mbtowc((wchar_t *)&buffer, tempchar, _mb_cur_max) < 0 )
                      v58 = 1;
                  }
                  else
                  {
                    buffer.wz[0] = v23;
                  }
                  p_buffer = &buffer;
                  LODWORD(v12) = 1;
                  goto LABEL_105;
                }
LABEL_74:
                v24 = 7;
LABEL_75:
                v60 = v24;
                if ( (v5 & 0x80u) != 0 )
                {
                  v49 = 2;
                  prefix[0] = 48;
                  prefix[1] = v24 + 81;
                }
                v16 = 16LL;
                goto $COMMON_INT;
              }
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x20u;
LABEL_43:
              p_buffer = *($B4FF2100EA110D8CD0B9C89F852FB035 **)v9;
              v21 = v6;
              if ( v6 == -1 )
                v21 = 0x7FFFFFFF;
              v57 = v9 + 8;
              if ( (v5 & 0x20) != 0 )
              {
                v22 = (const char *)p_buffer;
                if ( !p_buffer )
                {
                  p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                  v22 = "(null)";
                }
                LODWORD(v12) = 0;
                if ( v21 > 0 )
                {
                  do
                  {
                    if ( !*v22 )
                      break;
                    ++v22;
                    LODWORD(v12) = v12 + 1;
                  }
                  while ( (int)v12 < v21 );
                }
              }
              else
              {
                v52 = 1;
                v25 = L"(null)";
                if ( p_buffer )
                  v25 = (const wchar_t *)p_buffer;
                p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)v25;
                while ( v21 )
                {
                  --v21;
                  if ( !*v25 )
                    break;
                  ++v25;
                }
                LODWORD(v12) = ((char *)v25 - (char *)p_buffer) >> 1;
              }
              goto LABEL_105;
            }
            switch ( v10 )
            {
              case 'n':
                v41 = *(_WORD **)v9;
                v57 = v9 + 8;
                if ( !(unsigned int)get_printf_count_output() )
                  goto LABEL_189;
                if ( (v5 & 0x20) != 0 )
                  *v41 = v11;
                else
                  *(_DWORD *)v41 = v11;
                v58 = 1;
LABEL_141:
                v6 = v50;
                v13 = v53;
                goto LABEL_134;
              case 'o':
                v16 = 8LL;
                if ( (v5 & 0x80u) != 0 )
                  v5 |= 0x200u;
                goto $COMMON_INT;
              case 'p':
                v6 = 16;
                v5 |= 0x8000u;
                goto LABEL_74;
              case 's':
                goto LABEL_43;
            }
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_105;
              v24 = 39;
              goto LABEL_75;
            }
LABEL_25:
            v16 = 10LL;
$COMMON_INT:
            v17 = v9 + 8;
            v57 = v17;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v18 = *(_QWORD *)v14;
              if ( (v5 & 0x40) != 0 )
                goto LABEL_86;
LABEL_89:
              v26 = (unsigned int)v18;
              if ( (v5 & 0x9000) != 0 )
                v26 = v18;
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
              v27 = v60;
              v49 &= -(v26 != 0);
              v28 = v49;
              for ( i = &buffer.sz[511]; ; --i )
              {
                v30 = v6--;
                if ( v30 <= 0 && !v26 )
                  break;
                v31 = v26 % v16 + 48;
                v26 /= v16;
                if ( v31 > 57 )
                  LOBYTE(v31) = v27 + v31;
                *i = v31;
              }
              v50 = v6;
              LODWORD(v12) = (unsigned int)&buffer.wz[56] + 399 - (_DWORD)i;
              p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)(i + 1);
              if ( (v5 & 0x200) != 0 )
              {
                if ( !(_DWORD)v12 || (v57 = v17, v49 = v28, p_buffer->sz[0] != 48) )
                {
                  p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)i;
                  v57 = v17;
                  LODWORD(v12) = v12 + 1;
                  v49 = v28;
                  *i = 48;
                }
              }
              goto LABEL_105;
            }
            if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) == 0 )
              {
                v18 = *(unsigned __int16 *)v14;
                goto LABEL_89;
              }
              v18 = *(__int16 *)v14;
            }
            else
            {
              if ( (v5 & 0x40) == 0 )
              {
                v18 = *(unsigned int *)v14;
                goto LABEL_89;
              }
              v18 = *(int *)v14;
            }
LABEL_86:
            if ( v18 < 0 )
            {
              v18 = -v18;
              v5 |= 0x100u;
            }
            goto LABEL_89;
        }
LABEL_134:
        v10 = *format;
        v9 = v57;
      }
      while ( *format );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_189:
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
