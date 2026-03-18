/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140399E40
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039960C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140494F94 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F7AE8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403978C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1403999B0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14039A77C (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14039B2D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14039E284 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14040F1F0 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404B2608 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14060A880 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r14d
  int v5; // r15d
  __int64 v6; // rsi
  __int64 v8; // rbx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // rcx
  int VirtualRegion; // eax
  int v21; // edx
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+28h] [rbp-30h]

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 784);
  v6 = a2;
  v8 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v19 + 6837) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v19, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v19, a2);
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
  v14 = v11;
  if ( !v11 )
    goto LABEL_13;
  if ( ((v11 - 1) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
LABEL_11:
    ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v6, 1LL);
    if ( v14 == 1 || v14 == 4 )
    {
      v14 = -1LL;
      goto LABEL_14;
    }
LABEL_13:
    v14 = 0LL;
    goto LABEL_14;
  }
  if ( v11 == 4 )
  {
    LOBYTE(v13) = 1;
    *(_QWORD *)(a1 + 6728) = KiQueryUnbiasedInterruptTime(v13, v12);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v6) )
  {
    SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v6, 0, v5, 2);
    return v14;
  }
  v14 = -1LL;
  if ( *(_BYTE *)(a1 + 776) )
    v21 = 0;
  else
    v21 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1416) + 2 * v6) >> 13;
  v23 = (16 * v21) | 4;
  if ( (*(_BYTE *)(v15 + 6837) & 4) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v15, v6, v16, v17, v22, v23);
  else
    SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v15, v6, v16, v17, v22, v23);
LABEL_14:
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v6);
  return v14;
}
