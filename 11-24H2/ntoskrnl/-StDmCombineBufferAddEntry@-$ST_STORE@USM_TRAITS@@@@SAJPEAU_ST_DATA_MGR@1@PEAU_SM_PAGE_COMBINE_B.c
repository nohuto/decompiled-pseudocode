/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037ECC0
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140380A88 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037CF90 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037D4F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14042CAAC (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     qsort_s @ 0x1404FC9C0 (qsort_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4)
{
  __int64 v5; // r14
  unsigned int *v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int16 v12; // ax
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  unsigned int v16; // ebx
  char **v17; // r9
  char *v18; // rax
  int v19; // edx
  unsigned int v20; // ecx
  _QWORD *v21; // r12
  unsigned __int64 v22; // r8
  char *v23; // rdi
  unsigned int v24; // r11d
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // eax
  char *v31; // r11
  void **v32; // rcx
  unsigned int v33; // r10d
  int v34; // ecx
  int v35; // r14d
  unsigned int v36; // r13d
  unsigned int v37; // r15d
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
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 j; // rdx
  unsigned int *v63; // rbx
  unsigned int *i; // r9
  unsigned int v65; // edx
  int *v66; // r8
  int v67; // r8d
  int v68; // edi
  unsigned int v69; // r15d
  unsigned int v70; // r11d
  __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rdx
  unsigned int v74; // ecx
  __int64 v75; // rdx
  _DWORD **v76; // rax
  _DWORD **v77; // rax
  __int64 LeafSibling; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  void **v82; // r9
  unsigned __int64 v83; // rcx
  void **v84; // rax
  __int64 v85; // rax
  unsigned int v86; // r15d
  __int64 v87; // rdx
  unsigned int v88; // edi
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  void *v92; // rsp
  unsigned int v93; // edx
  void *v94; // rsp
  __int64 v95; // rcx
  unsigned __int64 v96; // rdi
  __int64 v97; // rbx
  bool v98; // cc
  unsigned __int64 v99; // rax
  __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  void *v102; // rsp
  unsigned int v103; // edx
  void *v104; // rsp
  __int64 v105; // rax
  unsigned __int64 v106; // r8
  unsigned __int64 v107; // rcx
  void **v108; // rax
  void **v109; // rbx
  int v110; // [rsp+30h] [rbp+0h] BYREF
  int v111; // [rsp+34h] [rbp+4h]
  _DWORD v112[2]; // [rsp+38h] [rbp+8h]
  unsigned int *v113; // [rsp+40h] [rbp+10h]
  __int64 v114; // [rsp+48h] [rbp+18h]
  __int128 v115; // [rsp+50h] [rbp+20h]
  _QWORD *v116; // [rsp+60h] [rbp+30h]
  struct B_TREE_NODE_HDR *v117; // [rsp+68h] [rbp+38h]
  __int64 v118; // [rsp+70h] [rbp+40h]
  _DWORD *v119; // [rsp+78h] [rbp+48h]
  __int64 v120; // [rsp+80h] [rbp+50h]
  int *v121; // [rsp+88h] [rbp+58h] BYREF
  __int128 v122; // [rsp+90h] [rbp+60h]
  int v123; // [rsp+A0h] [rbp+70h]
  unsigned int v124; // [rsp+A4h] [rbp+74h]
  __int64 v125; // [rsp+A8h] [rbp+78h]
  char *v126; // [rsp+B0h] [rbp+80h]
  __int64 v127; // [rsp+B8h] [rbp+88h]
  unsigned int *v128; // [rsp+C0h] [rbp+90h]
  __int128 Context; // [rsp+C8h] [rbp+98h] BYREF
  __int64 v130; // [rsp+D8h] [rbp+A8h]
  unsigned __int64 v131; // [rsp+E0h] [rbp+B0h]

  v5 = (__int64)a2 + *((unsigned __int16 *)a2 + 3);
  v128 = a3;
  v6 = a3;
  v119 = a4;
  v7 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v113 = a2;
  v8 = v5 + 8;
  v130 = a1;
  v131 = v7;
  v127 = v5;
  v9 = a2;
  v10 = a1;
  v11 = 0LL;
  Context = 0LL;
  if ( v5 + 8 > v7 )
  {
LABEL_80:
    v54 = -2147483643;
    goto LABEL_55;
  }
  *(_QWORD *)v5 = 0LL;
  if ( v5 )
    *(_DWORD *)v5 = *a4 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v5 *= 16;
  v12 = 4096;
  v13 = a4[1] & 0xFFF;
  if ( v13 )
    v12 = v13;
  *(_WORD *)(v5 + 4) = v12;
  if ( v6[1] != a4[2] || v6[2] != (a4[1] & 0xFFF) || (v59 = *v6, !(_DWORD)v59) )
  {
    v14 = v10 + 152;
    v15 = *(_DWORD *)(v10 + 184);
    v118 = v10 + 128;
    if ( (v15 & 1) == 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (struct B_TREE_NODE_HDR **)(v10 + 128),
        v10 + 152);
    *(_DWORD *)(v10 + 184) |= 1u;
    *(_DWORD *)(*(_QWORD *)(v10 + 760) + 8LL) = a4[2];
    v16 = *(_DWORD *)(v10 + 768);
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(v10 + 128),
      v10 + 152);
    v17 = (char **)(v10 + 128);
    if ( *(_DWORD *)(v10 + 176) == -1 )
    {
      v22 = 0LL;
      v21 = (_QWORD *)(v10 + 160);
      v19 = 0;
      v110 = 0;
    }
    else
    {
      v18 = *v17;
      v19 = 1;
      v110 = 1;
      if ( v18 )
        v20 = (unsigned __int8)v18[2];
      else
        v20 = 0;
      if ( *(_DWORD *)(v10 + 180) < v20 )
      {
        if ( !(unsigned int)SmArrayGrow(v20, 1LL, (unsigned int *)(v10 + 180), (const void **)(v10 + 152)) )
          goto LABEL_40;
        v19 = v110;
        v17 = (char **)(v10 + 128);
      }
      v21 = *(_QWORD **)v14;
      v22 = 0LL;
    }
    v23 = *v17;
    v116 = v21;
    v117 = (struct B_TREE_NODE_HDR *)v23;
    if ( !v23 )
    {
      v8 = v5 + 8;
      if ( !v19 )
      {
        *v21 = 0LL;
        v21[1] = 0LL;
      }
      goto LABEL_39;
    }
    while ( 1 )
    {
      v31 = v23 + 16;
      v30 = (unsigned __int16)*(_DWORD *)v23;
      v33 = -1;
      v34 = HIBYTE(*(_DWORD *)v23);
      v126 = v23 + 16;
      if ( (_BYTE)v34 )
      {
        if ( v30 )
        {
          v35 = *((_DWORD *)v17 + 82);
          v36 = *((_DWORD *)v17 + 83);
          v37 = v16 >> v35;
          v114 = *((unsigned int *)v17 + 86);
          v111 = *((_DWORD *)v17 + 84);
          v120 = (v16 & v36) * v111;
          do
          {
            v112[0] = 0;
            v24 = *(_DWORD *)&v31[4 * ((v30 + v33) >> 1)];
            _BitScanReverse((unsigned int *)&v25, v24 >> v35);
            v26 = v114
                + *(_QWORD *)(*(_QWORD *)(v118 + 8 * v25 + 64) + 16LL * ((v24 >> v35) ^ (1 << v25)))
                + v111 * (v24 & v36);
            _BitScanReverse((unsigned int *)&v25, v37);
            v27 = *(_QWORD *)(*(_QWORD *)(v118 + 8 * v25 + 64) + 16LL * (v37 ^ (1 << v25)));
            v28 = *(_DWORD *)(v26 + 8);
            v29 = v114 + v27;
            if ( v28 < *(_DWORD *)(v120 + v29 + 8) || v28 <= *(_DWORD *)(v120 + v29 + 8) && v24 < v16 )
              v33 = (v30 + v33) >> 1;
            else
              v30 = (v30 + v33) >> 1;
            v31 = v126;
          }
          while ( v33 + 1 != v30 );
          v10 = v130;
LABEL_23:
          v21 = v116;
          v17 = (char **)(v10 + 128);
          v5 = v127;
          v14 = v10 + 152;
          v23 = (char *)v117;
        }
      }
      else if ( v30 )
      {
        v68 = *((_DWORD *)v17 + 82);
        v112[0] = *((_DWORD *)v17 + 83);
        v67 = v112[0];
        v69 = v16 >> v68;
        v120 = *((unsigned int *)v17 + 86);
        v111 = *((_DWORD *)v17 + 84);
        *(_QWORD *)&v115 = (v16 & v112[0]) * v111;
        do
        {
          LODWORD(v114) = 0;
          v70 = *(_DWORD *)&v31[16 * ((v30 + v33) >> 1)];
          _BitScanReverse((unsigned int *)&v71, v70 >> v68);
          v72 = v120
              + *(_QWORD *)(*(_QWORD *)(v10 + 8 * v71 + 192) + 16LL * ((v70 >> v68) ^ (1 << v71)))
              + v111 * (v67 & v70);
          _BitScanReverse((unsigned int *)&v71, v69);
          v73 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v71 + 192) + 16LL * (v69 ^ (1 << v71)));
          v74 = *(_DWORD *)(v72 + 8);
          v75 = v120 + v73;
          if ( v74 >= *(_DWORD *)(v115 + v75 + 8) && (v74 > *(_DWORD *)(v115 + v75 + 8) || v70 > v16) )
            v30 = (v30 + v33) >> 1;
          else
            v33 = (v30 + v33) >> 1;
          v67 = v112[0];
          v31 = v126;
        }
        while ( v33 + 1 != v30 );
        goto LABEL_23;
      }
      if ( v23[3] )
      {
        *v21 = v23;
        v38 = v110 == 0;
        v22 = (unsigned __int64)&v23[4 * v30 + 16];
        v21[1] = v22;
        if ( !v38 )
          *(_DWORD *)(v14 + 24) = (((__int64)v21 - *(_QWORD *)v14) >> 4) + 1;
LABEL_38:
        v8 = v5 + 8;
LABEL_39:
        v9 = v113;
LABEL_40:
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
            v79 = *v40;
            if ( (_QWORD)v115 != *v40 )
            {
              if ( v39 == -1 )
              {
                v87 = *(_QWORD *)v41;
                v88 = 0;
                if ( v79 )
                  v88 = *(unsigned __int8 *)(v79 + 2);
                v89 = 16LL * v88;
                v90 = v89 + 15;
                if ( v89 + 15 < v89 )
                  v90 = 0xFFFFFFFFFFFFFF0LL;
                v91 = v90 & 0xFFFFFFFFFFFFFFF0uLL;
                v92 = alloca(v91);
                v93 = *(_DWORD *)(v87 + 16);
                v94 = alloca(v91);
                v125 = 1LL;
                v124 = v88;
                v122 = 0LL;
                v123 = 0;
                v121 = &v110;
                B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
                  (struct B_TREE_NODE_HDR **)(v10 + 128),
                  v93,
                  (__int64)&v121);
                v95 = 2LL * (v88 - 2);
                v96 = *(_QWORD *)&v112[4 * v88 - 8];
                v97 = *((_QWORD *)&v110 + v95);
                B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
                  (struct B_TREE_NODE_HDR **)(v10 + 128),
                  (__int64)&v121);
                v82 = (void **)(v96 - 8);
                v98 = v96 <= v97 + 16;
                v8 = v5 + 8;
                if ( v98 )
                  v82 = (void **)(v97 + 8);
              }
              else
              {
                v80 = *((_QWORD *)v41 - 1);
                v81 = *((_QWORD *)v41 - 2);
                v82 = (void **)(v80 - 8);
                v83 = v81 + 16;
                v84 = (void **)(v81 + 8);
                if ( v80 <= v83 )
                  v82 = v84;
              }
              if ( **(_DWORD **)(v10 + 144) != -1 )
                NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)(v10 + 144), v82, 3);
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
LABEL_53:
            v53 = *(unsigned __int8 *)(v5 + 6);
            if ( !(_BYTE)v53 )
              goto LABEL_54;
            v9 = v113;
            v63 = (unsigned int *)(v8 - 8 * v53);
            if ( (unsigned __int8)v53 > 1u )
            {
              *(_QWORD *)&Context = *v113;
              *((_QWORD *)&Context + 1) = v10;
              qsort_s(
                (void *)(v8 - 8 * v53),
                *(unsigned __int8 *)(v5 + 6),
                8uLL,
                ST_STORE<SM_TRAITS>::StDmCombineTargetCompare,
                &Context);
            }
            for ( i = &v63[2 * *(unsigned __int8 *)(v5 + 6)]; v63 < i; *v66 *= 16 )
            {
              v65 = *v63;
              v66 = (int *)(v63 + 1);
              *(_QWORD *)v63 = 0LL;
              if ( v63 != (unsigned int *)-4LL )
                *v66 = v65 & *(_DWORD *)(v10 + 808);
              if ( v63 )
                *v63 = v65 >> *(_DWORD *)(v10 + 812);
              v63 += 2;
            }
            v6 = v128;
            a4 = v119;
