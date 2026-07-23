/*
 * XREFs of inflate @ 0x18014FA34
 * Callers:
 *     RtlDecompressBufferDeflateInternal @ 0x18014B348 (RtlDecompressBufferDeflateInternal.c)
 * Callees:
 *     chunkcopy_core @ 0x18014F89C (chunkcopy_core.c)
 *     chunkset_core @ 0x18014F8E0 (chunkset_core.c)
 *     inflateStateCheck @ 0x180150C2C (inflateStateCheck.c)
 *     updatewindow @ 0x180150C6C (updatewindow.c)
 *     inflate_fast_chunk_ @ 0x1801531B4 (inflate_fast_chunk_.c)
 *     adler32_z @ 0x1801536D4 (adler32_z.c)
 *     inflate_table @ 0x1801539E4 (inflate_table.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall inflate(unsigned __int8 **a1)
{
  __int64 v2; // rcx
  __m128i **v3; // rax
  __m128i **v4; // rcx
  unsigned __int8 *v5; // rdi
  unsigned __int64 v6; // r9
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  unsigned int v9; // r12d
  unsigned __int8 *v10; // r13
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  _DWORD *v13; // r8
  _DWORD *v14; // r10
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 result; // rax
  unsigned __int32 v20; // r15d
  int v21; // eax
  char v22; // al
  unsigned int v23; // r15d
  const char *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // ebp
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  char v34; // cl
  unsigned int v35; // r15d
  char v36; // dl
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // edx
  __int64 v40; // rax
  __int16 v41; // cx
  unsigned int v42; // eax
  __int64 v43; // r8
  unsigned int v44; // ecx
  int v45; // edx
  int v46; // eax
  int v47; // edx
  int v48; // edx
  __int16 v49; // r9
  unsigned int v50; // r15d
  int v51; // ecx
  unsigned int v52; // r15d
  int v53; // r8d
  int v54; // r8d
  int v55; // r8d
  int v56; // eax
  unsigned int v57; // eax
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  __int64 v62; // rdx
  int v63; // r8d
  unsigned int v64; // eax
  int v65; // ecx
  int v66; // eax
  int v67; // r8d
  unsigned int v68; // eax
  int v69; // ecx
  int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // ecx
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int8 *v75; // rdx
  unsigned int v76; // r10d
  unsigned int v77; // edx
  __m128i *v78; // rax
  bool v79; // zf
  int v80; // ecx
  unsigned int v81; // ebx
  int v82; // eax
  unsigned int v83; // ebp
  int v84; // ecx
  int v85; // ecx
  unsigned int v86; // ebx
  int v87; // eax
  int v88; // eax
  int v89; // r8d
  unsigned int v90; // [rsp+30h] [rbp-58h]
  unsigned int v91; // [rsp+34h] [rbp-54h]
  __m128i *v92; // [rsp+38h] [rbp-50h]
  __m128i **v93; // [rsp+40h] [rbp-48h]
  unsigned int v94; // [rsp+98h] [rbp+10h]
  unsigned int v95; // [rsp+A0h] [rbp+18h]
  int v96; // [rsp+A8h] [rbp+20h]
  unsigned int v97; // [rsp+A8h] [rbp+20h]
  unsigned int v98; // [rsp+A8h] [rbp+20h]

  if ( (unsigned int)inflateStateCheck() )
    return 4294967294LL;
  v3 = (__m128i **)(v2 + 16);
  if ( !*(_QWORD *)(v2 + 16) )
    return 4294967294LL;
  if ( !*(_QWORD *)v2 )
  {
    if ( !*(_DWORD *)(v2 + 8) )
    {
      v4 = (__m128i **)(v2 + 16);
      goto LABEL_7;
    }
    return 4294967294LL;
  }
  v4 = (__m128i **)(v2 + 16);
LABEL_7:
  v5 = a1[5];
  v93 = v3;
  if ( *((_DWORD *)v5 + 2) == 16191 )
  {
    *((_DWORD *)v5 + 2) = 16192;
    v93 = v4;
  }
  v6 = (unsigned __int64)*v3;
  v7 = *((_DWORD *)a1 + 6);
  v8 = v7;
  v9 = *((_DWORD *)a1 + 2);
  v10 = *a1;
  v11 = *((_DWORD *)v5 + 18);
  v12 = *((_DWORD *)v5 + 19);
  v92 = *v3;
  v95 = v7;
  v91 = v9;
  v90 = v7;
  v94 = 0;
LABEL_10:
  v13 = v5 + 116;
  v14 = v5 + 112;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = *((_DWORD *)v5 + 2);
      if ( v15 > 16199 )
        break;
      if ( v15 == 16199 )
        goto LABEL_131;
      if ( v15 > 16193 )
      {
        v30 = v15 - 16194;
        if ( !v30 )
          goto LABEL_64;
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( !v33 )
              goto LABEL_84;
            if ( v33 != 1 )
              return 4294967294LL;
LABEL_95:
            while ( *((_DWORD *)v5 + 33) < (unsigned int)(*((_DWORD *)v5 + 31) + *((_DWORD *)v5 + 32)) )
            {
              v43 = *((_QWORD *)v5 + 12);
              v6 = (unsigned int)((1 << *v14) - 1);
              while ( 1 )
              {
                v44 = (unsigned __int8)BYTE1(*(_DWORD *)(v43 + 4LL * (v11 & (unsigned int)v6)));
                v96 = *(_DWORD *)(v43 + 4LL * (v11 & (unsigned int)v6));
                if ( v44 <= v12 )
                  break;
                if ( !v9 )
                  goto LABEL_246;
                --v9;
                v11 += *v10++ << v12;
                v12 += 8;
              }
              v45 = HIWORD(*(_DWORD *)(v43 + 4LL * (v11 & (unsigned int)v6)));
              if ( (unsigned __int16)v45 >= 0x10u )
              {
                if ( (_WORD)v45 == 16 )
                {
                  while ( v12 < (unsigned int)BYTE1(v96) + 2 )
                  {
                    if ( !v9 )
                      goto LABEL_246;
                    --v9;
                    v11 += *v10++ << v12;
                    v12 += 8;
                  }
                  v46 = *((_DWORD *)v5 + 33);
                  v11 >>= SBYTE1(v96);
                  v12 -= BYTE1(v96);
                  if ( !v46 )
                  {
LABEL_121:
                    a1[4] = "invalid bit length repeat";
                    *((_DWORD *)v5 + 2) = 16209;
                    break;
                  }
                  v12 -= 2;
                  v47 = v11 & 3;
                  v11 >>= 2;
                  v48 = v47 + 3;
                  v49 = *(_WORD *)&v5[2 * (v46 - 1) + 144];
                }
                else
                {
                  if ( HIWORD(v96) == 17 )
                  {
                    while ( v12 < (unsigned int)BYTE1(v96) + 3 )
                    {
                      if ( !v9 )
                        goto LABEL_246;
                      --v9;
                      v11 += *v10++ << v12;
                      v12 += 8;
                    }
                    v49 = 0;
                    v50 = v11 >> SBYTE1(v96);
                    v51 = -3;
                    v48 = (v50 & 7) + 3;
                    v11 = v50 >> 3;
                  }
                  else
                  {
                    while ( v12 < (unsigned int)BYTE1(v96) + 7 )
                    {
                      if ( !v9 )
                        goto LABEL_246;
                      --v9;
                      v11 += *v10++ << v12;
                      v12 += 8;
                    }
                    v49 = 0;
                    v52 = v11 >> SBYTE1(v96);
                    v51 = -7;
                    v48 = (v52 & 0x7F) + 11;
                    v11 = v52 >> 7;
                  }
                  v12 += v51 - BYTE1(v96);
                }
                v53 = *((_DWORD *)v5 + 33);
                if ( v53 + v48 > (unsigned int)(*((_DWORD *)v5 + 31) + *((_DWORD *)v5 + 32)) )
                  goto LABEL_121;
                do
                {
                  *(_WORD *)&v5[2 * v53 + 144] = v49;
                  v53 = ++*((_DWORD *)v5 + 33);
                  --v48;
                }
                while ( v48 );
              }
              else
              {
                v12 -= v44;
                v11 >>= v44;
                *(_WORD *)&v5[2 * (*((_DWORD *)v5 + 33))++ + 144] = v45;
              }
            }
            v13 = v5 + 116;
            v6 = (unsigned __int64)v92;
            if ( *((_DWORD *)v5 + 2) != 16209 )
            {
              if ( !*((_WORD *)v5 + 328) )
              {
                v24 = "invalid code -- missing end-of-block";
                v13 = v5 + 116;
                goto LABEL_236;
              }
              v54 = *((_DWORD *)v5 + 31);
              *((_QWORD *)v5 + 12) = v5 + 1360;
              *((_QWORD *)v5 + 17) = v5 + 1360;
              *v14 = 10;
              v94 = inflate_table(1, (int)v5 + 144, v54, (int)v5 + 136, (__int64)v14, (__int64)(v5 + 784));
              if ( v94 )
              {
                v6 = (unsigned __int64)v92;
                v24 = "invalid literal/lengths set";
                v8 = v90;
                v14 = v5 + 112;
                v7 = v95;
                v13 = v5 + 116;
                goto LABEL_236;
              }
              v55 = *((_DWORD *)v5 + 32);
              *((_QWORD *)v5 + 13) = *((_QWORD *)v5 + 17);
              v56 = *((_DWORD *)v5 + 31) + 72;
              *((_DWORD *)v5 + 29) = 9;
              v57 = inflate_table(2, (int)v5 + 2 * v56, v55, (int)v5 + 136, (__int64)(v5 + 116), (__int64)(v5 + 784));
              v6 = (unsigned __int64)v92;
              v14 = v5 + 112;
              v8 = v90;
              v7 = v95;
              v94 = v57;
              if ( v57 )
              {
                v24 = "invalid distances set";
                goto LABEL_93;
              }
LABEL_131:
              *((_DWORD *)v5 + 2) = 16200;
              goto LABEL_132;
            }
          }
          else
          {
            while ( v12 < 0xE )
            {
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            v34 = v11;
            v12 -= 14;
            v35 = v11 >> 5;
            v36 = v35;
            v37 = (v34 & 0x1F) + 257;
            v35 >>= 5;
            *((_DWORD *)v5 + 31) = v37;
            v38 = v35 & 0xF;
            v11 = v35 >> 4;
            v39 = (v36 & 0x1F) + 1;
            *((_DWORD *)v5 + 32) = v39;
            *((_DWORD *)v5 + 30) = v38 + 4;
            if ( v37 <= 0x11E && v39 <= 0x1E )
            {
              *((_DWORD *)v5 + 33) = 0;
              *((_DWORD *)v5 + 2) = 16197;
LABEL_84:
              while ( 1 )
              {
                v40 = *((unsigned int *)v5 + 33);
                if ( (unsigned int)v40 >= *((_DWORD *)v5 + 30) )
                  break;
                while ( v12 < 3 )
                {
                  if ( !v9 )
                    goto LABEL_246;
                  --v9;
                  v11 += *v10++ << v12;
                  v12 += 8;
                }
                v41 = v11 & 7;
                v11 >>= 3;
                *(_WORD *)&v5[2 * word_180198920[(*((_DWORD *)v5 + 33))++] + 144] = v41;
                v12 -= 3;
              }
              while ( (unsigned int)v40 < 0x13 )
              {
                *(_WORD *)&v5[2 * word_180198920[v40] + 144] = 0;
                v40 = (unsigned int)(*((_DWORD *)v5 + 33) + 1);
                *((_DWORD *)v5 + 33) = v40;
              }
              *v14 = 7;
              *((_QWORD *)v5 + 12) = v5 + 1360;
              *((_QWORD *)v5 + 17) = v5 + 1360;
              v42 = inflate_table(0, (int)v5 + 144, 19, (int)v5 + 136, (__int64)v14, (__int64)(v5 + 784));
              v7 = v95;
              v14 = v5 + 112;
              v94 = v42;
              if ( !v42 )
              {
                *((_DWORD *)v5 + 33) = 0;
                *((_DWORD *)v5 + 2) = 16198;
                goto LABEL_95;
              }
              v6 = (unsigned __int64)v92;
              v24 = "invalid code lengths set";
LABEL_93:
              v13 = v5 + 116;
              goto LABEL_236;
            }
            v24 = "too many length or distance symbols";
LABEL_236:
            a1[4] = (unsigned __int8 *)v24;
            *((_DWORD *)v5 + 2) = 16209;
          }
        }
        else
        {
LABEL_65:
          v28 = *((_DWORD *)v5 + 20);
          if ( v28 )
          {
            v29 = v9;
            if ( v28 <= v9 )
              v29 = *((_DWORD *)v5 + 20);
            if ( v29 > v7 )
              v29 = v7;
            if ( !v29 )
            {
LABEL_246:
              v83 = v94;
              goto LABEL_247;
            }
            memmove((void *)v6, v10, v29);
            v10 += v29;
            v7 = v95 - v29;
            *((_DWORD *)v5 + 20) -= v29;
            v6 = (unsigned __int64)v92->m128i_u64 + v29;
            v8 = v90;
            v9 -= v29;
            v95 -= v29;
            v92 = (__m128i *)v6;
            goto LABEL_54;
          }
          *((_DWORD *)v5 + 2) = 16191;
        }
      }
      else
      {
        if ( v15 == 16193 )
        {
          v11 >>= v12 & 7;
          for ( v12 -= v12 & 7; v12 < 0x20; v12 += 8 )
          {
            if ( !v9 )
              goto LABEL_246;
            --v9;
            v11 += *v10++ << v12;
          }
          if ( (unsigned __int16)v11 != ~v11 >> 16 )
          {
            v24 = "invalid stored block lengths";
            goto LABEL_236;
          }
          *((_DWORD *)v5 + 20) = (unsigned __int16)v11;
          v11 = 0;
          v12 = 0;
LABEL_64:
          *((_DWORD *)v5 + 2) = 16195;
          goto LABEL_65;
        }
        v16 = v15 - 16180;
        if ( v16 )
        {
          v17 = v16 - 9;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( (unsigned int)(v18 - 1) >= 2 )
                return 4294967294LL;
              goto LABEL_26;
            }
          }
          else
          {
            while ( v12 < 0x20 )
            {
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            v20 = _byteswap_ulong(v11);
            *((_DWORD *)v5 + 8) = v20;
            v12 = 0;
            *((_DWORD *)a1 + 19) = v20;
            v11 = 0;
            *((_DWORD *)v5 + 2) = 16190;
          }
          if ( !*((_DWORD *)v5 + 5) )
          {
            a1[2] = (unsigned __int8 *)v6;
            result = 2LL;
            *((_DWORD *)a1 + 6) = v7;
            *a1 = v10;
            *((_DWORD *)a1 + 2) = v9;
            *((_DWORD *)v5 + 18) = v11;
            *((_DWORD *)v5 + 19) = v12;
            return result;
          }
          v21 = adler32_z(0LL, 0LL);
          v6 = (unsigned __int64)v92;
          v14 = v5 + 112;
          v7 = v95;
          v13 = v5 + 116;
          *((_DWORD *)v5 + 8) = v21;
          *((_DWORD *)a1 + 19) = v21;
          *((_DWORD *)v5 + 2) = 16191;
LABEL_26:
          if ( *((_DWORD *)v5 + 3) )
          {
            *((_DWORD *)v5 + 2) = 16206;
            v11 >>= v12 & 7;
            v12 -= v12 & 7;
          }
          else
          {
            while ( v12 < 3 )
            {
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            v22 = v11;
            v23 = v11 >> 1;
            *((_DWORD *)v5 + 3) = v22 & 1;
            if ( (v23 & 3) != 0 )
            {
              switch ( v23 & 3 )
              {
                case 1u:
                  *v14 = 9;
                  *((_QWORD *)v5 + 12) = "`\a";
                  *((_QWORD *)v5 + 13) = &unk_1801988A0;
                  *v13 = 5;
                  *((_DWORD *)v5 + 2) = 16199;
                  break;
                case 2u:
                  *((_DWORD *)v5 + 2) = 16196;
                  break;
                case 3u:
                  a1[4] = "invalid block type";
                  *((_DWORD *)v5 + 2) = 16209;
                  break;
              }
            }
            else
            {
              *((_DWORD *)v5 + 2) = 16193;
            }
            v11 = v23 >> 2;
            v12 -= 3;
          }
        }
        else
        {
          if ( *((_DWORD *)v5 + 4) )
          {
            while ( v12 < 0x10 )
            {
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            if ( (v11 >> 8) + ((unsigned __int8)v11 << 8) != 31 * (((v11 >> 8) + ((unsigned __int8)v11 << 8)) / 0x1F) )
            {
              v24 = "incorrect header check";
              goto LABEL_236;
            }
            if ( (v11 & 0xF) != 8 )
            {
              v24 = "unknown compression method";
              goto LABEL_236;
            }
            v25 = *((_DWORD *)v5 + 12);
            v12 -= 4;
            v11 >>= 4;
            v26 = (v11 & 0xF) + 8;
            if ( !v25 )
            {
              *((_DWORD *)v5 + 12) = v26;
              v25 = (v11 & 0xF) + 8;
            }
            if ( v26 <= 0xF && v26 <= v25 )
            {
              *((_DWORD *)v5 + 6) = 0;
              *((_DWORD *)v5 + 7) = 1 << v26;
              v27 = adler32_z(0LL, 0LL);
              v6 = (unsigned __int64)v92;
              v12 = 0;
              v7 = v95;
              *((_DWORD *)v5 + 8) = v27;
              *((_DWORD *)a1 + 19) = v27;
              *((_DWORD *)v5 + 2) = ~BYTE1(v11) & 2 | 0x3F3D;
              v11 = 0;
LABEL_54:
              v14 = v5 + 112;
              goto LABEL_55;
            }
            v24 = "invalid window size";
            goto LABEL_236;
          }
          *((_DWORD *)v5 + 2) = 16192;
        }
      }
    }
    if ( v15 > 16205 )
      break;
    if ( v15 == 16205 )
    {
      if ( !v7 )
        goto LABEL_246;
      *(_BYTE *)v6++ = v5[80];
      --v7;
      v92 = (__m128i *)v6;
      v95 = v7;
      *((_DWORD *)v5 + 2) = 16200;
    }
    else
    {
      v58 = v15 - 16200;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( !v59 )
          goto LABEL_163;
        v60 = v59 - 1;
        if ( !v60 )
          goto LABEL_169;
        v61 = v60 - 1;
        if ( !v61 )
          goto LABEL_182;
        if ( v61 != 1 )
          return 4294967294LL;
LABEL_188:
        if ( !v7 )
          goto LABEL_246;
        v71 = *((unsigned int *)v5 + 21);
        if ( (unsigned int)v71 <= v8 - v7 )
        {
          v76 = *((_DWORD *)v5 + 20);
          if ( v76 > v7 )
            v76 = v7;
          v77 = v76;
          if ( v7 >= 0x30 )
          {
            if ( (unsigned int)v71 >= v76 || (unsigned int)v71 >= 0x10 )
            {
              v75 = (__int8 *)(v6 - v71);
LABEL_219:
              v78 = (__m128i *)chunkcopy_core((_OWORD *)v6, v75, v76);
            }
            else
            {
              v78 = chunkset_core((__m128i *)v6, v71, v76);
            }
            v92 = v78;
            goto LABEL_221;
          }
          if ( v76 )
          {
            do
            {
              *(_BYTE *)v6 = *(_BYTE *)(v6 - v71);
              ++v6;
              --v77;
            }
            while ( v77 );
          }
        }
        else
        {
          v72 = v71 - (v8 - v7);
          if ( v72 > *((_DWORD *)v5 + 14) && *((_DWORD *)v5 + 2264) )
          {
            v24 = "invalid distance too far back";
            goto LABEL_236;
          }
          v73 = *((_DWORD *)v5 + 15);
          if ( v72 <= v73 )
          {
            v74 = v73 - v72;
          }
          else
          {
            v72 -= v73;
            v74 = *((_DWORD *)v5 + 13) - v72;
          }
          v75 = (__int8 *)(*((_QWORD *)v5 + 8) + v74);
          v76 = *((_DWORD *)v5 + 20);
          if ( v72 <= v76 )
            v76 = v72;
          if ( v76 > v7 )
            v76 = v7;
          if ( v7 >= 0x10 )
            goto LABEL_219;
          if ( (v76 & 8) != 0 )
          {
            *(_QWORD *)v6 = *(_QWORD *)v75;
            v6 += 8LL;
            v75 += 8;
          }
          if ( (v76 & 4) != 0 )
          {
            *(_DWORD *)v6 = *(_DWORD *)v75;
            v6 += 4LL;
            v75 += 4;
          }
          if ( (v76 & 2) != 0 )
          {
            *(_WORD *)v6 = *(_WORD *)v75;
            v6 += 2LL;
            v75 += 2;
          }
          if ( (v76 & 1) != 0 )
            *(_BYTE *)v6++ = *v75;
        }
        v92 = (__m128i *)v6;
LABEL_221:
        v6 = (unsigned __int64)v92;
        v13 = v5 + 116;
        v7 -= v76;
        v79 = *((_DWORD *)v5 + 20) == v76;
        *((_DWORD *)v5 + 20) -= v76;
        v14 = v5 + 112;
        v95 = v7;
        if ( v79 )
        {
          *((_DWORD *)v5 + 2) = 16200;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_132:
        if ( v9 < 0xF || v7 < 0x104 )
        {
          v62 = *((_QWORD *)v5 + 12);
          v63 = (1 << *v14) - 1;
          *((_DWORD *)v5 + 2265) = 0;
          while ( 1 )
          {
            v64 = *(_DWORD *)(v62 + 4LL * (v11 & v63));
            v97 = v64;
            if ( BYTE1(v64) <= v12 )
              break;
            if ( !v9 )
              goto LABEL_246;
            --v9;
            v11 += *v10++ << v12;
            v12 += 8;
          }
          if ( (_BYTE)v64 && (v64 & 0xF0) == 0 )
          {
            v6 = (unsigned int)(1 << (BYTE1(v64) + v64));
            while ( 1 )
            {
              v64 = *(_DWORD *)(*((_QWORD *)v5 + 12) + 4LL * (HIWORD(v97) + ((v11 & ((_DWORD)v6 - 1)) >> SBYTE1(v97))));
              if ( BYTE1(v97) + (unsigned int)BYTE1(v64) <= v12 )
                break;
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            *((_DWORD *)v5 + 2265) = BYTE1(v97);
            v11 >>= SBYTE1(v97);
            v14 = v5 + 112;
            v12 -= BYTE1(v97);
          }
          *((_DWORD *)v5 + 2265) += BYTE1(v64);
          v11 >>= SBYTE1(v64);
          v12 -= BYTE1(v64);
          *((_DWORD *)v5 + 20) = HIWORD(v64);
          if ( (_BYTE)v64 )
          {
            if ( (v64 & 0x20) != 0 )
            {
              *((_DWORD *)v5 + 2265) = -1;
              *((_DWORD *)v5 + 2) = 16191;
              goto LABEL_157;
            }
            v13 = v5 + 116;
            if ( (v64 & 0x40) != 0 )
            {
              v6 = (unsigned __int64)v92;
              v24 = "invalid literal/length code";
              v7 = v95;
              goto LABEL_236;
            }
            *((_DWORD *)v5 + 2) = 16201;
            *((_DWORD *)v5 + 22) = v64 & 0xF;
LABEL_163:
            if ( *((_DWORD *)v5 + 22) )
            {
              while ( v12 < *((_DWORD *)v5 + 22) )
              {
                if ( !v9 )
                  goto LABEL_246;
                --v9;
                v11 += *v10++ << v12;
                v12 += 8;
              }
              v65 = *((_DWORD *)v5 + 22);
              v12 -= v65;
              v66 = v11 & ((1 << v65) - 1);
              v11 >>= v65;
              *((_DWORD *)v5 + 20) += v66;
              *((_DWORD *)v5 + 2265) += v65;
            }
            *((_DWORD *)v5 + 2266) = *((_DWORD *)v5 + 20);
            *((_DWORD *)v5 + 2) = 16202;
LABEL_169:
            v67 = (1 << *v13) - 1;
            while ( 1 )
            {
              v68 = *(_DWORD *)(*((_QWORD *)v5 + 13) + 4LL * (v11 & v67));
              v98 = v68;
              if ( BYTE1(v68) <= v12 )
                break;
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            if ( (v68 & 0xF0) == 0 )
            {
              v6 = (unsigned int)(1 << (BYTE1(v68) + v68));
              while ( 1 )
              {
                v68 = *(_DWORD *)(*((_QWORD *)v5 + 13) + 4LL * (HIWORD(v98) + ((v11 & ((_DWORD)v6 - 1)) >> SBYTE1(v98))));
                if ( BYTE1(v98) + (unsigned int)BYTE1(v68) <= v12 )
                  break;
                if ( !v9 )
                  goto LABEL_246;
                --v9;
                v11 += *v10++ << v12;
                v12 += 8;
              }
              v12 -= BYTE1(v98);
              v11 >>= SBYTE1(v98);
              *((_DWORD *)v5 + 2265) += BYTE1(v98);
            }
            v6 = (unsigned __int64)v92;
            v14 = v5 + 112;
            v7 = v95;
            v13 = v5 + 116;
            *((_DWORD *)v5 + 2265) += BYTE1(v68);
            v12 -= BYTE1(v68);
            v11 >>= SBYTE1(v68);
            if ( (v68 & 0x40) != 0 )
            {
              v24 = "invalid distance code";
              goto LABEL_236;
            }
            *((_DWORD *)v5 + 2) = 16203;
            *((_DWORD *)v5 + 21) = HIWORD(v68);
            *((_DWORD *)v5 + 22) = v68 & 0xF;
LABEL_182:
            if ( *((_DWORD *)v5 + 22) )
            {
              while ( v12 < *((_DWORD *)v5 + 22) )
              {
                if ( !v9 )
                  goto LABEL_246;
                --v9;
                v11 += *v10++ << v12;
                v12 += 8;
              }
              v69 = *((_DWORD *)v5 + 22);
              v12 -= v69;
              v70 = v11 & ((1 << v69) - 1);
              v11 >>= v69;
              *((_DWORD *)v5 + 21) += v70;
              *((_DWORD *)v5 + 2265) += v69;
            }
            *((_DWORD *)v5 + 2) = 16204;
            goto LABEL_188;
          }
          *((_DWORD *)v5 + 2) = 16205;
LABEL_157:
          v6 = (unsigned __int64)v92;
          v7 = v95;
LABEL_55:
          v13 = v5 + 116;
        }
        else
        {
          *((_DWORD *)a1 + 6) = v7;
          *a1 = v10;
          *((_DWORD *)a1 + 2) = v9;
          *v93 = (__m128i *)v6;
          *((_DWORD *)v5 + 18) = v11;
          *((_DWORD *)v5 + 19) = v12;
          inflate_fast_chunk_(a1, v8, v13);
          v14 = v5 + 112;
          v6 = (unsigned __int64)*v93;
          v13 = v5 + 116;
          v7 = *((_DWORD *)a1 + 6);
          v10 = *a1;
          v9 = *((_DWORD *)a1 + 2);
          v11 = *((_DWORD *)v5 + 18);
          v12 = *((_DWORD *)v5 + 19);
          v92 = *v93;
          v95 = v7;
          if ( *((_DWORD *)v5 + 2) == 16191 )
          {
            *((_DWORD *)v5 + 2265) = -1;
            goto LABEL_10;
          }
        }
      }
    }
  }
  v80 = v15 - 16206;
  if ( v80 )
  {
    v84 = v80 - 2;
    if ( !v84 )
      goto LABEL_240;
    v85 = v84 - 1;
    if ( !v85 )
    {
      v83 = -3;
      goto LABEL_247;
    }
    if ( v85 != 1 )
      return 4294967294LL;
    return 4294967292LL;
  }
  if ( !*((_DWORD *)v5 + 4) )
    goto LABEL_239;
  while ( v12 < 0x20 )
  {
    if ( !v9 )
      goto LABEL_246;
    --v9;
    v11 += *v10++ << v12;
    v12 += 8;
  }
  v81 = v8 - v7;
  *((_DWORD *)a1 + 7) += v81;
  *((_DWORD *)v5 + 9) += v81;
  if ( (v5[16] & 4) != 0 && v81 )
  {
    v82 = adler32_z(*((unsigned int *)v5 + 8), v6 - v81);
    v6 = (unsigned __int64)v92;
    v14 = v5 + 112;
    v7 = v95;
    v13 = v5 + 116;
    *((_DWORD *)v5 + 8) = v82;
    *((_DWORD *)a1 + 19) = v82;
  }
  v8 = v7;
  v90 = v7;
  if ( (v5[16] & 4) != 0 && _byteswap_ulong(v11) != *((_DWORD *)v5 + 8) )
  {
    v24 = "incorrect data check";
    goto LABEL_236;
  }
  v11 = 0;
  v12 = 0;
LABEL_239:
  *((_DWORD *)v5 + 2) = 16208;
LABEL_240:
  v83 = 1;
LABEL_247:
  a1[2] = (unsigned __int8 *)v92;
  *((_DWORD *)a1 + 6) = v95;
  *a1 = v10;
  *((_DWORD *)a1 + 2) = v9;
  *((_DWORD *)v5 + 19) = v12;
  *((_DWORD *)v5 + 18) = v11;
  if ( (*((_DWORD *)v5 + 13) || v8 != *((_DWORD *)a1 + 6) && *((int *)v5 + 2) <= 16205)
    && (unsigned int)updatewindow(a1, a1[2], v8 - *((_DWORD *)a1 + 6), v6) )
  {
    *((_DWORD *)v5 + 2) = 16210;
    return 4294967292LL;
  }
  v86 = v8 - *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 7) += v86;
  *((_DWORD *)a1 + 3) += v91 - *((_DWORD *)a1 + 2);
  *((_DWORD *)v5 + 9) += v86;
  if ( (v5[16] & 4) != 0 && v86 )
  {
    v87 = adler32_z(*((unsigned int *)v5 + 8), &a1[2][-v86]);
    *((_DWORD *)v5 + 8) = v87;
    *((_DWORD *)a1 + 19) = v87;
  }
  v88 = 128;
  if ( *((_DWORD *)v5 + 2) != 16191 )
    v88 = 0;
  if ( *((_DWORD *)v5 + 2) == 16199 || (v89 = 0, *((_DWORD *)v5 + 2) == 16194) )
    v89 = 256;
  *((_DWORD *)a1 + 18) = v89 + (*((_DWORD *)v5 + 3) != 0 ? 0x40 : 0) + v88 + *((_DWORD *)v5 + 19);
  if ( !v83 )
    return (unsigned int)-5;
  return v83;
}
