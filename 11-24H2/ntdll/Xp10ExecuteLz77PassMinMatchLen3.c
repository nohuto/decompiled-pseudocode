/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen3 @ 0x18014D8B0
 * Callers:
 *     Xp10CompressBuffer @ 0x18014CD30 (Xp10CompressBuffer.c)
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
  int v26; // edi
  int v27; // ebx
  unsigned __int8 *v28; // rcx
  int v29; // edx
  int v30; // ebx
  int v31; // edi
  unsigned __int8 *v32; // rcx
  int v33; // edx
  _DWORD *v34; // rbx
  _DWORD *v35; // rdx
  signed __int64 v36; // rdi
  unsigned int i; // ecx
  unsigned int *v38; // rbp
  unsigned int v39; // r15d
  unsigned int k; // esi
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  unsigned __int8 *v43; // rbx
  unsigned int v44; // edi
  __int64 v45; // rax
  unsigned __int8 *j; // rdx
  unsigned int v47; // eax
  unsigned __int8 *v48; // r12
  unsigned int v49; // esi
  int v50; // edx
  int v51; // edi
  _WORD *v52; // r9
  unsigned __int16 *v53; // rcx
  unsigned __int16 *v54; // rbx
  int v55; // r11d
  unsigned int v56; // edx
  _DWORD *v57; // rcx
  unsigned __int16 v58; // ax
  unsigned int v59; // edi
  _BYTE *v60; // r8
  int v61; // ecx
  __int64 v62; // rax
  unsigned __int16 *v63; // rcx
  unsigned int v65; // [rsp+0h] [rbp-88h]
  int v66; // [rsp+4h] [rbp-84h]
  _WORD *v67; // [rsp+8h] [rbp-80h]
  unsigned int v68; // [rsp+10h] [rbp-78h]
  int v69; // [rsp+14h] [rbp-74h]
  unsigned __int8 *v70; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v71; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v72; // [rsp+28h] [rbp-60h]
  unsigned __int64 v73; // [rsp+30h] [rbp-58h]
  int v75; // [rsp+98h] [rbp+10h]
  int v77; // [rsp+A8h] [rbp+20h]

  v77 = (int)a4;
  v6 = a1;
  v7 = a3;
  v8 = (int)a4;
  v65 = 0;
  v9 = a2 + 1;
  v10 = a1 + 1416;
  v11 = **(_WORD **)a1 & 0x1F;
  v6[6] = 0;
  v12 = 1 << v11;
  memset64(v10, (unsigned __int64)a2, 0xEF2uLL);
  v69 = 1 << v11;
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v13 = *a2;
  *a4 = v13;
  v14 = a5 - 15;
  v15 = a4 + 1;
  ++v6[v13 + 7];
  v67 = v15;
  v73 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v15 >= v14 )
        goto LABEL_105;
      v66 = 0;
      v70 = v9;
      v16 = v6 + 2;
      v72 = v9;
      v17 = 0;
      v68 = 0;
      v18 = v9;
      while ( 1 )
      {
        v19 = v9 + 1;
        v71 = v9 + 1;
        v20 = *v9 + 8 * v9[1] + 2 * (unsigned int)v9[2];
        v21 = *(unsigned __int8 **)&v6[2 * v20 + 1416];
        *(_QWORD *)&v6[2 * v20 + 1416] = v9;
        if ( *v21 != *v9 || v21[1] != *v19 || v21[2] != v9[2] || (int)v9 - (int)v21 >= v12 || v9 == v21 )
        {
          v23 = 0;
          v75 = 0;
          i = 1;
          goto LABEL_44;
        }
        v22 = v9[3];
        v23 = 1;
        v75 = 1;
        if ( v21[3] == (_BYTE)v22 )
          goto LABEL_16;
        v24 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v20 + v22) + 9068];
        *(_QWORD *)&v6[2 * (unsigned int)v20 + 9068 + 2 * v21[3]] = v21;
        if ( *(_DWORD *)v24 == *(_DWORD *)v9 )
        {
          v25 = v9[3];
          if ( v24[3] == (_BYTE)v25 && (int)v9 - (int)v24 < v12 && v9 != v24 )
          {
            v21 = v24;
            *(_QWORD *)&v6[2 * (unsigned int)(v20 + v25) + 9068] = v9;
LABEL_16:
            v26 = v9[4];
            if ( v21[4] != (_BYTE)v26 )
            {
              v27 = 2
                  * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(v9[3] + *v9, 3), 1)
                   + 4 * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v19 + 97, 1), 3));
              v28 = *(unsigned __int8 **)&v6[2 * (v27 + v26) + 9068];
              *(_QWORD *)&v6[2 * v27 + 9068 + 2 * v21[4]] = v21;
              if ( *(_DWORD *)v9 == *(_DWORD *)v28 )
              {
                v29 = v9[4];
                if ( (_BYTE)v29 == v28[4] && (int)v9 - (int)v28 < v12 && v9 != v28 )
                {
                  v21 = v28;
                  *(_QWORD *)&v6[2 * (v27 + v29) + 9068] = v9;
                  goto LABEL_22;
                }
              }
              i = 4;
