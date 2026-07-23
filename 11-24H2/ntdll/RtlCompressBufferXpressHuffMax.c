/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x1800B8580
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1800B8DA0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x1800B9E70 (XpressBuildHuffmanEncodings.c)
 *     RtlpMakeXpressCallback @ 0x1800BA280 (RtlpMakeXpressCallback.c)
 *     XpressDoHuffmanPass @ 0x1800BA2D0 (XpressDoHuffmanPass.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6)
{
  unsigned __int8 *v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int8 *v10; // rbx
  unsigned __int8 *v11; // rsi
  int *v12; // rdi
  int v13; // r10d
  unsigned __int8 *v14; // r11
  unsigned __int64 v15; // r12
  unsigned __int8 *v16; // r13
  unsigned __int8 *v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  int v22; // ebp
  unsigned __int8 *v23; // rax
  int v24; // ecx
  unsigned __int8 *v25; // r15
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rsi
  unsigned __int8 *v28; // rdi
  unsigned __int8 *v29; // rbx
  _DWORD *i; // rax
  unsigned __int64 v31; // rbx
  unsigned __int8 *v32; // rcx
  unsigned __int8 *v33; // r10
  int v34; // ecx
  int v35; // edx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  _BYTE *v38; // r8
  unsigned __int64 v39; // rdx
  char v40; // cl
  unsigned __int8 v41; // cl
  _WORD *v42; // r13
  int v43; // eax
  __int64 v44; // rax
  int v45; // ecx
  int v46; // ecx
  __int64 XpressCallback; // rax
  int v48; // edi
  __int64 v49; // rax
  unsigned __int8 v51; // al
  unsigned __int8 v52; // al
  unsigned __int8 *v53; // [rsp+30h] [rbp-98h]
  __int64 v54; // [rsp+38h] [rbp-90h]
  __int64 v55; // [rsp+40h] [rbp-88h]
  unsigned __int64 v56; // [rsp+48h] [rbp-80h]
  __int64 v57; // [rsp+50h] [rbp-78h]
  __int64 v58; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v59; // [rsp+60h] [rbp-68h]
  unsigned __int64 v60; // [rsp+68h] [rbp-60h]
  _QWORD v61[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+80h] [rbp-48h]
  int v63; // [rsp+84h] [rbp-44h]
  int v65; // [rsp+D8h] [rbp+10h]
  int v66; // [rsp+E0h] [rbp+18h]
  int *v68; // [rsp+100h] [rbp+38h]
  __int64 v70; // [rsp+108h] [rbp+40h]

  v66 = a3;
  v63 = 0;
  v8 = (unsigned __int8 *)a1;
  v58 = a2;
  v60 = a3 + a4;
  v9 = a2 + a1;
  v56 = v9;
  if ( a4 < 0x12C )
    return 3221225507LL;
  if ( a1 > 0x10001 )
  {
    memset_thunk_772440563353939046(a6, 0, 0x40000uLL);
    v10 = v8;
    v57 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v61[0] = 0LL;
    v61[1] = 0LL;
    v62 = a2;
    v53 = 0LL;
    while ( 1 )
    {
      v54 = 0LL;
      v55 = 0LL;
      memset_thunk_772440563353939046(a6 + 1339936, 0, 0x800uLL);
      v68 = (int *)(a6 + 1342240);
      v11 = (unsigned __int8 *)v9;
      v12 = (int *)(a6 + 1342240);
      v13 = 1;
      if ( (unsigned __int64)(v10 + 0x10000) <= v9 )
        v11 = v10 + 0x10000;
      v65 = 1;
      v14 = &v10[v58];
      v59 = v11;
      v15 = (unsigned __int64)(v11 - 5);
      if ( v11 - 5 < &v10[v58] )
        v14 = v11 - 5;
      v16 = (unsigned __int8 *)(a6 + 1342244);
      v70 = (__int64)v14;
      if ( v10 == v8 )
      {
        v13 = 2;
        v65 = 2;
        ++*(_DWORD *)&a6[4 * *v10 + 1339936];
        v52 = *v10++;
        *v16 = v52;
        v16 = (unsigned __int8 *)(a6 + 1342245);
      }
      if ( (unsigned __int64)v10 < v15 )
        break;
LABEL_88:
      while ( v10 < v11 )
      {
        ++*(_DWORD *)&a6[4 * *v10 + 1339936];
        v51 = *v10++;
        *v16++ = v51;
        if ( v13 <= 0 )
        {
          *v12 = 2 * v13;
          v13 = 1;
          v12 = (int *)v16;
          v16 += 4;
        }
        else
        {
          v13 *= 2;
        }
      }
      for ( ; v13 > 0; v13 = 2 * v13 + 1 )
        ;
      *v12 = 2 * v13 + 1;
      if ( (unsigned __int64)v10 >= v9 )
      {
        ++*((_DWORD *)a6 + 335240);
        v48 = 1;
      }
      else
      {
        v48 = 0;
      }
      if ( v55 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 1310720) + v54 + 31) >> 5) + v57 + 258 >= v60 )
        return 3221225507LL;
      v49 = XpressDoHuffmanPass((int)a6 + 1310720, (int)a6 + 1342240, (_DWORD)v16, v57, v48);
      v57 = v49;
      if ( v48 )
      {
        *a5 = v49 - v66;
        return 0LL;
      }
    }
    v17 = v10;
    v18 = (v10 - v8) % 0x20000;
    do
    {
      v19 = (unsigned __int16)word_180196120[v17[2]] ^ (unsigned __int16)XpressHashFunction[*v17] ^ (unsigned __int64)(unsigned __int16)word_180195F20[v17[1]];
      v20 = *(_QWORD *)&a6[8 * v19];
      *(_QWORD *)&a6[8 * v19] = v17++;
      *(_QWORD *)&a6[8 * v18 + 0x40000] = v20;
      v18 = ((_DWORD)v18 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v17 < v15 );
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v10 >= v14 )
        {
          if ( (unsigned __int64)v10 >= v15 )
          {
            v8 = (unsigned __int8 *)a1;
            v9 = v56;
            v11 = v59;
            goto LABEL_88;
          }
          XpressCallback = RtlpMakeXpressCallback(v61, v15, v10, v18);
          v13 = v65;
          v70 = XpressCallback;
        }
        v21 = a1;
        v22 = *(_DWORD *)v10;
        v23 = *(unsigned __int8 **)&a6[8 * ((__int64)&v10[-a1] % 0x20000) + 0x40000];
        if ( v23 + 0x10000 <= v10 )
          goto LABEL_49;
        v24 = *(_DWORD *)v23 ^ v22;
        if ( v24 )
        {
          if ( (v24 & 0xFFFFFF) != 0 )
          {
            v23 = *(unsigned __int8 **)&a6[8 * ((__int64)&v23[-a1] % 0x20000) + 0x40000];
            if ( v23 + 0x10000 <= v10 )
              goto LABEL_49;
            v45 = *(_DWORD *)v23 ^ v22;
            if ( !v45 )
              goto LABEL_104;
            if ( (v45 & 0xFFFFFF) != 0 )
            {
              v23 = *(unsigned __int8 **)&a6[8 * ((__int64)&v23[-a1] % 0x20000) + 0x40000];
              if ( v23 + 0x10000 <= v10 )
                goto LABEL_49;
              v46 = *(_DWORD *)v23 ^ v22;
              if ( !v46 )
              {
LABEL_104:
                v26 = 0LL;
                v25 = v10 - 0x10000;
                v28 = v10;
                v27 = 3LL;
                goto LABEL_26;
              }
              if ( (v46 & 0xFFFFFF) != 0 )
                goto LABEL_49;
            }
          }
          v53 = v23;
          v28 = v10;
          v25 = v10 - 0x10000;
          v26 = 0LL;
          v27 = 3LL;
          do
          {
            v23 = *(unsigned __int8 **)&a6[8 * ((__int64)&v23[-v21] % 0x20000) + 0x40000];
            if ( v23 <= v25 )
              break;
            if ( v22 == *(_DWORD *)v23 )
            {
              v10 = v28;
              goto LABEL_26;
            }
LABEL_22:
            ++v26;
          }
          while ( v26 < 0xC );
          v18 = (unsigned __int64)v53;
        }
        else
        {
          v25 = v10 - 0x10000;
          v26 = 0LL;
          v27 = 3LL;
          v28 = v10;
LABEL_26:
          v29 = v10 + 4;
          for ( i = v23 + 4; ; i += 8 )
          {
            v33 = v29 + 32;
            if ( (unsigned __int64)(v29 + 32) >= v56 )
              break;
            v34 = *(_DWORD *)v29;
            v35 = *i;
            if ( *(_DWORD *)v29 != *i )
              goto LABEL_18;
            v34 = *((_DWORD *)v29 + 1);
            v35 = i[1];
            if ( v34 != v35 )
            {
              v29 += 4;
              ++i;
              goto LABEL_18;
            }
            v34 = *((_DWORD *)v29 + 2);
            v35 = i[2];
            if ( v34 != v35 )
            {
              v29 += 8;
              i += 2;
              goto LABEL_18;
            }
            v34 = *((_DWORD *)v29 + 3);
            v35 = i[3];
            if ( v34 != v35 )
            {
              v29 += 12;
              i += 3;
              goto LABEL_18;
            }
            v34 = *((_DWORD *)v29 + 4);
            v35 = i[4];
            if ( v34 != v35 )
            {
              v29 += 16;
              i += 4;
              goto LABEL_18;
            }
            v34 = *((_DWORD *)v29 + 5);
            v35 = i[5];
            if ( v34 != v35 )
            {
              v29 += 20;
              i += 5;
              goto LABEL_18;
            }
            v34 = *((_DWORD *)v29 + 6);
            v35 = i[6];
            if ( v34 != v35 )
            {
              v29 += 24;
              i += 6;
LABEL_18:
              if ( (_BYTE)v34 == (_BYTE)v35 )
              {
                if ( v29[1] == *((_BYTE *)i + 1) )
                {
                  if ( v29[2] == *((_BYTE *)i + 2) )
                  {
                    v29 += 3;
                    i = (_DWORD *)((char *)i + 3);
                  }
                  else
                  {
                    v29 += 2;
                    i = (_DWORD *)((char *)i + 2);
                  }
                }
                else
                {
                  ++v29;
                  i = (_DWORD *)((char *)i + 1);
                }
              }
              goto LABEL_19;
            }
            v35 = i[7];
            v29 += 28;
            v34 = *(_DWORD *)v29;
            if ( *(_DWORD *)v29 != v35 )
            {
              i += 7;
              goto LABEL_18;
            }
            v29 = v33;
          }
          for ( ; (unsigned __int64)v29 < v56; i = (_DWORD *)((char *)i + 1) )
          {
            if ( *v29 != *(_BYTE *)i )
              break;
            ++v29;
          }
LABEL_19:
          v31 = v29 - v28;
          v32 = (unsigned __int8 *)i;
          v23 = (unsigned __int8 *)i - v31;
          if ( v31 <= v27 )
          {
            v26 += v31;
LABEL_21:
            v21 = a1;
            goto LABEL_22;
          }
          v53 = v23;
          v27 = v31;
          v18 = (unsigned __int64)v23;
          if ( v32 <= v28 )
            goto LABEL_21;
        }
        v10 = &v28[v27];
        v36 = (unsigned __int64)&v28[-v18];
        if ( v27 != 3 || v36 <= 0x1000 )
          break;
        v13 = v65;
        v10 = v28;
        v12 = v68;
