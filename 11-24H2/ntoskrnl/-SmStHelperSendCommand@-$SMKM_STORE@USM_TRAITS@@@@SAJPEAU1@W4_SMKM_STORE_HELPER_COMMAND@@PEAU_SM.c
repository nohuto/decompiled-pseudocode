/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14039C2BC
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140387A58 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1403997F0 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14039BF74 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14039E284 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14039C46C (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C4E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C560 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14039C648 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 *v5; // rbp
  __int16 v6; // r12
  __int64 v7; // rbx
  __int64 v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  v6 = a2;
  v14 = 0LL;
  v7 = 7184LL;
  if ( a2 != 4 )
    v7 = 7040LL;
  v10 = a1 + v7;
  v11 = SmKmStoreHelperCheckWaitCommand(v10, a4 & 1);
  if ( v11 != -1073741650 )
  {
    *(_WORD *)(v10 + 58) = v6;
    if ( a3 )
    {
      *(_OWORD *)(v10 + 64) = *(_OWORD *)a3;
      *(_OWORD *)(v10 + 80) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v10 + 96) = *(_OWORD *)(a3 + 32);
      *(_QWORD *)(v10 + 112) = *(_QWORD *)(a3 + 48);
    }
    KeSetEvent((PRKEVENT)(v10 + 8), 0, 0);
    if ( (a4 & 2) == 0 )
    {
      v12 = -1000000LL;
      if ( *(_BYTE *)(a1 + 6838) > 1u )
        v12 = -5000000LL;
      v14 = v12;
      if ( (a4 & 8) != 0 )
        v14 = v12 / 4;
      v5 = &v14;
    }
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
    v11 = SmKmStoreHelperWaitForCommand(v10, a3, v5, (a4 >> 2) & 1, v14);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v11;
}
