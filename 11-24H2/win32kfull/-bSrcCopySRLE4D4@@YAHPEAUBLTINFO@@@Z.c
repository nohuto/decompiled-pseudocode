/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1401F2660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  __int64 v2; // rbp
  char *v3; // r10
  __int64 v4; // rbx
  int v5; // edx
  unsigned int v6; // r15d
  int v7; // r14d
  int v8; // edi
  int v9; // r13d
  __int64 v10; // rax
  int v11; // ecx
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // r12d
  unsigned int v15; // eax
  char v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rbp
  unsigned int v21; // edi
  unsigned __int8 *v22; // r10
  unsigned __int64 v23; // rsi
  unsigned int v24; // r15d
  BOOL v25; // r12d
  unsigned int v26; // ecx
  char v27; // al
  char v28; // cl
  unsigned int v29; // edi
  int v30; // r15d
  unsigned int v31; // eax
  char v32; // r15
  __int64 v33; // rbp
  unsigned int v34; // esi
  unsigned int v35; // eax
  char v36; // dl
  unsigned __int64 v37; // rcx
  unsigned int j; // esi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r10
  unsigned int v41; // esi
  int v42; // eax
  unsigned __int8 *v43; // r10
  int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rax
  int v48; // eax
  int v49; // r12d
  __int64 v50; // rcx
  char v51; // si
  char v52; // r15
  char v53; // al
  __int64 v54; // rax
  char v55; // si
  unsigned int v56; // edx
  unsigned int i; // edi
  __int64 v58; // rax
  int v59; // [rsp+0h] [rbp-78h]
  unsigned int v60; // [rsp+4h] [rbp-74h]
  unsigned int v61; // [rsp+8h] [rbp-70h]
  unsigned int v62; // [rsp+8h] [rbp-70h]
  __int64 v63; // [rsp+10h] [rbp-68h]
  int v64; // [rsp+18h] [rbp-60h]
  int v65; // [rsp+1Ch] [rbp-5Ch]
  int v66; // [rsp+20h] [rbp-58h]
  int v67; // [rsp+24h] [rbp-54h]
  __int64 v68; // [rsp+28h] [rbp-50h]
  int v70; // [rsp+88h] [rbp+10h]
  unsigned int v71; // [rsp+90h] [rbp+18h]
  unsigned int v72; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = *((int *)a1 + 11);
  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 14);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 25);
  v9 = *((_DWORD *)a1 + 24);
  v71 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v67 = v5;
  v12 = *((_DWORD *)v1 + 32);
  v63 = *(_QWORD *)(v10 + 16);
  v66 = v2;
  v70 = v11;
  v65 = *((_DWORD *)v1 + 23);
  v59 = v8;
  if ( v7 < v65 )
    return 1LL;
  v72 = (unsigned int)(v9 - 1) >> 1;
  v14 = (unsigned int)v11 >> 1;
  v15 = v12 >> 1;
  v16 = 0;
  v60 = (unsigned int)v11 >> 1;
  if ( v7 < v8 )
  {
    if ( v15 < v14 )
    {
      v17 = (unsigned int)v11 >> 1;
    }
    else
    {
      v17 = (unsigned int)(v9 - 1) >> 1;
      if ( v15 <= v17 )
        v17 = v12 >> 1;
    }
    v18 = v17;
    v11 = v70;
    v16 = *(_BYTE *)(v18 + v4);
  }
  v68 = v2;
