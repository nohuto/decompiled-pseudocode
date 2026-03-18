/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14039B2D0
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037FE90 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140399A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140399E40 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14039A028 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14039A0C0 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x14039B140 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044FA74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     SmKmFreeMdlForLock @ 0x14037AD84 (SmKmFreeMdlForLock.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140399DE4 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     MmReleaseResourceCharge @ 0x14039BBFC (MmReleaseResourceCharge.c)
 *     SmKmUnlockMdl @ 0x14039C804 (SmKmUnlockMdl.c)
 *     SmpFpReleaseResource @ 0x1404F9720 (SmpFpReleaseResource.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v7; // r13
  volatile signed __int16 *v8; // rdi
  __int64 v9; // r12
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rax
  PMDL *VirtualLockedRegion; // rdi
  __int64 v18; // rsi
  PMDL v19; // rbp

  v7 = *(unsigned int *)(a1 + 7016);
  v8 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 7024) + 8LL * a2);
  v9 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
  v10 = 0;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 1;
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire(a1 + 6840, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6840), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 6840), 0, v12, a1 + 6840);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)v8 >= 0 )
    {
      VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a6 >> 4) & 7, v9);
      SmKmUnlockMdl(*VirtualLockedRegion, *(PEX_SPIN_LOCK *)(a1 + 7312));
      v18 = *(_QWORD *)(a1 + 7312);
      v19 = *VirtualLockedRegion;
      if ( *(_QWORD *)(v18 + 112) == a1 + 7184 && (unsigned int)SmpFpReleaseResource(*(PEX_SPIN_LOCK *)(a1 + 7312)) )
      {
        if ( !*(_BYTE *)(v18 + 94) )
        {
          _InterlockedExchange64((volatile __int64 *)(v18 + 112), 0LL);
          KeSetEvent((PRKEVENT)(v18 + 8), 0, 0);
        }
      }
      else
      {
        SmKmFreeMdlForLock(*(_QWORD *)(v18 + 32), (unsigned int *)v19);
      }
      *VirtualLockedRegion = 0LL;
    }
  }
  else if ( (a6 & 2) != 0 )
  {
    _InterlockedAnd16(v8, 0x7FFFu);
  }
  else if ( (a6 & 1) == 0 )
  {
    if ( _bittest16((const signed __int16 *)v8, 0xDu) && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 7328) )
    {
      --*(_DWORD *)(a1 + 7408);
      _InterlockedAnd16(v8, 0xDFFFu);
    }
    else if ( (_InterlockedDecrement16(v8) & 0x1FFF) == 0 && *(__int64 *)v8 >= 0 )
    {
      MmReleaseResourceCharge(*(_QWORD *)(*(_QWORD *)(a1 + 7576) + 2096LL), v7 >> 12, 1LL);
    }
  }
  if ( v10 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6840), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6840));
    KeAbPostRelease(a1 + 6840);
    v15 = KeGetCurrentThread();
    if ( v15->SpecialApcDisable++ == -1
      && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    {
      KiCheckForKernelApcDelivery(v14, v13);
    }
  }
}
