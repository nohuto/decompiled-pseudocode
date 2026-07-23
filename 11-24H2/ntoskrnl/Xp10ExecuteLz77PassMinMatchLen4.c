/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen4 @ 0x14078B3D4
 * Callers:
 *     Xp10CompressBuffer @ 0x1407899D4 (Xp10CompressBuffer.c)
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
  unsigned __int64 v7; // rbp
  int v8; // r11d
  unsigned __int8 *v9; // r8
  void *v10; // rdi
  char v11; // cl
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _DWORD *v14; // r9
  unsigned int *v15; // r15
  unsigned __int8 *v16; // r13
  _BYTE *v17; // r14
  __int64 v18; // rdx
  unsigned __int8 *v19; // r11
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  unsigned __int8 *v23; // rcx
  int v24; // edi
  int v25; // ebx
  int v26; // esi
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
  unsigned int v44; // esi
  unsigned __int8 *v45; // r12
  int v46; // edi
  _WORD *v47; // r9
  unsigned __int16 *v48; // rcx
  unsigned __int16 *v49; // rbx
  int v50; // r11d
  unsigned int v51; // edx
  _DWORD *v52; // rcx
  int v53; // ebp
  unsigned __int16 v54; // ax
  unsigned int v55; // edi
  _BYTE *v56; // r8
  int v57; // ecx
  __int64 v58; // rax
  unsigned __int16 *v59; // rcx
  unsigned int v61; // [rsp+0h] [rbp-98h]
  unsigned int v62; // [rsp+4h] [rbp-94h]
  int v63; // [rsp+8h] [rbp-90h]
  _WORD *v64; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v65; // [rsp+18h] [rbp-80h]
  unsigned int v66; // [rsp+20h] [rbp-78h]
  unsigned int v67; // [rsp+24h] [rbp-74h]
  unsigned __int8 *v68; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v69; // [rsp+30h] [rbp-68h]
  unsigned __int64 v70; // [rsp+38h] [rbp-60h]
  int v72; // [rsp+A8h] [rbp+10h]
  int v74; // [rsp+B8h] [rbp+20h]

  v74 = (int)a4;
  v6 = a1;
  v7 = a3;
  v8 = (int)a4;
  v62 = 0;
  v9 = a2 + 1;
  v10 = a1 + 1416;
  v11 = **(_WORD **)a1 & 0x1F;
  v6[6] = 0;
  v67 = 1 << v11;
  memset64(v10, (unsigned __int64)a2, 0xEF2uLL);
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v12 = *a2;
  *a4 = v12;
  v13 = a5 - 15;
  v14 = a4 + 1;
  ++v6[v12 + 7];
  v64 = v14;
  v70 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= v13 )
        goto LABEL_100;
      v15 = v6 + 2;
      v63 = 0;
      v65 = v9;
      v16 = v9;
      v69 = v9;
      v66 = 0;
      v61 = 0;
      do
      {
        v17 = v9 + 1;
        v68 = v9 + 1;
        v18 = *v9 + 8 * v9[1] + 4 * v9[3] + 2 * (unsigned int)v9[2];
        v19 = *(unsigned __int8 **)&v6[2 * v18 + 1416];
        *(_QWORD *)&v6[2 * v18 + 1416] = v9;
        if ( *v19 != *v9
          || v19[1] != *v17
          || v19[2] != v9[2]
          || v19[3] != v9[3]
          || (int)v9 - (int)v19 >= v67
          || v9 == v19 )
        {
          v21 = 0;
          v72 = 0;
          i = 1;
          goto LABEL_38;
        }
        v20 = v19[4];
        v21 = 1;
        v22 = v9[4];
        v72 = 1;
        if ( (_BYTE)v20 == (_BYTE)v22 )
          goto LABEL_16;
        v23 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v18 + v22) + 9068];
        *(_QWORD *)&v6[2 * (unsigned int)(v18 + v20) + 9068] = v19;
        if ( *(_DWORD *)v23 == *(_DWORD *)v9 )
        {
          v24 = v9[4];
          if ( v23[4] == (_BYTE)v24 && (int)v9 - (int)v23 < v67 && v9 != v23 )
          {
            v19 = v23;
            *(_QWORD *)&v6[2 * (unsigned int)(v18 + v24) + 9068] = v9;
LABEL_16:
            v25 = v9[5];
            v26 = v19[5];
            if ( (_BYTE)v25 == (_BYTE)v26 )
            {
LABEL_23:
              v30 = v9 + 6;
              v31 = v19 + 14;
              v32 = v9 - v19;
              for ( i = 6; (unsigned __int64)v30 < v7 - 40 && i < v67 - 32 && *v30 == *(v31 - 2); i += 32 )
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
              for ( j = &v9[i]; (unsigned __int64)j < v7 && *j == v19[v41]; j = &v9[i] )
                v41 = ++i;
            }
            else
            {
              v27 = 2
                  * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v17 ^ __ROL1__(v9[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
              v28 = *(unsigned __int8 **)&v6[2 * (v27 + v25) + 9068];
              *(_QWORD *)&v6[2 * (v27 + v26) + 9068] = v19;
              if ( *(_DWORD *)v9 == *(_DWORD *)v28 && v9[4] == v28[4] )
              {
                v29 = v9[5];
                if ( (_BYTE)v29 == v28[5] && (int)v9 - (int)v28 < v67 && v9 != v28 )
                {
                  v19 = v28;
                  *(_QWORD *)&v6[2 * (v27 + v29) + 9068] = v9;
                  goto LABEL_23;
                }
              }
              i = 5;
            }
            v21 = 1;
            goto LABEL_38;
          }
        }
        i = 4;
LABEL_38:
        v34 = v15;
        v35 = v62;
        for ( k = 0; k < 4; ++k )
        {
          v37 = &v9[-*v34];
          if ( *v37 == *v9 && v37[1] == *v68 && v37[2] == v9[2] && v37[3] == v9[3] && v37 != v9 )
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
              v21 = v72;
            }
            else
            {
              v21 = 2;
              v19 = &v9[-*v34];
              v72 = 2;
              v35 = k;
              i = v39;
            }
          }
          ++v34;
        }
        v43 = v35;
        v6 = a1;
        v44 = i;
        if ( i < v66 )
        {
          v21 = v63;
          v9 = v16;
          v43 = v61;
        }
        v16 = v9;
        if ( i < v66 )
          v44 = v66;
        v9 = v68;
        if ( i < v66 )
          v19 = v65;
        v45 = v69;
        v46 = v21;
        v7 = a3;
        v62 = v35;
        v15 = a1 + 2;
        v61 = v43;
        v63 = v21;
        v65 = v19;
        v66 = v44;
      }
      while ( v68 - v69 <= 2 );
      v47 = v64;
      v62 = v43;
      while ( v45 < v16 )
      {
        v48 = v47;
        *v47++ = *v45;
        ++a1[*v48 + 7];
        ++v45;
      }
      v49 = v47;
      v50 = 0;
      if ( v46 )
      {
        if ( v46 == 1 )
        {
          v53 = (int)v65;
          _BitScanReverse((unsigned int *)&v50, (_DWORD)v16 - (_DWORD)v65);
          *v47 = 16 * (v50 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          a1[3] = a1[2];
          a1[2] = (_DWORD)v16 - (_DWORD)v65;
        }
        else
        {
          if ( v46 == 2 )
          {
            *v47 = 16 * (v43 + 16);
            v51 = a1[v43 + 2];
            if ( v43 )
            {
              v52 = a1 + 4;
              if ( v43 >= 3 )
              {
                a1[5] = *v52;
                goto LABEL_82;
              }
              if ( v43 >= 2 )
LABEL_82:
                *v52 = a1[3];
              a1[3] = *v15;
              *v15 = v51;
            }
          }
          v53 = (int)v65;
        }
        v54 = *v47;
        v55 = v44 - 4;
        if ( v44 - 4 < 0xF )
        {
          *v47 = v54 + v55;
          v14 = v47 + 1;
          v64 = v14;
        }
        else
        {
          v56 = v47 + 1;
          *v47 = v54 + 15;
          v14 = (_DWORD *)((char *)v47 + 3);
          v64 = v14;
          if ( v55 <= 0xF6 )
          {
            *v56 = v44 - 19;
LABEL_91:
            v64 = v14;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v57, v44 - 250);
            *v56 = v57 - 24;
            if ( v44 - 250 > 1 )
            {
              a1[6] += v57;
              *v14++ = v44 - 250 - (1 << v57);
              goto LABEL_91;
            }
          }
          ++a1[(unsigned __int8)*v56 + 711];
        }
        ++a1[*v49 + 7];
        if ( v63 == 1 && v50 )
        {
          a1[6] += v50;
          *v14++ = (_DWORD)v16 - (1 << v50) - v53;
          v64 = v14;
        }
        v58 = v44;
      }
      else
      {
        *v47 = *v16;
        v14 = v47 + 1;
        v64 = v14;
        ++a1[*v49 + 7];
        v58 = 1LL;
      }
      v7 = a3;
      v9 = &v16[v58];
      v13 = a5 - 15;
      if ( (unsigned __int64)&v16[v58] >= v70 )
      {
LABEL_100:
        v8 = v74;
        break;
      }
    }
  }
  if ( (unsigned __int64)v9 < v7 )
  {
    do
    {
      if ( (unsigned __int64)v14 >= a5 )
        break;
      v59 = (unsigned __int16 *)v14;
      *(_WORD *)v14 = *v9++;
      v14 = (_DWORD *)((char *)v14 + 2);
      ++v6[*v59 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v74;
  }
  *a6 = (_DWORD)v14 - v8;
  return 0LL;
}