LABEL_11:
  v19 = v71;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 += 2;
      v20 = (unsigned int)(v12 >> 1);
      v61 = v6;
      if ( v6 > v19 )
        return 0LL;
      v21 = (unsigned __int8)*v3;
      v22 = (unsigned __int8 *)(v3 + 1);
      v23 = *v22;
      v3 = (char *)(v22 + 1);
      if ( !v21 )
        break;
      if ( v7 < v59 && v12 < v9 )
      {
        if ( (int)(v21 + v12) > v11 )
        {
          if ( v12 < v11 )
          {
            LODWORD(v20) = v14;
            v48 = v11 - v12;
            v12 = v11;
            v21 -= v48;
          }
          if ( (int)(v21 + v12) <= v9 )
          {
            v49 = 0;
          }
          else
          {
            v49 = v12 + v21 - v9;
            v21 = v9 - v12;
          }
          v50 = v23 & 0xF;
          v51 = *(_BYTE *)(v63 + 4 * (v23 >> 4));
          v52 = *(_BYTE *)(v63 + 4 * v50);
          v53 = v52;
          if ( (v12 & 1) != 0 )
          {
            v54 = (unsigned int)v20;
            LODWORD(v20) = v20 + 1;
            ++v12;
            *(_BYTE *)(v54 + v4) = v16 ^ (v16 ^ v51) & 0xF;
            --v21;
            v53 = v51;
            v51 = v52;
          }
          v55 = 16 * v51;
          v56 = v21 + v12;
          v16 = v55 | v53 & 0xF;
          for ( i = v21 >> 1; i; --i )
          {
            v58 = (unsigned int)v20;
            LODWORD(v20) = v20 + 1;
            *(_BYTE *)(v58 + v4) = v16;
          }
          if ( (v56 & 1) != 0 )
            v16 = v55 | v16 & 0xF;
          v6 = v61;
          v12 = v49 + v56;
          goto LABEL_97;
        }
        v19 = v71;
      }
      v12 += v21;
    }
    if ( (_DWORD)v23 )
    {
      if ( (_DWORD)v23 == 1 )
      {
        if ( v7 < v59 )
        {
          if ( v12 >= v11 && v12 < v9 && (v12 & 1) != 0 )
          {
            *(_BYTE *)(v20 + v4) = v16 ^ (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
          }
          else if ( (v9 & 1) != 0 && v12 >= v9 )
          {
            *(_BYTE *)(v72 + v4) = v16 ^ (*(_BYTE *)(v72 + v4) ^ v16) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v23 != 2 )
      {
        v24 = ((unsigned int)(v23 + 1) >> 1) + v6;
        v62 = v24;
        if ( v24 <= v71 )
        {
          v25 = (((_DWORD)v23 + 1) & 2) != 0;
          if ( v7 >= v59 || v12 >= v9 || (int)v23 + v12 <= v70 )
          {
            v12 += v23;
            v40 = (unsigned __int64)&v3[(unsigned __int64)(unsigned int)(v23 + 1) >> 1];
            goto LABEL_51;
          }
          if ( v12 < v70 )
          {
            v26 = v70 - v12;
            v20 = v60;
            LODWORD(v23) = v23 - (v70 - v12);
            v12 = v70;
            v3 += (unsigned __int64)v26 >> 1;
            if ( (v26 & 1) != 0 )
            {
              v27 = *v3++;
              v28 = *(_BYTE *)(v63 + 4LL * (v27 & 0xF));
              if ( (v70 & 1) != 0 )
              {
                v16 ^= (v16 ^ v28) & 0xF;
                *(_BYTE *)(v60 + v4) = v16;
                v20 = v60 + 1;
              }
              else
              {
                v16 = v16 & 0xF | (16 * v28);
              }
              v11 = v70;
              v12 = v70 + 1;
              LODWORD(v23) = v23 - 1;
              if ( !(_DWORD)v23 )
              {
                v6 = v25 + v24;
                v3 += v25;
LABEL_28:
                v14 = v60;
                goto LABEL_11;
              }
            }
          }
          if ( (int)v23 + v12 <= v9 )
          {
            v29 = 0;
          }
          else
          {
            v29 = v12 + v23 - v9;
            LODWORD(v23) = v9 - v12;
          }
          if ( !(_DWORD)v23 )
          {
            v40 = (unsigned __int64)&v3[(unsigned __int64)(v29 + 1) >> 1];
            goto LABEL_49;
          }
          v30 = v23 + v12;
          v64 = v23 + v12;
          if ( (v12 & 1) != 0 )
          {
            v31 = (unsigned __int8)*v3++;
            v32 = *(_BYTE *)(v63 + 4LL * (v31 & 0xF));
            v16 ^= (*(_BYTE *)(v63 + 4 * ((unsigned __int64)v31 >> 4)) ^ v16) & 0xF;
            *(_BYTE *)(v20 + v4) = v16;
            v33 = (unsigned int)(v20 + 1);
            v34 = (unsigned int)(v23 - 1) >> 1;
            if ( v34 )
            {
              do
              {
                v35 = (unsigned __int8)*v3++;
                v36 = 16 * v32;
                v32 = *(_BYTE *)(v63 + 4LL * (v35 & 0xF));
                v16 = v36 | *(_BYTE *)(v63 + 4 * ((unsigned __int64)v35 >> 4)) & 0xF;
                *(_BYTE *)(v33 + v4) = v16;
                v33 = (unsigned int)(v33 + 1);
                --v34;
              }
              while ( v34 );
              v1 = a1;
            }
            if ( (v64 & 1) != 0 )
            {
              v37 = v29 + 1;
              v16 = v16 & 0xF | (16 * v32);
            }
            else
            {
              v37 = v29;
            }
            v30 = v64;
          }
          else
          {
            for ( j = (unsigned int)v23 >> 1; j; --j )
            {
              v39 = (unsigned __int8)*v3++;
              v16 = *(_BYTE *)(v63 + 4 * (v39 & 0xF)) & 0xF | (16 * *(_BYTE *)(v63 + 4 * (v39 >> 4)));
              *(_BYTE *)(v20 + v4) = v16;
              v20 = (unsigned int)(v20 + 1);
            }
            if ( (v30 & 1) != 0 )
            {
              v16 = v16 & 0xF | (16 * *(_BYTE *)(v63 + 4 * ((unsigned __int64)(unsigned __int8)*v3 >> 4)));
              v40 = (unsigned __int64)&v3[((unsigned __int64)v29 >> 1) + 1];
LABEL_47:
              v12 = v30;
              v24 = v62;
LABEL_49:
              v12 += v29;
LABEL_51:
              v6 = v25 + v24;
              v3 = (char *)(v25 + v40);
LABEL_97:
              v11 = v70;
              goto LABEL_28;
            }
            v37 = v29 + 1;
          }
          v40 = (unsigned __int64)&v3[v37 >> 1];
          goto LABEL_47;
        }
        return 0LL;
      }
      if ( v7 < v59 )
      {
        if ( v12 >= v11 && v12 < v9 && (v12 & 1) != 0 )
        {
          v16 ^= (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
          *(_BYTE *)(v20 + v4) = v16;
        }
        else if ( (v9 & 1) != 0 && v12 >= v9 )
        {
          v41 = (unsigned int)(v9 - 1) >> 1;
          v16 ^= (*(_BYTE *)(v72 + v4) ^ v16) & 0xF;
          *(_BYTE *)(v72 + v4) = v16;
LABEL_58:
          v6 += 2;
          if ( v6 > v71 )
            return 0LL;
          v42 = (unsigned __int8)*v3;
          v43 = (unsigned __int8 *)(v3 + 1);
          v12 += v42;
          v44 = *v43;
          v3 = (char *)(v43 + 1);
          v7 -= v44;
          v4 += v44 * v66;
          if ( v7 < v65 )
          {
            *((_DWORD *)v1 + 34) = v12;
            goto LABEL_101;
          }
          v11 = v70;
          v45 = v12 >> 1;
          if ( v7 < v59 )
          {
            if ( v45 < v14 )
            {
              v46 = v14;
            }
            else
            {
              v46 = v41;
              if ( v45 <= v41 )
                v46 = v12 >> 1;
            }
            v47 = v46;
            goto LABEL_81;
          }
          goto LABEL_11;
        }
      }
      v41 = (unsigned int)(v9 - 1) >> 1;
      goto LABEL_58;
    }
    if ( v7 < v59 )
    {
      if ( v12 >= v11 && v12 < v9 && (v12 & 1) != 0 )
      {
        v16 ^= (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
        *(_BYTE *)(v20 + v4) = v16;
      }
      else if ( (v9 & 1) != 0 && v12 >= v9 )
      {
        v16 ^= (*(_BYTE *)(v72 + v4) ^ v16) & 0xF;
        *(_BYTE *)(v72 + v4) = v16;
      }
    }
    v4 += v68;
    --v7;
    v12 = v67;
    if ( v7 < v65 )
      break;
    v11 = v70;
    v19 = v71;
    if ( v7 < v59 )
    {
      v47 = v14;
LABEL_81:
      v16 = *(_BYTE *)(v47 + v4);
      v11 = v70;
      goto LABEL_11;
    }
  }
  *((_DWORD *)v1 + 34) = v67;
LABEL_101:
  *((_QWORD *)v1 + 14) = v4;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v3;
  *((_DWORD *)v1 + 31) = v6;
  *((_DWORD *)v1 + 33) = v7;
  return result;
}
