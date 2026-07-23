/*
 * XREFs of ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14037E050
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037D4F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037E740 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037EA00 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordRemove(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *v4; // r15
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  struct B_TREE_NODE_HDR **v10; // r13
  __int64 result; // rax
  int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // rdx
  int v15; // r9d
  unsigned int v16; // ecx
  _QWORD *v17; // rdx
  char *v18; // r14
  char *v19; // rdx
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  int v22; // edi
  unsigned int v23; // r12d
  int v24; // r14d
  unsigned int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // eax
  void **v30; // rcx
  char *v31; // rdx
  unsigned int v32; // r14d
  int v33; // r10d
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // ecx
  int v41; // eax
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // r10
  __int64 v45; // rax
  unsigned int v46; // ecx
  _WORD *v47; // r11
  unsigned __int16 v48; // r8
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  _BYTE *v52; // rdx
  _BYTE *v53; // r8
  int v54; // r8d
  unsigned int v55; // ebx
  unsigned int v56; // r11d
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned int v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // [rsp+20h] [rbp-78h]
  char v62; // [rsp+24h] [rbp-74h]
  struct B_TREE_NODE_HDR *v63; // [rsp+28h] [rbp-70h]
  __int64 v64; // [rsp+30h] [rbp-68h]
  int v65; // [rsp+30h] [rbp-68h]
  _QWORD *v66; // [rsp+38h] [rbp-60h]
  __int64 v67; // [rsp+40h] [rbp-58h]
  __int64 v68; // [rsp+40h] [rbp-58h]
  char *v69; // [rsp+48h] [rbp-50h]
  __int64 v70; // [rsp+48h] [rbp-50h]
  __int64 v71; // [rsp+50h] [rbp-48h]
  int v74; // [rsp+B8h] [rbp+20h]

  v3 = a1;
  v4 = (_DWORD *)a2;
  v6 = ((unsigned int)a2 - ((a2 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  v7 = *(_DWORD *)(a1 + 112);
  if ( v7 == -1 || !v7 )
    v8 = a1 + 96;
  else
    v8 = *(_QWORD *)(a1 + 88) + 16LL * (unsigned int)(v7 - 1);
  if ( **(_DWORD **)(v8 + 8) != v6 )
    NT_ASSERT("RegionEntry->PageRecordId == PageRecordId");
  v9 = a1 + 152;
  v10 = (struct B_TREE_NODE_HDR **)(a1 + 128);
  v71 = a1 + 152;
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(a1 + 128),
      a1 + 152);
  *(_DWORD *)(v3 + 184) &= ~1u;
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
             v3 + 64,
             a3);
  v12 = result;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741818 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
  }
  else
  {
    v13 = 0;
    if ( (*(_DWORD *)(v3 + 776) & 0x100000) != 0 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (struct B_TREE_NODE_HDR **)(v3 + 128),
        v3 + 152);
      if ( *(_DWORD *)(v3 + 176) == -1 )
      {
        v15 = 0;
        v74 = 0;
        v17 = (_QWORD *)(v3 + 160);
      }
      else
      {
        v15 = 1;
        v74 = 1;
        v16 = 0;
        if ( *v10 )
          v16 = *((unsigned __int8 *)*v10 + 2);
        if ( *(_DWORD *)(v3 + 180) < v16 )
        {
          if ( !(unsigned int)SmArrayGrow(v16, v14, (unsigned int *)(v3 + 180), (const void **)(v3 + 152)) )
            goto LABEL_39;
          v15 = 1;
        }
        v17 = *(_QWORD **)v9;
      }
      v18 = (char *)*v10;
      v66 = v17;
      v63 = *v10;
      if ( !*v10 )
      {
        if ( !v15 )
        {
          *v17 = 0LL;
          v17[1] = 0LL;
        }
        goto LABEL_39;
      }
      while ( 1 )
      {
        v19 = v18 + 16;
        v20 = (unsigned __int16)*(_DWORD *)v18;
        v21 = -1;
        v69 = v18 + 16;
        if ( HIBYTE(*(_DWORD *)v18) )
        {
          if ( (unsigned __int16)*(_DWORD *)v18 )
          {
            v22 = *((_DWORD *)v10 + 82);
            v23 = v6 >> v22;
            v64 = *((unsigned int *)v10 + 86);
            v24 = *((_DWORD *)v10 + 84);
            v67 = (v6 & *((_DWORD *)v10 + 83)) * v24;
            do
            {
              v25 = *(_DWORD *)&v19[4 * ((v20 + v21) >> 1)];
              _BitScanReverse((unsigned int *)&v26, v25 >> v22);
              v27 = *((_QWORD *)v10[v26 + 8] + 2 * ((1 << v26) ^ (v25 >> v22)))
                  + v64
                  + v24 * (v25 & *((_DWORD *)v10 + 83));
              _BitScanReverse((unsigned int *)&v26, v23);
              v28 = *((_QWORD *)v10[v26 + 8] + 2 * (v23 ^ (1 << v26))) + v64;
              v29 = *(_DWORD *)(v27 + 8);
              if ( v29 < *(_DWORD *)(v67 + v28 + 8) || v29 <= *(_DWORD *)(v67 + v28 + 8) && v25 < v6 )
                v21 = (v20 + v21) >> 1;
              else
                v20 = (v20 + v21) >> 1;
              v19 = v69;
            }
            while ( v21 + 1 != v20 );
            v3 = a1;
            v18 = (char *)v63;
            v9 = a1 + 152;
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v18 )
        {
          v54 = *((_DWORD *)v10 + 82);
          v55 = v6 >> v54;
          v61 = *((_DWORD *)v10 + 83);
          v70 = *((unsigned int *)v10 + 86);
          v65 = *((_DWORD *)v10 + 84);
          v62 = v54;
          v68 = (v6 & v61) * v65;
          do
          {
            v56 = *(_DWORD *)&v19[16 * ((v20 + v21) >> 1)];
            _BitScanReverse((unsigned int *)&v57, v56 >> v54);
            v58 = v70 + *((_QWORD *)v10[v57 + 8] + 2 * ((1 << v57) ^ (v56 >> v54))) + v65 * (v56 & v61);
            _BitScanReverse((unsigned int *)&v57, v55);
            v59 = *(_DWORD *)(v58 + 8);
            v60 = v70 + *((_QWORD *)v10[v57 + 8] + 2 * (v55 ^ (1 << v57)));
            if ( v59 >= *(_DWORD *)(v68 + v60 + 8) && (v59 > *(_DWORD *)(v68 + v60 + 8) || v56 > v6) )
              v20 = (v20 + v21) >> 1;
            else
              v21 = (v20 + v21) >> 1;
            LOBYTE(v54) = v62;
            v19 = v18 + 16;
          }
          while ( v21 + 1 != v20 );
          v3 = a1;
          v9 = v71;
        }
        if ( v18[3] )
          break;
        if ( v74 )
        {
          *v66 = v18;
          v66[1] = &v18[16 * v20 + 16];
          v66 += 2;
        }
        if ( v20 )
          v30 = (void **)&v18[16 * v20 + 8];
        else
          v30 = (void **)(v18 + 8);
        if ( *(_DWORD *)v10[2] == -1 || v18[2] != 2 )
        {
          v18 = (char *)*v30;
          v63 = (struct B_TREE_NODE_HDR *)*v30;
        }
        else
        {
          v63 = NP_CONTEXT::NpLeafRefInternal(v10 + 2, v30, 2 * (*(_BYTE *)(v9 + 32) & 1u));
          v18 = (char *)v63;
          if ( !v63 )
            goto LABEL_39;
        }
      }
      v31 = &v18[4 * v20 + 16];
      *v66 = v18;
      v66[1] = v31;
      if ( v74 )
        *(_DWORD *)(v9 + 24) = (((__int64)v66 - *(_QWORD *)v9) >> 4) + 1;
      if ( v20 >= (unsigned __int16)*(_DWORD *)v18 )
        goto LABEL_39;
      v32 = *(_DWORD *)v31;
      v33 = *((_DWORD *)v10 + 84);
      v4 = (_DWORD *)a2;
      v34 = *(_DWORD *)v31 >> *((_DWORD *)v10 + 82);
      _BitScanReverse((unsigned int *)&v35, v34);
      v36 = *((unsigned int *)v10 + 86);
      v37 = *((_QWORD *)v10[v35 + 8] + 2 * ((1 << v35) ^ v34));
      v38 = v6 >> *((_DWORD *)v10 + 82);
      _BitScanReverse((unsigned int *)&v35, v38);
      v39 = v36 + *((_QWORD *)v10[v35 + 8] + 2 * ((1 << v35) ^ v38)) + (v6 & *((_DWORD *)v10 + 83)) * v33;
      v40 = *(_DWORD *)(v33 * (v32 & *((_DWORD *)v10 + 83)) + v36 + v37 + 8);
      if ( v40 < *(_DWORD *)(v39 + 8) || v40 > *(_DWORD *)(v39 + 8) || v32 < v6 || v32 > v6 )
LABEL_39:
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      v41 = *(_DWORD *)(v3 + 176);
      if ( v41 == -1 || !v41 )
        v42 = v3 + 160;
      else
        v42 = *(_QWORD *)(v3 + 152) + 16LL * (unsigned int)(v41 - 1);
      if ( **(_DWORD **)(v42 + 8) != v6 )
        NT_ASSERT("HashEntry->PageRecordId == PageRecordId");
      v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
              v3 + 128,
              v3 + 152);
      if ( v12 < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    }
    v43 = 4096;
    if ( (v4[1] & 0xFFF) != 0 )
      v43 = v4[1] & 0xFFF;
    v44 = (unsigned int)(*v4 >> *(_DWORD *)(v3 + 812));
    v45 = *(_QWORD *)(v3 + 1416);
    v46 = *(unsigned __int16 *)(v45 + 2 * v44);
    v47 = (_WORD *)(v45 + 2 * v44);
    v48 = v46 & 0x1FFF;
    v49 = -((unsigned int)(*(_DWORD *)(v3 + 824) + 15 + v43) >> 4);
    if ( !*(_BYTE *)(v3 + 776) )
      v13 = v46 >> 13;
    *v47 = v49 + v46;
    *(_DWORD *)(v3 + 8LL * v13 + 2212) += v49;
    if ( *(_DWORD *)(v3 + 16 * (v13 + 102LL)) != (_DWORD)v44 )
    {
      v50 = (unsigned int)(*(_DWORD *)(v3 + 808) + 1) >> 1;
      v51 = *v47 & 0x1FFF;
      if ( v48 < v50 && v48 )
      {
        if ( v51 >= v50 || (*v47 & 0x1FFF) == 0 )
        {
          --*(_DWORD *)(v3 + 1472);
          v52 = (_BYTE *)(*(_QWORD *)(v3 + 1464) + ((unsigned __int64)(unsigned int)v44 >> 3));
          *v52 |= 1 << (v44 & 7);
        }
      }
      else if ( v51 < v50 && (*v47 & 0x1FFF) != 0 )
      {
        v53 = (_BYTE *)(*(_QWORD *)(v3 + 1464) + ((unsigned __int64)(unsigned int)v44 >> 3));
        *v53 &= ~(1 << (v44 & 7));
        ++*(_DWORD *)(v3 + 1472);
      }
    }
    if ( (*v47 & 0x1FFF) == 0 && (_DWORD)v44 != *(_DWORD *)(v3 + 16 * (v13 + 102LL)) )
      ST_STORE<SM_TRAITS>::StReleaseRegion(v3, v44);
    return (unsigned int)v12;
  }
  return result;
}
