/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14039C880
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14039E628 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140393EA8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140396D98 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x1403980C8 (SmArrayGrow.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14039AB40 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14039B0A0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14043B400 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     qsort_s @ 0x1404FC980 (qsort_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4)
{
  char *v5; // r14
  unsigned int *v6; // r9
  unsigned __int64 v7; // r8
  char *v8; // rdi
  unsigned int *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int16 v12; // ax
  int v13; // ecx
  __int64 v14; // r15
  int v15; // eax
  char **v16; // rsi
  unsigned int v17; // ebx
  char *v18; // rax
  int v19; // edx
  unsigned int v20; // ecx
  _QWORD *v21; // r12
  char *v22; // rdi
  char *v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // r10d
  int v26; // ecx
  int v27; // r14d
  unsigned int v28; // r13d
  unsigned int v29; // r15d
  int v30; // edi
  unsigned int v31; // r11d
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  void **v37; // rcx
  bool v38; // zf
  int v39; // edx
  __int64 *v40; // r15
  _OWORD *v41; // rcx
  _DWORD **v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // ebx
  __int64 v45; // rax
  unsigned int v46; // r15d
  unsigned __int64 v47; // r9
  __int64 v48; // rax
  unsigned int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rcx
  _DWORD *v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // r14d
  __int64 *v55; // rdi
  _DWORD **v56; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  char *v61; // rdx
  unsigned __int64 v62; // rcx
  unsigned __int64 j; // rdx
  unsigned int *v64; // rbx
  unsigned int *i; // r9
  unsigned int v66; // edx
  int *v67; // r8
  int v68; // r12d
  unsigned int v69; // edi
  unsigned int v70; // r13d
  unsigned int v71; // r11d
  __int64 v72; // rcx
  __int64 v73; // r9
  __int64 v74; // rdx
  unsigned int v75; // ecx
  __int64 v76; // rdx
  _DWORD **v77; // rax
  _DWORD **v78; // rax
  __int64 LeafSibling; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  void **v83; // r9
  unsigned __int64 v84; // rcx
  void **v85; // rax
  __int64 v86; // rax
  unsigned int v87; // r15d
  __int64 v88; // rdx
  unsigned int v89; // edi
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  void *v93; // rsp
  unsigned int v94; // edx
  void *v95; // rsp
  __int64 v96; // rcx
  unsigned __int64 v97; // rdi
  __int64 v98; // rbx
  bool v99; // cc
  unsigned __int64 v100; // rax
  __int64 v101; // rcx
  unsigned __int64 v102; // rcx
  void *v103; // rsp
  unsigned int v104; // edx
  void *v105; // rsp
  __int64 v106; // rax
  unsigned int *v107; // r8
  unsigned __int64 v108; // rcx
  void **v109; // rax
  void **v110; // rbx
  int v111; // [rsp+30h] [rbp+0h] BYREF
  int v112; // [rsp+34h] [rbp+4h]
  unsigned int *v113; // [rsp+38h] [rbp+8h]
  __int64 v114; // [rsp+40h] [rbp+10h]
  __int128 v115; // [rsp+48h] [rbp+18h]
  char **v116; // [rsp+58h] [rbp+28h]
  _QWORD *v117; // [rsp+60h] [rbp+30h]
  struct B_TREE_NODE_HDR *v118; // [rsp+68h] [rbp+38h]
  _DWORD *v119; // [rsp+70h] [rbp+40h]
  __int64 v120; // [rsp+78h] [rbp+48h]
  int *v121; // [rsp+80h] [rbp+50h] BYREF
  __int128 v122; // [rsp+88h] [rbp+58h]
  int v123; // [rsp+98h] [rbp+68h]
  unsigned int v124; // [rsp+9Ch] [rbp+6Ch]
  __int64 v125; // [rsp+A0h] [rbp+70h]
  char *v126; // [rsp+A8h] [rbp+78h]
  char *v127; // [rsp+B0h] [rbp+80h]
  __int64 v128; // [rsp+B8h] [rbp+88h]
  unsigned int *v129; // [rsp+C0h] [rbp+90h]
  __int128 Context; // [rsp+C8h] [rbp+98h] BYREF
  __int64 v131; // [rsp+D8h] [rbp+A8h]
  unsigned __int64 v132; // [rsp+E0h] [rbp+B0h]

  v5 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v129 = a3;
  v6 = a3;
  v113 = a2;
  v7 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v119 = a4;
  v8 = v5 + 8;
  v128 = a1;
  v132 = v7;
  v127 = v5;
  v9 = a2;
  v10 = a1;
  v11 = 0LL;
  Context = 0LL;
  if ( (unsigned __int64)(v5 + 8) > v7 )
  {
    v54 = -2147483643;
    goto LABEL_52;
  }
  *(_QWORD *)v5 = 0LL;
  if ( v5 )
    *(_DWORD *)v5 = *a4 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v5 *= 16;
  v12 = 4096;
  v13 = a4[1] & 0xFFF;
  if ( v13 )
    v12 = v13;
  *((_WORD *)v5 + 2) = v12;
  if ( v6[1] != a4[2] || v6[2] != (a4[1] & 0xFFF) || (v60 = *v6, !(_DWORD)v60) )
  {
    v14 = v10 + 152;
    v15 = *(_DWORD *)(v10 + 184);
    v16 = (char **)(v10 + 128);
    *(_QWORD *)&v115 = v10 + 152;
    v116 = (char **)(v10 + 128);
    if ( (v15 & 1) == 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (struct B_TREE_NODE_HDR **)(v10 + 128),
        v10 + 152);
    *(_DWORD *)(v10 + 184) |= 1u;
    *(_DWORD *)(*(_QWORD *)(v10 + 760) + 8LL) = a4[2];
    v17 = *(_DWORD *)(v10 + 768);
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(v10 + 128),
      v10 + 152);
    if ( *(_DWORD *)(v10 + 176) == -1 )
    {
      v21 = (_QWORD *)(v10 + 160);
      v19 = 0;
      v112 = 0;
    }
    else
    {
      v18 = *v16;
      v19 = 1;
      v112 = 1;
      if ( v18 )
        v20 = (unsigned __int8)v18[2];
      else
        v20 = 0;
      if ( *(_DWORD *)(v10 + 180) < v20 )
      {
        if ( !(unsigned int)SmArrayGrow(v20, 1LL, (unsigned int *)(v10 + 180), (const void **)(v10 + 152)) )
          goto LABEL_37;
        v19 = v112;
      }
      v21 = *(_QWORD **)v14;
    }
    v22 = *v16;
    v117 = v21;
    v118 = (struct B_TREE_NODE_HDR *)v22;
    if ( !v22 )
    {
      v8 = v5 + 8;
      if ( !v19 )
      {
        *v21 = 0LL;
        v21[1] = 0LL;
      }
      goto LABEL_36;
    }
    while ( 1 )
    {
      v23 = v22 + 16;
      v24 = (unsigned __int16)*(_DWORD *)v22;
      v25 = -1;
      v26 = HIBYTE(*(_DWORD *)v22);
      v126 = v22 + 16;
      if ( (_BYTE)v26 )
        break;
      if ( v24 )
      {
        v68 = *((_DWORD *)v16 + 82);
        v69 = *((_DWORD *)v16 + 83);
        v70 = v17 >> v68;
        v120 = *((unsigned int *)v16 + 86);
        v111 = *((_DWORD *)v16 + 84);
        v131 = (v17 & v69) * v111;
        do
        {
          LODWORD(v114) = 0;
          v71 = *(_DWORD *)&v23[16 * ((v24 + v25) >> 1)];
          _BitScanReverse((unsigned int *)&v72, v71 >> v68);
          v73 = v120 + *(_QWORD *)&v116[v72 + 8][16 * ((v71 >> v68) ^ (1 << v72))] + v111 * (v69 & v71);
          _BitScanReverse((unsigned int *)&v72, v70);
          v74 = *(_QWORD *)&v116[v72 + 8][16 * (v70 ^ (1 << v72))];
          v75 = *(_DWORD *)(v73 + 8);
          v76 = v120 + v74;
          if ( v75 >= *(_DWORD *)(v131 + v76 + 8) && (v75 > *(_DWORD *)(v131 + v76 + 8) || v71 > v17) )
            v24 = (v24 + v25) >> 1;
          else
            v25 = (v24 + v25) >> 1;
          v23 = v126;
        }
        while ( v25 + 1 != v24 );
        v10 = v128;
        v14 = v115;
        v16 = v116;
LABEL_25:
        v21 = v117;
        v5 = v127;
        v22 = (char *)v118;
      }
LABEL_26:
      if ( v22[3] )
      {
        *v21 = v22;
        v38 = v112 == 0;
        v21[1] = &v22[4 * v24 + 16];
        if ( !v38 )
          *(_DWORD *)(v14 + 24) = (((__int64)v21 - *(_QWORD *)v14) >> 4) + 1;
LABEL_35:
        v8 = v5 + 8;
LABEL_36:
        v9 = v113;
LABEL_37:
        v39 = *(_DWORD *)(v10 + 176);
        v40 = (__int64 *)(v10 + 128);
        if ( v39 == -1 || !v39 )
          v41 = (_OWORD *)(v10 + 160);
        else
          v41 = (_OWORD *)(*(_QWORD *)(v10 + 152) + 16LL * (unsigned int)(v39 - 1));
        v42 = (_DWORD **)(v10 + 144);
        v115 = *v41;
        if ( v10 == -128 )
          v42 = 0LL;
        v11 = v115;
        if ( **v42 != -1 )
        {
          if ( (_QWORD)v115 )
          {
            v80 = *v40;
            if ( (_QWORD)v115 != *v40 )
            {
              if ( v39 == -1 )
              {
                v88 = *(_QWORD *)v41;
                v89 = 0;
                if ( v80 )
                  v89 = *(unsigned __int8 *)(v80 + 2);
                v90 = 16LL * v89;
                v91 = v90 + 15;
                if ( v90 + 15 < v90 )
                  v91 = 0xFFFFFFFFFFFFFF0LL;
                v92 = v91 & 0xFFFFFFFFFFFFFFF0uLL;
                v93 = alloca(v92);
                v94 = *(_DWORD *)(v88 + 16);
                v95 = alloca(v92);
                v125 = 1LL;
                v124 = v89;
                v122 = 0LL;
                v123 = 0;
                v121 = &v111;
                B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
                  (struct B_TREE_NODE_HDR **)(v10 + 128),
                  v94,
                  (__int64)&v121);
                v96 = 2LL * (v89 - 2);
                v97 = (unsigned __int64)(&v113)[2 * v89 - 1];
                v98 = *((_QWORD *)&v111 + v96);
                B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
                  (struct B_TREE_NODE_HDR **)(v10 + 128),
                  (__int64)&v121);
                v83 = (void **)(v97 - 8);
                v99 = v97 <= v98 + 16;
                v8 = v5 + 8;
                if ( v99 )
                  v83 = (void **)(v98 + 8);
              }
              else
              {
                v81 = *((_QWORD *)v41 - 1);
                v82 = *((_QWORD *)v41 - 2);
                v83 = (void **)(v81 - 8);
                v84 = v82 + 16;
                v85 = (void **)(v82 + 8);
                if ( v81 <= v84 )
                  v83 = v85;
              }
              if ( **(_DWORD **)(v10 + 144) != -1 )
                NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)(v10 + 144), v83, 3);
            }
          }
        }
        v43 = *v9;
        v44 = 0;
        v45 = *(_QWORD *)(v10 + 1416);
        *((_QWORD *)&v115 + 1) -= 4LL;
        v46 = *(unsigned __int16 *)(v45 + 2 * v43) >> 13;
        while ( 2 )
        {
          if ( v44 >= 0x10 || !v11 )
          {
LABEL_50:
            v53 = (unsigned __int8)v5[6];
            if ( !(_BYTE)v53 )
              goto LABEL_51;
            v9 = v113;
            v64 = (unsigned int *)&v8[-8 * v53];
            if ( (unsigned __int8)v53 > 1u )
            {
              *(_QWORD *)&Context = *v113;
              *((_QWORD *)&Context + 1) = v10;
              qsort_s(
                &v8[-8 * v53],
                (unsigned __int8)v5[6],
                8uLL,
                ST_STORE<SM_TRAITS>::StDmCombineTargetCompare,
                &Context);
            }
            for ( i = &v64[2 * (unsigned __int8)v5[6]]; v64 < i; *v67 *= 16 )
            {
              v66 = *v64;
              v67 = (int *)(v64 + 1);
              *(_QWORD *)v64 = 0LL;
              if ( v64 != (unsigned int *)-4LL )
                *v67 = v66 & *(_DWORD *)(v10 + 808);
              if ( v64 )
                *v64 = v66 >> *(_DWORD *)(v10 + 812);
              v64 += 2;
            }
            v6 = v129;
            a4 = v119;
LABEL_73:
            *v6 = *((unsigned __int16 *)v9 + 3);
            v6[1] = a4[2];
            v6[2] = a4[1] & 0xFFF;
            *((_WORD *)v9 + 3) = (_WORD)v5 + 8 * ((unsigned __int8)v5[6] + 1) - (_WORD)v9;
LABEL_51:
            v54 = 0;
            goto LABEL_52;
          }
          v47 = *((_QWORD *)&v115 + 1) + 4LL;
          v48 = (unsigned __int16)*(_DWORD *)v11 + 4LL;
          *((_QWORD *)&v115 + 1) = v47;
          if ( v47 < v11 + 4 * v48 )
          {
LABEL_47:
            if ( !v47 )
              goto LABEL_50;
            v49 = *(_DWORD *)v47;
            v50 = v49 >> *(_DWORD *)(v10 + 456);
            _BitScanReverse((unsigned int *)&v51, v50);
            v52 = (_DWORD *)(*(unsigned int *)(v10 + 472)
                           + *(_DWORD *)(v10 + 464) * (v49 & *(_DWORD *)(v10 + 460))
                           + *(_QWORD *)(*(_QWORD *)(v10 + 8 * v51 + 192) + 16 * (v50 ^ (unsigned int)(1 << v51))));
            if ( v52 != v119 )
            {
              if ( v52[2] != v119[2] )
                goto LABEL_50;
              if ( ((v119[1] ^ v52[1]) & 0xFFF) == 0 )
              {
                v58 = (unsigned int)(*v52 >> *(_DWORD *)(v10 + 812));
                if ( *(unsigned __int16 *)(*(_QWORD *)(v10 + 1416) + 2 * v58) >> 13 >= v46 )
                {
                  v59 = *(_QWORD *)(*(_QWORD *)(v10 + 800) + 7416LL);
                  if ( v59 && (v59 == -1 || _bittest64(*(const signed __int64 **)(v59 + 16), v58))
                    || (v52[1] & 0xFFFFF000) >= 0xFFEFF000 )
                  {
                    v11 = v115;
                  }
                  else
                  {
                    v11 = v115;
                    if ( (unsigned __int64)(v8 + 8) > v132 )
                      goto LABEL_87;
                    *(_QWORD *)v8 = 0LL;
                    *(_DWORD *)v8 = *v52;
                    *((_DWORD *)v8 + 1) = v52[1] >> 12;
                    v8 += 8;
                    ++v5[6];
                  }
                }
              }
            }
            ++v44;
            continue;
          }
          break;
        }
        v77 = (_DWORD **)(v10 + 144);
        if ( v10 == -128 )
          v77 = 0LL;
        if ( **v77 == -1 )
        {
          v78 = (_DWORD **)(v10 + 144);
          if ( v10 == -128 )
            v78 = 0LL;
          if ( **v78 == -1 )
          {
            LeafSibling = *(_QWORD *)(v11 + 8);
            goto LABEL_109;
          }
          LeafSibling = 3358LL;
        }
        else
        {
          LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                          v10 + 128,
                          v11);
          if ( LeafSibling == -1 )
          {
            v47 = -1LL;
            goto LABEL_47;
          }
