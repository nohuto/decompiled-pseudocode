/*
 * XREFs of _output_s @ 0x140502444
 * Callers:
 *     _soutput_s @ 0x140502D74 (_soutput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 *     write_char_0 @ 0x1404FF7D0 (write_char_0.c)
 *     write_multi_char_0 @ 0x1404FF820 (write_multi_char_0.c)
 *     write_string_0 @ 0x1404FF878 (write_string_0.c)
 *     _safecrt_wctomb_s @ 0x140502C98 (_safecrt_wctomb_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, unsigned __int16 *a3)
{
  int v4; // esi
  int v5; // edi
  int v6; // r15d
  char *v7; // rbx
  unsigned __int16 *v8; // r14
  char v10; // r9
  __int64 v11; // r12
  int v12; // r10d
  unsigned __int16 *v13; // r8
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned __int16 *v17; // r14
  __int64 v18; // rax
  unsigned __int16 *v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  const wchar_t *v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  int v27; // ecx
  char v28; // r15
  int v29; // r9d
  char *i; // rcx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  bool v34; // zf
  int v35; // r14d
  int v36; // r15d
  FILE *v37; // rdi
  unsigned __int16 *v38; // r14
  int v39; // edi
  __int64 v40; // r9
  char v41; // cl
  int v42; // eax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  int v49; // [rsp+30h] [rbp-D0h]
  char v50[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+3Ch] [rbp-C4h]
  int v53; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh]
  int v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 *v57; // [rsp+50h] [rbp-B0h]
  FILE *v58; // [rsp+58h] [rbp-A8h]
  int v59; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+64h] [rbp-9Ch]
  int v61; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v62[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+100h] [rbp+0h] BYREF
  char v64; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v65[8]; // [rsp+270h] [rbp+170h] BYREF

  v58 = a1;
  v57 = a3;
  v59 = 0;
  v4 = 0;
  v56 = 0;
  v5 = 0;
  v52 = 0;
  v6 = 0;
  v49 = 0;
  v7 = 0LL;
  v60 = 0;
  v8 = a3;
  memset_0(v62, 0, 0x200uLL);
  v54 = 0;
  if ( !a1 || !a2 )
    goto LABEL_192;
  v10 = *a2;
  LODWORD(v11) = 0;
  v51 = 0;
  v12 = 0;
  v53 = 0;
  if ( !v10 )
    return (unsigned int)v51;
  do
  {
    ++a2;
    v13 = v8;
    if ( v51 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = *((_BYTE *)&_lookuptable_s[-4] + v10) & 0xF;
    v15 = (unsigned int)(v14 + v12 + 8 * v14);
    v12 = *((unsigned __int8 *)_lookuptable_s + v15) >> 4;
    v55 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_192;
      case 0:
        goto LABEL_160;
      case 1:
        v5 = -1;
        v60 = 0;
        v52 = -1;
        v6 = 0;
        v56 = 0;
        v4 = 0;
        v49 = 0;
        v54 = 0;
        break;
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
          case '0':
            v4 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v10 == 42 )
        {
          v44 = *(_DWORD *)v8;
          v57 = v8 + 4;
          v45 = v44;
          if ( v44 < 0 )
            v4 |= 4u;
          v46 = v44;
          v47 = -v44;
          if ( v46 >= 0 )
            v47 = v45;
        }
        else
        {
          v47 = v10 + 2 * (5 * v56 - 24);
        }
        v56 = v47;
        break;
      case 4:
        v5 = 0;
        v52 = 0;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v5 = v10 + 2 * (5 * v5 - 24);
          goto LABEL_165;
        }
        v5 = *(_DWORD *)v8;
        v57 = v8 + 4;
        v52 = v5;
        if ( v5 < 0 )
        {
          v5 = -1;
LABEL_165:
          v52 = v5;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_142;
          case 'h':
            v4 |= 0x20u;
            goto LABEL_188;
          case 'j':
            goto LABEL_142;
          case 'l':
            v41 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v42 = 4096;
            if ( v41 != 108 )
              v42 = 16;
            v4 |= v42;
            goto LABEL_188;
          case 't':
            goto LABEL_142;
          case 'w':
            v4 |= 0x800u;
            goto LABEL_188;
          case 'z':
LABEL_142:
            v4 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *a2 == 54 )
              {
                if ( a2[1] != 52 )
                  goto LABEL_157;
                a2 += 2;
              }
              else
              {
                if ( *a2 != 51 || a2[1] != 50 )
                {
LABEL_157:
                  LOBYTE(v15) = *a2 - 88;
                  if ( (unsigned __int8)v15 <= 0x20u )
                  {
                    v43 = 0x120821001LL;
                    if ( _bittest64(&v43, v15) )
                      goto LABEL_188;
                  }
                  v55 = 0;
LABEL_160:
                  v54 = 0;
                  write_char_0(v10, v58, &v51);
LABEL_187:
                  v12 = v55;
                  goto LABEL_188;
                }
                a2 += 2;
                v4 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_157;
            }
            break;
        }
        break;
      case 7:
        if ( v10 <= 105 )
        {
          if ( v10 == 105 )
            goto LABEL_25;
          if ( v10 == 67 )
          {
            if ( (v4 & 0x830) == 0 )
              v4 |= 0x800u;
            goto LABEL_52;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v19 = *(unsigned __int16 **)v8;
                v57 = v8 + 4;
                if ( v19 && (v7 = (char *)*((_QWORD *)v19 + 1)) != 0LL )
                {
                  v20 = *v19;
                  if ( v19[1] < (unsigned __int16)v20 )
                    goto LABEL_192;
                  LODWORD(v11) = *v19;
                  if ( (v4 & 0x800) != 0 )
                  {
                    if ( (v20 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                      goto LABEL_192;
                    v54 = 1;
                    LODWORD(v11) = v20 >> 1;
                  }
                  else
                  {
                    v54 = 0;
                  }
                }
                else
                {
                  v11 = -1LL;
                  v7 = "(null)";
                  do
                    ++v11;
                  while ( aNull_2[v11] );
                }
                v53 = v11;
                goto LABEL_108;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_25:
                  v4 |= 0x40u;
                  goto LABEL_26;
                }
LABEL_108:
                if ( v60 )
                  goto LABEL_187;
                if ( (v4 & 0x40) == 0 )
                  goto LABEL_117;
                if ( (v4 & 0x100) != 0 )
                {
                  v50[0] = 45;
                  goto LABEL_114;
                }
                if ( (v4 & 1) != 0 )
                {
                  v50[0] = 43;
                  goto LABEL_114;
                }
                if ( (v4 & 2) != 0 )
                {
                  v50[0] = 32;
LABEL_114:
                  v35 = 1;
                  v49 = 1;
                }
                else
                {
LABEL_117:
                  v35 = v49;
                }
                v36 = v56 - v11 - v35;
                if ( (v4 & 0xC) == 0 )
                  write_multi_char_0(32, v36, v58, &v51);
                write_string_0(v50, v35, v58, &v51);
                v37 = v58;
                if ( (v4 & 0xC) == 8 )
                  write_multi_char_0(48, v36, v58, &v51);
                if ( v54 && (int)v11 > 0 )
                {
                  v61 = 0;
                  v38 = (unsigned __int16 *)v7;
                  v39 = v11;
                  while ( 1 )
                  {
                    v40 = *v38++;
                    --v39;
                    if ( (unsigned int)safecrt_wctomb_s(&v61, v65, 6LL, v40) || !v61 )
                      break;
                    write_string_0(v65, v61, v58, &v51);
                    if ( !v39 )
                      goto LABEL_130;
                  }
                  v51 = -1;
LABEL_130:
                  v37 = v58;
                }
                else
                {
                  write_string_0(v7, v11, v37, &v51);
                }
                if ( v51 >= 0 && (v4 & 4) != 0 )
                {
                  write_multi_char_0(32, v36, v37, &v51);
                  v5 = v52;
                  v6 = v49;
                }
                else
                {
                  v6 = v49;
                  v5 = v52;
                }
                goto LABEL_187;
              }
LABEL_52:
              v57 = v8 + 4;
              if ( (v4 & 0x810) != 0 )
              {
                v23 = safecrt_wctomb_s(&v53, v62, 512LL, *v8);
                LODWORD(v11) = v53;
                if ( v23 )
                  v60 = 1;
              }
              else
              {
                LODWORD(v11) = 1;
                v62[0] = *(_BYTE *)v8;
                v53 = 1;
              }
              v7 = v62;
              goto LABEL_108;
            }
LABEL_77:
            v24 = 7;
LABEL_78:
            v59 = v24;
            if ( (v4 & 0x80u) != 0 )
            {
              v50[0] = 48;
              v50[1] = v24 + 81;
              v6 = 2;
            }
            v16 = 16LL;
            goto LABEL_27;
          }
          if ( (v4 & 0x830) == 0 )
            v4 |= 0x800u;
LABEL_44:
          v7 = *(char **)v8;
          v21 = v5;
          if ( v5 == -1 )
            v21 = 0x7FFFFFFF;
          v57 = v8 + 4;
          if ( (v4 & 0x810) != 0 )
          {
            v22 = (const wchar_t *)v7;
            if ( !v7 )
            {
              v7 = (char *)L"(null)";
              v22 = L"(null)";
            }
            v54 = 1;
            while ( v21 )
            {
              --v21;
              if ( !*v22 )
                break;
              ++v22;
            }
            v25 = ((char *)v22 - v7) >> 1;
          }
          else
          {
            v25 = (__int64)"(null)";
            if ( v7 )
              v25 = (__int64)v7;
            v7 = (char *)v25;
            while ( v21 )
            {
              --v21;
              if ( !*(_BYTE *)v25 )
                break;
              ++v25;
            }
            LODWORD(v25) = v25 - (_DWORD)v7;
          }
          LODWORD(v11) = v25;
          v53 = v25;
          goto LABEL_108;
        }
        switch ( v10 )
        {
          case 'n':
            goto LABEL_192;
          case 'o':
            v16 = 8LL;
            if ( (v4 & 0x80u) != 0 )
              v4 |= 0x200u;
            goto LABEL_27;
          case 'p':
            v5 = 16;
            v4 |= 0x8000u;
            goto LABEL_77;
          case 's':
            goto LABEL_44;
        }
        if ( v10 != 117 )
        {
          if ( v10 != 120 )
            goto LABEL_108;
          v24 = 39;
          goto LABEL_78;
        }
LABEL_26:
        v16 = 10LL;
LABEL_27:
        v17 = v8 + 4;
        v57 = v17;
        if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
        {
          v18 = *(_QWORD *)v13;
          if ( (v4 & 0x40) != 0 )
            goto LABEL_89;
LABEL_92:
          v26 = (unsigned int)v18;
          if ( (v4 & 0x9000) != 0 )
            v26 = v18;
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
          v27 = v26 != 0 ? v6 : 0;
          v28 = v59;
          v49 = v27;
          v29 = v27;
          for ( i = &v64; ; --i )
          {
            v31 = v5--;
            if ( v31 <= 0 && !v26 )
              break;
            v32 = v26 % v16 + 48;
            v26 /= v16;
            if ( v32 > 57 )
              LOBYTE(v32) = v28 + v32;
            *i = v32;
          }
          v52 = v5;
          v33 = (unsigned int)&v63 + 367 - (_DWORD)i;
          v7 = i + 1;
          v53 = v33;
          LODWORD(v11) = v33;
          v6 = v29;
          if ( (v4 & 0x200) != 0 )
          {
            if ( !v33 || (v34 = *v7 == 48, v57 = v17, v49 = v29, !v34) )
            {
              v7 = i;
              v57 = v17;
              LODWORD(v11) = v33 + 1;
              v49 = v29;
              v53 = v33 + 1;
              v6 = v29;
              *i = 48;
            }
          }
          goto LABEL_108;
        }
        if ( (v4 & 0x20) != 0 )
        {
          if ( (v4 & 0x40) == 0 )
          {
            v18 = *v13;
            goto LABEL_92;
          }
          v18 = (__int16)*v13;
        }
        else
        {
          if ( (v4 & 0x40) == 0 )
          {
            v18 = *(unsigned int *)v13;
            goto LABEL_92;
          }
          v18 = *(int *)v13;
        }
LABEL_89:
        if ( v18 < 0 )
        {
          v18 = -v18;
          v4 |= 0x100u;
        }
        goto LABEL_92;
    }
LABEL_188:
    v10 = *a2;
    v8 = v57;
  }
  while ( *a2 );
  if ( !v12 || v12 == 7 )
    return (unsigned int)v51;
LABEL_192:
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
