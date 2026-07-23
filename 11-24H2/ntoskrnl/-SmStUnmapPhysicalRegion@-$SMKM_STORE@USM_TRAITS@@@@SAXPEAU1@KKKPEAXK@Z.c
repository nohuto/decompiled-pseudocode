/*
 * XREFs of ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402F7328 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1402F8440 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rbx
  struct _MDL *v11; // rdi
  PVOID MappedSystemVa; // rbp

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 7024);
  v8 = *(_QWORD *)(v7 + 8 * v6);
  v9 = v8 & (-(__int64)((a6 & 4) != 0) - 2);
  *(_QWORD *)(v7 + 8 * v6) = v9;
  if ( (v9 & 2) == 0 && (v9 & 1) == 0 )
  {
    v10 = a1 + 7456;
    v11 = (struct _MDL *)(v8 & 0xFFFFFFFFFFFFFFF8uLL);
    MappedSystemVa = v11->MappedSystemVa;
    if ( *(struct _KTHREAD **)(a1 + 7568) == KeGetCurrentThread()
      && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a1 + 7456)) )
    {
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v11);
      if ( !*(_BYTE *)(v10 + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(v10 + 112), 0LL);
        KeSetEvent((PRKEVENT)(v10 + 8), 0, 0);
      }
    }
    else
    {
      MmUnmapLockedPages(MappedSystemVa, v11);
    }
  }
}
