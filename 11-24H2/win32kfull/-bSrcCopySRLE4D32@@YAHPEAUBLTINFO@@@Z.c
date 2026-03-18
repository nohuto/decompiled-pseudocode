/*
 * XREFs of ?bSrcCopySRLE4D32@@YAHPEAUBLTINFO@@@Z @ 0x1401D3CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r10
  __int64 v3; // r14
  int v4; // eax
  int v5; // r15d
  int v6; // ebp
  int v7; // r12d
  unsigned int v8; // ecx
  unsigned int v9; // edi
  __int64 v10; // r13
  int v11; // r8d
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned int v14; // edx
  unsigned __int8 *v15; // r10
  unsigned __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rcx
  int v19; // r15d
  unsigned int v20; // edx
  int v21; // ebx
  int v22; // r12d
  __int64 v23; // rax
  _DWORD *v24; // rcx
  unsigned int v25; // edi
  BOOL v26; // r15d
  unsigned int v27; // esi
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rax
  _DWORD *v31; // r12
  unsigned __int64 v32; // rax
  int v33; // ecx
  unsigned __int64 v34; // r10
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  unsigned __int8 *v39; // r10
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rax
  int v43; // [rsp+0h] [rbp-68h]
  int v44; // [rsp+4h] [rbp-64h]
  int v45; // [rsp+8h] [rbp-60h]
  int v46; // [rsp+Ch] [rbp-5Ch]
  __int64 v47; // [rsp+10h] [rbp-58h]
  unsigned int v49; // [rsp+78h] [rbp+10h]
  int v50; // [rsp+80h] [rbp+18h]
  int v51; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 11) / 4;
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *((_DWORD *)v1 + 30);
  v10 = *((int *)v1 + 22);
  v11 = *((_DWORD *)v1 + 32);
  v12 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v50 = v4;
  v51 = *((_DWORD *)v1 + 25);
  v46 = *((_DWORD *)v1 + 14);
  v49 = v8;
  v47 = v12;
  v43 = v7;
  v44 = v5;
  if ( v6 < v5 )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 += 2;
          if ( v9 > v8 )
            return 0LL;
          v14 = *v2;
          v15 = v2 + 1;
          v16 = *v15;
          v2 = v15 + 1;
          if ( !v14 )
            break;
          if ( v6 < v51 && v11 < v7 && (int)(v14 + v11) > (int)v10 )
          {
            if ( v11 < (int)v10 )
            {
              v41 = v10 - v11;
              v11 = v10;
              v14 -= v41;
            }
            if ( (int)(v14 + v11) > v7 )
            {
              v17 = v11 + v14 - v7;
              v14 = v7 - v11;
            }
            else
            {
              v17 = 0;
            }
            v18 = v16 & 0xF;
            v19 = v14 & 1;
            v20 = v14 >> 1;
            v21 = *(_DWORD *)(v47 + 4 * (v16 >> 4));
            v22 = *(_DWORD *)(v47 + 4 * v18);
            if ( v20 )
            {
              v23 = v11;
              v11 += 2 * v20;
              v24 = (_DWORD *)(v3 + 4 * v23);
              do
              {
                *v24 = v21;
                v24[1] = v22;
                v24 += 2;
                --v20;
              }
              while ( v20 );
            }
            if ( v19 )
            {
              v42 = v11++;
              *(_DWORD *)(v3 + 4 * v42) = v21;
            }
            v7 = v43;
            v11 += v17;
            v12 = v47;
            goto LABEL_18;
          }
          v11 += v14;
        }
        if ( (_DWORD)v16 )
          break;
        --v6;
        v3 += 4LL * v50;
        v11 = v46;
        if ( v6 < v5 )
        {
          *((_DWORD *)v1 + 34) = v46;
          goto LABEL_51;
        }
      }
      if ( (_DWORD)v16 == 1 )
        return 0LL;
      if ( (_DWORD)v16 == 2 )
        break;
      v25 = ((unsigned int)(v16 + 1) >> 1) + v9;
      if ( v25 > v49 )
        return 0LL;
      v26 = (((_DWORD)v16 + 1) & 2) != 0;
      if ( v6 >= v51 || v11 >= v7 || (int)v16 + v11 <= (int)v10 )
      {
        v11 += v16;
        v34 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v16 + 1) >> 1];
      }
      else
      {
        if ( v11 < (int)v10 )
        {
          v35 = v10 - v11;
          v11 = v10;
          LODWORD(v16) = v16 - v35;
          v2 += (unsigned __int64)v35 >> 1;
          if ( (v35 & 1) != 0 )
          {
            v11 = v10 + 1;
            v36 = *v2++ & 0xF;
            LODWORD(v16) = v16 - 1;
            *(_DWORD *)(v3 + 4 * v10) = *(_DWORD *)(v12 + 4 * v36);
          }
        }
        if ( (int)v16 + v11 > v7 )
        {
          v27 = v11 + v16 - v7;
          LODWORD(v16) = v7 - v11;
        }
        else
        {
          v27 = 0;
        }
        v28 = v16 & 1;
        v29 = (unsigned int)v16 >> 1;
        v45 = v28;
        if ( v29 )
        {
          v30 = v11;
          v11 += 2 * v29;
          v31 = (_DWORD *)(v3 + 4 * v30);
          do
          {
            v32 = *v2++;
            v33 = *(_DWORD *)(v47 + 4 * (v32 >> 4));
            LODWORD(v32) = *(_DWORD *)(v47 + 4 * (v32 & 0xF));
            *v31 = v33;
            v31[1] = v32;
            v31 += 2;
            --v29;
          }
          while ( v29 );
          v1 = a1;
          v28 = v45;
          v7 = v43;
        }
        if ( v28 )
        {
          v37 = v11++;
          *(_DWORD *)(v3 + 4 * v37) = *(_DWORD *)(v47 + 4 * ((unsigned __int64)*v2 >> 4));
          v34 = (unsigned __int64)&v2[((unsigned __int64)v27 >> 1) + 1];
        }
        else
        {
          v34 = (unsigned __int64)&v2[(unsigned __int64)(v27 + 1) >> 1];
        }
        v11 += v27;
        v12 = v47;
      }
      v9 = v26 + v25;
      v2 = (unsigned __int8 *)(v26 + v34);
LABEL_18:
      v8 = v49;
      v5 = v44;
    }
    v9 += 2;
    if ( v9 > v8 )
      return 0LL;
    v38 = *v2;
    v39 = v2 + 1;
    v11 += v38;
    v40 = *v39;
    v2 = v39 + 1;
    v6 -= v40;
    v3 += 4LL * v40 * v50;
    if ( v6 < v5 )
      break;
    v8 = v49;
  }
  *((_DWORD *)v1 + 34) = v11;
LABEL_51:
  *((_QWORD *)v1 + 14) = v3;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v9;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
