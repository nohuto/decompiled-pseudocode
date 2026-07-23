/*
 * XREFs of compress_block @ 0x18015457C
 * Callers:
 *     _tr_flush_block @ 0x180153E80 (_tr_flush_block.c)
 * Callees:
 *     <none>
 */

char __fastcall compress_block(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int *v4; // r10
  __int64 v7; // rdx
  __int64 *v8; // rbx
  int v9; // r8d
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // r14
  bool v14; // zf
  int v15; // r8d
  int v16; // ecx
  _DWORD *v17; // r11
  int v18; // esi
  unsigned __int16 v19; // r8
  __int64 v20; // rdx
  char v21; // cl
  __int16 v22; // r8
  __int64 v23; // r13
  __int16 v24; // r11
  __int64 v25; // rax
  int v26; // r12d
  unsigned __int16 v27; // si
  __int16 v28; // ax
  __int64 v29; // rcx
  __int16 v30; // ax
  int v31; // edx
  int v32; // edx
  __int16 v33; // si
  __int64 v34; // rax
  int v35; // r13d
  int v36; // r14d
  char v37; // cl
  __int64 v38; // r8
  unsigned __int8 v39; // cl
  __int64 v40; // r13
  char v41; // cl
  int v42; // r12d
  unsigned __int16 v43; // r14
  __int64 v44; // rdx
  __int16 v45; // ax
  __int64 v46; // rcx
  __int16 v47; // ax
  int v48; // eax
  unsigned int *v49; // rdx
  int v50; // r12d
  __int16 v51; // r14
  int v52; // esi
  int v53; // r8d
  __int64 v54; // rcx
  int v55; // esi
  __int64 v56; // rdi
  int v57; // ecx
  unsigned __int16 v58; // r9
  char result; // al
  __int64 v60; // r8
  __int64 v61; // rdx
  char v62; // cl
  int v63; // edx
  __int16 v64; // r9
  _DWORD *v65; // [rsp+8h] [rbp-50h]
  _DWORD *v66; // [rsp+60h] [rbp+8h]
  __int64 *v67; // [rsp+68h] [rbp+10h]
  _DWORD *v69; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = (int *)(a1 + 5984);
  if ( *(_DWORD *)(a1 + 5956) )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 5944);
      v8 = (__int64 *)(a1 + 16);
      v9 = *(unsigned __int8 *)(v3 + v7);
      v10 = (unsigned int)(v3 + 1);
      v11 = *(unsigned __int8 *)(v10 + v7);
      v12 = (unsigned int)(v10 + 1);
      v11 <<= 8;
      v13 = *(unsigned __int8 *)(v12 + v7);
      v3 = (unsigned int)(v12 + 1);
      v14 = v11 + v9 == 0;
      v15 = v11 + v9;
      v16 = *v4;
      if ( v14 )
      {
        v17 = (_DWORD *)(a1 + 40);
        v18 = *(unsigned __int16 *)(a2 + 4LL * (int)v13 + 2);
        v19 = *(_WORD *)(a2 + 4LL * (int)v13);
        if ( v16 <= 16 - v18 )
        {
          *(_WORD *)(a1 + 5980) |= v19 << v16;
        }
        else
        {
          v20 = (unsigned int)*v17;
          *(_WORD *)(a1 + 5980) |= v19 << v16;
          *(_BYTE *)(v20 + *v8) = *(_BYTE *)(a1 + 5980);
          *(_BYTE *)((unsigned int)++*v17 + *v8) = *(_BYTE *)(a1 + 5981);
          v21 = 16 - *(_BYTE *)v4;
          ++*v17;
          v22 = v19 >> v21;
          v16 = *v4 - 16;
          *(_WORD *)(a1 + 5980) = v22;
        }
        *v4 = v18 + v16;
      }
      else
      {
        v23 = length_code[v13];
        v24 = *(_WORD *)(a1 + 5980);
        v25 = (unsigned int)(v23 + 257);
        v26 = *(unsigned __int16 *)(a2 + 4 * v25 + 2);
        v27 = *(_WORD *)(a2 + 4 * v25);
        if ( v16 <= 16 - v26 )
        {
          v32 = v16 + v26;
          v33 = v24 | (v27 << v16);
          v17 = (_DWORD *)(a1 + 40);
        }
        else
        {
          v28 = v27 << v16;
          v29 = *v8;
          v30 = v24 | v28;
          v17 = (_DWORD *)(a1 + 40);
          *(_WORD *)(a1 + 5980) = v30;
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v29) = v30;
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *v8) = *(_BYTE *)(a1 + 5981);
          v31 = *v4;
          ++*(_DWORD *)(a1 + 40);
          v32 = v26 + v31 - 16;
          v33 = v27 >> (16 - *(_BYTE *)v4);
        }
        *(_WORD *)(a1 + 5980) = v33;
        *v4 = v32;
        v34 = v23;
        v35 = dword_180198F60[v23];
        v65 = v17;
        v69 = v17;
        v67 = (__int64 *)(a1 + 16);
        v66 = v17;
        if ( v35 )
        {
          v36 = v13 - dword_180198E90[v34];
          v33 |= (_WORD)v36 << v32;
          *(_WORD *)(a1 + 5980) = v33;
          if ( v32 <= 16 - v35 )
          {
            v32 += v35;
            *v4 = v32;
          }
          else
          {
            *(_BYTE *)((unsigned int)(*v17)++ + *v8) = v33;
            *(_BYTE *)((unsigned int)*v17 + *v8) = *(_BYTE *)(a1 + 5981);
            v37 = 16 - *(_BYTE *)v4;
            ++*v17;
            v33 = (unsigned __int16)v36 >> v37;
            *v4 += v35 - 16;
            v32 = *v4;
            *(_WORD *)(a1 + 5980) = (unsigned __int16)v36 >> v37;
          }
        }
        v38 = (unsigned int)(v15 - 1);
        if ( (unsigned int)v38 >= 0x100 )
          v39 = *((_BYTE *)&dist_code + ((unsigned int)v38 >> 7) + 256);
        else
          v39 = *((_BYTE *)&dist_code + v38);
        v40 = v39;
        v41 = v32;
        v42 = *(unsigned __int16 *)(a3 + 4 * v40 + 2);
        v43 = *(_WORD *)(a3 + 4 * v40);
        if ( v32 <= 16 - v42 )
        {
          v50 = v32 + v42;
          v49 = v17;
          v17 = (_DWORD *)(a1 + 40);
          v51 = v33 | (v43 << v41);
          v8 = (__int64 *)(a1 + 16);
        }
        else
        {
          v44 = (unsigned int)*v17;
          v45 = v43 << v41;
          v46 = *v8;
          v47 = v33 | v45;
          *(_WORD *)(a1 + 5980) = v47;
          *(_BYTE *)(v44 + v46) = v47;
          *(_BYTE *)((unsigned int)++*v17 + *v8) = *(_BYTE *)(a1 + 5981);
          v48 = *v4;
          v49 = v17;
          ++*v17;
          v50 = v48 - 16 + v42;
          v51 = v43 >> (16 - *(_BYTE *)v4);
        }
        *(_WORD *)(a1 + 5980) = v51;
        *v4 = v50;
        v52 = dword_180198FE0[v40];
        if ( v52 )
        {
          v53 = v38 - dword_180198E10[v40];
          *(_WORD *)(a1 + 5980) = v51 | ((_WORD)v53 << v50);
          if ( v50 <= 16 - v52 )
          {
            *v4 = v50 + v52;
          }
          else
          {
            v8 = (__int64 *)(a1 + 16);
            v17 = v66;
            *(_BYTE *)(*v49 + *v67) = *(_BYTE *)(a1 + 5980);
            v54 = *v67;
            *(_BYTE *)((unsigned int)++*v69 + v54) = *(_BYTE *)(a1 + 5981);
            *(_WORD *)(a1 + 5980) = (unsigned __int16)v53 >> (16 - *(_BYTE *)v4);
            ++*v65;
            *v4 += v52 - 16;
          }
        }
      }
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 5956) );
  }
  else
  {
    v17 = (_DWORD *)(a1 + 40);
    v8 = (__int64 *)(a1 + 16);
  }
  v55 = *(unsigned __int16 *)(a2 + 1026);
  v56 = a1 + 5980;
  v57 = *v4;
  v58 = *(_WORD *)(a2 + 1024);
  result = 16 - v55;
  if ( *v4 <= 16 - v55 )
  {
    v63 = v57 + v55;
    v64 = *(_WORD *)v56 | (v58 << v57);
  }
  else
  {
    v60 = (unsigned int)*v17;
    v61 = *v8;
    *(_WORD *)v56 |= v58 << v57;
    *(_BYTE *)(v60 + v61) = *(_BYTE *)v56;
    ++*v17;
    result = *(_BYTE *)(v56 + 1);
    *(_BYTE *)((unsigned int)*v17 + *v8) = result;
    LODWORD(v61) = *v4;
    v62 = 16 - *(_BYTE *)v4;
    ++*v17;
    v63 = v55 + v61 - 16;
    v64 = v58 >> v62;
  }
  *(_WORD *)v56 = v64;
  *v4 = v63;
  return result;
}
