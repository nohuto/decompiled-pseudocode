/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x140499D00
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x14038BAA0 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x1405F1040 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x14038C3C0 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x14038C7E0 (XpressDoHuffmanPass.c)
 *     RtlpMakeXpressCallback @ 0x140419D30 (RtlpMakeXpressCallback.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  unsigned __int64 v24; // r9
  char *v25; // rax
  bool v26; // zf
  int v27; // r8d
  unsigned __int8 *v28; // rdx
  int v29; // eax
  int v30; // eax
  unsigned __int8 *v31; // rcx
  __int64 v32; // r12
  unsigned __int8 *v33; // r13
  unsigned __int8 *v34; // r10
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  _BYTE *v37; // r8
  unsigned __int64 v38; // rdx
  char v39; // cl
  unsigned __int8 v40; // cl
  _WORD *v41; // rsi
  __int64 v42; // rax
  unsigned __int8 *v43; // rbx
  _DWORD *i; // rdx
  unsigned __int8 *v45; // r12
  int v46; // eax
  int v47; // ecx
  unsigned __int64 v48; // rbx
  unsigned __int8 *v49; // rax
  unsigned __int8 v50; // al
  unsigned __int64 XpressCallback; // rax
  __int64 v52; // rax
  unsigned __int8 v53; // al
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  unsigned __int64 v58; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v59; // [rsp+38h] [rbp-A0h]
  unsigned __int8 *v60; // [rsp+40h] [rbp-98h]
  unsigned __int64 v61; // [rsp+48h] [rbp-90h]
  __int64 v62; // [rsp+50h] [rbp-88h]
  __int64 v63; // [rsp+58h] [rbp-80h]
  unsigned __int64 v64; // [rsp+60h] [rbp-78h]
  char *v65; // [rsp+68h] [rbp-70h]
  unsigned __int64 v66; // [rsp+70h] [rbp-68h]
  unsigned __int8 *v67; // [rsp+78h] [rbp-60h]
  _QWORD v68[2]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v69; // [rsp+90h] [rbp-48h]
  int v70; // [rsp+94h] [rbp-44h]
  char *v71; // [rsp+E0h] [rbp+8h]
  int v72; // [rsp+F0h] [rbp+18h]

  v72 = (int)a3;
  v9 = a1 + a2;
  v10 = (unsigned __int64)&a3[a4];
  v11 = a2;
  v70 = 0;
  v64 = v9;
  v66 = v10;
  if ( a4 < 0x12C )
    return 3221225507LL;
  if ( a1 > 0x10001 )
  {
    memset_0(a6, 0, 0x40000uLL);
    v14 = (unsigned __int8 *)a1;
    v65 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    if ( a7 && a9 <= v11 )
      v11 = a9;
    else
      a9 = v11;
    v68[0] = a7;
    v68[1] = a8;
    v69 = v11;
    v60 = 0LL;
    while ( 1 )
    {
      v62 = 0LL;
      v63 = 0LL;
      memset_0(a6 + 1339936, 0, 0x800uLL);
      v15 = (int *)(a6 + 1342240);
      v16 = (unsigned __int8 *)v9;
      if ( (unsigned __int64)(v14 + 0x10000) <= v9 )
        v16 = v14 + 0x10000;
      v71 = (char *)(a6 + 1342240);
      v17 = (unsigned __int64)&v14[v11];
      v67 = v16;
      v18 = 1;
      v19 = (unsigned __int64)(v16 - 5);
      v61 = (unsigned __int64)(v16 - 5);
      if ( (unsigned __int64)(v16 - 5) < v17 )
        v17 = (unsigned __int64)(v16 - 5);
      v20 = a6 + 1342244;
      if ( v14 == (unsigned __int8 *)a1 )
      {
        v18 = 2;
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v50 = *v14++;
        *v20 = v50;
        v20 = a6 + 1342245;
      }
      if ( (unsigned __int64)v14 < v19 )
        break;
LABEL_14:
      while ( v14 < v16 )
      {
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v53 = *v14++;
        *v20++ = v53;
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
      if ( (unsigned __int64)&v65[4
                                * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v62 + 31) >> 5)
                                + 258
                                + v63] >= v10 )
        return 3221225507LL;
      v25 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v20, v65, v21);
      v26 = v21 == 0;
      v65 = v25;
      v11 = a9;
      if ( !v26 )
      {
        *a5 = (_DWORD)v25 - v72;
        return 0LL;
      }
    }
    v23 = v14;
    v24 = (__int64)&v14[-a1] % 0x20000;
    do
    {
      v54 = (unsigned __int16)word_140013880[v23[2]] ^ (unsigned __int16)XpressHashFunction[*v23] ^ (unsigned __int64)(unsigned __int16)word_140013680[v23[1]];
      v55 = *(_QWORD *)&a6[8 * v54];
      *(_QWORD *)&a6[8 * v54] = v23++;
      *(_QWORD *)&a6[8 * v24 + 0x40000] = v55;
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
          v10 = v66;
          v9 = v64;
          v16 = v67;
          goto LABEL_14;
        }
        XpressCallback = RtlpMakeXpressCallback((__int64)v68, v19, (__int64)v14, v24);
        v19 = v61;
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
          v56 = *(_DWORD *)v28 ^ v27;
          if ( !v56 )
          {
            v58 = 3LL;
            v59 = v14 - 0x10000;
            v33 = v14;
            v24 = 0LL;
            goto LABEL_43;
          }
          if ( (v56 & 0xFFFFFF) == 0 )
            goto LABEL_31;
          v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
          if ( v28 + 0x10000 > v14 )
          {
            v57 = *(_DWORD *)v28 ^ v27;
            if ( !v57 )
            {
              v58 = 3LL;
              v59 = v14 - 0x10000;
              v33 = v14;
              v24 = 0LL;
              goto LABEL_43;
            }
            if ( (v57 & 0xFFFFFF) == 0 )
            {
LABEL_31:
              v31 = v14 - 0x10000;
              v60 = v28;
              v59 = v14 - 0x10000;
              v32 = 3LL;
              v24 = 0LL;
              v58 = 3LL;
              v33 = v14;
              goto LABEL_32;
            }
          }
        }
