/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1800B9670
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1800B8DA0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x1800B9E70 (XpressBuildHuffmanEncodings.c)
 *     RtlpMakeXpressCallback @ 0x1800BA280 (RtlpMakeXpressCallback.c)
 *     XpressDoHuffmanPass @ 0x1800BA2D0 (XpressDoHuffmanPass.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int8 *v8; // rdi
  void *v9; // r9
  __int64 v10; // rbp
  __int64 v11; // r12
  unsigned __int8 *v12; // rcx
  int v13; // r15d
  unsigned __int8 *v14; // r11
  unsigned __int8 *v15; // rbx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  char v18; // al
  unsigned __int8 v19; // al
  int v20; // esi
  __int64 v21; // rax
  unsigned __int8 *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 v29; // rbp
  __int64 v30; // r14
  __int64 v31; // rbp
  __int64 v32; // r14
  int v33; // ecx
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  _BYTE *v37; // r8
  unsigned __int64 v38; // rdx
  char v39; // cl
  unsigned __int8 v40; // cl
  _WORD *v41; // rbx
  int v42; // eax
  __int64 XpressCallback; // rax
  __int64 v44; // r8
  unsigned __int8 *v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int8 *v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // r8
  unsigned __int8 *v51; // rcx
  __int64 v52; // rax
  int *v53; // rcx
  __int64 v54; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+38h] [rbp-A0h]
  __int64 v56; // [rsp+40h] [rbp-98h]
  unsigned __int64 v57; // [rsp+48h] [rbp-90h]
  __int64 v58; // [rsp+50h] [rbp-88h]
  unsigned __int8 *v59; // [rsp+68h] [rbp-70h]
  unsigned __int64 v60; // [rsp+70h] [rbp-68h]
  __int64 v61; // [rsp+78h] [rbp-60h]
  __int128 v62; // [rsp+80h] [rbp-58h] BYREF
  __int64 v63; // [rsp+90h] [rbp-48h]
  int v65; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v67; // [rsp+110h] [rbp+38h]
  unsigned __int8 *v69; // [rsp+118h] [rbp+40h]

  v65 = a3;
  v6 = a2;
  v63 = 0LL;
  v61 = a2;
  v60 = a3 + a4;
  v7 = a2 + a1;
  v57 = v7;
  v62 = 0LL;
  if ( a4 < 0x12C )
    return 3221225507LL;
  LODWORD(v63) = a2;
  v58 = a3;
  memset64((void *)a6, a1, 0xAF6uLL);
  memset64((void *)(a6 + 22448), a1, 0x12EEuLL);
  v8 = (unsigned __int8 *)a1;
  v9 = (void *)(a6 + 90432);
  while ( 2 )
  {
    v10 = 0LL;
    v56 = 0LL;
    v11 = 0LL;
    v54 = 0LL;
    memset_thunk_772440563353939046(v9, 0, 0x800uLL);
    v12 = v8 + 0x10000;
    v13 = 1;
    v14 = (unsigned __int8 *)(a6 + 92736);
    v69 = (unsigned __int8 *)(a6 + 92736);
    if ( (unsigned __int64)(v8 + 0x10000) > v7 )
      v12 = (unsigned __int8 *)v7;
    v15 = (unsigned __int8 *)(a6 + 92740);
    v16 = (unsigned __int64)&v8[v6];
    v59 = v12;
    v17 = (unsigned __int64)(v12 - 40);
    v55 = (unsigned __int64)(v12 - 40);
    if ( (unsigned __int64)(v12 - 40) < v16 )
      v16 = (unsigned __int64)(v12 - 40);
    v67 = v16;
    if ( v8 == (unsigned __int8 *)a1 )
    {
      v13 = 2;
      ++*(_DWORD *)(a6 + 4LL * *v8 + 90432);
      v18 = *v8++;
      *(_BYTE *)(a6 + 92740) = v18;
      v15 = (unsigned __int8 *)(a6 + 92741);
    }
    if ( (unsigned __int64)v8 >= v17 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = v8;
          v24 = a6 + 8LL * *v8;
          v25 = v8[2] + 4LL * v8[1];
          v26 = *(_QWORD *)(v24 + 16 * v25);
          *(_QWORD *)(v24 + 16 * v25) = v8;
          if ( *(_WORD *)v26 != *(_WORD *)v8 || *(_BYTE *)(v26 + 2) != v8[2] || (__int64)&v8[-v26] >= 0x10000 )
            break;
          v27 = *(unsigned __int8 *)(v26 + 3);
          v28 = v8[3];
          if ( (_BYTE)v28 != (_BYTE)v27 )
          {
            v44 = *v8 + 2 * v25;
            v45 = *(unsigned __int8 **)(a6 + 8 * (v44 + v28) + 22448);
            *(_QWORD *)(a6 + 8 * (v44 + v27) + 22448) = v26;
            if ( v8 - v45 >= 0x10000 )
              goto LABEL_66;
            v46 = *(unsigned int *)v8;
            if ( (_DWORD)v46 != *(_DWORD *)v45 )
              goto LABEL_66;
            v26 = (unsigned __int64)v45;
            *(_QWORD *)(a6 + 8 * (v44 + (v46 >> 24)) + 22448) = v8;
          }
          v29 = *(unsigned __int8 *)(v26 + 4);
          v30 = v8[4];
          if ( (_BYTE)v30 != (_BYTE)v29 )
          {
            v47 = 2
                * ((unsigned __int8)__ROR1__(v8[1] ^ __ROL1__(v8[3] + *v8, 3), 1)
                 + 4LL * (unsigned __int8)__ROL1__(*v8 ^ __ROR1__(v8[2] + v8[1] + 97, 1), 3));
            v48 = *(unsigned __int8 **)(a6 + 8 * (v47 + v30) + 22448);
            *(_QWORD *)(a6 + 8 * (v47 + v29) + 22448) = v26;
            if ( v8 - v48 >= 0x10000
              || *(_DWORD *)v8 != *(_DWORD *)v48
              || (v49 = v8[4], (_BYTE)v49 != v48[4])
              || v8 == v48 )
            {
              v8 += 4;
              v26 += 4LL;
              goto LABEL_36;
            }
            v26 = (unsigned __int64)v48;
            *(_QWORD *)(a6 + 8 * (v47 + v49) + 22448) = v8;
          }
          v31 = *(unsigned __int8 *)(v26 + 5);
          v32 = v8[5];
          if ( (_BYTE)v32 == (_BYTE)v31 )
            goto LABEL_30;
          v50 = 2
              * ((v8[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v8, v8[4]))
               + 4
               * ((unsigned __int8)__ROL1__(v8[4] ^ (__ROR1__(*v8, 1) + 69), 3)
                + (unsigned __int64)(unsigned __int8)__ROR1__(v8[1] ^ __ROL1__(v8[3], 3), 1)));
          v51 = *(unsigned __int8 **)(a6 + 8 * (v50 + v32) + 22448);
          *(_QWORD *)(a6 + 8 * (v50 + v31) + 22448) = v26;
          if ( v8 - v51 < 0x10000 && *(_DWORD *)v8 == *(_DWORD *)v51 && v8[4] == v51[4] )
          {
            v52 = v8[5];
            if ( (_BYTE)v52 == v51[5] && v8 != v51 )
            {
              v26 = (unsigned __int64)v51;
              *(_QWORD *)(a6 + 8 * (v50 + v52) + 22448) = v8;
LABEL_30:
              v8 += 6;
              for ( v26 += 6LL; ; v26 += 32LL )
              {
                if ( (unsigned __int64)v8 >= v57 - 40 )
                {
                  for ( ; (unsigned __int64)v8 < v57; ++v26 )
                  {
                    if ( *v8 != *(_BYTE *)v26 )
                      break;
                    ++v8;
                  }
                  goto LABEL_36;
                }
                v33 = *(_DWORD *)v26;
                v34 = *(_DWORD *)v8;
                if ( *(_DWORD *)v8 != *(_DWORD *)v26 )
                  break;
                v33 = *(_DWORD *)(v26 + 4);
                v34 = *((_DWORD *)v8 + 1);
                if ( v34 != v33 )
                {
                  v8 += 4;
                  v26 += 4LL;
                  break;
                }
                v33 = *(_DWORD *)(v26 + 8);
                v34 = *((_DWORD *)v8 + 2);
                if ( v34 != v33 )
                {
                  v8 += 8;
                  v26 += 8LL;
                  break;
                }
                v33 = *(_DWORD *)(v26 + 12);
                v34 = *((_DWORD *)v8 + 3);
                if ( v34 != v33 )
                {
                  v8 += 12;
                  v26 += 12LL;
                  break;
                }
                v33 = *(_DWORD *)(v26 + 16);
                v34 = *((_DWORD *)v8 + 4);
                if ( v34 != v33 )
                {
                  v8 += 16;
                  v26 += 16LL;
                  break;
                }
                v33 = *(_DWORD *)(v26 + 20);
                v34 = *((_DWORD *)v8 + 5);
                if ( v34 != v33 )
                {
                  v8 += 20;
                  v26 += 20LL;
                  break;
                }
                v33 = *(_DWORD *)(v26 + 24);
                v34 = *((_DWORD *)v8 + 6);
                if ( v34 != v33 )
                {
                  v8 += 24;
                  v26 += 24LL;
                  break;
                }
                v33 = *(_DWORD *)(v26 + 28);
                v34 = *((_DWORD *)v8 + 7);
                if ( v34 != v33 )
                {
                  v8 += 28;
                  v26 += 28LL;
                  break;
                }
                v8 += 32;
              }
              if ( (_BYTE)v34 != (_BYTE)v33 )
                goto LABEL_36;
              if ( v8[1] != *(_BYTE *)(v26 + 1) )
              {
                ++v8;
                ++v26;
                goto LABEL_36;
              }
              v16 = v67;
              if ( v8[2] != *(_BYTE *)(v26 + 2) )
              {
                v8 += 2;
                v26 += 2LL;
                goto LABEL_37;
              }
LABEL_66:
              v8 += 3;
              v26 += 3LL;
              goto LABEL_37;
            }
          }
          v8 += 5;
          v26 += 5LL;
LABEL_36:
          v16 = v67;
LABEL_37:
          v35 = (unsigned __int64)&v8[-v26];
          if ( v8 - v23 == 3 && v35 > 0x1000 )
          {
            v14 = v69;
            v17 = v55;
            break;
          }
          if ( v35 >= 0x100 )
            v36 = XpressHighBitIndexTable[v35 >> 8] + 8LL;
          else
            v36 = XpressHighBitIndexTable[v35];
          v26 = v8 - v23 - 3;
          v10 = v36 + v56;
          v37 = v15 + 1;
          v56 += v36;
          v38 = v35 - (1LL << v36);
          v39 = 16 * v36;
          if ( v26 >= 0xF )
          {
            v40 = v39 + 15;
            *v15 = v40;
            v41 = v15 + 2;
            if ( (unsigned __int64)(v8 - v23 - 18) >= 0xFF )
            {
              *v37 = -1;
              if ( v26 >= 0x10000 )
              {
                *(_DWORD *)(v37 + 3) = v26;
                v54 += 7LL;
                *v41 = 0;
                v41 = v37 + 7;
              }
              else
              {
                v54 += 3LL;
                *v41 = v26;
                v41 = v37 + 3;
              }
            }
            else
            {
              ++v54;
              *v37 = (_BYTE)v8 - (_BYTE)v23 - 18;
            }
          }
          else
          {
            v40 = v26 + v39;
            *v15 = v40;
            v41 = v15 + 1;
          }
          ++*(_DWORD *)(a6 + 4LL * v40 + 91456);
          v42 = 2 * v13 + 1;
          *v41 = v38;
          v15 = (unsigned __int8 *)(v41 + 1);
          if ( v13 <= 0 )
          {
            v53 = (int *)v69;
            v13 = 1;
            v69 = v15;
            v15 += 4;
            *v53 = v42;
          }
          else
          {
            v13 = 2 * v13 + 1;
          }
          v14 = v69;
          v17 = v55;
          if ( (unsigned __int64)v8 >= v16 )
          {
            if ( (unsigned __int64)v8 >= v55 )
              goto LABEL_82;
LABEL_46:
            XpressCallback = RtlpMakeXpressCallback(&v62, v17, v8, v26);
            v14 = v69;
            v16 = XpressCallback;
            v67 = XpressCallback;
          }
        }
        v8 = v23 + 1;
        ++*(_DWORD *)(a6 + 4LL * *v23 + 90432);
        *v15++ = *v23;
        if ( v13 <= 0 )
          break;
        v13 *= 2;
      }
      *(_DWORD *)v14 = 2 * v13;
      v13 = 1;
      v14 = v15;
      v69 = v15;
      v15 += 4;
    }
    while ( (unsigned __int64)v8 < v16 );
    if ( (unsigned __int64)v8 < v17 )
      goto LABEL_46;
    v10 = v56;
LABEL_82:
    v11 = v54;
    v12 = v59;
LABEL_10:
    while ( v8 < v12 )
    {
      ++*(_DWORD *)(a6 + 4LL * *v8 + 90432);
      v19 = *v8++;
      *v15++ = v19;
      if ( v13 <= 0 )
      {
        *(_DWORD *)v14 = 2 * v13;
        v13 = 1;
        v14 = v15;
        v15 += 4;
      }
      else
      {
        v13 *= 2;
      }
    }
    for ( ; v13 > 0; v13 = 2 * v13 + 1 )
      ;
    *(_DWORD *)v14 = 2 * v13 + 1;
    if ( (unsigned __int64)v8 < v57 )
    {
      v20 = 0;
    }
    else
    {
      ++*(_DWORD *)(a6 + 91456);
      v20 = 1;
    }
    if ( v11 + 4 * ((unsigned __int64)(v10 + XpressBuildHuffmanEncodings(a6 + 61216) + 31) >> 5) + v58 + 258 < v60 )
    {
      v21 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v15, v58, v20);
      v7 = v57;
      v6 = v61;
      v9 = (void *)(a6 + 90432);
      v58 = v21;
      if ( v20 )
      {
        *a5 = v21 - v65;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
