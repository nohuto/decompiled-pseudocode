/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen3 @ 0x14078AC7C
 * Callers:
 *     Xp10CompressBuffer @ 0x1407899D4 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen3(
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
  int v30; // ebx
  int v31; // esi
  int v32; // edi
  unsigned __int8 *v33; // rcx
  int v34; // edx
  _DWORD *v35; // rbx
  _DWORD *v36; // rdx
  signed __int64 v37; // rdi
  unsigned int i; // ecx
  unsigned int *v39; // rbp
  unsigned int v40; // r15d
  unsigned int k; // esi
  unsigned __int8 *v42; // rdx
  __int64 v43; // rax
  unsigned __int8 *v44; // rbx
  unsigned int v45; // edi
  __int64 v46; // rax
  unsigned __int8 *j; // rdx
  unsigned int v48; // r14d
  unsigned int v49; // esi
  unsigned __int8 *v50; // r12
  int v51; // edi
  _WORD *v52; // r9
  unsigned __int16 *v53; // rcx
  unsigned __int16 *v54; // rbx
  int v55; // r11d
  unsigned int v56; // edx
  _DWORD *v57; // rcx
  int v58; // ebp
  unsigned __int16 v59; // ax
  unsigned int v60; // edi
  _BYTE *v61; // r8
  int v62; // ecx
  __int64 v63; // rax
  unsigned __int16 *v64; // rcx
  unsigned int v66; // [rsp+0h] [rbp-98h]
  int v67; // [rsp+4h] [rbp-94h]
  _WORD *v68; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v69; // [rsp+10h] [rbp-88h]
  unsigned int v70; // [rsp+18h] [rbp-80h]
  unsigned int v71; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v72; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v73; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v74; // [rsp+30h] [rbp-68h]
  unsigned __int64 v75; // [rsp+38h] [rbp-60h]
  int v77; // [rsp+A8h] [rbp+10h]
  int v79; // [rsp+B8h] [rbp+20h]

  v79 = (int)a4;
  v6 = a1;
  v7 = a3;
  v8 = (int)a4;
  v66 = 0;
  v9 = a2 + 1;
  v10 = a1 + 1416;
  v11 = **(_WORD **)a1 & 0x1F;
  v6[6] = 0;
  v72 = 1 << v11;
  memset64(v10, (unsigned __int64)a2, 0xEF2uLL);
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v12 = *a2;
  *a4 = v12;
  v13 = a5 - 15;
  v14 = a4 + 1;
  ++v6[v12 + 7];
  v68 = v14;
  v75 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= v13 )
        goto LABEL_105;
      v15 = v6 + 2;
      v67 = 0;
      v69 = v9;
      v16 = v9;
      v74 = v9;
      v71 = 0;
      v70 = 0;
      do
      {
        v17 = v9 + 1;
        v73 = v9 + 1;
        v18 = *v9 + 8 * v9[1] + 2 * (unsigned int)v9[2];
        v19 = *(unsigned __int8 **)&v6[2 * v18 + 1416];
        *(_QWORD *)&v6[2 * v18 + 1416] = v9;
        if ( *v19 != *v9 || v19[1] != *v17 || v19[2] != v9[2] || (int)v9 - (int)v19 >= v72 || v9 == v19 )
        {
          v21 = 0;
          v77 = 0;
          i = 1;
          goto LABEL_43;
        }
        v20 = v19[3];
        v21 = 1;
        v22 = v9[3];
        v77 = 1;
        if ( (_BYTE)v20 == (_BYTE)v22 )
          goto LABEL_15;
        v23 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v18 + v22) + 9068];
        *(_QWORD *)&v6[2 * (unsigned int)(v18 + v20) + 9068] = v19;
        if ( *(_DWORD *)v23 == *(_DWORD *)v9 )
        {
          v24 = v9[3];
          if ( v23[3] == (_BYTE)v24 && (int)v9 - (int)v23 < v72 && v9 != v23 )
          {
            v19 = v23;
            *(_QWORD *)&v6[2 * (unsigned int)(v18 + v24) + 9068] = v9;
LABEL_15:
            v25 = v19[4];
            v26 = v9[4];
            if ( (_BYTE)v25 != (_BYTE)v26 )
            {
              v27 = 2
                  * ((unsigned __int8)__ROR1__(*v17 ^ __ROL1__(v9[3] + *v9, 3), 1)
                   + 4 * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v17 + 97, 1), 3));
              v28 = *(unsigned __int8 **)&v6[2 * (v27 + v26) + 9068];
              *(_QWORD *)&v6[2 * (v27 + v25) + 9068] = v19;
              if ( *(_DWORD *)v9 == *(_DWORD *)v28 )
              {
                v29 = v9[4];
                if ( (_BYTE)v29 == v28[4] && (int)v9 - (int)v28 < v72 && v9 != v28 )
                {
                  v19 = v28;
                  *(_QWORD *)&v6[2 * (v27 + v29) + 9068] = v9;
                  goto LABEL_21;
                }
              }
              i = 4;
LABEL_42:
              v21 = 1;
              goto LABEL_43;
            }
