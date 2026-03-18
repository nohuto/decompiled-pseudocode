/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1403997F0
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403978C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140495260 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     MmStoreDecommitVirtualMemory @ 0x140397A6C (MmStoreDecommitVirtualMemory.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1403999B0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14039C2BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140482714 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+30h] [rbp-58h]
  __int128 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-38h]

  v3 = *(unsigned int *)(a1 + 7016);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 7024) + 8LL * a2);
  v7 = *v6 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v7 )
    return 1075380276LL;
  v8 = 1;
  if ( (*(_WORD *)v6 & 0x4000) != 0 )
    *(_WORD *)v6 &= ~0x4000u;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, *(_QWORD *)(a1 + 7024) + 8LL * a2, a3 & 1);
  if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  if ( (__int64)*v6 >= 0 )
  {
    v8 = 0;
    MmStoreDecommitVirtualMemory(v7, v3, v9);
  }
  if ( *(__int16 *)v6 < 0 )
    return 3221225646LL;
  v10 = *v6;
  *v6 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v12[0] = v7;
  v12[1] = v3;
  LODWORD(v13) = v8 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFE;
  v14 = 0LL;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3LL, v12);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v6 = v10;
  return result;
}
