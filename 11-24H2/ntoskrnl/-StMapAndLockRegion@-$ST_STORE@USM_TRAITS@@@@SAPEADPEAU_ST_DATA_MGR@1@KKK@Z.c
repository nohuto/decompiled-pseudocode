/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402F6914 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1402F6CB0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1402F7A7C (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140469C50 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404ACE98 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140608E40 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r14d
  int v5; // r15d
  __int64 v6; // rsi
  __int64 v8; // rbx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // rcx
  int VirtualRegion; // eax
  int v20; // edx
  int v21; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+28h] [rbp-30h]

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 784);
  v6 = a2;
  v8 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v18 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v18 + 6837) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v18, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v18, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v8 + 2208);
    if ( !*(_BYTE *)(a1 + 776) )
      *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v6) = ((_WORD)v8 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v6) & 0x1FFF;
    v4 = 1;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v10 = 0;
  else
    v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1416) + 2 * v6) >> 13;
  v11 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v6, 0, v5, a4 | (v10 << 8) | 0x10u);
  v13 = v11;
  if ( !v11 )
    goto LABEL_13;
  if ( ((v11 - 1) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
LABEL_11:
    ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v6, 1LL);
    if ( v13 == 1 || v13 == 4 )
    {
      v13 = -1LL;
      goto LABEL_14;
    }
LABEL_13:
    v13 = 0LL;
    goto LABEL_14;
  }
  if ( v11 == 4 )
  {
    LOBYTE(v12) = 1;
    *(_QWORD *)(a1 + 6728) = KiQueryUnbiasedInterruptTime(v12);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v6) )
  {
    SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v6, 0, v5, 2);
    return v13;
  }
  v13 = -1LL;
  if ( *(_BYTE *)(a1 + 776) )
    v20 = 0;
  else
    v20 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1416) + 2 * v6) >> 13;
  v22 = (16 * v20) | 4;
  if ( (*(_BYTE *)(v14 + 6837) & 4) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v14, v6, v15, v16, v21, v22);
  else
    SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v14, v6, v15, v16, v21, v22);
LABEL_14:
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v6);
  return v13;
}
