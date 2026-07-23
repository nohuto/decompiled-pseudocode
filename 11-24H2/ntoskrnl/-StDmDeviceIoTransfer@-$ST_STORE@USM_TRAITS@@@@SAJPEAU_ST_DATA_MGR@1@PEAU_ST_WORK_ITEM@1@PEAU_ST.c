/*
 * XREFs of ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1404AC2A8
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404ABFD4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402F8830 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned int *v5; // r10
  _DWORD *v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // r12d
  PMDL *v13; // rcx
  __int64 result; // rax

  v3 = *(unsigned int *)(a1 + 792);
  v5 = *(unsigned int **)(a3 + 8);
  v8 = v5 + 4;
  v9 = (unsigned __int64)&v5[6 * *v5 + 4];
  v10 = 16 * (v5[4] & *(_DWORD *)(a1 + 808));
  v11 = v10 - (-(int)v3 & (unsigned int)v10) + (-v3 & ((unsigned __int64)&v5[6 * *v5 + 3] + v3 + 3));
  v12 = *(_DWORD *)(a3 + 20) & 0x10;
  while ( (unsigned __int64)v8 < v9 )
  {
    v13 = (PMDL *)(a2 + 16);
    if ( !a2 )
      v13 = (PMDL *)a3;
    result = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
               a1,
               *(_QWORD *)(a1 + 896),
               (v11 + (unsigned int)(16 * (*v8 - *(_DWORD *)(a3 + 16)))) | (v12 != 0 ? 2 : 0),
               a2,
               *v13,
               (__int64)v8,
               0LL);
    if ( (int)result < 0 )
      return result;
    v8 += 6;
  }
  return 0LL;
}
