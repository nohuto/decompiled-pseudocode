/*
 * XREFs of ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14060CB3C
 * Callers:
 *     SmKmEtwLogStoreChange @ 0x140799AD8 (SmKmEtwLogStoreChange.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140415270 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     SmGetStoreOwnerProcessId @ 0x14060D3FC (SmGetStoreOwnerProcessId.c)
 */

_QWORD *__fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  _QWORD *v19; // rax
  _DWORD *v20; // rcx
  _QWORD *v21; // rax
  _DWORD *v22; // rcx
  _QWORD *v23; // rax
  _DWORD *v24; // rcx
  _QWORD *v25; // rax
  _WORD *v26; // rcx
  _QWORD *v27; // rax
  _WORD *v28; // rcx
  _QWORD *v29; // rax
  _DWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r11
  _DWORD *v34; // rbx
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  _QWORD *v38; // rax
  _DWORD *v39; // rcx
  _QWORD *v40; // rax
  _DWORD *v41; // rcx
  _QWORD *v42; // rax
  _DWORD *v43; // rcx
  _QWORD *v44; // rax
  _DWORD *v45; // rcx
  _QWORD *v46; // rax
  _DWORD *v47; // rcx
  _QWORD *v48; // rax
  _DWORD *v49; // rcx
  _QWORD *v50; // rax
  int StoreOwnerProcessId; // eax
  _DWORD *v52; // r8
  _QWORD *v53; // rax
  _DWORD *v54; // rdx
  _QWORD *result; // rax
  int v56; // [rsp+70h] [rbp+48h] BYREF
  int v57; // [rsp+78h] [rbp+50h] BYREF
  int v58; // [rsp+80h] [rbp+58h] BYREF
  int v59; // [rsp+88h] [rbp+60h] BYREF

  v3 = *(unsigned int *)(a2 + 24);
  v56 = 0;
  v58 = 0;
  v5 = (_QWORD *)(*(_QWORD *)(a2 + 8) + v3);
  v57 = 0;
  v59 = 0;
  *v5 = a1;
  v6 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v6 = v5;
  v6[1] = 8LL;
  v7 = *(_DWORD *)(a2 + 24);
  ++*(_DWORD *)(a2 + 16);
  v8 = v7 + 8;
  *(_DWORD *)(a2 + 24) = v8;
  if ( *(_BYTE *)(a1 + 6836) == 1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 7032) + 24LL);
  else
    v9 = 0LL;
  v10 = (_QWORD *)(*(_QWORD *)(a2 + 8) + v8);
  *v10 = v9;
  v11 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v11 = v10;
  v11[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v12 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v12 = a1 + 80;
  v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v13 = v12;
  v13[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v14 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v14 = a1 + 2416;
  v15 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v15 = v14;
  v15[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  v16 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -7016 )
    *v16 = *(_DWORD *)(a1 + 7016);
  v17 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v17 = v16;
  v17[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v18 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v18 = *(_DWORD *)(a1 + 3272) + *(_DWORD *)(a1 + 936);
  v19 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v19 = v18;
  v19[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v20 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v20 = 4096;
  v21 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v21 = v20;
  v21[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v22 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -16 )
    *v22 = *(_DWORD *)(a1 + 16);
  v23 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v23 = v22;
  v23[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v24 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v24 = 8 * *(_DWORD *)(a1 + 4888);
  v25 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v25 = v24;
  v25[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v26 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v26 = *(unsigned __int8 *)(a1 + 6836);
  v27 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v27 = v26;
  v27[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  v28 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -6832 )
    *v28 = *(_WORD *)(a1 + 6832);
  v29 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v29 = v28;
  v29[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  v30 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -88 )
    *v30 = *(_DWORD *)(a1 + 88);
  v31 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v31 = v30;
  v31[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v32 = *(unsigned int *)(a2 + 24);
  ++*(_DWORD *)(a2 + 16);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 80, &v56, &v58);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v33, &v57, &v59);
  v34 = (_DWORD *)(*(_QWORD *)(a2 + 8) + v32);
  v35 = v57;
  v36 = v59;
  v37 = v59 + v58;
  *v34 = v57 + v56;
  v38 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v38 = v34;
  v38[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v39 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v39 = v37;
  v40 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v40 = v39;
  v40[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v41 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v41 = *(_DWORD *)(a1 + 856);
  v42 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v42 = v41;
  v42[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v43 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -3272 )
    *v43 = *(_DWORD *)(a1 + 3272);
  v44 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v44 = v43;
  v44[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v45 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v45 = v35;
  v46 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v46 = v45;
  v46[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v47 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v47 = v36;
  v48 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v48 = v47;
  v48[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v49 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -1564 )
    *v49 = *(_DWORD *)(a1 + 1564);
  v50 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v50 = v49;
  v50[1] = 4LL;
  ++*(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 24) += 4;
  StoreOwnerProcessId = SmGetStoreOwnerProcessId(a1);
  v52 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v52 = StoreOwnerProcessId;
  v53 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v53 = v52;
  v53[1] = 4LL;
  ++*(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 24) += 4;
  v54 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v54 = ***(unsigned __int16 ***)(*(_QWORD *)(a1 + 7576) + 2096LL);
  result = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *result = v54;
  result[1] = 4LL;
  ++*(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 24) += 4;
  return result;
}
