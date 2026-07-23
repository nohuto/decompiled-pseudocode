/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14037A6A0
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x140379660 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140379730 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        _DWORD *a1,
        unsigned __int64 *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rcx
  int v6; // r12d
  unsigned int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned int *v10; // rbx
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rdx
  bool v25; // cf
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // r11d
  unsigned __int64 i; // r8
  _DWORD *v31; // rcx
  unsigned __int64 v32; // r14
  unsigned int *v33; // r14
  _DWORD **v34; // rax
  __int64 v35; // rax
  unsigned int v36; // edi
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // r10
  struct NP_CONTEXT **v40; // r12
  int v41; // esi
  __int64 *v42; // rax
  char v43; // r8
  _DWORD *v44; // r13
  struct NP_CONTEXT **v45; // rcx
  int *v46; // rax
  int *v47; // rdx
  int v48; // eax
  int v49; // eax
  struct NP_CONTEXT::NP_CTX *v50; // rcx
  unsigned int v51; // edi
  int v52; // eax
  __int64 v53; // [rsp+20h] [rbp-28h]
  unsigned __int64 v54; // [rsp+28h] [rbp-20h]
  __int64 v55[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v56; // [rsp+90h] [rbp+48h] BYREF
  void **v57; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v58; // [rsp+A0h] [rbp+58h] BYREF
  int v59; // [rsp+A8h] [rbp+60h]

  v56 = a1;
  v4 = *a2;
  LODWORD(v57) = *((_DWORD *)a2 + 6);
  v54 = v4;
  v6 = a1[98];
  v7 = a1[99];
  v8 = (unsigned int)a1[102];
  v58 = a1[100];
  v9 = *(_QWORD *)(v4 + 16LL * (unsigned int)((_DWORD)v57 - 1));
  v10 = *(unsigned int **)(v4 + 16LL * (unsigned int)((_DWORD)v57 - 1) + 8);
  v11 = a3 >> v6;
  _BitScanReverse((unsigned int *)&v4, a3 >> v6);
  v12 = *v10;
  v59 = 0;
  v13 = 2LL * ((a3 >> v6) ^ (1 << v4));
  v14 = *(_QWORD *)&a1[2 * v4 + 32];
  *(_OWORD *)v55 = 0LL;
  v53 = (a3 & v7) * v58;
  v15 = (_DWORD *)(v53 + v8 + *(_QWORD *)(v14 + 8 * v13));
  _BitScanReverse((unsigned int *)&v14, v12 >> v6);
  v16 = (v12 & v7) * v58;
  v17 = v8 + *(_QWORD *)(*(_QWORD *)&v56[2 * v14 + 32] + 16LL * ((1 << v14) ^ (v12 >> v6)));
  if ( *v15 >= *(_DWORD *)(v16 + v17) )
  {
    if ( *v15 > *(_DWORD *)(v16 + v17) )
    {
      if ( (unsigned __int64)v10 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
      {
        _mm_lfence();
        v20 = v56[98];
        v21 = a3 >> v20;
        _BitScanReverse((unsigned int *)&v22, v21);
        v23 = *(_QWORD *)(*(_QWORD *)&v56[2 * v22 + 32] + 16 * (v21 ^ (unsigned int)(1 << v22)));
        v24 = v10[1] >> v20;
        _BitScanReverse((unsigned int *)&v22, v24);
        v25 = *(_DWORD *)(v56[100] * (a3 & v56[99]) + v23 + (unsigned int)v56[102]) < *(_DWORD *)(v56[100]
                                                                                                * (v10[1] & v56[99])
                                                                                                + *(_QWORD *)(*(_QWORD *)&v56[2 * v22 + 32] + 16 * (v24 ^ (unsigned int)(1 << v22)))
                                                                                                + (unsigned int)v56[102]);
        goto LABEL_10;
      }
      v18 = 1;
      v29 = 1;
LABEL_13:
      for ( i = v54 + 16 * ((unsigned int)v57 - 2LL); ; i -= 16LL )
      {
        if ( i < v54 )
          goto LABEL_5;
        v31 = *(_DWORD **)i;
        if ( v29 )
        {
          if ( *(_QWORD *)(i + 8) < (unsigned __int64)&v31[4 * (unsigned __int16)*v31 + 4] )
          {
            v33 = *(unsigned int **)(i + 8);
            *(_OWORD *)v55 = *(_OWORD *)i;
LABEL_18:
            if ( v18 > 0 )
            {
              v58 = *v33;
              LODWORD(v57) = a3;
              LOBYTE(v38) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v56, &v57, &v58);
              if ( v38 < 0 )
                goto LABEL_5;
              v39 = v56;
              v34 = (_DWORD **)(v56 + 4);
              v40 = (struct NP_CONTEXT **)(v56 + 4);
              if ( !v56 )
                v34 = 0LL;
              if ( **v34 == -1 )
              {
                v35 = *(_QWORD *)(v9 + 8);
                LODWORD(v56) = a3;
                v36 = *(_DWORD *)(v35 + 16);
                v58 = v36;
                LOBYTE(v37) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v39, &v56, &v58);
                if ( v37 >= 0 )
                  return 0LL;
                *v33 = v36;
                goto LABEL_5;
              }
            }
            else
            {
              if ( !v18 )
              {
                *v33 = a3;
                goto LABEL_5;
              }
              v40 = (struct NP_CONTEXT **)(v56 + 4);
            }
            v41 = 0;
            v42 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                    v55,
                    v18 > 0,
                    0LL);
            v44 = v56;
            v45 = 0LL;
            v57 = (void **)v42;
            if ( v56 )
              v45 = v40;
            if ( *(_DWORD *)*v45 == -1 )
              v46 = (int *)*v42;
            else
              v46 = (int *)NP_CONTEXT::NpLeafRefInternal(v45, (void **)v42, v43);
            if ( !v46 )
              return 0xFFFFFFFFLL;
            v47 = v46 + 4;
            if ( v18 >= 0 )
            {
              v51 = *v47;
              v58 = *v47;
              LODWORD(v56) = a3;
              LOBYTE(v52) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v44, &v56, &v58);
              if ( v52 < 0 )
              {
                *v33 = v51;
LABEL_39:
                v41 = 1;
              }
            }
            else
            {
              v48 = *v46;
              v58 = a3;
              LODWORD(v56) = v47[(unsigned __int16)v48 - 1];
              LOBYTE(v49) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v44, &v56, &v58);
              if ( v49 < 0 )
              {
                *v33 = a3;
                goto LABEL_39;
              }
            }
            v50 = (struct NP_CONTEXT::NP_CTX *)(v44 + 4);
            if ( !v44 )
              v50 = 0LL;
            if ( **(_DWORD **)v50 != -1 )
              NP_CONTEXT::NpLeafDerefInternal(v50, v57);
            if ( !v41 )
              return 0LL;
            goto LABEL_5;
          }
        }
        else
        {
          v32 = *(_QWORD *)(i + 8);
          if ( v32 > (unsigned __int64)(v31 + 4) )
          {
            v33 = (unsigned int *)(v32 - 16);
            v55[0] = *(_QWORD *)i;
            v55[1] = (__int64)v33;
            goto LABEL_18;
          }
        }
      }
    }
    v18 = 0;
  }
  else
  {
    v18 = -1;
  }
  if ( (unsigned __int64)v10 <= v9 + 16 )
  {
    v29 = 0;
    goto LABEL_13;
  }
  if ( !v18 )
  {
LABEL_5:
    *v10 = a3;
    return 1LL;
  }
  v26 = *(v10 - 1) >> v6;
  _BitScanReverse((unsigned int *)&v27, v26);
  v28 = v58 * (v7 & *(v10 - 1)) + *(_QWORD *)(*(_QWORD *)&v56[2 * v27 + 32] + 16 * (v26 ^ (unsigned int)(1 << v27)));
  _BitScanReverse((unsigned int *)&v27, v11);
  v25 = *(_DWORD *)(v28 + v8) < *(_DWORD *)(v53
                                          + *(_QWORD *)(*(_QWORD *)&v56[2 * v27 + 32]
                                                      + 16 * (v11 ^ (unsigned __int64)(unsigned int)(1 << v27)))
                                          + v8);
LABEL_10:
  if ( v25 )
    goto LABEL_5;
  return 0LL;
}
