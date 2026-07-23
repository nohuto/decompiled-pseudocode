/*
 * XREFs of _input_l @ 0x180129C10
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     isleadbyte @ 0x180122C58 (isleadbyte.c)
 *     __pctype_func @ 0x180126670 (__pctype_func.c)
 *     ReadString @ 0x1801298A8 (ReadString.c)
 *     ReadStringDelimited @ 0x180129A84 (ReadStringDelimited.c)
 *     _inc @ 0x180129BE0 (_inc.c)
 *     _ungetc_nolock @ 0x18012A724 (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  FILE *v5; // r14
  unsigned __int8 *v6; // rsi
  unsigned __int8 v7; // bl
  int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // r13d
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // r15d
  char v14; // r14
  char v15; // r12
  int v16; // edi
  __int64 v17; // rbx
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // al
  char v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // bl
  unsigned int v24; // r14d
  int v25; // edx
  int v26; // r8d
  int v27; // ecx
  char v28; // cl
  FILE *v29; // r12
  FILE *v30; // r12
  __int64 v31; // rdx
  int v32; // ebx
  const unsigned __int16 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // ecx
  int v38; // ebx
  const unsigned __int16 *v39; // rax
  __int64 v40; // rcx
  bool v41; // zf
  int v42; // ecx
  char v43; // al
  char v44; // dl
  char v45; // cl
  int v46; // eax
  unsigned __int8 *v47; // rbx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  FILE *v51; // rdx
  char v52; // [rsp+48h] [rbp-29h]
  char v53; // [rsp+49h] [rbp-28h]
  char v54; // [rsp+4Ah] [rbp-27h]
  char v55; // [rsp+4Bh] [rbp-26h]
  char v56; // [rsp+4Ch] [rbp-25h]
  int v57; // [rsp+50h] [rbp-21h] BYREF
  int v58; // [rsp+54h] [rbp-1Dh] BYREF
  int v59; // [rsp+58h] [rbp-19h]
  int v60; // [rsp+5Ch] [rbp-15h]
  int Character; // [rsp+60h] [rbp-11h]
  int v62; // [rsp+64h] [rbp-Dh]
  __int64 v63; // [rsp+68h] [rbp-9h]
  int v64; // [rsp+70h] [rbp-1h]
  int v65; // [rsp+74h] [rbp+3h]
  int v66; // [rsp+78h] [rbp+7h]
  _DWORD v67[3]; // [rsp+7Ch] [rbp+Bh] BYREF
  __int64 v68; // [rsp+88h] [rbp+17h]
  char SrcCh[8]; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned __int8 *v71; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v72; // [rsp+F0h] [rbp+7Fh]

  v72 = a4;
  v4 = 0;
  v5 = Stream;
  Character = 0;
  v68 = 0LL;
  v6 = a2;
  v63 = 0LL;
  v58 = 0;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  result = 0LL;
  v55 = 0;
  v59 = 0;
  v57 = 0;
  v67[0] = 0;
  if ( !v7 )
    return result;
  v10 = -1;
  while ( (_pctype_func()[v7] & 8) != 0 )
  {
    --v8;
    while ( 1 )
    {
      v59 = ++v8;
      v57 = v8;
      v11 = inc(v5);
      if ( v11 == -1 )
        break;
      if ( (_pctype_func()[(unsigned __int8)v11] & 8) == 0 )
      {
        ungetc_nolock(v11, v5);
        goto LABEL_10;
      }
    }
    do
LABEL_10:
      v12 = *++v6;
    while ( (_pctype_func()[v12] & 8) != 0 );
LABEL_190:
    v7 = *v6;
    if ( !*v6 )
      goto LABEL_199;
  }
  if ( *v6 != 37 )
    goto LABEL_184;
  if ( v6[1] == 37 )
  {
    ++v6;
LABEL_184:
    v59 = ++v8;
    v57 = v8;
    v4 = inc(v5);
    Character = v4;
    v58 = v4;
    v48 = *v6++;
    v47 = v6;
    if ( v48 == v4 )
    {
      if ( !isleadbyte((unsigned __int8)v4) || (v49 = inc(v5), v50 = *v6, ++v6, v47 = v6, v50 == v49) )
      {
LABEL_187:
        if ( v4 == -1 && (*v6 != 37 || v47[1] != 110) )
          goto LABEL_200;
        goto LABEL_190;
      }
      if ( v49 != -1 )
        ungetc_nolock(v49, v5);
    }
    if ( v4 == -1 )
      goto LABEL_200;
    v51 = v5;
    goto LABEL_198;
  }
  v60 = 0;
  v13 = 0;
  v66 = 0;
  v65 = 0;
  v14 = 0;
  v15 = 0;
  v56 = 0;
  v52 = 0;
  v16 = 0;
  v54 = 1;
  do
  {
    v71 = ++v6;
    v17 = *v6;
    v18 = (unsigned __int8 *)_pctype_func();
    if ( (v18[2 * v17] & 4) != 0 )
    {
      ++v65;
      v13 = v17 + 2 * (5 * v13 - 24);
      goto LABEL_30;
    }
    if ( (unsigned __int8)v17 > 0x68u )
    {
      switch ( (_BYTE)v17 )
      {
        case 'j':
          goto LABEL_29;
        case 'l':
          v18 = v6 + 1;
          if ( v6[1] == 108 )
          {
LABEL_28:
            v6 = v18;
            v71 = v18;
            goto LABEL_29;
          }
          ++v54;
          break;
        case 't':
          goto LABEL_44;
        case 'w':
          break;
        case 'z':
          goto LABEL_44;
        default:
LABEL_47:
          ++v14;
          goto LABEL_30;
      }
      ++v15;
      goto LABEL_30;
    }
    if ( (_BYTE)v17 == 104 )
    {
      --v54;
      --v15;
      goto LABEL_30;
    }
    if ( (_BYTE)v17 != 42 )
    {
      if ( (_BYTE)v17 == 70 )
        goto LABEL_30;
      if ( (_BYTE)v17 != 73 )
      {
        if ( (_BYTE)v17 == 76 )
        {
          ++v54;
        }
        else if ( (_BYTE)v17 != 78 )
        {
          goto LABEL_47;
        }
LABEL_30:
        v20 = v52;
        continue;
      }
      v19 = v6[1];
      if ( v19 == 54 )
      {
        v18 = v6 + 2;
        if ( v6[2] == 52 )
          goto LABEL_28;
      }
      else if ( v19 == 51 )
      {
        v18 = v6 + 2;
        if ( v6[2] == 50 )
        {
          v6 += 2;
          v71 = v18;
          goto LABEL_30;
        }
      }
LABEL_44:
      LOBYTE(v18) = v6[1] - 88;
      if ( (unsigned __int8)v18 > 0x20u || (v22 = 0x120821001LL, !_bittest64(&v22, (unsigned __int64)v18)) )
      {
        ++v16;
        v63 = 0LL;
        goto LABEL_47;
      }
LABEL_29:
      ++v16;
      v63 = 0LL;
      goto LABEL_30;
    }
    v20 = ++v52;
  }
  while ( !v14 );
  v64 = v16;
  v4 = Character;
  v62 = v13;
  v8 = v59;
  if ( v20 )
  {
    v21 = 0LL;
  }
  else
  {
    v68 = v72;
    v72 += 8LL;
    v21 = *(_QWORD *)(v72 - 8);
  }
  v23 = 0;
  *(_QWORD *)&v67[1] = v21;
  *(_QWORD *)SrcCh = v21;
  v53 = 0;
  if ( !v15 )
    v15 = ((*v6 - 67) & 0xEF) != 0 ? -1 : 1;
  v24 = *v6 | 0x20;
  if ( v24 == 110 )
  {
LABEL_63:
    v25 = v65;
    v26 = v62;
    if ( !v65 || v62 )
    {
      if ( v24 > 0x70 )
      {
        switch ( v24 )
        {
          case 's':
            v28 = 32;
            break;
          case 'u':
            goto LABEL_72;
          case 'x':
            goto LABEL_77;
          case '{':
            v28 = 64;
            break;
          default:
            goto LABEL_86;
        }
      }
      else
      {
        if ( v24 == 112 )
        {
          ++v64;
          v63 = 0LL;
          v54 = 1;
          goto LABEL_72;
        }
        if ( v24 != 99 )
        {
          if ( v24 == 100 )
            goto LABEL_72;
          if ( v24 != 105 )
          {
            if ( v24 == 110 )
            {
              v27 = v8;
              if ( !v20 )
                goto LABEL_165;
              goto LABEL_182;
            }
            if ( v24 == 111 )
            {
LABEL_72:
              if ( v4 == 45 )
              {
                v56 = 1;
              }
              else if ( v4 != 43 )
              {
                goto LABEL_102;
              }
              --v62;
              if ( v26 != 1 || !v65 )
              {
                v30 = Stream;
                v59 = ++v8;
                v57 = v8;
                v4 = inc(Stream);
                Character = v4;
                v58 = v4;
                goto LABEL_103;
              }
              v23 = 1;
              v53 = 1;
LABEL_102:
              v30 = Stream;
LABEL_103:
              if ( v64 )
              {
                if ( !v23 )
                {
                  while ( 1 )
                  {
                    if ( ((v24 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
                        goto LABEL_134;
                      v31 = v63;
                      if ( v24 == 111 )
                      {
                        if ( v4 >= 56 )
                        {
                          v23 = 1;
                          v53 = 1;
                          goto LABEL_130;
                        }
                        v31 = 8 * v63;
                      }
                      else
                      {
                        v31 = 10 * v63;
                      }
                      v63 = v31;
                    }
                    else
                    {
                      if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) >= 0 )
                        goto LABEL_134;
                      v63 *= 16LL;
                      v32 = (char)v4;
                      v33 = _pctype_func();
                      v31 = v63;
                      v34 = (unsigned __int8)v4;
                      v4 = ((char)v4 & 0xFFFFFFDF) - 7;
                      if ( (v33[v34] & 4) != 0 )
                        v4 = v32;
                      v23 = v53;
                      Character = v4;
                      v58 = v4;
                    }
LABEL_130:
                    if ( v23 )
                    {
LABEL_134:
                      v59 = --v8;
                      v57 = v8;
                      if ( v4 != -1 )
                        ungetc_nolock(v4, v30);
                      break;
                    }
                    ++v66;
                    v35 = v4 - 48 + v31;
                    v63 = v35;
                    if ( v65 )
                    {
                      if ( !--v62 )
                        goto LABEL_137;
                    }
                    v59 = ++v8;
                    v57 = v8;
                    v4 = inc(v30);
                    Character = v4;
                    v58 = v4;
                  }
                }
                v35 = v63;
LABEL_137:
                v36 = -v35;
                if ( !v56 )
                  v36 = v35;
                v63 = v36;
LABEL_162:
                if ( v66 )
                {
                  if ( !v52 )
                  {
                    ++v67[0];
                    v27 = v60;
LABEL_165:
                    if ( v64 )
                    {
                      **(_QWORD **)&v67[1] = v63;
                    }
                    else if ( v54 )
                    {
                      **(_DWORD **)&v67[1] = v27;
                    }
                    else
                    {
                      **(_WORD **)&v67[1] = v27;
                    }
                  }
LABEL_182:
                  ++v55;
                  v5 = Stream;
                  v47 = ++v6;
                  goto LABEL_187;
                }
LABEL_199:
                if ( v4 == -1 )
                  goto LABEL_200;
                return v67[0];
              }
              if ( v23 )
              {
LABEL_159:
                v42 = v60;
LABEL_160:
                if ( v56 )
                  v60 = -v42;
                goto LABEL_162;
              }
              while ( 1 )
              {
                if ( ((v24 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
                    goto LABEL_157;
                  v37 = v60;
                  if ( v24 == 111 )
                  {
                    if ( v4 >= 56 )
                    {
                      v23 = 1;
                      v53 = 1;
                      goto LABEL_153;
                    }
                    v37 = 8 * v60;
                  }
                  else
                  {
                    v37 = 10 * v60;
                  }
                  v60 = v37;
                }
                else
                {
                  if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) >= 0 )
                    goto LABEL_157;
                  v60 *= 16;
                  v38 = (char)v4;
                  v39 = _pctype_func();
                  v40 = (unsigned __int8)v4;
                  v4 = ((char)v4 & 0xFFFFFFDF) - 7;
                  v41 = (v39[v40] & 4) == 0;
                  v37 = v60;
                  if ( !v41 )
                    v4 = v38;
                  v23 = v53;
                  Character = v4;
                  v58 = v4;
                }
LABEL_153:
                if ( v23 )
                {
LABEL_157:
                  v59 = --v8;
                  v57 = v8;
                  if ( v4 != -1 )
                    ungetc_nolock(v4, v30);
                  goto LABEL_159;
                }
                ++v66;
                v42 = v4 + v37 - 48;
                v60 = v42;
                if ( v65 )
                {
                  if ( !--v62 )
                    goto LABEL_160;
                }
                v59 = ++v8;
                v57 = v8;
                v4 = inc(v30);
                Character = v4;
                v58 = v4;
              }
            }
LABEL_86:
            if ( *v6 != v4 )
              goto LABEL_192;
            --v55;
            if ( !v20 )
              v72 = v68;
            goto LABEL_182;
          }
          v24 = 100;
LABEL_77:
          if ( v4 == 45 )
          {
            v56 = 1;
          }
          else if ( v4 != 43 )
          {
            goto LABEL_94;
          }
          --v62;
          if ( v26 != 1 || !v65 )
          {
            v29 = Stream;
            v59 = ++v8;
            v57 = v8;
            v4 = inc(Stream);
            Character = v4;
            v58 = v4;
LABEL_95:
            if ( v4 == 48 )
            {
              v59 = ++v8;
              v57 = v8;
              v4 = inc(v29);
              Character = v4;
              v58 = v4;
              if ( (((_BYTE)v4 - 88) & 0xDF) != 0 )
              {
                v66 = 1;
                if ( v24 == 120 )
                {
                  v59 = --v8;
                  v57 = v8;
                  if ( v4 != -1 )
                    ungetc_nolock(v4, v29);
                  v4 = 48;
                  Character = 48;
                  v58 = 48;
                }
                else
                {
                  if ( v65 )
                  {
                    if ( !--v62 )
                      v53 = ++v23;
                  }
                  v24 = 111;
                }
              }
              else
              {
                v59 = ++v8;
                v57 = v8;
                v4 = inc(v29);
                Character = v4;
                v58 = v4;
                if ( v65 )
                {
                  v62 -= 2;
                  if ( v62 < 1 )
                    v53 = ++v23;
                }
                v24 = 120;
              }
            }
            goto LABEL_102;
          }
          v23 = 1;
          v53 = 1;
LABEL_94:
          v29 = Stream;
          goto LABEL_95;
        }
        v28 = 16;
        if ( !v65 )
        {
          v25 = 1;
          v26 = v62 + 1;
        }
      }
      v43 = v28 | 1;
      if ( !v25 )
        v43 = v28;
      v44 = v43 | 2;
      if ( v15 <= 0 )
        v44 = v43;
      v45 = v44 | 4;
      if ( !v20 )
        v45 = v44;
      if ( v24 == 123 )
      {
        v46 = ReadStringDelimited(v45, &v71, &v58, &v57, SrcCh, v26, Stream, v67);
        v6 = v71;
      }
      else
      {
        v46 = ReadString(v45, 0LL, &v58, &v57, SrcCh, v26, Stream, v67);
      }
      v4 = v58;
      if ( v46 )
        goto LABEL_199;
      v8 = v57;
      v59 = v57;
      Character = v58;
      goto LABEL_182;
    }
LABEL_192:
    if ( v4 == -1 )
      goto LABEL_200;
    v51 = Stream;
LABEL_198:
    ungetc_nolock(v4, v51);
    goto LABEL_199;
  }
  if ( v24 == 99 || v24 == 123 )
  {
    v8 = v59 + 1;
    v59 = v8;
    v57 = v8;
    v4 = inc(Stream);
    Character = v4;
    v58 = v4;
  }
  else
  {
    do
    {
      v57 = ++v8;
      v4 = inc(Stream);
      Character = v4;
    }
    while ( v4 != -1 && (_pctype_func()[(unsigned __int8)v4] & 8) != 0 );
    v23 = 0;
    v59 = v8;
    v58 = v4;
  }
  if ( v4 != -1 )
  {
    v20 = v52;
    goto LABEL_63;
  }
LABEL_200:
  if ( v67[0] || v55 )
    return v67[0];
  return v10;
}
