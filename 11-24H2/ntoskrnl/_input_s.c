/*
 * XREFs of _input_s @ 0x140503C80
 * Callers:
 *     _sinput_s @ 0x140504528 (_sinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 *     ReadString @ 0x140503930 (ReadString.c)
 *     ReadStringDelimited @ 0x140503AF0 (ReadStringDelimited.c)
 *     _inc @ 0x140503C50 (_inc.c)
 *     _ungetc_nolock @ 0x140505414 (_ungetc_nolock.c)
 */

__int64 __fastcall input_s(FILE *a1, unsigned __int8 *a2, _BYTE **a3)
{
  int v4; // ebx
  int v5; // edx
  __int64 v6; // r11
  unsigned __int8 v7; // cl
  unsigned int v8; // r13d
  __int64 result; // rax
  int v10; // esi
  int v11; // r8d
  unsigned __int8 *v12; // rax
  int v13; // edi
  int v14; // r10d
  char v15; // r9
  char v16; // dl
  char v17; // r15
  int v18; // r12d
  char v19; // r11
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  char v22; // cl
  __int64 v23; // r9
  FILE *v24; // r11
  _BYTE *v25; // rdx
  __int64 v26; // rcx
  char v27; // r12
  unsigned int v28; // edi
  int v29; // r8d
  _BYTE **v30; // rax
  int v31; // eax
  char v32; // cl
  int v33; // r15d
  int v34; // eax
  __int64 v35; // rdx
  wchar_t v36; // cx
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  int v41; // edx
  wchar_t v42; // cx
  int v43; // eax
  int v44; // edx
  int v45; // eax
  char v46; // al
  char v47; // cl
  char v48; // al
  int v49; // eax
  unsigned __int8 *v50; // rcx
  int v51; // eax
  FILE *v52; // rdx
  char v53; // [rsp+50h] [rbp-49h]
  char v54; // [rsp+51h] [rbp-48h]
  char v55; // [rsp+52h] [rbp-47h]
  __int64 v56; // [rsp+54h] [rbp-45h] BYREF
  int v57; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v58; // [rsp+60h] [rbp-39h]
  int v59; // [rsp+64h] [rbp-35h]
  int v60; // [rsp+68h] [rbp-31h]
  int v61; // [rsp+6Ch] [rbp-2Dh]
  int v62; // [rsp+70h] [rbp-29h]
  __int64 v63; // [rsp+78h] [rbp-21h]
  int v64; // [rsp+80h] [rbp-19h]
  _BYTE **v65; // [rsp+88h] [rbp-11h]
  _BYTE *v66; // [rsp+90h] [rbp-9h]
  __int64 v67; // [rsp+98h] [rbp-1h] BYREF
  __int64 v68; // [rsp+A0h] [rbp+7h]
  unsigned __int8 *v70; // [rsp+108h] [rbp+6Fh] BYREF
  _BYTE **v71; // [rsp+110h] [rbp+77h]
  char v72; // [rsp+118h] [rbp+7Fh]

  v71 = a3;
  v63 = 0LL;
  v4 = 0;
  v57 = 0;
  v5 = 0;
  v61 = 0;
  v6 = (__int64)a1;
  v65 = 0LL;
  if ( !a2 || !a1 )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = -1;
  v54 = 0;
  result = 0LL;
  v10 = 0;
  v56 = 0LL;
  if ( !v7 )
    goto LABEL_199;
  while ( (pctype[v7] & 8) != 0 )
  {
    --v10;
    while ( 1 )
    {
      HIDWORD(v56) = ++v10;
      v11 = inc(v6);
      if ( v11 == -1 )
        break;
      v6 = (__int64)a1;
      if ( (pctype[(unsigned __int8)v11] & 8) == 0 )
      {
        ungetc_nolock(v11, a1);
        goto LABEL_9;
      }
    }
    do
LABEL_9:
      ++a2;
    while ( (pctype[*a2] & 8) != 0 );
LABEL_192:
    v7 = *a2;
    if ( !*a2 )
    {
LABEL_211:
      v5 = 0;
      goto LABEL_198;
    }
    v6 = (__int64)a1;
  }
  if ( v7 != 37 )
    goto LABEL_188;
  if ( a2[1] == 37 )
  {
    ++a2;
LABEL_188:
    HIDWORD(v56) = ++v10;
    v4 = inc(v6);
    v57 = v4;
    v51 = *a2++;
    v50 = a2;
    if ( v51 == v4 )
      goto LABEL_189;
    if ( v4 == -1 )
      goto LABEL_197;
    v52 = a1;
    goto LABEL_196;
  }
  v12 = 0LL;
  v59 = 0;
  v64 = 0;
  v13 = 0;
  v14 = 0;
  v68 = 0LL;
  v55 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1;
  do
  {
    v70 = ++a2;
    v20 = *a2;
    if ( (pctype[v20] & 4) != 0 )
    {
      ++v13;
      v14 = v20 + 2 * (5 * v14 - 24);
      continue;
    }
    if ( (unsigned int)v20 <= 0x68 )
    {
      switch ( (_DWORD)v20 )
      {
        case 'h':
          --v19;
          --v17;
          continue;
        case '*':
          ++v15;
          continue;
        case 'F':
          continue;
        case 'I':
          v21 = a2[1];
          if ( v21 == 54 )
          {
            v12 = a2 + 2;
            if ( a2[2] == 52 )
              goto LABEL_27;
          }
          else if ( v21 == 51 )
          {
            v12 = a2 + 2;
            if ( a2[2] == 50 )
            {
              a2 += 2;
              v70 = v12;
              continue;
            }
          }
LABEL_42:
          LOBYTE(v12) = a2[1] - 88;
          if ( (unsigned __int8)v12 <= 0x20u )
          {
            v26 = 0x120821001LL;
            if ( _bittest64(&v26, (unsigned __int64)v12) )
              goto LABEL_28;
          }
          ++v18;
          v63 = 0LL;
          break;
        case 'L':
          ++v19;
          continue;
        case 'N':
          continue;
      }
LABEL_45:
      ++v16;
      continue;
    }
    switch ( (_DWORD)v20 )
    {
      case 'j':
        goto LABEL_28;
      case 'l':
        v12 = a2 + 1;
        if ( a2[1] == 108 )
        {
LABEL_27:
          a2 = v12;
          v70 = v12;
LABEL_28:
          ++v18;
          v63 = 0LL;
          continue;
        }
        ++v19;
        break;
      case 't':
        goto LABEL_42;
      case 'w':
        break;
      case 'z':
        goto LABEL_42;
      default:
        goto LABEL_45;
    }
    ++v17;
  }
  while ( !v16 );
  v72 = v15;
  v22 = v15;
  v23 = v68;
  v53 = v19;
  v24 = a1;
  v62 = v18;
  v60 = v13;
  v58 = v14;
  if ( v22 )
  {
    v25 = 0LL;
  }
  else
  {
    v65 = v71++;
    v25 = *(v71 - 1);
  }
  v66 = v25;
  v27 = 0;
  v67 = (__int64)v25;
  if ( !v17 )
    v17 = ((*a2 - 67) & 0xEF) != 0 ? -1 : 1;
  v28 = *a2 | 0x20;
  if ( v28 == 110 )
  {
LABEL_61:
    v29 = v60;
    if ( !v60 || v14 )
    {
      if ( !v22 && (v28 == 99 || v28 == 115 || v28 == 123) )
      {
        v30 = v65;
        v25 = *v65++;
        v71 = v65 + 1;
        v23 = *((unsigned int *)v30 + 2);
        v66 = v25;
        v67 = (__int64)v25;
        if ( !v23 )
        {
          result = (unsigned int)v56;
          if ( v17 <= 0 )
            *v25 = 0;
          else
            *(_WORD *)v25 = 0;
          v5 = 0;
          goto LABEL_199;
        }
      }
      if ( v28 > 0x70 )
      {
        switch ( v28 )
        {
          case 's':
            v32 = 32;
            break;
          case 'u':
            goto LABEL_84;
          case 'x':
            goto LABEL_79;
          case '{':
            v32 = 64;
            break;
          default:
            goto LABEL_90;
        }
      }
      else
      {
        if ( v28 == 112 )
        {
          ++v62;
          v53 = 1;
          v63 = 0LL;
          goto LABEL_84;
        }
        if ( v28 != 99 )
        {
          if ( v28 != 100 )
          {
            if ( v28 != 105 )
            {
              if ( v28 == 110 )
              {
                v31 = v10;
                if ( v72 )
                {
LABEL_186:
                  ++v54;
                  v50 = ++a2;
LABEL_189:
                  if ( v4 != -1 || *a2 == 37 && v50[1] == 110 )
                    goto LABEL_192;
LABEL_197:
                  v5 = v61;
LABEL_198:
                  result = (unsigned int)v56;
LABEL_199:
                  if ( v4 == -1 )
                    goto LABEL_200;
                  if ( v5 == 1 )
                  {
                    xHalTimerWatchdogStop();
                    return (unsigned int)v56;
                  }
                  return result;
                }
LABEL_169:
                if ( v62 )
                {
                  *(_QWORD *)v25 = v63;
                }
                else if ( v53 )
                {
                  *(_DWORD *)v25 = v31;
                }
                else
                {
                  *(_WORD *)v25 = v31;
                }
                goto LABEL_186;
              }
              if ( v28 != 111 )
              {
                v22 = v72;
LABEL_90:
                if ( *a2 != v4 )
                {
                  if ( v4 != -1 )
                    ungetc_nolock(v4, v24);
                  v5 = 1;
                  goto LABEL_198;
                }
                --v54;
                if ( !v22 )
                  v71 = v65;
                goto LABEL_186;
              }
              goto LABEL_84;
            }
            v28 = 100;
LABEL_79:
            if ( v4 == 45 )
            {
              v55 = 1;
            }
            else if ( v4 != 43 )
            {
              goto LABEL_99;
            }
            v58 = v14 - 1;
            if ( v14 == 1 && v60 )
            {
              v27 = 1;
            }
            else
            {
              HIDWORD(v56) = ++v10;
              v4 = inc((__int64)v24);
              v57 = v4;
            }
LABEL_99:
            if ( v4 == 48 )
            {
              HIDWORD(v56) = ++v10;
              v4 = inc((__int64)a1);
              v57 = v4;
              if ( (((_BYTE)v4 - 88) & 0xDF) == 0 )
              {
                HIDWORD(v56) = ++v10;
                v34 = inc((__int64)a1);
                v29 = v60;
                v33 = v58;
                v4 = v34;
                v57 = v34;
                if ( v60 )
                {
                  v33 = v58 - 2;
                  if ( v58 - 2 < 1 )
                    ++v27;
                }
                v28 = 120;
                goto LABEL_120;
              }
              v64 = 1;
              if ( v28 != 120 )
              {
                v29 = v60;
                v33 = v58;
                if ( v60 )
                {
                  v33 = v58 - 1;
                  if ( v58 == 1 )
                    ++v27;
                }
                v28 = 111;
                goto LABEL_120;
              }
              HIDWORD(v56) = --v10;
              if ( v4 != -1 )
                ungetc_nolock(v4, a1);
              v4 = 48;
              v57 = 48;
            }
            goto LABEL_109;
          }
LABEL_84:
          if ( v4 == 45 )
          {
            v55 = 1;
          }
          else if ( v4 != 43 )
          {
            goto LABEL_119;
          }
          v58 = v14 - 1;
          if ( v14 == 1 && v60 )
          {
            v27 = 1;
            v33 = 0;
LABEL_120:
            if ( v62 )
            {
              if ( !v27 )
              {
                while ( 1 )
                {
                  if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (pctype[(unsigned __int8)v4] & 4) == 0 )
                      goto LABEL_138;
                    v35 = v63;
                    if ( v28 == 111 )
                    {
                      if ( v4 >= 56 )
                      {
                        v27 = 1;
                        goto LABEL_134;
                      }
                      v35 = 8 * v63;
                    }
                    else
                    {
                      v35 = 10 * v63;
                    }
                  }
                  else
                  {
                    v36 = pctype[(unsigned __int8)v4];
                    if ( (v36 & 0x80u) == 0 )
                      goto LABEL_138;
                    v37 = (char)v4;
                    v35 = 16 * v63;
                    v4 = ((char)v4 & 0xFFFFFFDF) - 7;
                    if ( (v36 & 4) != 0 )
                      v4 = v37;
                    v57 = v4;
                  }
                  v63 = v35;
LABEL_134:
                  if ( v27 )
                  {
LABEL_138:
                    HIDWORD(v56) = --v10;
                    if ( v4 != -1 )
                      ungetc_nolock(v4, a1);
                    break;
                  }
                  ++v64;
                  v38 = v4 - 48 + v35;
                  v63 = v38;
                  if ( v29 )
                  {
                    if ( !--v33 )
                      goto LABEL_141;
                  }
                  HIDWORD(v56) = ++v10;
                  v39 = inc((__int64)a1);
                  v29 = v60;
                  v4 = v39;
                  v57 = v39;
                }
              }
              v38 = v63;
LABEL_141:
              v40 = -v38;
              if ( !v55 )
                v40 = v38;
              v63 = v40;
              goto LABEL_166;
            }
            if ( v27 )
            {
LABEL_163:
              v44 = v59;
LABEL_164:
              if ( v55 )
                v59 = -v44;
LABEL_166:
              if ( !v64 )
              {
                v5 = v61;
                goto LABEL_198;
              }
              if ( v72 )
                goto LABEL_186;
              LODWORD(v56) = v56 + 1;
              v25 = v66;
              v31 = v59;
              goto LABEL_169;
            }
            while ( 1 )
            {
              if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
              {
                if ( (pctype[(unsigned __int8)v4] & 4) == 0 )
                  goto LABEL_161;
                v41 = v59;
                if ( v28 == 111 )
                {
                  if ( v4 >= 56 )
                  {
                    v27 = 1;
                    goto LABEL_157;
                  }
                  v41 = 8 * v59;
                }
                else
                {
                  v41 = 10 * v59;
                }
              }
              else
              {
                v42 = pctype[(unsigned __int8)v4];
                if ( (v42 & 0x80u) == 0 )
                  goto LABEL_161;
                v43 = (char)v4;
                v41 = 16 * v59;
                v4 = ((char)v4 & 0xFFFFFFDF) - 7;
                if ( (v42 & 4) != 0 )
                  v4 = v43;
                v57 = v4;
              }
              v59 = v41;
LABEL_157:
              if ( v27 )
              {
LABEL_161:
                HIDWORD(v56) = --v10;
                if ( v4 != -1 )
                  ungetc_nolock(v4, a1);
                goto LABEL_163;
              }
              ++v64;
              v44 = v4 + v41 - 48;
              v59 = v44;
              if ( v29 )
              {
                if ( !--v33 )
                  goto LABEL_164;
              }
              HIDWORD(v56) = ++v10;
              v45 = inc((__int64)a1);
              v29 = v60;
              v4 = v45;
              v57 = v45;
            }
          }
          HIDWORD(v56) = ++v10;
          v4 = inc((__int64)v24);
          v57 = v4;
LABEL_109:
          v29 = v60;
LABEL_119:
          v33 = v58;
          goto LABEL_120;
        }
        v32 = 16;
        if ( !v60 )
        {
          v29 = 1;
          ++v14;
        }
      }
      v46 = v32 | 1;
      if ( !v29 )
        v46 = v32;
      v47 = v46 | 2;
      if ( v17 <= 0 )
        v47 = v46;
      v48 = v47 | 4;
      if ( !v72 )
        v48 = v47;
      if ( v28 == 123 )
      {
        v49 = ReadStringDelimited(v48, &v70, &v57, (_DWORD *)&v56 + 1, (_WORD **)&v67, v14, v24, v23, &v56);
        a2 = v70;
      }
      else
      {
        v49 = ReadString(v48, 0LL, &v57, (_DWORD *)&v56 + 1, (_WORD **)&v67, v14, v24, v23, &v56);
      }
      v4 = v57;
      if ( v49 )
        goto LABEL_211;
      v10 = HIDWORD(v56);
      goto LABEL_186;
    }
    if ( v4 == -1 )
      goto LABEL_197;
    v52 = v24;
LABEL_196:
    ungetc_nolock(v4, v52);
    goto LABEL_197;
  }
  if ( v28 == 99 || v28 == 123 )
  {
    HIDWORD(v56) = ++v10;
    v4 = inc((__int64)a1);
    v57 = v4;
  }
  else
  {
    do
    {
      ++v10;
      v4 = inc((__int64)v24);
      if ( v4 == -1 )
        break;
      v24 = a1;
    }
    while ( (pctype[(unsigned __int8)v4] & 8) != 0 );
    HIDWORD(v56) = v10;
    v57 = v4;
  }
  if ( v4 != -1 )
  {
    v25 = v66;
    v23 = v68;
    v14 = v58;
    v24 = a1;
    v22 = v72;
    goto LABEL_61;
  }
LABEL_200:
  if ( (_DWORD)v56 || v54 )
    return (unsigned int)v56;
  return v8;
}
