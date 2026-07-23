/*
 * XREFs of send_tree @ 0x140601198
 * Callers:
 *     send_all_trees @ 0x140600F00 (send_all_trees.c)
 * Callees:
 *     <none>
 */

char __fastcall send_tree(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // r10d
  unsigned __int16 *v8; // r15
  __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  __int16 v12; // si
  __int64 v13; // rbp
  int v14; // r12d
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
  __int16 *v25; // r8
  int v26; // ebx
  int v27; // ecx
  unsigned __int16 v28; // r10
  __int16 v29; // dx
  __int16 v30; // ax
  __int64 v31; // rcx
  __int16 v32; // ax
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  __int16 v36; // r10
  int v37; // esi
  int v38; // ecx
  unsigned __int16 v39; // bx
  __int16 v40; // r14
  __int64 v41; // rdx
  __int16 v42; // ax
  __int64 v43; // rcx
  __int16 v44; // ax
  int v45; // edx
  __int16 v46; // bx
  unsigned __int16 v47; // r10
  char v48; // cl
  __int64 v49; // rdx
  __int16 v50; // ax
  __int64 v51; // rcx
  __int16 v52; // ax
  int v53; // ecx
  int v54; // esi
  unsigned __int16 v55; // bx
  __int16 v56; // r14
  __int64 v57; // rdx
  __int16 v58; // ax
  __int64 v59; // rcx
  __int16 v60; // ax
  int v61; // edx
  __int64 v62; // rdx
  __int16 v63; // ax
  __int64 v64; // rcx
  __int16 v65; // ax
  __int16 v66; // r10
  int v67; // esi
  unsigned __int16 v68; // bx
  __int16 v69; // dx
  __int16 v70; // ax
  __int64 v71; // rcx
  __int16 v72; // ax
  __int64 v73; // rdx
  int v74; // eax
  __int16 v75; // bx
  unsigned __int16 v76; // r10
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int16 v79; // r10
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
        v25 = (__int16 *)(a1 + 5980);
        if ( (_DWORD)v13 )
        {
          if ( v14 != v5 )
          {
            v26 = *(unsigned __int16 *)(a1 + 4 * v13 + 2806);
            v27 = *v24;
            v28 = *(_WORD *)(a1 + 4 * v13 + 2804);
            v29 = *v25;
            if ( *v24 <= 16 - v26 )
            {
              v35 = v27 + v26;
              v36 = v29 | (v28 << v27);
            }
            else
            {
              v30 = v28 << v27;
              v31 = *(_QWORD *)(a1 + 16);
              v32 = v29 | v30;
              v33 = *(unsigned int *)(a1 + 40);
              *v25 = v32;
              *(_BYTE *)(v33 + v31) = v32;
              *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
              v34 = *v24;
              ++*(_DWORD *)(a1 + 40);
              v35 = v26 + v34 - 16;
              v36 = v28 >> (16 - *(_BYTE *)v24);
            }
            *v25 = v36;
            LOWORD(v6) = v12;
            *v24 = v35;
          }
          v37 = *(unsigned __int16 *)(a1 + 2870);
          v38 = *v24;
          v39 = *(_WORD *)(a1 + 2868);
          v40 = *v25;
          if ( *v24 <= 16 - v37 )
          {
            v45 = v38 + v37;
            v46 = v40 | (v39 << v38);
          }
          else
          {
            v41 = *(unsigned int *)(a1 + 40);
            v42 = v39 << v38;
            v43 = *(_QWORD *)(a1 + 16);
            v44 = v40 | v42;
            *v25 = v44;
            *(_BYTE *)(v41 + v43) = v44;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            LODWORD(v41) = *v24;
            ++*(_DWORD *)(a1 + 40);
            v45 = v37 + v41 - 16;
            v46 = v39 >> (16 - *(_BYTE *)v24);
          }
          v47 = v6 - 3;
          v48 = v45;
          *v24 = v45;
          if ( v45 > 14 )
          {
            v49 = *(unsigned int *)(a1 + 40);
            v50 = v47 << v48;
            v51 = *(_QWORD *)(a1 + 16);
            v52 = v46 | v50;
            *v25 = v52;
            *(_BYTE *)(v49 + v51) = v52;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            ++*(_DWORD *)(a1 + 40);
            LOWORD(v3) = *(_WORD *)v24;
            *v24 -= 14;
            goto LABEL_29;
          }
          LODWORD(v3) = v45 + 2;
          goto LABEL_31;
        }
        v53 = *v24;
        if ( v6 <= 10 )
        {
          v54 = *(unsigned __int16 *)(a1 + 2874);
          v55 = *(_WORD *)(a1 + 2872);
          v56 = *v25;
          if ( v53 <= 16 - v54 )
          {
            v61 = v53 + v54;
            v46 = v56 | (v55 << v53);
          }
          else
          {
            v57 = *(unsigned int *)(a1 + 40);
            v58 = v55 << v53;
            v59 = *(_QWORD *)(a1 + 16);
            v60 = v56 | v58;
            *v25 = v60;
            *(_BYTE *)(v57 + v59) = v60;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            LODWORD(v57) = *v24;
            ++*(_DWORD *)(a1 + 40);
            v61 = v54 + v57 - 16;
            v46 = v55 >> (16 - *(_BYTE *)v24);
          }
          v47 = v6 - 3;
          *v25 = v46;
          v48 = v61;
          *v24 = v61;
          if ( v61 > 13 )
          {
            v62 = *(unsigned int *)(a1 + 40);
            v63 = v47 << v48;
            v64 = *(_QWORD *)(a1 + 16);
            v65 = v46 | v63;
            *v25 = v65;
            *(_BYTE *)(v62 + v64) = v65;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
            ++*(_DWORD *)(a1 + 40);
            LOWORD(v3) = *(_WORD *)v24;
            *v24 -= 13;
LABEL_29:
            v66 = v47 >> (16 - (_BYTE)v3);
LABEL_32:
            *v25 = v66;
            goto LABEL_40;
          }
          LODWORD(v3) = v61 + 3;
LABEL_31:
          v66 = v46 | (v47 << v48);
          *v24 = (int)v3;
          goto LABEL_32;
        }
        v67 = *(unsigned __int16 *)(a1 + 2878);
        v68 = *(_WORD *)(a1 + 2876);
        v69 = *v25;
        if ( v53 <= 16 - v67 )
        {
          LODWORD(v3) = v53 + v67;
          v75 = v69 | (v68 << v53);
        }
        else
        {
          v70 = v68 << v53;
          v71 = *(_QWORD *)(a1 + 16);
          v72 = v69 | v70;
          v73 = *(unsigned int *)(a1 + 40);
          *v25 = v72;
          *(_BYTE *)(v73 + v71) = v72;
          *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
          v74 = *v24;
          ++*(_DWORD *)(a1 + 40);
          LODWORD(v3) = v67 + v74 - 16;
          v75 = v68 >> (16 - *(_BYTE *)v24);
        }
        v76 = v6 - 11;
        *v25 = v75;
        *v24 = (int)v3;
        if ( (int)v3 <= 9 )
        {
          v79 = v75 | (v76 << (char)v3);
          LODWORD(v3) = (_DWORD)v3 + 7;
          *v24 = (int)v3;
        }
        else
        {
          v77 = *(unsigned int *)(a1 + 40);
          v78 = *(_QWORD *)(a1 + 16);
          LOWORD(v3) = v75 | (v76 << (char)v3);
          *v25 = (__int16)v3;
          *(_BYTE *)(v77 + v78) = (_BYTE)v3;
          ++*(_DWORD *)(a1 + 40);
          LOBYTE(v3) = *(_BYTE *)(a1 + 5981);
          *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = (_BYTE)v3;
          LOBYTE(v78) = 16 - *(_BYTE *)v24;
          ++*(_DWORD *)(a1 + 40);
          v79 = v76 >> v78;
          *v24 -= 9;
        }
        *v25 = v79;
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