LABEL_43:
              v23 = 1;
              goto LABEL_44;
            }
LABEL_22:
            v30 = v21[5];
            if ( v9[5] != (_BYTE)v30 )
            {
              v31 = 2
                  * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(v9[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
              v32 = *(unsigned __int8 **)&v6[2 * v31 + 9068 + 2 * v9[5]];
              *(_QWORD *)&v6[2 * (v31 + v30) + 9068] = v21;
              if ( *(_DWORD *)v9 != *(_DWORD *)v32
                || v9[4] != v32[4]
                || (v33 = v9[5], (_BYTE)v33 != v32[5])
                || (int)v9 - (int)v32 >= v12
                || v9 == v32 )
              {
                i = 5;
                goto LABEL_43;
              }
              v21 = v32;
              *(_QWORD *)&v6[2 * (v31 + v33) + 9068] = v9;
            }
            v34 = v9 + 6;
            v35 = v21 + 14;
            v36 = v9 - v21;
            for ( i = 6; (unsigned __int64)v34 < v7 - 40 && i < v12 - 32 && *v34 == *(v35 - 2); i += 32 )
            {
              if ( *(_DWORD *)((char *)v35 + v36 - 4) != *(v35 - 1) )
              {
                i += 4;
                break;
              }
              if ( *(_DWORD *)((char *)v35 + v36) != *v35 )
              {
                i += 8;
                break;
              }
              if ( *(_DWORD *)((char *)v35 + v36 + 4) != v35[1] )
              {
                i += 12;
                break;
              }
              if ( *(_DWORD *)((char *)v35 + v36 + 8) != v35[2] )
              {
                i += 16;
                break;
              }
              if ( *(_DWORD *)((char *)v35 + v36 + 12) != v35[3] )
              {
                i += 20;
                break;
              }
              if ( *(_DWORD *)((char *)v35 + v36 + 16) != v35[4] )
              {
                i += 24;
                break;
              }
              if ( *(_DWORD *)((char *)v35 + v36 + 20) != v35[5] )
              {
                i += 28;
                break;
              }
              v34 += 8;
              v35 += 8;
            }
            v45 = i;
            for ( j = &v9[i]; (unsigned __int64)j < v7 && *j == v21[v45]; j = &v9[i] )
              v45 = ++i;
            goto LABEL_43;
          }
        }
        i = 3;