LABEL_21:
            v30 = v9[5];
            v31 = v19[5];
            if ( (_BYTE)v30 != (_BYTE)v31 )
            {
              v32 = 2
                  * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v17 ^ __ROL1__(v9[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
              v33 = *(unsigned __int8 **)&v6[2 * (v32 + v30) + 9068];
              *(_QWORD *)&v6[2 * (v32 + v31) + 9068] = v19;
              if ( *(_DWORD *)v9 != *(_DWORD *)v33
                || v9[4] != v33[4]
                || (v34 = v9[5], (_BYTE)v34 != v33[5])
                || (int)v9 - (int)v33 >= v72
                || v9 == v33 )
              {
                i = 5;
                goto LABEL_42;
              }
              v19 = v33;
              *(_QWORD *)&v6[2 * (v32 + v34) + 9068] = v9;
            }
            v35 = v9 + 6;
            v36 = v19 + 14;
            v37 = v9 - v19;
            for ( i = 6; (unsigned __int64)v35 < v7 - 40 && i < v72 - 32 && *v35 == *(v36 - 2); i += 32 )
            {
              if ( *(_DWORD *)((char *)v36 + v37 - 4) != *(v36 - 1) )
              {
                i += 4;
                break;
              }
              if ( *(_DWORD *)((char *)v36 + v37) != *v36 )
              {
                i += 8;
                break;
              }
              if ( *(_DWORD *)((char *)v36 + v37 + 4) != v36[1] )
              {
                i += 12;
                break;
              }
              if ( *(_DWORD *)((char *)v36 + v37 + 8) != v36[2] )
              {
                i += 16;
                break;
              }
              if ( *(_DWORD *)((char *)v36 + v37 + 12) != v36[3] )
              {
                i += 20;
                break;
              }
              if ( *(_DWORD *)((char *)v36 + v37 + 16) != v36[4] )
              {
                i += 24;
                break;
              }
              if ( *(_DWORD *)((char *)v36 + v37 + 20) != v36[5] )
              {
                i += 28;
                break;
              }
              v35 += 8;
              v36 += 8;
            }
            v46 = i;
            for ( j = &v9[i]; (unsigned __int64)j < v7 && *j == v19[v46]; j = &v9[i] )
              v46 = ++i;
            goto LABEL_42;
          }
        }
        i = 3;
