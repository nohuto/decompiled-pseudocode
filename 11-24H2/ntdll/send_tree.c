/*
 * XREFs of send_tree @ 0x180155198
 * Callers:
 *     send_all_trees @ 0x180154F04 (send_all_trees.c)
 * Callees:
 *     <none>
 */

char __fastcall send_tree(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // r10d
  unsigned __int16 *v8; // r14
  __int64 v9; // r12
  int v10; // edx
  int v11; // ecx
  __int16 v12; // si
  __int64 v13; // rbp
  int v14; // r15d
  int v15; // r11d
  int v16; // ecx
  unsigned __int16 v17; // r8
  __int16 v18; // si
  __int64 v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rcx
  int v22; // edx
  __int16 v23; // r8
  int *v24; // r11
  _WORD *v25; // r8
  int v26; // ebx
  int v27; // ecx
  unsigned __int16 v28; // r10
  __int64 v29; // rdx
  int v30; // edx
  __int16 v31; // r10
  int v32; // esi
  int v33; // ecx
  unsigned __int16 v34; // bx
  __int64 v35; // rdx
  int v36; // edx
  __int16 v37; // bx
  unsigned __int16 v38; // r10
  char v39; // cl
  __int64 v40; // rdx
  __int16 v41; // ax
  __int64 v42; // rcx
  __int16 v43; // ax
  int v44; // ecx
  int v45; // esi
  unsigned __int16 v46; // bx
  __int64 v47; // rdx
  int v48; // edx
  __int64 v49; // rdx
  __int16 v50; // ax
  __int64 v51; // rcx
  __int16 v52; // ax
  __int16 v53; // r10
  int v54; // esi
  unsigned __int16 v55; // bx
  __int64 v56; // rdx
  int v57; // eax
  __int16 v58; // bx
  unsigned __int16 v59; // r10
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int16 v62; // r10
  _UNKNOWN *retaddr; // [rsp+20h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = -1;
  v6 = 0;
  if ( a3 >= 0LL )
  {
    v8 = (unsigned __int16 *)(a2 + 6);
    v9 = a3 + 1LL;
    v10 = v4 != 0 ? 7 : 138;
    LODWORD(v3) = -v4;
    v11 = (v4 != 0) + 3;
    do
    {
      v12 = v6;
      v13 = v4;
      ++v6;
      v14 = v4;
      v4 = *v8;
      if ( v6 < v10 && (_DWORD)v13 == v4 )
        goto LABEL_46;
      if ( v6 >= v11 )
      {
        v24 = (int *)(a1 + 5984);
        v25 = (_WORD *)(a1 + 5980);
        if ( (_DWORD)v13 )
        {
          if ( v14 != v5 )
          {
            v26 = *(unsigned __int16 *)(a1 + 4 * v13 + 2806);
            v27 = *v24;
            v28 = *(_WORD *)(a1 + 4 * v13 + 2804);
            if ( *v24 <= 16 - v26 )
            {
              v30 = v27 + v26;
              v31 = *v25 | (v28 << v27);
            }
            else
            {
              v29 = *(unsigned int *)(a1 + 40);
              *v25 |= v28 << v27;
              *(_BYTE *)(v29 + *(_QWORD *)(a1 + 16)) = *(_BYTE *)v25;
              *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
              LODWORD(v29) = *v24;
              ++*(_DWORD *)(a1 + 40);
              v30 = v26 + v29 - 16;
              v31 = v28 >> (16 - *(_BYTE *)v24);
            }
            *v25 = v31;
            LOWORD(v6) = v12;
            *v24 = v30;
          }
          v32 = *(unsigned __int16 *)(a1 + 2870);
          v33 = *v24;
          v34 = *(_WORD *)(a1 + 2868);
          if ( *v24 <= 16 - v32 )
          {
            v36 = v33 + v32;
            v37 = *v25 | (v34 << v33);
          }
          else
          {
            v35 = *(unsigned int *)(a1 + 40);
            *v25 |= v34 << v33;
            *(_BYTE *)(v35 + *(_QWORD *)(a1 + 16)) = *(_BYTE *)v25;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            LODWORD(v35) = *v24;
            ++*(_DWORD *)(a1 + 40);
            v36 = v32 + v35 - 16;
            v37 = v34 >> (16 - *(_BYTE *)v24);
          }
          v38 = v6 - 3;
          v39 = v36;
          *v24 = v36;
          if ( v36 > 14 )
          {
            v40 = *(unsigned int *)(a1 + 40);
            v41 = v38 << v39;
            v42 = *(_QWORD *)(a1 + 16);
            v43 = v37 | v41;
            *v25 = v43;
            *(_BYTE *)(v40 + v42) = v43;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            ++*(_DWORD *)(a1 + 40);
            LOWORD(v3) = *(_WORD *)v24;
            *v24 -= 14;
            goto LABEL_29;
          }
          LODWORD(v3) = v36 + 2;
          goto LABEL_31;
        }
        v44 = *v24;
        if ( v6 <= 10 )
        {
          v45 = *(unsigned __int16 *)(a1 + 2874);
          v46 = *(_WORD *)(a1 + 2872);
          if ( v44 <= 16 - v45 )
          {
            v48 = v44 + v45;
            v37 = *v25 | (v46 << v44);
          }
          else
          {
            v47 = *(unsigned int *)(a1 + 40);
            *v25 |= v46 << v44;
            *(_BYTE *)(v47 + *(_QWORD *)(a1 + 16)) = *(_BYTE *)v25;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            LODWORD(v47) = *v24;
            ++*(_DWORD *)(a1 + 40);
            v48 = v45 + v47 - 16;
            v37 = v46 >> (16 - *(_BYTE *)v24);
          }
          v38 = v6 - 3;
          *v25 = v37;
          v39 = v48;
          *v24 = v48;
          if ( v48 > 13 )
          {
            v49 = *(unsigned int *)(a1 + 40);
            v50 = v38 << v39;
            v51 = *(_QWORD *)(a1 + 16);
            v52 = v37 | v50;
            *v25 = v52;
            *(_BYTE *)(v49 + v51) = v52;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            ++*(_DWORD *)(a1 + 40);
            LOWORD(v3) = *(_WORD *)v24;
            *v24 -= 13;
LABEL_29:
            v53 = v38 >> (16 - (_BYTE)v3);
LABEL_32:
            *v25 = v53;
            goto LABEL_40;
          }
          LODWORD(v3) = v48 + 3;
LABEL_31:
          v53 = v37 | (v38 << v39);
          *v24 = (int)v3;
          goto LABEL_32;
        }
        v54 = *(unsigned __int16 *)(a1 + 2878);
        v55 = *(_WORD *)(a1 + 2876);
        if ( v44 <= 16 - v54 )
        {
          LODWORD(v3) = v44 + v54;
          v58 = *v25 | (v55 << v44);
        }
        else
        {
          v56 = *(unsigned int *)(a1 + 40);
          *v25 |= v55 << v44;
          *(_BYTE *)(v56 + *(_QWORD *)(a1 + 16)) = *(_BYTE *)v25;
          *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v57 = *v24;
          ++*(_DWORD *)(a1 + 40);
          LODWORD(v3) = v54 + v57 - 16;
          v58 = v55 >> (16 - *(_BYTE *)v24);
        }
        v59 = v6 - 11;
        *v25 = v58;
        *v24 = (int)v3;
        if ( (int)v3 <= 9 )
        {
          v62 = v58 | (v59 << (char)v3);
          LODWORD(v3) = (_DWORD)v3 + 7;
          *v24 = (int)v3;
        }
        else
        {
          v60 = *(unsigned int *)(a1 + 40);
          v61 = *(_QWORD *)(a1 + 16);
          LOWORD(v3) = v58 | (v59 << (char)v3);
          *v25 = (_WORD)v3;
          *(_BYTE *)(v60 + v61) = (_BYTE)v3;
          ++*(_DWORD *)(a1 + 40);
          LOBYTE(v3) = *(_BYTE *)(a1 + 5981);
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = (_BYTE)v3;
          LOBYTE(v61) = 16 - *(_BYTE *)v24;
          ++*(_DWORD *)(a1 + 40);
          v62 = v59 >> v61;
          *v24 -= 9;
        }
        *v25 = v62;
      }
      else
      {
        do
        {
          v15 = *(unsigned __int16 *)(a1 + 4 * v13 + 2806);
          v16 = *(_DWORD *)(a1 + 5984);
          LOBYTE(v3) = 16 - v15;
          v17 = *(_WORD *)(a1 + 4 * v13 + 2804);
          v18 = *(_WORD *)(a1 + 5980);
          if ( v16 <= 16 - v15 )
          {
            v22 = v16 + v15;
            v23 = v18 | (v17 << v16);
          }
          else
          {
            v19 = *(unsigned int *)(a1 + 40);
            v20 = v17 << v16;
            v21 = *(_QWORD *)(a1 + 16);
            LOWORD(v3) = v18 | v20;
            *(_WORD *)(a1 + 5980) = (_WORD)v3;
            *(_BYTE *)(v19 + v21) = (_BYTE)v3;
            ++*(_DWORD *)(a1 + 40);
            LOBYTE(v3) = *(_BYTE *)(a1 + 5981);
            *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = (_BYTE)v3;
            LODWORD(v19) = *(_DWORD *)(a1 + 5984);
            ++*(_DWORD *)(a1 + 40);
            v22 = v15 + v19 - 16;
            v23 = v17 >> (16 - *(_BYTE *)(a1 + 5984));
          }
          *(_WORD *)(a1 + 5980) = v23;
          *(_DWORD *)(a1 + 5984) = v22;
          --v6;
        }
        while ( v6 );
      }
LABEL_40:
      v6 = 0;
      v5 = v14;
      if ( v4 )
      {
        if ( (_DWORD)v13 != v4 )
        {
          v10 = 7;
          v11 = 4;
          goto LABEL_46;
        }
        v10 = 6;
      }
      else
      {
        v10 = 138;
      }
      v11 = 3;
LABEL_46:
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  return (char)v3;
}