LABEL_49:
        ++v10;
        ++*(_DWORD *)&a6[4 * (unsigned __int8)v22 + 1339936];
        *v16++ = v22;
        v43 = 2 * v13;
        if ( v13 <= 0 )
        {
          *v12 = v43;
LABEL_80:
          v14 = (unsigned __int8 *)v70;
          v13 = 1;
          v12 = (int *)v16;
          v68 = (int *)v16;
          v65 = 1;
          v16 += 4;
        }
        else
        {
          v14 = (unsigned __int8 *)v70;
          v13 *= 2;
          v65 = v43;
        }
      }
      if ( v36 >= 0x100 )
        v37 = XpressHighBitIndexTable[v36 >> 8] + 8LL;
      else
        v37 = XpressHighBitIndexTable[v36];
      v54 += v37;
      v18 = v27 - 3;
      v38 = v16 + 1;
      v39 = v36 - (1LL << v37);
      v40 = 16 * v37;
      if ( v27 - 3 < 0xF )
      {
        v41 = v27 - 3 + v40;
        *v16 = v41;
        v42 = v16 + 1;
        goto LABEL_44;
      }
      v41 = v40 + 15;
      *v16 = v41;
      v42 = v16 + 2;
      if ( v27 - 18 < 0xFF )
        break;
      *v38 = -1;
      if ( v18 >= 0x10000 )
      {
        *v42 = 0;
        v44 = 7LL;
        v42 = v38 + 7;
        *(_DWORD *)(v38 + 3) = v18;
        goto LABEL_57;
      }
      *v42 = v18;
      v55 += 3LL;
      v42 = v38 + 3;
LABEL_44:
      ++*(_DWORD *)&a6[4 * v41 + 1340960];
      *v42 = v39;
      v16 = (unsigned __int8 *)(v42 + 1);
      if ( v65 <= 0 )
      {
        *v68 = 2 * v65 + 1;
        goto LABEL_80;
      }
      v14 = (unsigned __int8 *)v70;
      v13 = 2 * v65 + 1;
      v12 = v68;
      v65 = v13;
    }
    *v38 = v27 - 18;
    v44 = 1LL;
LABEL_57:
    v55 += v44;
    goto LABEL_44;
  }
  return 3221225659LL;
}
