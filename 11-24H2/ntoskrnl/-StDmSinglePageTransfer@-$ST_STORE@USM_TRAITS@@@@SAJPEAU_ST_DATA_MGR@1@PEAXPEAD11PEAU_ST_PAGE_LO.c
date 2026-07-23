/*
 * XREFs of ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402F8830
 * Callers:
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1404AC2A8 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402F8924 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PMDL MemoryDescriptorList,
        __int64 a6,
        __int64 a7)
{
  PMDL MappedSystemVa; // r9
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9

  if ( a4 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = (PMDL)MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = (PMDL)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v12 = 4;
    if ( (*(_DWORD *)(a4 + 8) & 0x8000000) != 0 )
      v12 = 36;
  }
  else
  {
    MappedSystemVa = MemoryDescriptorList;
    v12 = 0;
  }
  if ( !MappedSystemVa )
    return 3221225626LL;
  *(_DWORD *)(a6 + 20) ^= ((unsigned __int8)*(_DWORD *)(a6 + 20) ^ (unsigned __int8)(v12 >> 1)) & 2;
  v13 = (__int64)MappedSystemVa + 4096 * (unsigned __int64)*(unsigned __int16 *)(a6 + 6);
  v14 = v13 | 1;
  if ( (v12 & 0x20) == 0 )
    v14 = v13;
  return ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, a2, a3, v14, a6, a7);
}
