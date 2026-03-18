/*
 * XREFs of ?bSrcCopySRLE8D4@@YAHPEAUBLTINFO@@@Z @ 0x140318040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  __int64 v2; // rbp
  unsigned __int8 *v3; // rbx
  __int64 v4; // r10
  int v5; // edx
  unsigned int v6; // r12d
  int v7; // r14d
  int v8; // r15d
  int v9; // r13d
  __int64 v10; // rax
  int v11; // ecx
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // eax
  char v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rbp
  unsigned int v20; // esi
  unsigned __int8 *v21; // rbx
  __int64 v22; // rdi
  unsigned int v23; // r12d
  int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // edi
  __int64 v29; // rcx
  unsigned __int8 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int8 *v33; // rbx
  unsigned int v34; // edi
  int v35; // eax
  unsigned __int8 *v36; // rbx
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  int v40; // r15d
  int v41; // edi
  unsigned int v42; // edx
  unsigned int i; // esi
  int v44; // [rsp+0h] [rbp-78h]
  int v45; // [rsp+8h] [rbp-70h]
  unsigned int v46; // [rsp+Ch] [rbp-6Ch]
  int v47; // [rsp+10h] [rbp-68h]
  int v48; // [rsp+14h] [rbp-64h]
  __int64 v49; // [rsp+18h] [rbp-60h]
  __int64 v50; // [rsp+20h] [rbp-58h]
  unsigned int v52; // [rsp+88h] [rbp+10h]
  int v53; // [rsp+90h] [rbp+18h]
  unsigned int v54; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = *((int *)a1 + 11);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 14);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 25);
  v9 = *((_DWORD *)a1 + 24);
  v52 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v48 = v5;
  v12 = *((_DWORD *)v1 + 32);
  v49 = *(_QWORD *)(v10 + 16);
  v47 = v2;
  v53 = v11;
  v45 = *((_DWORD *)v1 + 23);
  v44 = v8;
  if ( v7 < v45 )
    return 1LL;
  v54 = (unsigned int)(v9 - 1) >> 1;
  v14 = v12 >> 1;
  v15 = 0;
  v46 = (unsigned int)v11 >> 1;
  if ( v7 < v8 )
  {
    if ( v14 < (unsigned int)v11 >> 1 )
    {
      v16 = (unsigned int)v11 >> 1;
    }
    else
    {
      v16 = (unsigned int)(v9 - 1) >> 1;
      if ( v14 <= v16 )
        v16 = v12 >> 1;
    }
    v17 = v16;
    v11 = v53;
    v15 = *(_BYTE *)(v17 + v4);
  }
  v50 = v2;
LABEL_11:
  v18 = v52;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 += 2;
      v19 = (unsigned int)(v12 >> 1);
      if ( v6 > v18 )
        return 0LL;
      v20 = *v3;
      v21 = v3 + 1;
      v22 = *v21;
      v3 = v21 + 1;
      if ( !v20 )
        break;
      if ( v7 < v8 && v12 < v9 )
      {
        if ( (int)(v20 + v12) > v11 )
        {
          if ( v12 < v11 )
          {
            v20 += v12 - v11;
            v12 = v11;
            v19 = (unsigned int)(v11 >> 1);
          }
          if ( (int)(v20 + v12) <= v9 )
          {
            v40 = 0;
          }
          else
          {
            v40 = v12 + v20 - v9;
            v20 = v9 - v12;
          }
          v41 = *(_DWORD *)(v49 + 4 * v22);
          if ( (v12 & 1) != 0 )
          {
            ++v12;
            *(_BYTE *)(v19 + v4) = v15 ^ (v15 ^ v41) & 0xF;
            v19 = (unsigned int)(v19 + 1);
            --v20;
          }
          v15 = (16 * v41) | v41 & 0xF;
          v42 = v20 + v12;
          for ( i = v20 >> 1; i; --i )
          {
            *(_BYTE *)(v19 + v4) = v15;
            v19 = (unsigned int)(v19 + 1);
          }
          if ( (v42 & 1) != 0 )
            v15 = (16 * v41) | v41 & 0xF;
          v12 = v40 + v42;
          goto LABEL_79;
        }
        v18 = v52;
      }
      v12 += v20;
    }
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 == 1 )
      {
        if ( v7 < v8 )
        {
          if ( v12 >= v11 && v12 < v9 && (v12 & 1) != 0 )
          {
            *(_BYTE *)(v19 + v4) = v15 ^ (*(_BYTE *)(v19 + v4) ^ v15) & 0xF;
          }
          else if ( (v9 & 1) != 0 && v12 >= v9 )
          {
            *(_BYTE *)(v54 + v4) = v15 ^ (*(_BYTE *)(v54 + v4) ^ v15) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v22 != 2 )
      {
        v23 = v22 + v6;
        if ( v23 <= v52 )
        {
          v24 = v22 & 1;
          if ( v7 >= v44 || v12 >= v9 || (int)v22 + v12 <= v11 )
          {
            v33 = &v3[v22];
            v12 += v22;
          }
          else
          {
            if ( v12 < v11 )
            {
              v25 = (unsigned int)(v11 - v12);
              v19 = (unsigned int)(v11 >> 1);
              LODWORD(v22) = v22 - v25;
              v12 = v11;
              v3 += v25;
            }
            if ( (int)v22 + v12 > v9 )
            {
              v20 = v12 + v22 - v9;
              LODWORD(v22) = v9 - v12;
            }
            if ( (v12 & 1) != 0 )
            {
              v26 = *v3++;
              ++v12;
              v1 = a1;
              v15 ^= (*(_BYTE *)(v49 + 4 * v26) ^ v15) & 0xF;
              *(_BYTE *)(v19 + v4) = v15;
              v19 = (unsigned int)(v19 + 1);
              LODWORD(v22) = v22 - 1;
            }
            v27 = v22 + v12;
            v28 = (unsigned int)v22 >> 1;
            if ( v28 )
            {
              do
              {
                v29 = *v3;
                v30 = v3 + 1;
                v31 = *v30;
                v3 = v30 + 1;
                v15 = (16 * *(_BYTE *)(v49 + 4 * v29)) | *(_BYTE *)(v49 + 4 * v31) & 0xF;
                *(_BYTE *)(v19 + v4) = v15;
                v19 = (unsigned int)(v19 + 1);
                --v28;
              }
              while ( v28 );
              v1 = a1;
            }
            if ( (v27 & 1) != 0 )
            {
              v32 = *v3++;
              v15 = v15 & 0xF | (16 * *(_BYTE *)(v49 + 4 * v32));
            }
            v33 = &v3[v20];
            v12 = v20 + v27;
          }
          v6 = v24 + v23;
          v3 = &v33[v24];
LABEL_79:
          v8 = v44;
          goto LABEL_80;
        }
        return 0LL;
      }
      if ( v7 < v8 )
      {
        if ( v12 >= v11 && v12 < v9 && (v12 & 1) != 0 )
        {
          v15 ^= (*(_BYTE *)(v19 + v4) ^ v15) & 0xF;
          *(_BYTE *)(v19 + v4) = v15;
        }
        else if ( (v9 & 1) != 0 && v12 >= v9 )
        {
          v34 = (unsigned int)(v9 - 1) >> 1;
          v15 ^= (*(_BYTE *)(v54 + v4) ^ v15) & 0xF;
          *(_BYTE *)(v54 + v4) = v15;
LABEL_41:
          v6 += 2;
          if ( v6 <= v52 )
          {
            v35 = *v3;
            v36 = v3 + 1;
            v12 += v35;
            v37 = *v36;
            v3 = v36 + 1;
            v7 -= v37;
            v4 += v37 * v47;
            if ( v7 < v45 )
            {
              *((_DWORD *)v1 + 34) = v12;
              goto LABEL_84;
            }
            v11 = v53;
            v38 = v12 >> 1;
            if ( v7 >= v8 )
              goto LABEL_11;
            if ( v38 < v46 )
            {
              v39 = v46;
            }
            else
            {
              v39 = v34;
              if ( v38 <= v34 )
                v39 = v12 >> 1;
            }
            v15 = *(_BYTE *)(v39 + v4);
LABEL_80:
            v11 = v53;
            goto LABEL_11;
          }
          return 0LL;
        }
      }
      v34 = (unsigned int)(v9 - 1) >> 1;
      goto LABEL_41;
    }
    if ( v7 < v8 )
    {
      if ( v12 >= v11 && v12 < v9 && (v12 & 1) != 0 )
      {
        v15 ^= (*(_BYTE *)(v19 + v4) ^ v15) & 0xF;
        *(_BYTE *)(v19 + v4) = v15;
      }
      else if ( (v9 & 1) != 0 && v12 >= v9 )
      {
        v15 ^= (*(_BYTE *)(v54 + v4) ^ v15) & 0xF;
        *(_BYTE *)(v54 + v4) = v15;
      }
    }
    v4 += v50;
    --v7;
    v12 = v48;
    if ( v7 < v45 )
      break;
    v11 = v53;
    v18 = v52;
    if ( v7 < v8 )
    {
      v15 = *(_BYTE *)(v46 + v4);
      goto LABEL_11;
    }
  }
  *((_DWORD *)v1 + 34) = v48;
LABEL_84:
  *((_QWORD *)v1 + 14) = v4;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v3;
  *((_DWORD *)v1 + 31) = v6;
  *((_DWORD *)v1 + 33) = v7;
  return result;
}
