/*
 * XREFs of ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1402F8440
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1402F7E00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x140609768 (-StDmCompletePendingReads@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1.c)
 * Callees:
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1402F7A7C (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402F8924 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     SmMapPage @ 0x140431210 (SmMapPage.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14060A408 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmFinishPageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  _QWORD *v5; // rbx
  _DWORD *v6; // rdi
  bool v10; // zf
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // r9
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = (_QWORD *)(a2 + 8);
  v6 = (_DWORD *)(a2 + 20);
  v10 = (*(_DWORD *)(a1 + 776) & 0x20000) == 0;
  v20 = 0;
  if ( !v10 && (*v5 == 2LL || (*v6 & 0xC) != 0) )
  {
    v12 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(
            *(_QWORD *)(a1 + 800),
            *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812),
            16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 808)),
            a4,
            2);
    v13 = SmMapPage(*(_QWORD *)(a4 + 16), &v20) + ((unsigned __int64)*(unsigned __int16 *)(a2 + 6) << 12);
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
  }
  if ( *v5 == 2LL )
  {
    v19 = v13 | 1;
    if ( (*(_DWORD *)(a4 + 8) & 0x8000000) == 0 )
      v19 = v13;
    v14 = ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, *(_QWORD *)(a3 + 16), v12, v19, a2, a3);
  }
  else
  {
    v14 = a5;
  }
  v15 = *v6 & 0xC;
  if ( v15 )
  {
    if ( v15 == 4 )
    {
      v14 = -1073740576;
    }
    else if ( v15 == 8 )
    {
      v14 = -1073740574;
    }
    v14 = ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, v13, a2, a3, v14);
    v6 = (_DWORD *)(a2 + 20);
    v5 = (_QWORD *)(a2 + 8);
  }
  if ( (*v6 & 1) == 0 )
  {
    *v5 = 0LL;
    return v14;
  }
  v16 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812);
  v17 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v17 + 6837) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v17, v16, 0, a4);
    *v5 = 0LL;
    return v14;
  }
  SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v17, v16, 0, a4);
  result = v14;
  *v5 = 0LL;
  return result;
}
