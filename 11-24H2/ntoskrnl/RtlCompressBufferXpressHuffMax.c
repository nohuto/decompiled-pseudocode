/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x140494760
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1403853E0 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x1405EE680 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x140385D00 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x140386120 (XpressDoHuffmanPass.c)
 *     RtlpMakeXpressCallback @ 0x140409D30 (RtlpMakeXpressCallback.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  unsigned __int8 *v14; // rbx
  int *v15; // rcx
  unsigned __int8 *v16; // r10
  unsigned __int64 v17; // rbp
  int v18; // edi
  unsigned __int64 v19; // r11
  unsigned __int8 *v20; // rsi
  int v21; // edi
  unsigned __int8 *v23; // r8
  __int64 v24; // r9
  char *v25; // rax
  bool v26; // zf
  int v27; // r8d
  unsigned __int8 *v28; // rdx
  int v29; // eax
  int v30; // eax
  unsigned __int8 *v31; // rcx
  __int64 v32; // r12
  __int64 v33; // r9
  unsigned __int8 *v34; // r13
  unsigned __int8 *v35; // r10
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // r9
  _BYTE *v39; // r8
  unsigned __int64 v40; // rdx
  char v41; // cl
  unsigned __int8 v42; // cl
  _WORD *v43; // rsi
  __int64 v44; // rax
  unsigned __int8 *v45; // rbx
  _DWORD *i; // rdx
  unsigned __int8 *v47; // r12
  int v48; // eax
  int v49; // ecx
  unsigned __int64 v50; // rbx
  unsigned __int8 *v51; // rax
  unsigned __int8 v52; // al
  unsigned __int64 XpressCallback; // rax
  __int64 v54; // rax
  unsigned __int8 v55; // al
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  unsigned __int64 v60; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v61; // [rsp+38h] [rbp-A0h]
  unsigned __int8 *v62; // [rsp+40h] [rbp-98h]
  unsigned __int64 v63; // [rsp+48h] [rbp-90h]
  __int64 v64; // [rsp+50h] [rbp-88h]
  __int64 v65; // [rsp+58h] [rbp-80h]
  unsigned __int64 v66; // [rsp+60h] [rbp-78h]
  char *v67; // [rsp+68h] [rbp-70h]
  unsigned __int64 v68; // [rsp+70h] [rbp-68h]
  unsigned __int8 *v69; // [rsp+78h] [rbp-60h]
  _QWORD v70[2]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v71; // [rsp+90h] [rbp-48h]
  int v72; // [rsp+94h] [rbp-44h]
  char *v73; // [rsp+E0h] [rbp+8h]
  int v74; // [rsp+F0h] [rbp+18h]

  v74 = (int)a3;
  v9 = a1 + a2;
  v10 = (unsigned __int64)&a3[a4];
  v11 = a2;
  v72 = 0;
  v66 = v9;
  v68 = v10;
  if ( a4 < 0x12C )
    return 3221225507LL;
  if ( a1 > 0x10001 )
  {
    memset_0(a6, 0, 0x40000uLL);
    v14 = (unsigned __int8 *)a1;
    v67 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    if ( a7 && a9 <= v11 )
      v11 = a9;
    else
      a9 = v11;
    v70[0] = a7;
    v70[1] = a8;
    v71 = v11;
    v62 = 0LL;
    while ( 1 )
    {
      v64 = 0LL;
      v65 = 0LL;
      memset_0(a6 + 1339936, 0, 0x800uLL);
      v15 = (int *)(a6 + 1342240);
      v16 = (unsigned __int8 *)v9;
      if ( (unsigned __int64)(v14 + 0x10000) <= v9 )
        v16 = v14 + 0x10000;
      v73 = (char *)(a6 + 1342240);
      v17 = (unsigned __int64)&v14[v11];
      v69 = v16;
      v18 = 1;
      v19 = (unsigned __int64)(v16 - 5);
      v63 = (unsigned __int64)(v16 - 5);
      if ( (unsigned __int64)(v16 - 5) < v17 )
        v17 = (unsigned __int64)(v16 - 5);
      v20 = a6 + 1342244;
      if ( v14 == (unsigned __int8 *)a1 )
      {
        v18 = 2;
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v52 = *v14++;
        *v20 = v52;
        v20 = a6 + 1342245;
      }
      if ( (unsigned __int64)v14 < v19 )
        break;
LABEL_14:
      while ( v14 < v16 )
      {
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v55 = *v14++;
        *v20++ = v55;
        if ( v18 <= 0 )
        {
          *v15 = 2 * v18;
          v18 = 1;
          v15 = (int *)v20;
          v20 += 4;
        }
        else
        {
          v18 *= 2;
        }
      }
      for ( ; v18 > 0; v18 = 2 * v18 + 1 )
        ;
      *v15 = 2 * v18 + 1;
      if ( (unsigned __int64)v14 >= v9 )
      {
        ++*((_DWORD *)a6 + 335240);
        v21 = 1;
      }
      else
      {
        v21 = 0;
      }
      if ( (unsigned __int64)&v67[4
                                * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v64 + 31) >> 5)
                                + 258
                                + v65] >= v10 )
        return 3221225507LL;
      v25 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v20, v67, v21);
      v26 = v21 == 0;
      v67 = v25;
      v11 = a9;
      if ( !v26 )
      {
        *a5 = (_DWORD)v25 - v74;
        return 0LL;
      }
    }
    v23 = v14;
    v24 = (__int64)&v14[-a1] % 0x20000;
    do
    {
      v56 = (unsigned __int16)word_1400133B0[v23[2]] ^ (unsigned __int16)XpressHashFunction[*v23] ^ (unsigned __int64)(unsigned __int16)word_1400131B0[v23[1]];
      v57 = *(_QWORD *)&a6[8 * v56];
      *(_QWORD *)&a6[8 * v56] = v23++;
      *(_QWORD *)&a6[8 * v24 + 0x40000] = v57;
      v24 = ((_DWORD)v24 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v23 < v19 );
    v15 = (int *)(a6 + 1342240);
LABEL_25:
    while ( 2 )
    {
      if ( (unsigned __int64)v14 >= v17 )
      {
        if ( (unsigned __int64)v14 >= v19 )
        {
          v10 = v68;
          v9 = v66;
          v16 = v69;
          goto LABEL_14;
        }
        XpressCallback = RtlpMakeXpressCallback((__int64)v70, v19, (__int64)v14);
        v19 = v63;
        v17 = XpressCallback;
      }
      v27 = *(_DWORD *)v14;
      v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v14[-a1] % 0x20000) + 0x40000];
      if ( v28 + 0x10000 <= v14 )
        goto LABEL_27;
      v30 = *(_DWORD *)v28 ^ v27;
      if ( v30 )
      {
        if ( (v30 & 0xFFFFFF) == 0 )
          goto LABEL_31;
        v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
        if ( v28 + 0x10000 > v14 )
        {
          v58 = *(_DWORD *)v28 ^ v27;
          if ( !v58 )
          {
            v60 = 3LL;
            v61 = v14 - 0x10000;
            v34 = v14;
            v33 = 0LL;
            goto LABEL_43;
          }
          if ( (v58 & 0xFFFFFF) == 0 )
            goto LABEL_31;
          v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
          if ( v28 + 0x10000 > v14 )
          {
            v59 = *(_DWORD *)v28 ^ v27;
            if ( !v59 )
            {
              v60 = 3LL;
              v61 = v14 - 0x10000;
              v34 = v14;
              v33 = 0LL;
              goto LABEL_43;
            }
            if ( (v59 & 0xFFFFFF) == 0 )
            {
LABEL_31:
              v31 = v14 - 0x10000;
              v62 = v28;
              v61 = v14 - 0x10000;
              v32 = 3LL;
              v33 = 0LL;
              v60 = 3LL;
              v34 = v14;
              goto LABEL_32;
            }
          }
        }
LABEL_27:
        v15 = (int *)v73;
        ++v14;
        ++*(_DWORD *)&a6[4 * (unsigned __int8)v27 + 1339936];
        *v20++ = v27;
        v29 = 2 * v18;
        if ( v18 > 0 )
        {
          v18 *= 2;
          continue;
        }
        goto LABEL_61;
      }
      break;
    }
    v60 = 3LL;
    v61 = v14 - 0x10000;
    v34 = v14;
    v33 = 0LL;
    while ( 1 )
    {
LABEL_43:
      v45 = v14 + 4;
      for ( i = v28 + 4; ; i += 8 )
      {
        v47 = v45 + 32;
        if ( (unsigned __int64)(v45 + 32) >= v66 )
          break;
        v48 = *(_DWORD *)v45;
        v49 = *i;
        if ( *(_DWORD *)v45 != *i )
          goto LABEL_48;
        v48 = *((_DWORD *)v45 + 1);
        v49 = i[1];
        if ( v48 != v49 )
        {
          v45 += 4;
          ++i;
          goto LABEL_48;
        }
        v48 = *((_DWORD *)v45 + 2);
        v49 = i[2];
        if ( v48 != v49 )
        {
          v45 += 8;
          i += 2;
LABEL_48:
          if ( (_BYTE)v48 == (_BYTE)v49 )
          {
            if ( v45[1] == *((_BYTE *)i + 1) )
            {
              if ( v45[2] == *((_BYTE *)i + 2) )
              {
                v45 += 3;
                i = (_DWORD *)((char *)i + 3);
              }
              else
              {
                v45 += 2;
                i = (_DWORD *)((char *)i + 2);
              }
            }
            else
            {
              ++v45;
              i = (_DWORD *)((char *)i + 1);
            }
          }
          goto LABEL_49;
        }
        v48 = *((_DWORD *)v45 + 3);
        v49 = i[3];
        if ( v48 != v49 )
        {
          v45 += 12;
          i += 3;
          goto LABEL_48;
        }
        v48 = *((_DWORD *)v45 + 4);
        v49 = i[4];
        if ( v48 != v49 )
        {
          v45 += 16;
          i += 4;
          goto LABEL_48;
        }
        v48 = *((_DWORD *)v45 + 5);
        v49 = i[5];
        if ( v48 != v49 )
        {
          v45 += 20;
          i += 5;
          goto LABEL_48;
        }
        v48 = *((_DWORD *)v45 + 6);
        v49 = i[6];
        if ( v48 != v49 )
        {
          v45 += 24;
          i += 6;
          goto LABEL_48;
        }
        v49 = i[7];
        v45 += 28;
        v48 = *(_DWORD *)v45;
        if ( *(_DWORD *)v45 != v49 )
        {
          i += 7;
          goto LABEL_48;
        }
        v45 = v47;
      }
      for ( ; (unsigned __int64)v45 < v66; i = (_DWORD *)((char *)i + 1) )
      {
        if ( *v45 != *(_BYTE *)i )
          break;
        ++v45;
      }
LABEL_49:
      v32 = v60;
      v50 = v45 - v34;
      v51 = (unsigned __int8 *)i;
      v28 = (unsigned __int8 *)i - v50;
      if ( v50 > v60 )
      {
        v60 = v50;
        v32 = v50;
        v62 = v28;
        v35 = v28;
        if ( v51 > v34 )
        {
LABEL_34:
          v14 = &v34[v32];
          v36 = v34 - v35;
          if ( (unsigned __int64)(v34 - v35) > 0x1000 && v32 == 3 )
          {
            v19 = v63;
            v14 = v34;
            goto LABEL_27;
          }
          if ( v36 >= 0x100 )
            v37 = *((unsigned __int8 *)XpressHighBitIndexTable + (v36 >> 8)) + 8LL;
          else
            v37 = *((unsigned __int8 *)XpressHighBitIndexTable + v36);
          v64 += v37;
          v38 = v32 - 3;
          v39 = v20 + 1;
          v40 = v36 - (1LL << v37);
          v41 = 16 * v37;
          if ( (unsigned __int64)(v32 - 3) >= 0xF )
          {
            v42 = v41 + 15;
            *v20 = v42;
            v43 = v20 + 2;
            if ( (unsigned __int64)(v32 - 18) >= 0xFF )
            {
              *v39 = -1;
              if ( v38 >= 0x10000 )
              {
                *(_DWORD *)(v39 + 3) = v38;
                *v43 = 0;
                v43 = v39 + 7;
                v54 = 7LL;
              }
              else
              {
                *v43 = v38;
                v54 = 3LL;
                v43 = v39 + 3;
              }
            }
            else
            {
              *v39 = v32 - 18;
              v54 = 1LL;
            }
            v65 += v54;
          }
          else
          {
            v42 = v32 - 3 + v41;
            *v20 = v42;
            v43 = v20 + 1;
          }
          v19 = v63;
          v44 = v42;
          v15 = (int *)v73;
          ++*(_DWORD *)&a6[4 * v44 + 1340960];
          v29 = 2 * v18 + 1;
          *v43 = v40;
          v20 = (unsigned __int8 *)(v43 + 1);
          if ( v18 > 0 )
          {
            v18 = 2 * v18 + 1;
            goto LABEL_25;
          }
LABEL_61:
          *v15 = v29;
          v18 = 1;
          v15 = (int *)v20;
          v20 += 4;
          v73 = (char *)v15;
          goto LABEL_25;
        }
      }
      else
      {
        v33 += v50;
      }
      v31 = v61;
      do
      {
        if ( (unsigned __int64)++v33 >= 0xC )
        {
LABEL_33:
          v35 = v62;
          goto LABEL_34;
        }
LABEL_32:
        v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
        if ( v28 <= v31 )
          goto LABEL_33;
      }
      while ( v27 != *(_DWORD *)v28 );
      v14 = v34;
    }
  }
  return 3221225659LL;
}