LABEL_76:
            *v6 = *((unsigned __int16 *)v9 + 3);
            v6[1] = a4[2];
            v6[2] = a4[1] & 0xFFF;
            *((_WORD *)v9 + 3) = v5 + 8 * (*(unsigned __int8 *)(v5 + 6) + 1) - (_WORD)v9;
LABEL_54:
            v54 = 0;
            goto LABEL_55;
          }
          v47 = *((_QWORD *)&v115 + 1) + 4LL;
          v48 = (unsigned __int16)*(_DWORD *)v11 + 4LL;
          *((_QWORD *)&v115 + 1) = v47;
          if ( v47 < v11 + 4 * v48 )
          {
LABEL_50:
            if ( !v47 )
              goto LABEL_53;
            v49 = *(_DWORD *)v47;
            v50 = v49 >> *(_DWORD *)(v10 + 456);
            _BitScanReverse((unsigned int *)&v51, v50);
            v22 = 2 * (v50 ^ (unsigned int)(1 << v51));
            v52 = (_DWORD *)(*(unsigned int *)(v10 + 472)
                           + *(_DWORD *)(v10 + 464) * (v49 & *(_DWORD *)(v10 + 460))
                           + *(_QWORD *)(*(_QWORD *)(v10 + 8 * v51 + 192) + 16 * (v50 ^ (unsigned int)(1 << v51))));
            if ( v52 != v119 )
            {
              if ( v52[2] != v119[2] )
                goto LABEL_53;
              if ( ((v119[1] ^ v52[1]) & 0xFFF) == 0 )
              {
                v22 = (unsigned int)(*v52 >> *(_DWORD *)(v10 + 812));
                if ( *(unsigned __int16 *)(*(_QWORD *)(v10 + 1416) + 2 * v22) >> 13 >= v46 )
                {
                  v58 = *(_QWORD *)(*(_QWORD *)(v10 + 800) + 7416LL);
                  if ( v58 && (v58 == -1 || _bittest64(*(const signed __int64 **)(v58 + 16), v22))
                    || (v52[1] & 0xFFFFF000) >= 0xFFEFF000 )
                  {
                    v11 = v115;
                  }
                  else
                  {
                    v11 = v115;
                    if ( v8 + 8 > v131 )
                      goto LABEL_80;
                    *(_QWORD *)v8 = 0LL;
                    *(_DWORD *)v8 = *v52;
                    *(_DWORD *)(v8 + 4) = v52[1] >> 12;
                    v8 += 8LL;
                    ++*(_BYTE *)(v5 + 6);
                  }
                }
              }
            }
            ++v44;
            continue;
          }
          break;
        }
        v76 = (_DWORD **)(v10 + 144);
        if ( v10 == -128 )
          v76 = 0LL;
        if ( **v76 == -1 )
        {
          v77 = (_DWORD **)(v10 + 144);
          if ( v10 == -128 )
            v77 = 0LL;
          if ( **v77 == -1 )
          {
            LeafSibling = *(_QWORD *)(v11 + 8);
            goto LABEL_112;
          }
          LeafSibling = 3358LL;
        }
        else
        {
          LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                          v10 + 128,
                          v11,
                          v22);
          if ( LeafSibling == -1 )
          {
            v47 = -1LL;
            goto LABEL_50;
          }
