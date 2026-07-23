/*
 * XREFs of _winput_s @ 0x18012ECD4
 * Callers:
 *     _swinput_s @ 0x18012EC00 (_swinput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     iswctype @ 0x180122D50 (iswctype.c)
 *     ReadString_1 @ 0x18012E80C (ReadString_1.c)
 *     ReadStringDelimited_1 @ 0x18012EA54 (ReadStringDelimited_1.c)
 *     _whiteout @ 0x18012EC7C (_whiteout.c)
 *     _fgetwc_nolock @ 0x18012F69C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18012F6E8 (_ungetwc_nolock.c)
 */

__int64 __fastcall winput_s(FILE *Stream, wint_t *a2, _BYTE **a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // r14
  int v5; // edi
  FILE *v6; // rsi
  int v7; // r8d
  wint_t v8; // ax
  char v9; // dl
  int v10; // r15d
  unsigned int v11; // ecx
  wint_t v12; // ax
  int v13; // ecx
  int v14; // r10d
  char v15; // r13
  char v16; // r8
  char v17; // r12
  char v18; // si
  int v19; // r11d
  unsigned int v20; // edx
  unsigned __int16 v21; // ax
  unsigned __int16 *v22; // rax
  __int64 v23; // r9
  char v24; // r8
  _BYTE *v25; // rdx
  unsigned __int16 *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // r13
  unsigned int v30; // esi
  unsigned __int16 v31; // ax
  _BYTE **v32; // rax
  int v33; // eax
  int v34; // edx
  char v35; // cl
  FILE *v36; // r12
  wint_t v37; // ax
  int v38; // r8d
  int v39; // r12d
  wint_t v40; // ax
  wint_t v41; // ax
  __int64 v42; // rcx
  unsigned __int16 v43; // dx
  __int64 v44; // rcx
  wint_t v45; // ax
  __int64 v46; // rax
  int v47; // ecx
  unsigned __int16 v48; // dx
  int v49; // ecx
  wint_t v50; // ax
  char v51; // al
  char v52; // cl
  char v53; // al
  int v54; // eax
  unsigned __int16 *v55; // rcx
  wint_t v56; // ax
  wint_t v57; // ax
  FILE *v58; // rdx
  int v60; // [rsp+50h] [rbp-49h] BYREF
  char v61; // [rsp+54h] [rbp-45h]
  int v62; // [rsp+58h] [rbp-41h] BYREF
  char v63; // [rsp+5Ch] [rbp-3Dh]
  char v64; // [rsp+5Dh] [rbp-3Ch]
  int v65; // [rsp+60h] [rbp-39h]
  unsigned int v66; // [rsp+64h] [rbp-35h] BYREF
  int v67; // [rsp+68h] [rbp-31h]
  int v68; // [rsp+6Ch] [rbp-2Dh]
  int v69; // [rsp+70h] [rbp-29h]
  int v70; // [rsp+78h] [rbp-21h]
  __int64 v71; // [rsp+80h] [rbp-19h]
  int v72; // [rsp+88h] [rbp-11h]
  _BYTE **v73; // [rsp+90h] [rbp-9h]
  _BYTE *v74; // [rsp+98h] [rbp-1h]
  __int64 v75[10]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int16 *v77; // [rsp+108h] [rbp+6Fh] BYREF
  _BYTE **v78; // [rsp+110h] [rbp+77h]
  char v79; // [rsp+118h] [rbp+7Fh]

  v78 = a3;
  v3 = 0;
  v4 = a2;
  v71 = 0LL;
  LOWORD(v5) = 0;
  v67 = 0;
  v6 = Stream;
  LOWORD(v60) = 0;
  v7 = 0;
  v73 = 0LL;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v8 = *a2;
  v9 = 0;
  v79 = 0;
  v10 = 0;
  v62 = 0;
  v11 = 0;
  v66 = 0;
  if ( !v8 )
    goto LABEL_210;
  while ( iswctype(v8, 8u) )
  {
    v62 = v10 - 1;
    v12 = whiteout(&v62, v6);
    if ( v12 != 0xFFFF )
      ungetwc_nolock(v12, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v10 = v62;
LABEL_194:
    v8 = *v4;
    if ( !*v4 )
      goto LABEL_207;
  }
  if ( *v4 != 37 )
    goto LABEL_190;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_190:
    v62 = ++v10;
    v56 = fgetwc_nolock(v6);
    v5 = v56;
    LOWORD(v60) = v56;
    v57 = *v4++;
    v67 = v5;
    v55 = v4;
    if ( v57 == (_WORD)v5 )
      goto LABEL_191;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_207;
    v58 = v6;
    goto LABEL_206;
  }
  v69 = 0;
  v72 = 0;
  v13 = 0;
  v65 = 0;
  v14 = 0;
  v63 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1;
  v19 = 0;
  do
  {
    v77 = ++v4;
    v20 = *v4;
    if ( (v20 & 0xFF00) == 0 )
    {
      v13 = v65;
      if ( (pctype[(unsigned __int8)v20] & 4) != 0 )
      {
        v13 = ++v65;
        v14 = v20 + 2 * (5 * v14 - 24);
        continue;
      }
    }
    if ( v20 <= 0x68 )
    {
      switch ( v20 )
      {
        case 'h':
          --v18;
          --v17;
          continue;
        case '*':
          ++v15;
          continue;
        case 'F':
          continue;
        case 'I':
          v21 = v4[1];
          if ( v21 == 54 )
          {
            v22 = v4 + 2;
            if ( v4[2] == 52 )
              goto LABEL_26;
          }
          else if ( v21 == 51 )
          {
            v26 = v4 + 2;
            if ( v4[2] == 50 )
            {
              v4 += 2;
              v77 = v26;
              continue;
            }
          }
LABEL_41:
          v27 = v4[1];
          LOWORD(v27) = v27 - 88;
          if ( (unsigned __int16)v27 <= 0x20u )
          {
            v28 = 0x120821001LL;
            if ( _bittest64(&v28, v27) )
              goto LABEL_27;
          }
          ++v19;
          v71 = 0LL;
          break;
        case 'L':
          ++v18;
          continue;
        case 'N':
          continue;
      }
LABEL_44:
      ++v16;
      continue;
    }
    switch ( v20 )
    {
      case 'j':
        goto LABEL_27;
      case 'l':
        v22 = v4 + 1;
        if ( v4[1] == 108 )
        {
LABEL_26:
          v4 = v22;
          v77 = v22;
LABEL_27:
          v71 = 0LL;
          ++v19;
          continue;
        }
        ++v18;
        break;
      case 't':
        goto LABEL_41;
      case 'w':
        break;
      case 'z':
        goto LABEL_41;
      default:
        goto LABEL_44;
    }
    ++v17;
  }
  while ( !v16 );
  v5 = v67;
  v23 = 0LL;
  v10 = v62;
  v24 = v15;
  v64 = v15;
  v61 = v18;
  v70 = v19;
  v68 = v14;
  if ( v15 )
  {
    v25 = 0LL;
    v74 = 0LL;
  }
  else
  {
    v73 = v78++;
    v25 = *(v78 - 1);
    v74 = v25;
  }
  v75[0] = (__int64)v25;
  v29 = 0;
  if ( !v17 )
    v17 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v30 = *v4 | 0x20;
  if ( v30 == 110 )
  {
LABEL_58:
    if ( !v13 || v14 )
    {
      if ( !v24 && (v30 == 99 || v30 == 115 || v30 == 123) )
      {
        v32 = v73;
        v25 = *v73++;
        v78 = v73 + 1;
        v23 = *((unsigned int *)v32 + 2);
        v74 = v25;
        v75[0] = (__int64)v25;
        if ( !v23 )
        {
          v11 = v66;
          v7 = 0;
          if ( v17 <= 0 )
            *v25 = 0;
          else
            *(_WORD *)v25 = 0;
          goto LABEL_209;
        }
      }
      if ( v30 > 0x70 )
      {
        switch ( v30 )
        {
          case 's':
            v35 = 32;
            break;
          case 'u':
            goto LABEL_73;
          case 'x':
            goto LABEL_78;
          case '{':
            v35 = 64;
            break;
          default:
            goto LABEL_87;
        }
        v34 = v65;
      }
      else
      {
        if ( v30 == 112 )
        {
          v61 = 1;
          v70 = v19 + 1;
          v71 = 0LL;
          goto LABEL_73;
        }
        if ( v30 != 99 )
        {
          if ( v30 == 100 )
          {
LABEL_72:
            v13 = v65;
LABEL_73:
            if ( (_WORD)v5 == 45 )
            {
              v63 = 1;
              goto LABEL_112;
            }
            if ( (_WORD)v5 == 43 )
            {
LABEL_112:
              v68 = v14 - 1;
              if ( v14 == 1 && v13 )
              {
                v29 = 1;
                v39 = 0;
LABEL_118:
                v38 = v65;
LABEL_119:
                if ( v70 )
                {
                  if ( !v29 )
                  {
                    while ( 1 )
                    {
                      if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                      {
                        if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                          goto LABEL_138;
                        v42 = v71;
                        if ( v30 == 111 )
                        {
                          if ( (unsigned __int16)v5 >= 0x38u )
                          {
                            v29 = 1;
                            goto LABEL_134;
                          }
                          v42 = 8 * v71;
                        }
                        else
                        {
                          v42 = 10 * v71;
                        }
                        v71 = v42;
                      }
                      else
                      {
                        if ( (v5 & 0xFF00) != 0 || (v43 = pctype[(unsigned __int8)v5], (v43 & 0x80u) == 0) )
                        {
LABEL_138:
                          v62 = --v10;
                          if ( (_WORD)v5 != 0xFFFF )
                            ungetwc_nolock(v5, Stream);
                          break;
                        }
                        v42 = 16 * v71;
                        v71 *= 16LL;
                        if ( (v43 & 4) == 0 )
                        {
                          LOWORD(v5) = (v5 & 0xFFDF) - 7;
                          v67 = v5;
                          LOWORD(v60) = v5;
                        }
                      }
LABEL_134:
                      if ( v29 )
                        goto LABEL_138;
                      ++v72;
                      v44 = (unsigned __int16)v5 + v42 - 48;
                      v71 = v44;
                      if ( v38 )
                      {
                        if ( !--v39 )
                          goto LABEL_141;
                      }
                      v62 = ++v10;
                      v45 = fgetwc_nolock(Stream);
                      v38 = v65;
                      v5 = v45;
                      v67 = v45;
                      LOWORD(v60) = v45;
                    }
                  }
                  v44 = v71;
LABEL_141:
                  v46 = -v44;
                  if ( !v63 )
                    v46 = v44;
                  v71 = v46;
LABEL_167:
                  if ( v72 )
                  {
                    if ( !v64 )
                    {
                      ++v66;
                      v25 = v74;
                      v33 = v69;
LABEL_170:
                      if ( v70 )
                      {
                        *(_QWORD *)v25 = v71;
                      }
                      else if ( v61 )
                      {
                        *(_DWORD *)v25 = v33;
                      }
                      else
                      {
                        *(_WORD *)v25 = v33;
                      }
                    }
LABEL_188:
                    ++v79;
                    v6 = Stream;
                    v55 = ++v4;
LABEL_191:
                    if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v55[1] != 110) )
                      goto LABEL_207;
                    goto LABEL_194;
                  }
LABEL_207:
                  v7 = 0;
LABEL_208:
                  v11 = v66;
LABEL_209:
                  v9 = v79;
LABEL_210:
                  if ( (_WORD)v5 == 0xFFFF )
                    goto LABEL_214;
                  if ( v7 != 1 )
                    return v11;
                  invalid_parameter();
                  return v66;
                }
                if ( v29 )
                {
LABEL_164:
                  v49 = v69;
LABEL_165:
                  if ( v63 )
                    v69 = -v49;
                  goto LABEL_167;
                }
                while ( 1 )
                {
                  if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                      goto LABEL_162;
                    v47 = v69;
                    if ( v30 == 111 )
                    {
                      if ( (unsigned __int16)v5 >= 0x38u )
                      {
                        v29 = 1;
                        goto LABEL_158;
                      }
                      v47 = 8 * v69;
                    }
                    else
                    {
                      v47 = 10 * v69;
                    }
                    v69 = v47;
                  }
                  else
                  {
                    if ( (v5 & 0xFF00) != 0 || (v48 = pctype[(unsigned __int8)v5], (v48 & 0x80u) == 0) )
                    {
LABEL_162:
                      v62 = --v10;
                      if ( (_WORD)v5 != 0xFFFF )
                        ungetwc_nolock(v5, Stream);
                      goto LABEL_164;
                    }
                    v47 = 16 * v69;
                    v69 *= 16;
                    if ( (v48 & 4) == 0 )
                    {
                      LOWORD(v5) = (v5 & 0xFFDF) - 7;
                      v67 = v5;
                      LOWORD(v60) = v5;
                    }
                  }
LABEL_158:
                  if ( v29 )
                    goto LABEL_162;
                  ++v72;
                  v49 = (unsigned __int16)v5 + v47 - 48;
                  v69 = v49;
                  if ( v38 )
                  {
                    if ( !--v39 )
                      goto LABEL_165;
                  }
                  v62 = ++v10;
                  v50 = fgetwc_nolock(Stream);
                  v38 = v65;
                  v5 = v50;
                  v67 = v50;
                  LOWORD(v60) = v50;
                }
              }
              v62 = ++v10;
              v5 = fgetwc_nolock(Stream);
              goto LABEL_116;
            }
LABEL_117:
            v39 = v68;
            goto LABEL_118;
          }
          if ( v30 != 105 )
          {
            if ( v30 == 110 )
            {
              v33 = v10;
              if ( !v24 )
                goto LABEL_170;
              goto LABEL_188;
            }
            if ( v30 == 111 )
              goto LABEL_72;
LABEL_87:
            if ( *v4 != (_WORD)v5 )
            {
              if ( (_WORD)v5 != 0xFFFF )
                ungetwc_nolock(v5, Stream);
              v7 = 1;
              goto LABEL_208;
            }
            --v79;
            if ( !v24 )
              v78 = v73;
            goto LABEL_188;
          }
          v13 = v65;
          v30 = 100;
LABEL_78:
          if ( (_WORD)v5 == 45 )
          {
            v63 = 1;
          }
          else if ( (_WORD)v5 != 43 )
          {
            goto LABEL_95;
          }
          v68 = v14 - 1;
          if ( v14 != 1 || !v13 )
          {
            v36 = Stream;
            v62 = ++v10;
            v40 = fgetwc_nolock(Stream);
            v5 = v40;
            LOWORD(v60) = v40;
            v67 = v40;
LABEL_96:
            if ( (_WORD)v5 == 48 )
            {
              v62 = ++v10;
              v37 = fgetwc_nolock(v36);
              v5 = v37;
              LOWORD(v60) = v37;
              v67 = v37;
              if ( ((v37 - 88) & 0xFFDF) == 0 )
              {
                v62 = ++v10;
                v41 = fgetwc_nolock(v36);
                v38 = v65;
                v5 = v41;
                v39 = v68;
                v67 = v41;
                LOWORD(v60) = v41;
                if ( v65 )
                {
                  v39 = v68 - 2;
                  if ( v68 - 2 < 1 )
                    ++v29;
                }
                v30 = 120;
                goto LABEL_119;
              }
              v72 = 1;
              if ( v30 != 120 )
              {
                v38 = v65;
                v39 = v68;
                if ( v65 )
                {
                  v39 = v68 - 1;
                  if ( v68 == 1 )
                    ++v29;
                }
                v30 = 111;
                goto LABEL_119;
              }
              v62 = --v10;
              if ( v37 != 0xFFFF )
                ungetwc_nolock(v37, v36);
              v5 = 48;
LABEL_116:
              LOWORD(v60) = v5;
              v67 = v5;
              goto LABEL_117;
            }
            goto LABEL_117;
          }
          v29 = 1;
LABEL_95:
          v36 = Stream;
          goto LABEL_96;
        }
        v34 = v65;
        v35 = 16;
        if ( !v65 )
        {
          v34 = 1;
          ++v14;
        }
      }
      v51 = v35 | 1;
      if ( !v34 )
        v51 = v35;
      v52 = v51 | 2;
      if ( v17 <= 0 )
        v52 = v51;
      v53 = v52 | 4;
      if ( !v24 )
        v53 = v52;
      if ( v30 == 123 )
      {
        v54 = ReadStringDelimited_1(v53, &v77, (wint_t *)&v60, &v62, (__int64)v75, v14, Stream, v23, &v66);
        v4 = v77;
      }
      else
      {
        v54 = ReadString_1(v53, 0LL, (wint_t *)&v60, &v62, (__int64)v75, v14, Stream, v23, &v66);
      }
      LOWORD(v5) = v60;
      if ( v54 )
        goto LABEL_207;
      v10 = v62;
      v67 = (unsigned __int16)v60;
      goto LABEL_188;
    }
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_207;
    v58 = Stream;
LABEL_206:
    ungetwc_nolock(v5, v58);
    goto LABEL_207;
  }
  if ( v30 == 99 || v30 == 123 )
  {
    v10 = ++v62;
    v31 = fgetwc_nolock(Stream);
  }
  else
  {
    v31 = whiteout(&v62, Stream);
    v10 = v62;
  }
  v5 = v31;
  LOWORD(v60) = v31;
  v67 = v31;
  if ( v31 != 0xFFFF )
  {
    v25 = v74;
    v23 = 0LL;
    v14 = v68;
    v19 = v70;
    v13 = v65;
    v24 = v64;
    goto LABEL_58;
  }
  v9 = v79;
LABEL_214:
  if ( v66 || v9 )
    return v66;
  return v3;
}