LABEL_44:
        v38 = v16;
        v39 = v65;
        for ( k = 0; k < 4; ++k )
        {
          v41 = &v9[-*v38];
          if ( *v41 == *v9 && v41[1] == *v71 && v41[2] == v9[2] && v41 != v9 )
          {
            v42 = 3LL;
            v43 = v9 + 3;
            v44 = 3;
            while ( (unsigned __int64)v43 < a3 && *v43 == v41[v42] )
            {
              v42 = ++v44;
              v43 = &v9[v44];
            }
            if ( v44 < i )
            {
              v23 = v75;
            }
            else
            {
              v23 = 2;
              v21 = &v9[-*v38];
              v75 = 2;
              v39 = k;
              i = v44;
            }
          }
          ++v38;
        }
        v6 = a1;
        v12 = v69;
        v47 = v39;
        if ( i < v17 )
        {
          v23 = v66;
          v9 = v18;
          v21 = v70;
        }
        v18 = v9;
        if ( i < v17 )
          v47 = v68;
        v9 = v71;
        v48 = v72;
        v49 = i;
        if ( i < v17 )
          v49 = v17;
        v65 = v39;
        v68 = v47;
        v66 = v23;
        v16 = a1 + 2;
        v50 = (int)v21;
        v70 = v21;
        v51 = v23;
        v17 = v49;
        if ( v71 - v72 > 2 )
          break;
        v7 = a3;
      }
      v52 = v67;
      v65 = v47;
      while ( v48 < v18 )
      {
        v53 = v52;
        *v52++ = *v48;
        ++a1[*v53 + 7];
        ++v48;
      }
      v54 = v52;
      v55 = 0;
      if ( v51 )
      {
        if ( v51 == 1 )
        {
          _BitScanReverse((unsigned int *)&v55, (_DWORD)v18 - v50);
          *v52 = 16 * (v55 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          a1[3] = a1[2];
          a1[2] = (_DWORD)v18 - v50;
        }
        else if ( v51 == 2 )
        {
          *v52 = 16 * (v47 + 16);
          v56 = a1[v47 + 2];
          if ( v47 )
          {
            v57 = a1 + 4;
            if ( v47 >= 3 )
            {
              a1[5] = *v57;
              goto LABEL_88;
            }
            if ( v47 >= 2 )
LABEL_88:
              *v57 = a1[3];
            a1[3] = *v16;
            *v16 = v56;
          }
        }
        v58 = *v52;
        v59 = v49 - 3;
        if ( v49 - 3 < 0xF )
        {
          *v52 = v58 + v59;
          v15 = v52 + 1;
          v67 = v15;
        }
        else
        {
          v60 = v52 + 1;
          *v52 = v58 + 15;
          v15 = (_DWORD *)((char *)v52 + 3);
          v67 = v15;
          if ( v59 <= 0xF6 )
          {
            *v60 = v49 - 18;
LABEL_96:
            v67 = v15;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v61, v49 - 249);
            *v60 = v61 - 24;
            if ( v49 - 249 > 1 )
            {
              a1[6] += v61;
              *v15++ = v49 - 249 - (1 << v61);
              goto LABEL_96;
            }
          }
          ++a1[(unsigned __int8)*v60 + 711];
        }
        ++a1[*v54 + 7];
        if ( v66 == 1 && v55 )
        {
          a1[6] += v55;
          *v15++ = (_DWORD)v18 - (1 << v55) - (_DWORD)v70;
          v67 = v15;
        }
        v62 = v49;
      }
      else
      {
        *v52 = *v18;
        v15 = v52 + 1;
        v67 = v15;
        ++a1[*v54 + 7];
        v62 = 1LL;
      }
      v7 = a3;
      v9 = &v18[v62];
      v12 = v69;
      v14 = a5 - 15;
      if ( (unsigned __int64)&v18[v62] >= v73 )
      {
LABEL_105:
        v8 = v77;
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
      v63 = (unsigned __int16 *)v15;
      *(_WORD *)v15 = *v9++;
      v15 = (_DWORD *)((char *)v15 + 2);
      ++v6[*v63 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v77;
  }
  *a6 = (_DWORD)v15 - v8;
  return 0LL;
}