LABEL_112:
          if ( !LeafSibling )
          {
            v47 = 0LL;
            goto LABEL_50;
          }
        }
        v47 = LeafSibling + 16;
        *(_QWORD *)&v115 = LeafSibling;
        *((_QWORD *)&v115 + 1) = LeafSibling + 16;
        v11 = LeafSibling;
        goto LABEL_50;
      }
      if ( v110 )
      {
        *v21 = v23;
        v21[1] = &v23[16 * v30 + 16];
        v21 += 2;
        v116 = v21;
      }
      if ( v30 )
        v32 = (void **)&v23[16 * v30 + 8];
      else
        v32 = (void **)(v23 + 8);
      if ( *(_DWORD *)v17[2] == -1 || v23[2] != 2 )
      {
        v23 = (char *)*v32;
        v117 = (struct B_TREE_NODE_HDR *)*v32;
      }
      else
      {
        v117 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)v17 + 2, v32, 2 * (*(_BYTE *)(v14 + 32) & 1u));
        v23 = (char *)v117;
        if ( !v117 )
          goto LABEL_38;
      }
      v17 = (char **)(v10 + 128);
    }
  }
  v60 = (__int64)a2 + v59;
  if ( v5 + (unsigned __int64)(unsigned int)(v5 - v60) <= v7 )
  {
    v61 = v60 + 8;
    for ( j = v60 + 8 + 8LL * *(unsigned __int8 *)(v60 + 6); v61 < j; v61 += 8LL )
    {
      if ( *(_DWORD *)(v61 + 4) != *(_DWORD *)v5 || *(_DWORD *)v61 != *v9 )
      {
        *(_QWORD *)v8 = *(_QWORD *)v61;
        v8 += 8LL;
        ++*(_BYTE *)(v5 + 6);
      }
    }
    if ( *(_BYTE *)(v5 + 6) )
      goto LABEL_76;
    goto LABEL_54;
  }
  v54 = -2147483643;
