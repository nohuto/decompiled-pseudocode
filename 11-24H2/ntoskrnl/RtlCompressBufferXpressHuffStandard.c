/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1403854A0
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1403853E0 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x1405EE680 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x140385D00 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x140386120 (XpressDoHuffmanPass.c)
 *     RtlpMakeXpressCallback @ 0x140409D30 (RtlpMakeXpressCallback.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rbp
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ecx
  void *v12; // r9
  unsigned __int8 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int64 XpressCallback; // r11
  unsigned __int8 *v18; // rcx
  unsigned __int8 *v19; // r15
  int v20; // esi
  unsigned __int8 *v21; // rbx
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  int v24; // esi
  __int64 v25; // rax
  unsigned __int8 *v27; // r10
  unsigned __int8 *v28; // rdx
  __int64 v29; // r8
  unsigned __int8 *v30; // r9
  __int64 v31; // r11
  unsigned __int8 *v32; // r12
  __int64 v33; // rbp
  __int64 v34; // r13
  char *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // r13
  int v38; // ecx
  int v39; // eax
  __int64 v40; // r8
  unsigned __int8 *v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // r9
  _BYTE *v46; // r8
  unsigned __int64 v47; // rdx
  char v48; // cl
  unsigned __int8 v49; // cl
  _WORD *v50; // rbx
  int v51; // eax
  __int64 v52; // r8
  unsigned __int8 *v53; // rdx
  unsigned __int64 v54; // r8
  unsigned __int8 *v55; // rdx
  __int64 v56; // rax
  int *v57; // rcx
  __int64 v58; // rax
  int v59; // r8d
  __int64 v60; // rax
  bool v61; // zf
  unsigned __int8 *v62; // [rsp+30h] [rbp-A8h]
  __int64 v63; // [rsp+38h] [rbp-A0h]
  _BYTE *v64; // [rsp+40h] [rbp-98h]
  unsigned __int64 v65; // [rsp+48h] [rbp-90h]
  __int64 v66; // [rsp+50h] [rbp-88h]
  unsigned __int64 v67; // [rsp+58h] [rbp-80h]
  unsigned __int64 v68; // [rsp+60h] [rbp-78h]
  __int64 v69; // [rsp+68h] [rbp-70h]
  unsigned __int128 v70; // [rsp+70h] [rbp-68h] BYREF
  __int64 v71; // [rsp+80h] [rbp-58h]
  unsigned __int8 *v72; // [rsp+88h] [rbp-50h]
  unsigned __int64 v73; // [rsp+90h] [rbp-48h]
  __int64 v74; // [rsp+98h] [rbp-40h]
  unsigned __int8 v76; // [rsp+E8h] [rbp+10h]
  int v77; // [rsp+F0h] [rbp+18h]

  v77 = a3;
  v9 = a1 + a2;
  v68 = v9;
  v70 = 0LL;
  v71 = 0LL;
  v73 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v69 = a3;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 22448, a1, 0x12EEuLL);
  v10 = (unsigned __int8 *)a1;
  if ( !a7 || (v11 = a9, a9 > a2) )
    v11 = a2;
  v70 = __PAIR128__(a8, a7);
  v12 = a6 + 90432;
  v13 = a6 + 92736;
  v14 = v11;
  LODWORD(v71) = v11;
  v74 = v11;
  do
  {
    v15 = 0LL;
    v66 = 0LL;
    v16 = 0LL;
    v63 = 0LL;
    memset_0(v12, 0, 0x800uLL);
    XpressCallback = (unsigned __int64)&v10[v14];
    v62 = v13;
    v18 = v10 + 0x10000;
    v19 = v13;
    v20 = 1;
    if ( (unsigned __int64)(v10 + 0x10000) > v9 )
      v18 = (unsigned __int8 *)v9;
    v72 = v18;
    v67 = (unsigned __int64)(v18 - 40);
    if ( (unsigned __int64)(v18 - 40) < XpressCallback )
      XpressCallback = (unsigned __int64)(v18 - 40);
    v21 = v13 + 4;
    v65 = XpressCallback;
    if ( v10 == (unsigned __int8 *)a1 )
    {
      v20 = 2;
      ++*(_DWORD *)&a6[4 * *v10 + 90432];
      v22 = *v10++;
      *v21++ = v22;
    }
    if ( v10 < v18 - 40 )
    {
      while ( 1 )
      {
        v27 = v10;
        v28 = &a6[8 * *v10];
        v29 = v10[2] + 4LL * v10[1];
        v30 = *(unsigned __int8 **)&v28[16 * v29];
        *(_QWORD *)&v28[16 * v29] = v10;
        if ( *(_WORD *)v30 != *(_WORD *)v10 || v30[2] != v10[2] || v10 - v30 >= 0x10000 )
          goto LABEL_23;
        v31 = v30[3];
        v32 = v10;
        v33 = v10[3];
        if ( (_BYTE)v33 != (_BYTE)v31 )
        {
          v40 = *v10 + 2 * v29;
          v41 = *(unsigned __int8 **)&a6[8 * v40 + 22448 + 8 * v33];
          *(_QWORD *)&a6[8 * v40 + 22448 + 8 * v31] = v30;
          if ( v10 - v41 >= 0x10000 || (v42 = *(unsigned int *)v10, (_DWORD)v42 != *(_DWORD *)v41) )
          {
LABEL_43:
            v10 += 3;
            v30 += 3;
            goto LABEL_44;
          }
          v30 = v41;
          *(_QWORD *)&a6[8 * v40 + 22448 + 8 * (v42 >> 24)] = v10;
        }
        v34 = v10[4];
        v35 = (char *)(v10 + 4);
        v36 = v30[4];
        v64 = v10 + 4;
        if ( (_BYTE)v34 != (_BYTE)v36 )
        {
          v52 = 2
              * ((unsigned __int8)__ROR1__(v10[1] ^ __ROL1__(v10[3] + *v10, 3), 1)
               + 4LL * (unsigned __int8)__ROL1__(*v10 ^ __ROR1__(v10[2] + v10[1] + 97, 1), 3));
          v53 = *(unsigned __int8 **)&a6[8 * v52 + 22448 + 8 * v34];
          *(_QWORD *)&a6[8 * v52 + 22448 + 8 * v36] = v30;
          if ( v10 - v53 >= 0x10000
            || *(_DWORD *)v10 != *(_DWORD *)v53
            || (v56 = (unsigned __int8)*v64, (_BYTE)v56 != v53[4])
            || v10 == v53 )
          {
            v10 += 4;
            v30 += 4;
            goto LABEL_44;
          }
          v30 = v53;
          *(_QWORD *)&a6[8 * v52 + 22448 + 8 * v56] = v10;
          v35 = (char *)(v10 + 4);
        }
        v37 = v30[5];
        v76 = v10[5];
        if ( v76 == (_BYTE)v37 )
          goto LABEL_30;
        v54 = 2
            * ((v10[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v10, *v35))
             + 4
             * ((unsigned __int8)__ROR1__(v10[1] ^ __ROL1__(v10[3], 3), 1)
              + (unsigned __int64)(unsigned __int8)__ROL1__(*v35 ^ (__ROR1__(*v10, 1) + 69), 3)));
        v55 = *(unsigned __int8 **)&a6[8 * v54 + 22448 + 8 * v76];
        *(_QWORD *)&a6[8 * v54 + 22448 + 8 * v37] = v30;
        if ( v10 - v55 < 0x10000 && *(_DWORD *)v10 == *(_DWORD *)v55 && *v64 == v55[4] )
        {
          v58 = v10[5];
          if ( (_BYTE)v58 == v55[5] && v10 != v55 )
          {
            v30 = v55;
            *(_QWORD *)&a6[8 * v54 + 22448 + 8 * v58] = v10;
LABEL_30:
            v10 += 6;
            for ( v30 += 6; ; v30 += 32 )
            {
              if ( (unsigned __int64)v10 >= v68 - 40 )
              {
                for ( ; (unsigned __int64)v10 < v68; ++v30 )
                {
                  if ( *v10 != *v30 )
                    break;
                  ++v10;
                }
                goto LABEL_44;
              }
              v38 = *(_DWORD *)v30;
              v39 = *(_DWORD *)v10;
              if ( *(_DWORD *)v10 != *(_DWORD *)v30 )
                break;
              v38 = *((_DWORD *)v30 + 1);
              v39 = *((_DWORD *)v10 + 1);
              if ( v39 != v38 )
              {
                v10 += 4;
                v30 += 4;
                break;
              }
              v38 = *((_DWORD *)v30 + 2);
              v39 = *((_DWORD *)v10 + 2);
              if ( v39 != v38 )
              {
                v10 += 8;
                v30 += 8;
                break;
              }
              v38 = *((_DWORD *)v30 + 3);
              v39 = *((_DWORD *)v10 + 3);
              if ( v39 != v38 )
              {
                v10 += 12;
                v30 += 12;
                break;
              }
              v38 = *((_DWORD *)v30 + 4);
              v39 = *((_DWORD *)v10 + 4);
              if ( v39 != v38 )
              {
                v10 += 16;
                v30 += 16;
                break;
              }
              v38 = *((_DWORD *)v30 + 5);
              v39 = *((_DWORD *)v10 + 5);
              if ( v39 != v38 )
              {
                v10 += 20;
                v30 += 20;
                break;
              }
              v38 = *((_DWORD *)v30 + 6);
              v39 = *((_DWORD *)v10 + 6);
              if ( v39 != v38 )
              {
                v10 += 24;
                v30 += 24;
                break;
              }
              v38 = *((_DWORD *)v30 + 7);
              v39 = *((_DWORD *)v10 + 7);
              if ( v39 != v38 )
              {
                v10 += 28;
                v30 += 28;
                break;
              }
              v10 += 32;
            }
            if ( (_BYTE)v39 != (_BYTE)v38 )
              goto LABEL_44;
            if ( v10[1] == v30[1] )
            {
              if ( v10[2] == v30[2] )
                goto LABEL_43;
              v10 += 2;
              v30 += 2;
            }
            else
            {
              ++v10;
              ++v30;
            }
            goto LABEL_44;
          }
        }
        v10 += 5;
        v30 += 5;
LABEL_44:
        v43 = v10 - v30;
        if ( v10 - v32 == 3 && v43 > 0x1000 )
        {
          XpressCallback = v65;
          v19 = v62;
LABEL_23:
          v10 = v27 + 1;
          ++*(_DWORD *)&a6[4 * *v27 + 90432];
          *v21++ = *v27;
          if ( v20 <= 0 )
          {
            *(_DWORD *)v19 = 2 * v20;
            v20 = 1;
            v19 = v21;
            v62 = v21;
            v21 += 4;
            if ( (unsigned __int64)v10 >= XpressCallback )
            {
              if ( (unsigned __int64)v10 >= v67 )
              {
                v15 = v66;
                v16 = v63;
                v9 = v68;
                v18 = v72;
                break;
              }
              XpressCallback = RtlpMakeXpressCallback(&v70, v67, v27 + 1);
              v65 = XpressCallback;
            }
          }
          else
          {
            v20 *= 2;
          }
        }
        else
        {
          if ( v43 >= 0x100 )
            v44 = *((unsigned __int8 *)XpressHighBitIndexTable + (v43 >> 8)) + 8LL;
          else
            v44 = *((unsigned __int8 *)XpressHighBitIndexTable + v43);
          v45 = v10 - v32 - 3;
          v15 = v44 + v66;
          v46 = v21 + 1;
          v66 += v44;
          v47 = v43 - (1LL << v44);
          v48 = 16 * v44;
          if ( v45 >= 0xF )
          {
            v49 = v48 + 15;
            *v21 = v49;
            v50 = v21 + 2;
            if ( (unsigned __int64)(v10 - v32 - 18) >= 0xFF )
            {
              *v46 = -1;
              if ( v45 >= 0x10000 )
              {
                *(_DWORD *)(v46 + 3) = v45;
                v63 += 7LL;
                *v50 = 0;
                v50 = v46 + 7;
              }
              else
              {
                v63 += 3LL;
                *v50 = v45;
                v50 = v46 + 3;
              }
            }
            else
            {
              ++v63;
              *v46 = (_BYTE)v10 - (_BYTE)v32 - 18;
            }
          }
          else
          {
            v49 = v45 + v48;
            *v21 = v49;
            v50 = v21 + 1;
          }
          ++*(_DWORD *)&a6[4 * v49 + 91456];
          v51 = 2 * v20 + 1;
          *v50 = v47;
          v21 = (unsigned __int8 *)(v50 + 1);
          if ( v20 <= 0 )
          {
            v57 = (int *)v62;
            v20 = 1;
            v62 = v21;
            v21 += 4;
            *v57 = v51;
          }
          else
          {
            v20 = 2 * v20 + 1;
          }
          XpressCallback = v65;
          v19 = v62;
          if ( (unsigned __int64)v10 >= v65 )
          {
            if ( (unsigned __int64)v10 >= v67 )
            {
              v16 = v63;
              v9 = v68;
              v18 = v72;
              break;
            }
            XpressCallback = RtlpMakeXpressCallback(&v70, v67, v10);
            v65 = XpressCallback;
          }
        }
      }
    }
    while ( v10 < v18 )
    {
      ++*(_DWORD *)&a6[4 * *v10 + 90432];
      v23 = *v10++;
      *v21++ = v23;
      if ( v20 <= 0 )
      {
        *(_DWORD *)v19 = 2 * v20;
        v20 = 1;
        v19 = v21;
        v21 += 4;
      }
      else
      {
        v20 *= 2;
      }
    }
    for ( ; v20 > 0; v20 = 2 * v20 + 1 )
      ;
    *(_DWORD *)v19 = 2 * v20 + 1;
    if ( (unsigned __int64)v10 < v9 )
    {
      v24 = 0;
    }
    else
    {
      ++*((_DWORD *)a6 + 22864);
      v24 = 1;
    }
    v25 = XpressBuildHuffmanEncodings(a6 + 61216);
    if ( v16 + 4 * ((unsigned __int64)(v15 + v25 + 31) >> 5) + v69 + 258 >= v73 )
      return 3221225507LL;
    v59 = (int)v21;
    v13 = a6 + 92736;
    v60 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v59, v69, v24);
    v61 = v24 == 0;
    v69 = v60;
    v14 = v74;
    v12 = a6 + 90432;
  }
  while ( v61 );
  *a5 = v60 - v77;
  return 0LL;
}