LABEL_43:
        v39 = v15;
        v40 = v66;
        for ( k = 0; k < 4; ++k )
        {
          v42 = &v9[-*v39];
          if ( *v42 == *v9 && v42[1] == *v73 && v42[2] == v9[2] && v42 != v9 )
          {
            v43 = 3LL;
            v44 = v9 + 3;
            v45 = 3;
            while ( (unsigned __int64)v44 < a3 && *v44 == v42[v43] )
            {
              v43 = ++v45;
              v44 = &v9[v45];
            }
            if ( v45 < i )
            {
              v21 = v77;
            }
            else
            {
              v21 = 2;
              v19 = &v9[-*v39];
              v77 = 2;
              v40 = k;
              i = v45;
            }
          }
          ++v39;
        }
        v48 = v40;
        v6 = a1;
        v49 = i;
        if ( i < v71 )
        {
          v21 = v67;
          v9 = v16;
          v48 = v70;
        }
        v16 = v9;
        if ( i < v71 )
          v49 = v71;
        v9 = v73;
        if ( i < v71 )
          v19 = v69;
        v50 = v74;
        v51 = v21;
        v7 = a3;
        v66 = v40;
        v15 = a1 + 2;
        v70 = v48;
        v67 = v21;
        v69 = v19;
        v71 = v49;
      }
      while ( v73 - v74 <= 2 );
      v52 = v68;
      v66 = v48;
      while ( v50 < v16 )
      {
        v53 = v52;
        *v52++ = *v50;
        ++a1[*v53 + 7];
        ++v50;
      }
      v54 = v52;
      v55 = 0;
      if ( v51 )
      {
        if ( v51 == 1 )
        {
          v58 = (int)v69;
          _BitScanReverse((unsigned int *)&v55, (_DWORD)v16 - (_DWORD)v69);
          *v52 = 16 * (v55 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          a1[3] = a1[2];
          a1[2] = (_DWORD)v16 - (_DWORD)v69;
        }
        else
        {
          if ( v51 == 2 )
          {
            *v52 = 16 * (v48 + 16);
            v56 = a1[v48 + 2];
            if ( v48 )
            {
              v57 = a1 + 4;
              if ( v48 >= 3 )
              {
                a1[5] = *v57;
                goto LABEL_87;
              }
              if ( v48 >= 2 )
LABEL_87:
                *v57 = a1[3];
              a1[3] = *v15;
              *v15 = v56;
            }
          }
          v58 = (int)v69;
        }
        v59 = *v52;
        v60 = v49 - 3;
        if ( v49 - 3 < 0xF )
        {
          *v52 = v59 + v60;
          v14 = v52 + 1;
          v68 = v14;
        }
        else
        {
          v61 = v52 + 1;
          *v52 = v59 + 15;
          v14 = (_DWORD *)((char *)v52 + 3);
          v68 = v14;
          if ( v60 <= 0xF6 )
          {
            *v61 = v49 - 18;
LABEL_96:
            v68 = v14;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v62, v49 - 249);
            *v61 = v62 - 24;
            if ( v49 - 249 > 1 )
            {
              a1[6] += v62;
              *v14++ = v49 - 249 - (1 << v62);
              goto LABEL_96;
            }
          }
          ++a1[(unsigned __int8)*v61 + 711];
        }
        ++a1[*v54 + 7];
        if ( v67 == 1 && v55 )
        {
          a1[6] += v55;
          *v14++ = (_DWORD)v16 - (1 << v55) - v58;
          v68 = v14;
        }
        v63 = v49;
      }
      else
      {
        *v52 = *v16;
        v14 = v52 + 1;
        v68 = v14;
        ++a1[*v54 + 7];
        v63 = 1LL;
      }
      v7 = a3;
      v9 = &v16[v63];
      v13 = a5 - 15;
      if ( (unsigned __int64)&v16[v63] >= v75 )
      {
LABEL_105:
        v8 = v79;
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
      v64 = (unsigned __int16 *)v14;
      *(_WORD *)v14 = *v9++;
      v14 = (_DWORD *)((char *)v14 + 2);
      ++v6[*v64 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v79;
  }
  *a6 = (_DWORD)v14 - v8;
  return 0LL;
}
