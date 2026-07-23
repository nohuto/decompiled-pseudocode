/*
 * XREFs of _woutput_s @ 0x180131728
 * Callers:
 *     _swoutput_s @ 0x1801315F4 (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180122258 (_invalid_parameter.c)
 *     _safecrt_mbtowc @ 0x180130644 (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x180132074 (write_char_2.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall woutput_s(__int64 a1, unsigned __int16 *a2, int *a3)
{
  int v4; // r14d
  int v5; // esi
  wchar_t *v6; // rbx
  int *v7; // r15
  __int64 v9; // r11
  unsigned __int16 v10; // r9
  int v11; // edi
  __int64 v12; // r12
  int v13; // r10d
  __int64 v14; // rcx
  int *v15; // r8
  int v16; // edx
  unsigned __int64 v17; // r9
  int *v18; // r15
  __int64 v19; // rax
  unsigned __int16 *v20; // rcx
  unsigned int v21; // eax
  int v22; // ecx
  const char *v23; // rax
  WCHAR v24; // ax
  int v25; // eax
  int v26; // eax
  const wchar_t *v27; // rax
  unsigned __int64 v28; // r8
  char v29; // r10
  char *j; // rcx
  int v31; // eax
  int v32; // edx
  __int16 v33; // ax
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // r15d
  int v37; // r11d
  int v38; // r9d
  unsigned __int16 *v39; // r10
  int v40; // r9d
  __int64 v41; // r10
  int v42; // r9d
  UCHAR *v43; // rsi
  int v44; // edi
  int v45; // eax
  __int64 v46; // r9
  wchar_t *v47; // r10
  int v48; // r9d
  __int64 v49; // r10
  bool i; // zf
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh] BYREF
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  WCHAR v62[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh]
  UCHAR v64[4]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v65[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v66; // [rsp+50h] [rbp-B0h]
  int *v67; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+64h] [rbp-9Ch]
  __int64 v70; // [rsp+68h] [rbp-98h]
  WCHAR v71[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+100h] [rbp+0h] BYREF
  char v73; // [rsp+27Fh] [rbp+17Fh] BYREF

  v70 = a1;
  v67 = a3;
  v68 = 0;
  v4 = 0;
  v66 = 0;
  v5 = 0;
  v61 = 0;
  v6 = 0LL;
  v60 = 0;
  v7 = a3;
  v69 = 0;
  memset_thunk_772440563353939046(v71, 0, 0x400uLL);
  LODWORD(v9) = 0;
  v62[0] = 0;
  v63 = 0;
  if ( !a1 || !a2 )
    goto LABEL_211;
  v10 = *a2;
  v11 = 0;
  v59 = 0;
  LODWORD(v12) = 0;
  v13 = 0;
  if ( !v10 )
    return (unsigned int)v11;
  LOWORD(v14) = 32;
  do
  {
    ++a2;
    v15 = v7;
    if ( v11 < 0 )
      break;
    if ( (unsigned __int16)(v10 - v14) > 0x5Au )
      v16 = v9;
    else
      v16 = _lookuptable_s[v10 - 32] & 0xF;
    v13 = _lookuptable_s[v16 + v13 + 8 * v16] >> 4;
    v58 = v13;
    switch ( v13 )
    {
      case 8:
        goto LABEL_211;
      case 0:
LABEL_177:
        v63 = 1;
        write_char_2(v10, v70, &v59);
        v11 = v59;
        goto LABEL_204;
      case 1:
        v69 = v9;
        v4 = v9;
        v66 = v9;
        v5 = -1;
        v60 = v9;
        v63 = v9;
LABEL_203:
        v61 = v5;
        goto LABEL_204;
      case 2:
        switch ( v10 )
        {
          case ' ':
            v4 |= 2u;
            break;
          case '#':
            v4 |= 0x80u;
            break;
          case '+':
            v4 |= 1u;
            break;
          case '-':
            v4 |= 4u;
            break;
          default:
            LOWORD(v14) = 32;
            if ( v10 == 48 )
              v4 |= 8u;
            goto LABEL_207;
        }
        goto LABEL_201;
      case 3:
        if ( v10 == 42 )
        {
          v53 = *v7;
          v67 = v7 + 2;
          v54 = v53;
          if ( v53 < 0 )
            v4 |= 4u;
          v55 = v53;
          v56 = -v53;
          if ( v55 >= 0 )
            v56 = v54;
        }
        else
        {
          v56 = v10 + 2 * (5 * v66 - 24);
        }
        v66 = v56;
        goto LABEL_204;
      case 4:
        v5 = v9;
        v61 = v9;
        goto LABEL_204;
      case 5:
        if ( v10 == 42 )
        {
          v5 = *v7;
          v67 = v7 + 2;
          LOWORD(v14) = 32;
          v61 = v5;
          if ( v5 < 0 )
          {
            v5 = -1;
            v61 = -1;
          }
          goto LABEL_207;
        }
        v5 = v10 + 2 * (5 * v5 - 24);
        goto LABEL_203;
    }
    if ( v13 != 6 )
    {
      if ( v13 == 7 )
      {
        if ( v10 <= 0x69u )
        {
          if ( v10 == 105 )
            goto LABEL_26;
          if ( v10 == 67 )
          {
            if ( (v4 & 0x830) == 0 )
              v4 |= 0x20u;
            goto LABEL_56;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v20 = *(unsigned __int16 **)v7;
                v67 = v7 + 2;
                if ( v20 && (v6 = (wchar_t *)*((_QWORD *)v20 + 1)) != 0LL )
                {
                  v21 = *v20;
                  if ( v20[1] < (unsigned __int16)v21 )
                    goto LABEL_211;
                  LODWORD(v12) = *v20;
                  if ( (v4 & 0x800) != 0 )
                  {
                    if ( (v21 & 1) != 0 || ((unsigned __int8)v6 & 1) != 0 )
                      goto LABEL_211;
                    LODWORD(v12) = v21 >> 1;
                    v63 = 1;
                  }
                  else
                  {
                    v63 = v9;
                  }
                }
                else
                {
                  v12 = -1LL;
                  v6 = (wchar_t *)"(null)";
                  do
                    ++v12;
                  while ( aNull[v12] != (_BYTE)v9 );
                }
                goto LABEL_107;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_26:
                  v4 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_107:
                if ( v69 == (_DWORD)v9 )
                {
                  if ( (v4 & 0x40) != 0 )
                  {
                    if ( (v4 & 0x100) != 0 )
                    {
                      v33 = 45;
                      goto LABEL_113;
                    }
                    if ( (v4 & 1) != 0 )
                    {
                      v33 = 43;
LABEL_113:
                      v65[0] = v33;
LABEL_114:
                      v34 = 1;
                      v60 = 1;
LABEL_118:
                      v35 = v70;
                      v36 = v66 - v12 - v34;
                      v37 = v4 & 0xC;
                      if ( (v4 & 0xC) == 0 && v36 > 0 )
                      {
                        do
                        {
                          write_char_2(32LL, v35, &v59);
                          v11 = v59;
                        }
                        while ( v59 != -1 && v38 > 0 );
                        v5 = v61;
                        v34 = v60;
                      }
                      v39 = v65;
                      if ( (*(_DWORD *)(v35 + 24) & 0x40) == 0 || *(_QWORD *)(v35 + 16) )
                      {
                        if ( v34 > 0 )
                        {
                          do
                          {
                            write_char_2(*v39, v35, &v59);
                            v11 = v59;
                            v39 = (unsigned __int16 *)(v41 + 2);
                          }
                          while ( v59 != -1 && v40 > 0 );
                        }
                      }
                      else
                      {
                        v11 += v34;
                        v59 = v11;
                      }
                      if ( v37 == 8 )
                      {
                        v9 = 0LL;
                        if ( v36 > 0 )
                        {
                          do
                          {
                            write_char_2(48LL, v35, &v59);
                            v11 = v59;
                          }
                          while ( v59 != -1 && v42 > 0 );
                          v5 = v61;
                        }
                      }
                      else
                      {
                        v9 = 0LL;
                      }
                      if ( v63 == (_DWORD)v9 && (int)v12 > 0 )
                      {
                        v43 = (UCHAR *)v6;
                        v44 = v12;
                        while ( 1 )
                        {
                          v45 = safecrt_mbtowc(v62, v43, _mb_cur_max);
                          v35 = v70;
                          LODWORD(v9) = 0;
                          v44 -= (v45 == 2) + 1;
                          if ( v45 <= 0 )
                            break;
                          write_char_2(v62[0], v70, &v59);
                          v43 += v46;
                          if ( v44 <= 0 )
                          {
                            v11 = v59;
                            goto LABEL_142;
                          }
                        }
                        v11 = -1;
                        v59 = -1;
LABEL_142:
                        v5 = v61;
                      }
                      else
                      {
                        v47 = v6;
                        if ( (*(_DWORD *)(v35 + 24) & 0x40) != 0 && *(_QWORD *)(v35 + 16) == v9 )
                        {
                          v11 += v12;
                          v59 = v11;
                        }
                        else if ( (int)v12 > 0 )
                        {
                          do
                          {
                            write_char_2(*v47, v35, &v59);
                            v11 = v59;
                            v47 = (wchar_t *)(v49 + 2);
                          }
                          while ( v59 != -1 && v48 > 0 );
                        }
                      }
                      v14 = 32LL;
                      if ( v11 >= 0 )
                      {
                        for ( i = (v4 & 4) == 0; !i && v36 > 0; i = v59 == -1 )
                        {
                          --v36;
                          write_char_2(v14, v35, &v59);
                          v11 = v59;
                        }
                      }
LABEL_206:
                      v13 = v58;
                      goto LABEL_207;
                    }
                    if ( (v4 & 2) != 0 )
                    {
                      v65[0] = 32;
                      goto LABEL_114;
                    }
                  }
                  v34 = v60;
                  goto LABEL_118;
                }
                LOWORD(v14) = 32;
                goto LABEL_206;
              }
LABEL_56:
              v24 = *(_WORD *)v7;
              v63 = 1;
              v67 = v7 + 2;
              v62[0] = v24;
              if ( (v4 & 0x20) != 0 )
              {
                v64[0] = v24;
                v64[1] = v9;
                v25 = safecrt_mbtowc(v71, v64, _mb_cur_max);
                LODWORD(v9) = 0;
                if ( v25 < 0 )
                  v69 = 1;
              }
              else
              {
                v71[0] = v24;
              }
              v6 = v71;
              LODWORD(v12) = 1;
              goto LABEL_107;
            }
LABEL_76:
            v26 = 7;
LABEL_77:
            v68 = v26;
            if ( (v4 & 0x80u) != 0 )
            {
              v60 = 2;
              v65[0] = 48;
              v65[1] = v26 + 81;
            }
            v17 = 16LL;
            goto LABEL_28;
          }
          if ( (v4 & 0x830) == 0 )
            v4 |= 0x20u;
LABEL_45:
          v6 = *(wchar_t **)v7;
          v22 = v5;
          if ( v5 == -1 )
            v22 = 0x7FFFFFFF;
          v67 = v7 + 2;
          if ( (v4 & 0x20) != 0 )
          {
            v23 = (const char *)v6;
            if ( !v6 )
            {
              v6 = (wchar_t *)"(null)";
              v23 = "(null)";
            }
            LODWORD(v12) = v9;
            if ( v22 > 0 )
            {
              do
              {
                if ( *v23 == (_BYTE)v9 )
                  break;
                ++v23;
                LODWORD(v12) = v12 + 1;
              }
              while ( (int)v12 < v22 );
            }
          }
          else
          {
            v63 = 1;
            v27 = L"(null)";
            if ( v6 )
              v27 = v6;
            v6 = (wchar_t *)v27;
            while ( v22 )
            {
              --v22;
              if ( *v27 == (_WORD)v9 )
                break;
              ++v27;
            }
            LODWORD(v12) = v27 - v6;
          }
          goto LABEL_107;
        }
        switch ( v10 )
        {
          case 'n':
            goto LABEL_211;
          case 'o':
            v17 = 8LL;
            if ( (v4 & 0x80u) != 0 )
              v4 |= 0x200u;
            goto LABEL_28;
          case 'p':
            v5 = 16;
            v4 |= 0x8000u;
            goto LABEL_76;
          case 's':
            goto LABEL_45;
        }
        if ( v10 != 117 )
        {
          if ( v10 != 120 )
            goto LABEL_107;
          v26 = 39;
          goto LABEL_77;
        }
LABEL_27:
        v17 = 10LL;
LABEL_28:
        v18 = v7 + 2;
        v67 = v18;
        if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
        {
          v19 = *(_QWORD *)v15;
          if ( (v4 & 0x40) != 0 )
            goto LABEL_88;
LABEL_91:
          v28 = (unsigned int)v19;
          if ( (v4 & 0x9000) != 0 )
            v28 = v19;
          if ( v5 >= 0 )
          {
            v4 &= ~8u;
            if ( v5 > 512 )
              v5 = 512;
          }
          else
          {
            v5 = 1;
          }
          v29 = v68;
          v60 = v28 != 0 ? v60 : 0;
          for ( j = &v73; ; --j )
          {
            v31 = v5--;
            if ( v31 <= 0 && !v28 )
              break;
            v32 = v28 % v17 + 48;
            v28 /= v17;
            if ( v32 > 57 )
              LOBYTE(v32) = v29 + v32;
            *j = v32;
          }
          v61 = v5;
          LODWORD(v12) = (unsigned int)&v72 + 383 - (_DWORD)j;
          v6 = (wchar_t *)(j + 1);
          if ( (v4 & 0x200) != 0 )
          {
            if ( !(_DWORD)v12 || (v67 = v18, *(_BYTE *)v6 != 48) )
            {
              v6 = (wchar_t *)j;
              v67 = v18;
              LODWORD(v12) = v12 + 1;
              *j = 48;
            }
          }
          goto LABEL_107;
        }
        if ( (v4 & 0x20) != 0 )
        {
          if ( (v4 & 0x40) == 0 )
          {
            v19 = *(unsigned __int16 *)v15;
            goto LABEL_91;
          }
          v19 = *(__int16 *)v15;
        }
        else
        {
          if ( (v4 & 0x40) == 0 )
          {
            v19 = (unsigned int)*v15;
            goto LABEL_91;
          }
          v19 = *v15;
        }
LABEL_88:
        if ( v19 < 0 )
        {
          v19 = -v19;
          v4 |= 0x100u;
        }
        goto LABEL_91;
      }
      goto LABEL_204;
    }
    if ( v10 == 73 )
      goto LABEL_162;
    if ( v10 != 104 )
    {
      if ( v10 != 106 )
      {
        if ( v10 == 108 )
        {
          LOWORD(v14) = 32;
          if ( *a2 == 108 )
          {
            ++a2;
            v4 |= 0x1000u;
          }
          else
          {
            v4 |= 0x10u;
          }
          goto LABEL_207;
        }
        if ( v10 != 116 )
        {
          if ( v10 == 119 )
          {
            v4 |= 0x800u;
            goto LABEL_204;
          }
          if ( v10 != 122 )
            goto LABEL_204;
        }
      }
LABEL_162:
      v4 |= 0x8000u;
      if ( v10 == 73 )
      {
        if ( *a2 == 54 )
        {
          if ( a2[1] == 52 )
          {
            a2 += 2;
LABEL_204:
            LOWORD(v14) = 32;
            goto LABEL_207;
          }
        }
        else if ( *a2 == 51 && a2[1] == 50 )
        {
          a2 += 2;
          v4 &= ~0x8000u;
          goto LABEL_204;
        }
      }
      else if ( v10 == 106 )
      {
        goto LABEL_204;
      }
      v51 = *a2;
      LOWORD(v51) = v51 - 88;
      if ( (unsigned __int16)v51 > 0x20u )
        goto LABEL_177;
      v52 = 0x120821001LL;
      if ( !_bittest64(&v52, v51) )
        goto LABEL_177;
LABEL_201:
      LOWORD(v14) = 32;
      goto LABEL_207;
    }
    LOWORD(v14) = 32;
    v4 |= 0x20u;
LABEL_207:
    v10 = *a2;
    v7 = v67;
  }
  while ( *a2 );
  if ( !v13 || v13 == 7 )
    return (unsigned int)v11;
LABEL_211:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
