/*
 * XREFs of inflate @ 0x1405F15F0
 * Callers:
 *     RtlDecompressBufferDeflateInternal @ 0x1405EFB18 (RtlDecompressBufferDeflateInternal.c)
 * Callees:
 *     chunkcopy_core @ 0x1405F144C (chunkcopy_core.c)
 *     chunkset_core @ 0x1405F1490 (chunkset_core.c)
 *     inflateStateCheck @ 0x1405F27E8 (inflateStateCheck.c)
 *     updatewindow @ 0x1405F2828 (updatewindow.c)
 *     inflate_fast_chunk_ @ 0x1405FF1BC (inflate_fast_chunk_.c)
 *     adler32_z @ 0x1405FF6B4 (adler32_z.c)
 *     inflate_table @ 0x1405FF9D4 (inflate_table.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
  unsigned int v65; // edx
  int v66; // ecx
  int v67; // eax
  int v68; // r8d
  unsigned int v69; // eax
  unsigned int v70; // edx
  int v71; // ecx
  int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // ecx
  unsigned int v75; // eax
  __int64 v76; // rdx
  unsigned int v77; // r10d
  __int8 *v78; // rdx
  unsigned int v79; // edx
  __m128i *v80; // rax
  bool v81; // zf
  int v82; // ecx
  unsigned int v83; // ebx
  int v84; // eax
  unsigned int v85; // ebp
  int v86; // ecx
  int v87; // ecx
  unsigned int v88; // ebx
  int v89; // eax
  int v90; // r8d
  int v91; // eax
  int v92; // eax
  unsigned int v93; // [rsp+30h] [rbp-58h]
  unsigned int v94; // [rsp+34h] [rbp-54h]
  __m128i *v95; // [rsp+38h] [rbp-50h]
  __m128i **v96; // [rsp+40h] [rbp-48h]
  unsigned int v97; // [rsp+98h] [rbp+10h]
  unsigned int v98; // [rsp+A0h] [rbp+18h]
  int v99; // [rsp+A8h] [rbp+20h]
  unsigned int v100; // [rsp+A8h] [rbp+20h]
  unsigned int v101; // [rsp+A8h] [rbp+20h]

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
  v96 = v3;
  if ( *((_DWORD *)v5 + 2) == 16191 )
  {
    *((_DWORD *)v5 + 2) = 16192;
    v96 = v4;
  }
  v6 = (unsigned __int64)*v3;
  v7 = *((_DWORD *)a1 + 6);
  v8 = v7;
  v9 = *((_DWORD *)a1 + 2);
  v10 = *a1;
  v11 = *((_DWORD *)v5 + 18);
  v12 = *((_DWORD *)v5 + 19);
  v95 = *v3;
  v98 = v7;
  v94 = v9;
  v93 = v7;
  v97 = 0;
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
                v99 = *(_DWORD *)(v43 + 4LL * (v11 & (unsigned int)v6));
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
                  while ( v12 < (unsigned int)BYTE1(v99) + 2 )
                  {
                    if ( !v9 )
                      goto LABEL_246;
                    --v9;
                    v11 += *v10++ << v12;
                    v12 += 8;
                  }
                  v46 = *((_DWORD *)v5 + 33);
                  v11 >>= SBYTE1(v99);
                  v12 -= BYTE1(v99);
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
                  if ( HIWORD(v99) == 17 )
                  {
                    while ( v12 < (unsigned int)BYTE1(v99) + 3 )
                    {
                      if ( !v9 )
                        goto LABEL_246;
                      --v9;
                      v11 += *v10++ << v12;
                      v12 += 8;
                    }
                    v49 = 0;
                    v50 = v11 >> SBYTE1(v99);
                    v51 = -3;
                    v48 = (v50 & 7) + 3;
                    v11 = v50 >> 3;
                  }
                  else
                  {
                    while ( v12 < (unsigned int)BYTE1(v99) + 7 )
                    {
                      if ( !v9 )
                        goto LABEL_246;
                      --v9;
                      v11 += *v10++ << v12;
                      v12 += 8;
                    }
                    v49 = 0;
                    v52 = v11 >> SBYTE1(v99);
                    v51 = -7;
                    v48 = (v52 & 0x7F) + 11;
                    v11 = v52 >> 7;
                  }
                  v12 += v51 - BYTE1(v99);
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
            v6 = (unsigned __int64)v95;
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
              v97 = inflate_table(1, (int)v5 + 144, v54, (int)v5 + 136, (__int64)v14, (__int64)(v5 + 784));
              if ( v97 )
              {
                v6 = (unsigned __int64)v95;
                v24 = "invalid literal/lengths set";
                v8 = v93;
                v14 = v5 + 112;
                v7 = v98;
                v13 = v5 + 116;
                goto LABEL_236;
              }
              v55 = *((_DWORD *)v5 + 32);
              *((_QWORD *)v5 + 13) = *((_QWORD *)v5 + 17);
              v56 = *((_DWORD *)v5 + 31) + 72;
              *((_DWORD *)v5 + 29) = 9;
              v57 = inflate_table(2, (int)v5 + 2 * v56, v55, (int)v5 + 136, (__int64)(v5 + 116), (__int64)(v5 + 784));
              v6 = (unsigned __int64)v95;
              v14 = v5 + 112;
              v8 = v93;
              v7 = v98;
              v97 = v57;
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
                *(_WORD *)&v5[2 * *((unsigned __int16 *)qword_140035530 + (unsigned int)(*((_DWORD *)v5 + 33))++) + 144] = v41;
                v12 -= 3;
              }
              while ( (unsigned int)v40 < 0x13 )
              {
                *(_WORD *)&v5[2 * *((unsigned __int16 *)qword_140035530 + v40) + 144] = 0;
                v40 = (unsigned int)(*((_DWORD *)v5 + 33) + 1);
                *((_DWORD *)v5 + 33) = v40;
              }
              *v14 = 7;
              *((_QWORD *)v5 + 12) = v5 + 1360;
              *((_QWORD *)v5 + 17) = v5 + 1360;
              v42 = inflate_table(0, (int)v5 + 144, 19, (int)v5 + 136, (__int64)v14, (__int64)(v5 + 784));
              v7 = v98;
              v14 = v5 + 112;
              v97 = v42;
              if ( !v42 )
              {
                *((_DWORD *)v5 + 33) = 0;
                *((_DWORD *)v5 + 2) = 16198;
                goto LABEL_95;
              }
              v6 = (unsigned __int64)v95;
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
              v85 = v97;
              goto LABEL_247;
            }
            memmove((void *)v6, v10, v29);
            v10 += v29;
            v7 = v98 - v29;
            *((_DWORD *)v5 + 20) -= v29;
            v6 = (unsigned __int64)v95->m128i_u64 + v29;
            v8 = v93;
            v9 -= v29;
            v98 -= v29;
            v95 = (__m128i *)v6;
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
          v6 = (unsigned __int64)v95;
          v14 = v5 + 112;
          v7 = v98;
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
                  *((_QWORD *)v5 + 12) = qword_140034CB0;
                  *((_QWORD *)v5 + 13) = qword_1400354B0;
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
              v6 = (unsigned __int64)v95;
              v12 = 0;
              v7 = v98;
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
      v95 = (__m128i *)v6;
      v98 = v7;
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
        v73 = *((unsigned int *)v5 + 21);
        if ( (unsigned int)v73 <= v8 - v7 )
        {
          v77 = *((_DWORD *)v5 + 20);
          if ( v77 > v7 )
            v77 = v7;
          v79 = v77;
          if ( v7 >= 0x30 )
          {
            if ( (unsigned int)v73 >= v77 || (unsigned int)v73 >= 0x10 )
            {
              v78 = (__int8 *)(v6 - v73);
LABEL_219:
              v80 = (__m128i *)chunkcopy_core((_OWORD *)v6, v78, v77);
            }
            else
            {
              v80 = chunkset_core((__m128i *)v6, v73, v77);
            }
            v95 = v80;
            goto LABEL_221;
          }
          if ( v77 )
          {
            do
            {
              *(_BYTE *)v6 = *(_BYTE *)(v6 - v73);
              ++v6;
              --v79;
            }
            while ( v79 );
          }
        }
        else
        {
          v74 = v73 - (v8 - v7);
          if ( v74 > *((_DWORD *)v5 + 14) && *((_DWORD *)v5 + 2264) )
          {
            v24 = "invalid distance too far back";
            goto LABEL_236;
          }
          v75 = *((_DWORD *)v5 + 15);
          if ( v74 <= v75 )
          {
            v76 = v75 - v74;
          }
          else
          {
            v74 -= v75;
            v76 = *((_DWORD *)v5 + 13) - v74;
          }
          v77 = *((_DWORD *)v5 + 20);
          v78 = (__int8 *)(*((_QWORD *)v5 + 8) + v76);
          if ( v74 <= v77 )
            v77 = v74;
          if ( v77 > v7 )
            v77 = v7;
          if ( v7 >= 0x10 )
            goto LABEL_219;
          if ( (v77 & 8) != 0 )
          {
            *(_QWORD *)v6 = *(_QWORD *)v78;
            v6 += 8LL;
            v78 += 8;
          }
          if ( (v77 & 4) != 0 )
          {
            *(_DWORD *)v6 = *(_DWORD *)v78;
            v6 += 4LL;
            v78 += 4;
          }
          if ( (v77 & 2) != 0 )
          {
            *(_WORD *)v6 = *(_WORD *)v78;
            v6 += 2LL;
            v78 += 2;
          }
          if ( (v77 & 1) != 0 )
            *(_BYTE *)v6++ = *v78;
        }
        v95 = (__m128i *)v6;
LABEL_221:
        v6 = (unsigned __int64)v95;
        v13 = v5 + 116;
        v7 -= v77;
        v81 = *((_DWORD *)v5 + 20) == v77;
        *((_DWORD *)v5 + 20) -= v77;
        v14 = v5 + 112;
        v98 = v7;
        if ( v81 )
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
            v100 = v64;
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
              v64 = *(_DWORD *)(*((_QWORD *)v5 + 12) + 4LL * (HIWORD(v100) + ((v11 & ((_DWORD)v6 - 1)) >> SBYTE1(v100))));
              if ( BYTE1(v100) + (unsigned int)BYTE1(v64) <= v12 )
                break;
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            *((_DWORD *)v5 + 2265) = BYTE1(v100);
            v11 >>= SBYTE1(v100);
            v14 = v5 + 112;
            v12 -= BYTE1(v100);
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
              v6 = (unsigned __int64)v95;
              v24 = "invalid literal/length code";
              v7 = v98;
              goto LABEL_236;
            }
            *((_DWORD *)v5 + 2) = 16201;
            *((_DWORD *)v5 + 22) = v64 & 0xF;
LABEL_163:
            v65 = *((_DWORD *)v5 + 22);
            if ( v65 )
            {
              while ( v12 < v65 )
              {
                if ( !v9 )
                  goto LABEL_246;
                --v9;
                v11 += *v10++ << v12;
                v12 += 8;
              }
              v66 = *((_DWORD *)v5 + 22);
              v12 -= v66;
              v67 = v11 & ((1 << v66) - 1);
              v11 >>= v66;
              *((_DWORD *)v5 + 20) += v67;
              *((_DWORD *)v5 + 2265) += v66;
            }
            *((_DWORD *)v5 + 2266) = *((_DWORD *)v5 + 20);
            *((_DWORD *)v5 + 2) = 16202;
LABEL_169:
            v68 = (1 << *v13) - 1;
            while ( 1 )
            {
              v69 = *(_DWORD *)(*((_QWORD *)v5 + 13) + 4LL * (v11 & v68));
              v101 = v69;
              if ( BYTE1(v69) <= v12 )
                break;
              if ( !v9 )
                goto LABEL_246;
              --v9;
              v11 += *v10++ << v12;
              v12 += 8;
            }
            if ( (v69 & 0xF0) == 0 )
            {
              v6 = (unsigned int)(1 << (BYTE1(v69) + v69));
              while ( 1 )
              {
                v69 = *(_DWORD *)(*((_QWORD *)v5 + 13)
                                + 4LL * (HIWORD(v101) + ((v11 & ((_DWORD)v6 - 1)) >> SBYTE1(v101))));
                if ( BYTE1(v101) + (unsigned int)BYTE1(v69) <= v12 )
                  break;
                if ( !v9 )
                  goto LABEL_246;
                --v9;
                v11 += *v10++ << v12;
                v12 += 8;
              }
              v12 -= BYTE1(v101);
              v11 >>= SBYTE1(v101);
              *((_DWORD *)v5 + 2265) += BYTE1(v101);
            }
            v6 = (unsigned __int64)v95;
            v14 = v5 + 112;
            v7 = v98;
            v13 = v5 + 116;
            *((_DWORD *)v5 + 2265) += BYTE1(v69);
            v12 -= BYTE1(v69);
            v11 >>= SBYTE1(v69);
            if ( (v69 & 0x40) != 0 )
            {
              v24 = "invalid distance code";
              goto LABEL_236;
            }
            *((_DWORD *)v5 + 2) = 16203;
            *((_DWORD *)v5 + 21) = HIWORD(v69);
            *((_DWORD *)v5 + 22) = v69 & 0xF;
LABEL_182:
            v70 = *((_DWORD *)v5 + 22);
            if ( v70 )
            {
              while ( v12 < v70 )
              {
                if ( !v9 )
                  goto LABEL_246;
                --v9;
                v11 += *v10++ << v12;
                v12 += 8;
              }
              v71 = *((_DWORD *)v5 + 22);
              v12 -= v71;
              v72 = v11 & ((1 << v71) - 1);
              v11 >>= v71;
              *((_DWORD *)v5 + 21) += v72;
              *((_DWORD *)v5 + 2265) += v71;
            }
            *((_DWORD *)v5 + 2) = 16204;
            goto LABEL_188;
          }
          *((_DWORD *)v5 + 2) = 16205;
LABEL_157:
          v6 = (unsigned __int64)v95;
          v7 = v98;
LABEL_55:
          v13 = v5 + 116;
        }
        else
        {
          *((_DWORD *)a1 + 6) = v7;
          *a1 = v10;
          *((_DWORD *)a1 + 2) = v9;
          *v96 = (__m128i *)v6;
          *((_DWORD *)v5 + 18) = v11;
          *((_DWORD *)v5 + 19) = v12;
          inflate_fast_chunk_(a1, v8, v13);
          v14 = v5 + 112;
          v6 = (unsigned __int64)*v96;
          v13 = v5 + 116;
          v7 = *((_DWORD *)a1 + 6);
          v10 = *a1;
          v9 = *((_DWORD *)a1 + 2);
          v11 = *((_DWORD *)v5 + 18);
          v12 = *((_DWORD *)v5 + 19);
          v95 = *v96;
          v98 = v7;
          if ( *((_DWORD *)v5 + 2) == 16191 )
          {
            *((_DWORD *)v5 + 2265) = -1;
            goto LABEL_10;
          }
        }
      }
    }
  }
  v82 = v15 - 16206;
  if ( v82 )
  {
    v86 = v82 - 2;
    if ( !v86 )
      goto LABEL_240;
    v87 = v86 - 1;
    if ( !v87 )
    {
      v85 = -3;
      goto LABEL_247;
    }
    if ( v87 != 1 )
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
  v83 = v8 - v7;
  *((_DWORD *)a1 + 7) += v83;
  *((_DWORD *)v5 + 9) += v83;
  if ( (*((_DWORD *)v5 + 4) & 4) != 0 && v83 )
  {
    v84 = adler32_z(*((unsigned int *)v5 + 8), v6 - v83);
    v6 = (unsigned __int64)v95;
    v14 = v5 + 112;
    v7 = v98;
    v13 = v5 + 116;
    *((_DWORD *)v5 + 8) = v84;
    *((_DWORD *)a1 + 19) = v84;
  }
  v8 = v7;
  v93 = v7;
  if ( (*((_DWORD *)v5 + 4) & 4) != 0 && _byteswap_ulong(v11) != *((_DWORD *)v5 + 8) )
  {
    v24 = "incorrect data check";
    goto LABEL_236;
  }
  v11 = 0;
  v12 = 0;
LABEL_239:
  *((_DWORD *)v5 + 2) = 16208;
LABEL_240:
  v85 = 1;
LABEL_247:
  a1[2] = (unsigned __int8 *)v95;
  *((_DWORD *)a1 + 6) = v98;
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
  v88 = v8 - *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 7) += v88;
  *((_DWORD *)a1 + 3) += v94 - *((_DWORD *)a1 + 2);
  *((_DWORD *)v5 + 9) += v88;
  if ( (*((_DWORD *)v5 + 4) & 4) != 0 && v88 )
  {
    v89 = adler32_z(*((unsigned int *)v5 + 8), &a1[2][-v88]);
    *((_DWORD *)v5 + 8) = v89;
    *((_DWORD *)a1 + 19) = v89;
  }
  v90 = 128;
  v91 = *((_DWORD *)v5 + 2);
  if ( v91 != 16191 )
    v90 = 0;
  if ( v91 == 16199 || (v81 = v91 == 16194, v92 = 0, v81) )
    v92 = 256;
  *((_DWORD *)a1 + 18) = v92 + (*((_DWORD *)v5 + 3) != 0 ? 0x40 : 0) + v90 + *((_DWORD *)v5 + 19);
  if ( !v85 )
    return (unsigned int)-5;
  return v85;
}
