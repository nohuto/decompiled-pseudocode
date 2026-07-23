/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen4 @ 0x18014DFEC
 * Callers:
 *     Xp10CompressBuffer @ 0x18014CD30 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen4(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  _DWORD *v6; // r10
  unsigned __int64 v7; // rsi
  int v8; // r11d
  unsigned __int8 *v9; // r8
  void *v10; // rdi
  char v11; // cl
  unsigned int v12; // ebp
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r9
  unsigned int *v16; // r15
  unsigned int v17; // r9d
  unsigned __int8 *v18; // r13
  _BYTE *v19; // r14
  __int64 v20; // rdx
  unsigned __int8 *v21; // r11
  int v22; // eax
  int v23; // ebx
  unsigned __int8 *v24; // rcx
  int v25; // edi
  int v26; // ebx
  int v27; // edi
  unsigned __int8 *v28; // rcx
  int v29; // edx
  _DWORD *v30; // rbx
  _DWORD *v31; // rdx
  signed __int64 v32; // rdi
  unsigned int i; // ecx
  unsigned int *v34; // rbp
  unsigned int v35; // r15d
  unsigned int k; // esi
  unsigned __int8 *v37; // rdx
  unsigned __int8 *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int8 *j; // rdx
  unsigned int v43; // eax
  unsigned __int8 *v44; // r12
  unsigned int v45; // esi
  int v46; // edx
  int v47; // edi
  _WORD *v48; // r9
  unsigned __int16 *v49; // rcx
  unsigned __int16 *v50; // rbx
  int v51; // r11d
  unsigned int v52; // edx
  _DWORD *v53; // rcx
  unsigned __int16 v54; // ax
  unsigned int v55; // edi
  _BYTE *v56; // r8
  int v57; // ecx
  __int64 v58; // rax
  unsigned __int16 *v59; // rcx
  unsigned int v61; // [rsp+0h] [rbp-88h]
  int v62; // [rsp+4h] [rbp-84h]
  _WORD *v63; // [rsp+8h] [rbp-80h]
  unsigned int v64; // [rsp+10h] [rbp-78h]
  int v65; // [rsp+14h] [rbp-74h]
  unsigned __int8 *v66; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v67; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v68; // [rsp+28h] [rbp-60h]
  unsigned __int64 v69; // [rsp+30h] [rbp-58h]
  int v71; // [rsp+98h] [rbp+10h]
  int v73; // [rsp+A8h] [rbp+20h]

  v73 = (int)a4;
  v6 = a1;
  v7 = a3;
  v8 = (int)a4;
  v61 = 0;
  v9 = a2 + 1;
  v10 = a1 + 1416;
  v11 = **(_WORD **)a1 & 0x1F;
  v6[6] = 0;
  v12 = 1 << v11;
  memset64(v10, (unsigned __int64)a2, 0xEF2uLL);
  v65 = 1 << v11;
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v13 = *a2;
  *a4 = v13;
  v14 = a5 - 15;
  v15 = a4 + 1;
  ++v6[v13 + 7];
  v63 = v15;
  v69 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v15 >= v14 )
        goto LABEL_100;
      v62 = 0;
      v66 = v9;
      v16 = v6 + 2;
      v68 = v9;
      v17 = 0;
      v64 = 0;
      v18 = v9;
      while ( 1 )
      {
        v19 = v9 + 1;
        v67 = v9 + 1;
        v20 = *v9 + 8 * v9[1] + 4 * v9[3] + 2 * (unsigned int)v9[2];
        v21 = *(unsigned __int8 **)&v6[2 * v20 + 1416];
        *(_QWORD *)&v6[2 * v20 + 1416] = v9;
        if ( *v21 != *v9
          || v21[1] != *v19
          || v21[2] != v9[2]
          || v21[3] != v9[3]
          || (int)v9 - (int)v21 >= v12
          || v9 == v21 )
        {
          v23 = 0;
          v71 = 0;
          i = 1;
          goto LABEL_39;
        }
        v22 = v9[4];
        v23 = 1;
        v71 = 1;
        if ( v21[4] == (_BYTE)v22 )
          goto LABEL_17;
        v24 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v20 + v22) + 9068];
        *(_QWORD *)&v6[2 * (unsigned int)v20 + 9068 + 2 * v21[4]] = v21;
        if ( *(_DWORD *)v24 == *(_DWORD *)v9 )
        {
          v25 = v9[4];
          if ( v24[4] == (_BYTE)v25 && (int)v9 - (int)v24 < v12 && v9 != v24 )
          {
            v21 = v24;
            *(_QWORD *)&v6[2 * (unsigned int)(v20 + v25) + 9068] = v9;
LABEL_17:
            v26 = v21[5];
            if ( v9[5] == (_BYTE)v26 )
            {
LABEL_24:
              v30 = v9 + 6;
              v31 = v21 + 14;
              v32 = v9 - v21;
              for ( i = 6; (unsigned __int64)v30 < v7 - 40 && i < v12 - 32 && *v30 == *(v31 - 2); i += 32 )
              {
                if ( *(_DWORD *)((char *)v31 + v32 - 4) != *(v31 - 1) )
                {
                  i += 4;
                  break;
                }
                if ( *(_DWORD *)((char *)v31 + v32) != *v31 )
                {
                  i += 8;
                  break;
                }
                if ( *(_DWORD *)((char *)v31 + v32 + 4) != v31[1] )
                {
                  i += 12;
                  break;
                }
                if ( *(_DWORD *)((char *)v31 + v32 + 8) != v31[2] )
                {
                  i += 16;
                  break;
                }
                if ( *(_DWORD *)((char *)v31 + v32 + 12) != v31[3] )
                {
                  i += 20;
                  break;
                }
                if ( *(_DWORD *)((char *)v31 + v32 + 16) != v31[4] )
                {
                  i += 24;
                  break;
                }
                if ( *(_DWORD *)((char *)v31 + v32 + 20) != v31[5] )
                {
                  i += 28;
                  break;
                }
                v30 += 8;
                v31 += 8;
              }
              v41 = i;
              for ( j = &v9[i]; (unsigned __int64)j < v7 && *j == v21[v41]; j = &v9[i] )
                v41 = ++i;
            }
            else
            {
              v27 = 2
                  * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(v9[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
              v28 = *(unsigned __int8 **)&v6[2 * v27 + 9068 + 2 * v9[5]];
              *(_QWORD *)&v6[2 * (v27 + v26) + 9068] = v21;
              if ( *(_DWORD *)v9 == *(_DWORD *)v28 && v9[4] == v28[4] )
              {
                v29 = v9[5];
                if ( (_BYTE)v29 == v28[5] && (int)v9 - (int)v28 < v12 && v9 != v28 )
                {
                  v21 = v28;
                  *(_QWORD *)&v6[2 * (v27 + v29) + 9068] = v9;
                  goto LABEL_24;
                }
              }
              i = 5;
            }
            v23 = 1;
            goto LABEL_39;
          }
        }
        i = 4;
LABEL_39:
        v34 = v16;
        v35 = v61;
        for ( k = 0; k < 4; ++k )
        {
          v37 = &v9[-*v34];
          if ( *v37 == *v9 && v37[1] == *v67 && v37[2] == v9[2] && v37[3] == v9[3] && v37 != v9 )
          {
            v38 = v9 + 4;
            LODWORD(v39) = 4;
            if ( (unsigned __int64)(v9 + 4) < a3 )
            {
              v40 = 4LL;
              do
              {
                if ( *v38 != v37[v40] )
                  break;
                v39 = (unsigned int)(v39 + 1);
                v40 = (unsigned int)v39;
                v38 = &v9[v39];
              }
              while ( (unsigned __int64)&v9[v39] < a3 );
            }
            if ( (unsigned int)v39 < i )
            {
              v23 = v71;
            }
            else
            {
              v23 = 2;
              v21 = &v9[-*v34];
              v71 = 2;
              v35 = k;
              i = v39;
            }
          }
          ++v34;
        }
        v6 = a1;
        v12 = v65;
        v43 = v35;
        if ( i < v17 )
        {
          v23 = v62;
          v9 = v18;
          v21 = v66;
        }
        v18 = v9;
        if ( i < v17 )
          v43 = v64;
        v9 = v67;
        v44 = v68;
        v45 = i;
        if ( i < v17 )
          v45 = v17;
        v61 = v35;
        v64 = v43;
        v62 = v23;
        v16 = a1 + 2;
        v46 = (int)v21;
        v66 = v21;
        v47 = v23;
        v17 = v45;
        if ( v67 - v68 > 2 )
          break;
        v7 = a3;
      }
      v48 = v63;
      v61 = v43;
      while ( v44 < v18 )
      {
        v49 = v48;
        *v48++ = *v44;
        ++a1[*v49 + 7];
        ++v44;
      }
      v50 = v48;
      v51 = 0;
      if ( v47 )
      {
        if ( v47 == 1 )
        {
          _BitScanReverse((unsigned int *)&v51, (_DWORD)v18 - v46);
          *v48 = 16 * (v51 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          a1[3] = a1[2];
          a1[2] = (_DWORD)v18 - v46;
        }
        else if ( v47 == 2 )
        {
          *v48 = 16 * (v43 + 16);
          v52 = a1[v43 + 2];
          if ( v43 )
          {
            v53 = a1 + 4;
            if ( v43 >= 3 )
            {
              a1[5] = *v53;
              goto LABEL_83;
            }
            if ( v43 >= 2 )
LABEL_83:
              *v53 = a1[3];
            a1[3] = *v16;
            *v16 = v52;
          }
        }
        v54 = *v48;
        v55 = v45 - 4;
        if ( v45 - 4 < 0xF )
        {
          *v48 = v54 + v55;
          v15 = v48 + 1;
          v63 = v15;
        }
        else
        {
          v56 = v48 + 1;
          *v48 = v54 + 15;
          v15 = (_DWORD *)((char *)v48 + 3);
          v63 = v15;
          if ( v55 <= 0xF6 )
          {
            *v56 = v45 - 19;
LABEL_91:
            v63 = v15;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v57, v45 - 250);
            *v56 = v57 - 24;
            if ( v45 - 250 > 1 )
            {
              a1[6] += v57;
              *v15++ = v45 - 250 - (1 << v57);
              goto LABEL_91;
            }
          }
          ++a1[(unsigned __int8)*v56 + 711];
        }
        ++a1[*v50 + 7];
        if ( v62 == 1 && v51 )
        {
          a1[6] += v51;
          *v15++ = (_DWORD)v18 - (1 << v51) - (_DWORD)v66;
          v63 = v15;
        }
        v58 = v45;
      }
      else
      {
        *v48 = *v18;
        v15 = v48 + 1;
        v63 = v15;
        ++a1[*v50 + 7];
        v58 = 1LL;
      }
      v7 = a3;
      v9 = &v18[v58];
      v12 = v65;
      v14 = a5 - 15;
      if ( (unsigned __int64)&v18[v58] >= v69 )
      {
LABEL_100:
        v8 = v73;
        break;
      }
    }
  }
  if ( (unsigned __int64)v9 < v7 )
  {
    do
    {
      if ( (unsigned __int64)v15 >= a5 )
        break;
      v59 = (unsigned __int16 *)v15;
      *(_WORD *)v15 = *v9++;
      v15 = (_DWORD *)((char *)v15 + 2);
      ++v6[*v59 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v73;
  }
  *a6 = (_DWORD)v15 - v8;
  return 0LL;
}