LABEL_109:
          if ( !LeafSibling )
          {
            v47 = 0LL;
            goto LABEL_47;
          }
        }
        v47 = LeafSibling + 16;
        *(_QWORD *)&v115 = LeafSibling;
        *((_QWORD *)&v115 + 1) = LeafSibling + 16;
        v11 = LeafSibling;
        goto LABEL_47;
      }
      if ( v112 )
      {
        *v21 = v22;
        v21[1] = &v22[16 * v24 + 16];
        v21 += 2;
        v117 = v21;
      }
      if ( v24 )
        v37 = (void **)&v22[16 * v24 + 8];
      else
        v37 = (void **)(v22 + 8);
      if ( *(_DWORD *)v16[2] == -1 || v22[2] != 2 )
      {
        v22 = (char *)*v37;
        v118 = (struct B_TREE_NODE_HDR *)*v37;
      }
      else
      {
        v118 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)v16 + 2, v37, 2 * (*(_BYTE *)(v14 + 32) & 1u));
        v22 = (char *)v118;
        if ( !v118 )
          goto LABEL_35;
      }
    }
    if ( !v24 )
      goto LABEL_26;
    v27 = *((_DWORD *)v16 + 82);
    v28 = *((_DWORD *)v16 + 83);
    v29 = v17 >> v27;
    v114 = *((unsigned int *)v16 + 86);
    v30 = *((_DWORD *)v16 + 84);
    v120 = (v17 & v28) * v30;
    do
    {
      v111 = 0;
      v31 = *(_DWORD *)&v23[4 * ((v24 + v25) >> 1)];
      _BitScanReverse((unsigned int *)&v32, v31 >> v27);
      v33 = v114 + *(_QWORD *)&v116[v32 + 8][16 * ((v31 >> v27) ^ (1 << v32))] + v30 * (v31 & v28);
      _BitScanReverse((unsigned int *)&v32, v29);
      v34 = *(_QWORD *)&v116[v32 + 8][16 * (v29 ^ (1 << v32))];
      v35 = *(_DWORD *)(v33 + 8);
      v36 = v114 + v34;
      if ( v35 < *(_DWORD *)(v120 + v36 + 8) || v35 <= *(_DWORD *)(v120 + v36 + 8) && v31 < v17 )
        v25 = (v24 + v25) >> 1;
      else
        v24 = (v24 + v25) >> 1;
      v23 = v126;
    }
    while ( v25 + 1 != v24 );
    v10 = v128;
    v14 = v128 + 152;
    v16 = (char **)(v128 + 128);
    goto LABEL_25;
  }
  v61 = (char *)a2 + v60;
  if ( (unsigned __int64)&v5[(unsigned int)((_DWORD)v5 - ((_DWORD)v9 + v60))] <= v7 )
  {
    v62 = (unsigned __int64)(v61 + 8);
    for ( j = (unsigned __int64)&v61[8 * (unsigned __int8)v61[6] + 8]; v62 < j; v62 += 8LL )
    {
      if ( *(_DWORD *)(v62 + 4) != *(_DWORD *)v5 || *(_DWORD *)v62 != *v9 )
      {
        *(_QWORD *)v8 = *(_QWORD *)v62;
        v8 += 8;
        ++v5[6];
      }
    }
    if ( v5[6] )
      goto LABEL_73;
    goto LABEL_51;
  }
