/*
 * XREFs of ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x14060ADB8
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402F8924 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068D980 (MmStoreIsVirtualAddressPoisoned.c)
 *     MmStoreLogRegionInPageError @ 0x14068DCB0 (MmStoreLogRegionInPageError.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StRegionAccessExceptionFilter(int **a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebx
  int *v7; // r8
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // rcx

  v4 = 0;
  if ( (*(_DWORD *)(a2 + 776) & 0x20000) != 0 )
  {
    v7 = *a1;
    v8 = **a1;
    if ( v8 == -1073741818 )
    {
      if ( (*(_DWORD *)(a2 + 832) & 0x60) == 0 && (unsigned int)v7[6] >= 3 && !*((_QWORD *)v7 + 4) )
      {
        v9 = v7[12];
        if ( v9 < 0 )
        {
          *a4 = v9;
          if ( ((v9 + 1073740576) & 0xFFFFFFFD) != 0 )
          {
            MmStoreLogRegionInPageError(*a1);
            if ( a3 )
              *(_DWORD *)(a3 + 20) |= 0xCu;
            return 1;
          }
        }
      }
    }
    else if ( v8 == -1073741819 && (unsigned int)v7[6] >= 2 && !*((_QWORD *)v7 + 4) )
    {
      v10 = *((_QWORD *)v7 + 5);
      if ( v10 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (unsigned int)MmStoreIsVirtualAddressPoisoned(v10) )
        {
          *a4 = -1073740574;
          if ( a3 )
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(a3 + 20) & 0xFFFFFFF3 | 8;
          return 1;
        }
      }
    }
  }
  return v4;
}