LABEL_27:
        v15 = (int *)v71;
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
    v58 = 3LL;
    v59 = v14 - 0x10000;
    v33 = v14;
    v24 = 0LL;
    while ( 1 )
    {
LABEL_43:
      v43 = v14 + 4;
      for ( i = v28 + 4; ; i += 8 )
      {
        v45 = v43 + 32;
        if ( (unsigned __int64)(v43 + 32) >= v64 )
          break;
        v46 = *(_DWORD *)v43;
        v47 = *i;
        if ( *(_DWORD *)v43 != *i )
          goto LABEL_48;
        v46 = *((_DWORD *)v43 + 1);
        v47 = i[1];
        if ( v46 != v47 )
        {
          v43 += 4;
          ++i;
          goto LABEL_48;
        }
        v46 = *((_DWORD *)v43 + 2);
        v47 = i[2];
        if ( v46 != v47 )
        {
          v43 += 8;
          i += 2;
LABEL_48:
          if ( (_BYTE)v46 == (_BYTE)v47 )
          {
            if ( v43[1] == *((_BYTE *)i + 1) )
            {
              if ( v43[2] == *((_BYTE *)i + 2) )
              {
                v43 += 3;
                i = (_DWORD *)((char *)i + 3);
              }
              else
              {
                v43 += 2;
                i = (_DWORD *)((char *)i + 2);
              }
            }
            else
            {
              ++v43;
              i = (_DWORD *)((char *)i + 1);
            }
          }
          goto LABEL_49;
        }
        v46 = *((_DWORD *)v43 + 3);
        v47 = i[3];
        if ( v46 != v47 )
        {
          v43 += 12;
          i += 3;
          goto LABEL_48;
        }
        v46 = *((_DWORD *)v43 + 4);
        v47 = i[4];
        if ( v46 != v47 )
        {
          v43 += 16;
          i += 4;
          goto LABEL_48;
        }
        v46 = *((_DWORD *)v43 + 5);
        v47 = i[5];
        if ( v46 != v47 )
        {
          v43 += 20;
          i += 5;
          goto LABEL_48;
        }
        v46 = *((_DWORD *)v43 + 6);
        v47 = i[6];
        if ( v46 != v47 )
        {
          v43 += 24;
          i += 6;
          goto LABEL_48;
        }
        v47 = i[7];
        v43 += 28;
        v46 = *(_DWORD *)v43;
        if ( *(_DWORD *)v43 != v47 )
        {
          i += 7;
          goto LABEL_48;
        }
        v43 = v45;
      }
      for ( ; (unsigned __int64)v43 < v64; i = (_DWORD *)((char *)i + 1) )
      {
        if ( *v43 != *(_BYTE *)i )
          break;
        ++v43;
      }
LABEL_49:
      v32 = v58;
      v48 = v43 - v33;
      v49 = (unsigned __int8 *)i;
      v28 = (unsigned __int8 *)i - v48;
      if ( v48 > v58 )
      {
        v58 = v48;
        v32 = v48;
        v60 = v28;
        v34 = v28;
        if ( v49 > v33 )
        {
LABEL_34:
          v14 = &v33[v32];
          v35 = v33 - v34;
          if ( (unsigned __int64)(v33 - v34) > 0x1000 && v32 == 3 )
          {
            v19 = v61;
            v14 = v33;
            goto LABEL_27;
          }
          if ( v35 >= 0x100 )
            v36 = *((unsigned __int8 *)XpressHighBitIndexTable + (v35 >> 8)) + 8LL;
          else
            v36 = *((unsigned __int8 *)XpressHighBitIndexTable + v35);
          v62 += v36;
          v24 = v32 - 3;
          v37 = v20 + 1;
          v38 = v35 - (1LL << v36);
          v39 = 16 * v36;
          if ( (unsigned __int64)(v32 - 3) >= 0xF )
          {
            v40 = v39 + 15;
            *v20 = v40;
            v41 = v20 + 2;
            if ( (unsigned __int64)(v32 - 18) >= 0xFF )
            {
              *v37 = -1;
              if ( v24 >= 0x10000 )
              {
                *(_DWORD *)(v37 + 3) = v24;
                *v41 = 0;
                v41 = v37 + 7;
                v52 = 7LL;
              }
              else
              {
                *v41 = v24;
                v52 = 3LL;
                v41 = v37 + 3;
              }
            }
            else
            {
              *v37 = v32 - 18;
              v52 = 1LL;
            }
            v63 += v52;
          }
          else
          {
            v40 = v32 - 3 + v39;
            *v20 = v40;
            v41 = v20 + 1;
          }
          v19 = v61;
          v42 = v40;
          v15 = (int *)v71;
          ++*(_DWORD *)&a6[4 * v42 + 1340960];
          v29 = 2 * v18 + 1;
          *v41 = v38;
          v20 = (unsigned __int8 *)(v41 + 1);
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
          v71 = (char *)v15;
          goto LABEL_25;
        }
      }
      else
      {
        v24 += v48;
      }
      v31 = v59;
      do
      {
        if ( ++v24 >= 0xC )
        {
LABEL_33:
          v34 = v60;
          goto LABEL_34;
        }
LABEL_32:
        v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
        if ( v28 <= v31 )
          goto LABEL_33;
      }
      while ( v27 != *(_DWORD *)v28 );
      v14 = v33;
    }
  }
  return 3221225659LL;
}