LABEL_87:
  v54 = -2147483643;
LABEL_52:
  v55 = (__int64 *)(v10 + 128);
  v56 = (_DWORD **)(v10 + 144);
  if ( v10 == -128 )
    v56 = 0LL;
  if ( **v56 != -1 )
  {
    if ( v11 )
    {
      v86 = *v55;
      if ( v11 != *v55 )
      {
        v87 = 0;
        if ( v86 )
          v87 = *(unsigned __int8 *)(v86 + 2);
        v100 = 16LL * v87;
        v101 = v100 + 15;
        if ( v100 + 15 < v100 )
          v101 = 0xFFFFFFFFFFFFFF0LL;
        v102 = v101 & 0xFFFFFFFFFFFFFFF0uLL;
        v103 = alloca(v102);
        v104 = *(_DWORD *)(v11 + 16);
        v105 = alloca(v102);
        v125 = 1LL;
        v124 = v87;
        v122 = 0LL;
        v123 = 0;
        v121 = &v111;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          (struct B_TREE_NODE_HDR **)(v10 + 128),
          v104,
          (__int64)&v121);
        v106 = *((_QWORD *)&v111 + 2 * v87 - 4);
        v107 = (&v113)[2 * v87 - 1];
        v108 = v106 + 16;
        v109 = (void **)(v106 + 8);
        v110 = (void **)(v107 - 2);
        if ( (unsigned __int64)v107 <= v108 )
          v110 = v109;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (struct B_TREE_NODE_HDR **)(v10 + 128),
          (__int64)&v121);
        if ( **(_DWORD **)(v10 + 144) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v10 + 144), v110);
      }
    }
  }
  return v54;
}