LABEL_55:
  v55 = (__int64 *)(v10 + 128);
  v56 = (_DWORD **)(v10 + 144);
  if ( v10 == -128 )
    v56 = 0LL;
  if ( **v56 != -1 )
  {
    if ( v11 )
    {
      v85 = *v55;
      if ( v11 != *v55 )
      {
        v86 = 0;
        if ( v85 )
          v86 = *(unsigned __int8 *)(v85 + 2);
        v99 = 16LL * v86;
        v100 = v99 + 15;
        if ( v99 + 15 < v99 )
          v100 = 0xFFFFFFFFFFFFFF0LL;
        v101 = v100 & 0xFFFFFFFFFFFFFFF0uLL;
        v102 = alloca(v101);
        v103 = *(_DWORD *)(v11 + 16);
        v104 = alloca(v101);
        v125 = 1LL;
        v124 = v86;
        v122 = 0LL;
        v123 = 0;
        v121 = &v110;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          (struct B_TREE_NODE_HDR **)(v10 + 128),
          v103,
          (__int64)&v121);
        v105 = *((_QWORD *)&v110 + 2 * v86 - 4);
        v106 = *(_QWORD *)&v112[4 * v86 - 8];
        v107 = v105 + 16;
        v108 = (void **)(v105 + 8);
        v109 = (void **)(v106 - 8);
        if ( v106 <= v107 )
          v109 = v108;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (struct B_TREE_NODE_HDR **)(v10 + 128),
          (__int64)&v121);
        if ( **(_DWORD **)(v10 + 144) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v10 + 144), v109);
      }
    }
  }
  return v54;
}
