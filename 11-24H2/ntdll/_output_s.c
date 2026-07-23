/*
 * XREFs of _output_s @ 0x18012C540
 * Callers:
 *     _soutput_s @ 0x18012CEC4 (_soutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _safecrt_wctomb_s @ 0x18012CDE8 (_safecrt_wctomb_s.c)
 *     write_char_1 @ 0x18012CFB8 (write_char_1.c)
 *     write_multi_char_1 @ 0x18012D008 (write_multi_char_1.c)
 *     write_string_1 @ 0x18012D060 (write_string_1.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall output_s(__int64 a1, char *a2, unsigned __int16 *a3)
{
  int v4; // esi
  int v5; // edi
  int v6; // r15d
  const wchar_t *v7; // rbx
  unsigned __int16 *v8; // r14
  char v10; // r9
  __int64 v11; // r12
  int v12; // r10d
  unsigned __int16 *v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 i; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // r10
  unsigned __int16 *v22; // r14
  __int64 v23; // rax
  unsigned int v24; // eax
  const wchar_t *v25; // rax
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  int v34; // ecx
  char v35; // r15
  int v36; // r9d
  int v37; // eax
  int v38; // edx
  int v39; // eax
  bool v40; // zf
  unsigned int v41; // r14d
  unsigned int v42; // r15d
  __int64 v43; // rcx
  __int64 v44; // rdi
  const wchar_t *v45; // r14
  int v46; // edi
  __int64 v47; // r9
  __int64 v48; // rcx
  char v49; // cl
  int v50; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // eax
  int v54; // edx
  int v56; // [rsp+30h] [rbp-D0h]
  _BYTE v57[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h] BYREF
  int v59; // [rsp+3Ch] [rbp-C4h]
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  int v61; // [rsp+44h] [rbp-BCh]
  int v62; // [rsp+48h] [rbp-B8h]
  int v63; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 *v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+58h] [rbp-A8h]
  int v66; // [rsp+60h] [rbp-A0h]
  int v67; // [rsp+64h] [rbp-9Ch]
  unsigned int v68; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v69[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h] BYREF
  char v71; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v72[8]; // [rsp+270h] [rbp+170h] BYREF

  v65 = a1;
  v64 = a3;
  v66 = 0;
  v4 = 0;
  v63 = 0;
  v5 = 0;
  v59 = 0;
  v6 = 0;
  v56 = 0;
  v7 = 0LL;
  v67 = 0;
  v8 = a3;
  memset_thunk_772440563353939046(v69, 0, 0x200uLL);
  v61 = 0;
  if ( !a1 || !a2 )
    goto LABEL_192;
  v10 = *a2;
  LODWORD(v11) = 0;
  v58 = 0;
  v12 = 0;
  v60 = 0;
  if ( !v10 )
    return (unsigned int)v58;
  do
  {
    ++a2;
    v13 = v8;
    if ( v58 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = _lookuptable_s[v10 - 32] & 0xF;
    v15 = (unsigned int)v10;
    v16 = (unsigned int)(v14 + v12 + 8 * v14);
    v12 = _lookuptable_s[v16] >> 4;
    v62 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_192;
      case 0:
        goto LABEL_160;
      case 1:
        v5 = -1;
        v67 = 0;
        v59 = -1;
        v6 = 0;
        v63 = 0;
        v4 = 0;
        v56 = 0;
        v61 = 0;
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
          v51 = *(_DWORD *)v8;
          v64 = v8 + 4;
          v52 = v51;
          if ( v51 < 0 )
            v4 |= 4u;
          v53 = v51;
          v54 = -v51;
          if ( v53 >= 0 )
            v54 = v52;
        }
        else
        {
          v54 = v15 + 2 * (5 * v63 - 24);
        }
        v63 = v54;
        break;
      case 4:
        v5 = 0;
        v59 = 0;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v5 = v15 + 2 * (5 * v5 - 24);
          goto LABEL_165;
        }
        v5 = *(_DWORD *)v8;
        v64 = v8 + 4;
        v59 = v5;
        if ( v5 < 0 )
        {
          v5 = -1;
LABEL_165:
          v59 = v5;
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
            v49 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v50 = 4096;
            if ( v49 != 108 )
              v50 = 16;
            v4 |= v50;
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
                  LOBYTE(v16) = *a2 - 88;
                  if ( (unsigned __int8)v16 <= 0x20u )
                  {
                    v15 = 0x120821001LL;
                    if ( _bittest64(&v15, v16) )
                      goto LABEL_188;
                  }
                  v62 = 0;
LABEL_160:
                  LOBYTE(v15) = v10;
                  v61 = 0;
                  write_char_1(v15, v65, &v58);
LABEL_187:
                  v12 = v62;
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
        if ( (int)v15 <= 105 )
        {
          if ( (_DWORD)v15 == 105 )
            goto LABEL_25;
          i = (unsigned int)(v15 - 67);
          if ( !(_DWORD)i )
          {
            if ( (v4 & 0x830) == 0 )
              v4 |= 0x800u;
            goto LABEL_52;
          }
          v18 = i - 16;
          if ( v18 )
          {
            v19 = v18 - 5;
            if ( v19 )
            {
              v20 = v19 - 2;
              if ( !v20 )
              {
                i = *(_QWORD *)v8;
                v64 = v8 + 4;
                if ( i && (v7 = *(const wchar_t **)(i + 8)) != 0LL )
                {
                  v24 = *(unsigned __int16 *)i;
                  if ( *(_WORD *)(i + 2) < (unsigned __int16)v24 )
                    goto LABEL_192;
                  LODWORD(v11) = *(unsigned __int16 *)i;
                  if ( (v4 & 0x800) != 0 )
                  {
                    if ( (v24 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                      goto LABEL_192;
                    v61 = 1;
                    LODWORD(v11) = v24 >> 1;
                  }
                  else
                  {
                    v61 = 0;
                  }
                }
                else
                {
                  v11 = -1LL;
                  v7 = (const wchar_t *)"(null)";
                  do
                    ++v11;
                  while ( aNull[v11] );
                }
                v60 = v11;
                goto LABEL_108;
              }
              i = (unsigned int)(v20 - 9);
              if ( (_DWORD)i )
              {
                if ( (_DWORD)i == 1 )
                {
LABEL_25:
                  v4 |= 0x40u;
                  goto LABEL_26;
                }
LABEL_108:
                if ( v67 )
                  goto LABEL_187;
                if ( (v4 & 0x40) == 0 )
                  goto LABEL_117;
                if ( (v4 & 0x100) != 0 )
                {
                  v57[0] = 45;
                  goto LABEL_114;
                }
                if ( (v4 & 1) != 0 )
                {
                  v57[0] = 43;
                  goto LABEL_114;
                }
                if ( (v4 & 2) != 0 )
                {
                  v57[0] = 32;
LABEL_114:
                  v41 = 1;
                  v56 = 1;
                }
                else
                {
LABEL_117:
                  v41 = v56;
                }
                v42 = v63 - v11 - v41;
                if ( (v4 & 0xC) == 0 )
                {
                  LOBYTE(i) = 32;
                  write_multi_char_1(i, v42, v65, &v58);
                }
                write_string_1(v57, v41, v65, &v58);
                v44 = v65;
                if ( (v4 & 0xC) == 8 )
                {
                  LOBYTE(v43) = 48;
                  write_multi_char_1(v43, v42, v65, &v58);
                }
                if ( v61 && (int)v11 > 0 )
                {
                  v68 = 0;
                  v45 = v7;
                  v46 = v11;
                  while ( 1 )
                  {
                    v47 = *v45++;
                    --v46;
                    if ( (unsigned int)safecrt_wctomb_s(&v68, v72, 6LL, v47) || !v68 )
                      break;
                    write_string_1(v72, v68, v65, &v58);
                    if ( !v46 )
                      goto LABEL_130;
                  }
                  v58 = -1;
LABEL_130:
                  v44 = v65;
                }
                else
                {
                  write_string_1(v7, (unsigned int)v11, v44, &v58);
                }
                if ( v58 >= 0 && (v4 & 4) != 0 )
                {
                  LOBYTE(v48) = 32;
                  write_multi_char_1(v48, v42, v44, &v58);
                  v5 = v59;
                  v6 = v56;
                }
                else
                {
                  v6 = v56;
                  v5 = v59;
                }
                goto LABEL_187;
              }
LABEL_52:
              v64 = v8 + 4;
              if ( (v4 & 0x810) != 0 )
              {
                v26 = safecrt_wctomb_s(&v60, v69, 512LL, *v8);
                LODWORD(v11) = v60;
                if ( v26 )
                  v67 = 1;
              }
              else
              {
                LODWORD(v11) = 1;
                v69[0] = *(_BYTE *)v8;
                v60 = 1;
              }
              v7 = (const wchar_t *)v69;
              goto LABEL_108;
            }
LABEL_77:
            v31 = 7;
LABEL_78:
            v66 = v31;
            if ( (v4 & 0x80u) != 0 )
            {
              v57[0] = 48;
              v57[1] = v31 + 81;
              v6 = 2;
            }
            v21 = 16LL;
            goto LABEL_27;
          }
          if ( (v4 & 0x830) == 0 )
            v4 |= 0x800u;
LABEL_44:
          v7 = *(const wchar_t **)v8;
          i = (unsigned int)v5;
          if ( v5 == -1 )
            i = 0x7FFFFFFFLL;
          v64 = v8 + 4;
          if ( (v4 & 0x810) != 0 )
          {
            v25 = v7;
            if ( !v7 )
            {
              v7 = L"(null)";
              v25 = L"(null)";
            }
            v61 = 1;
            while ( (_DWORD)i )
            {
              i = (unsigned int)(i - 1);
              if ( !*v25 )
                break;
              ++v25;
            }
            v32 = v25 - v7;
          }
          else
          {
            v32 = (__int64)"(null)";
            if ( v7 )
              v32 = (__int64)v7;
            v7 = (const wchar_t *)v32;
            while ( (_DWORD)i )
            {
              i = (unsigned int)(i - 1);
              if ( !*(_BYTE *)v32 )
                break;
              ++v32;
            }
            LODWORD(v32) = v32 - (_DWORD)v7;
          }
          LODWORD(v11) = v32;
          v60 = v32;
          goto LABEL_108;
        }
        v27 = v15 - 110;
        if ( !v27 )
          goto LABEL_192;
        v28 = v27 - 1;
        if ( !v28 )
        {
          v21 = 8LL;
          if ( (v4 & 0x80u) != 0 )
            v4 |= 0x200u;
          goto LABEL_27;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          v5 = 16;
          v4 |= 0x8000u;
          goto LABEL_77;
        }
        v30 = v29 - 3;
        if ( !v30 )
          goto LABEL_44;
        i = (unsigned int)(v30 - 2);
        if ( (_DWORD)i )
        {
          if ( (_DWORD)i != 3 )
            goto LABEL_108;
          v31 = 39;
          goto LABEL_78;
        }
LABEL_26:
        v21 = 10LL;
LABEL_27:
        v22 = v8 + 4;
        v64 = v22;
        if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
        {
          v23 = *(_QWORD *)v13;
          if ( (v4 & 0x40) != 0 )
            goto LABEL_89;
LABEL_92:
          v33 = (unsigned int)v23;
          if ( (v4 & 0x9000) != 0 )
            v33 = v23;
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
          v34 = v33 != 0 ? v6 : 0;
          v35 = v66;
          v56 = v34;
          v36 = v34;
          for ( i = (__int64)&v71; ; --i )
          {
            v37 = v5--;
            if ( v37 <= 0 && !v33 )
              break;
            v38 = v33 % v21 + 48;
            v33 /= v21;
            if ( v38 > 57 )
              LOBYTE(v38) = v35 + v38;
            *(_BYTE *)i = v38;
          }
          v59 = v5;
          v39 = (unsigned int)&v70 + 367 - i;
          v7 = (const wchar_t *)(i + 1);
          v60 = v39;
          LODWORD(v11) = v39;
          v6 = v36;
          if ( (v4 & 0x200) != 0 )
          {
            if ( !v39 || (v40 = *(_BYTE *)v7 == 48, v64 = v22, v56 = v36, !v40) )
            {
              v7 = (const wchar_t *)i;
              v64 = v22;
              LODWORD(v11) = v39 + 1;
              v56 = v36;
              v60 = v39 + 1;
              v6 = v36;
              *(_BYTE *)i = 48;
            }
          }
          goto LABEL_108;
        }
        if ( (v4 & 0x20) != 0 )
        {
          if ( (v4 & 0x40) == 0 )
          {
            v23 = *v13;
            goto LABEL_92;
          }
          v23 = (__int16)*v13;
        }
        else
        {
          if ( (v4 & 0x40) == 0 )
          {
            v23 = *(unsigned int *)v13;
            goto LABEL_92;
          }
          v23 = *(int *)v13;
        }
LABEL_89:
        if ( v23 < 0 )
        {
          v23 = -v23;
          v4 |= 0x100u;
        }
        goto LABEL_92;
    }
LABEL_188:
    v10 = *a2;
    v8 = v64;
  }
  while ( *a2 );
  if ( !v12 || v12 == 7 )
    return (unsigned int)v58;
LABEL_192:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
