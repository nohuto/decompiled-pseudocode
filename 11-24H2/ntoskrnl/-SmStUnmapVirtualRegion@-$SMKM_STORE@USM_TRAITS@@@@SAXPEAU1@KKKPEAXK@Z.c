/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1402F41E0 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402F7328 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1402F73C0 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1402F8440 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403797D0 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     SmKmFreeMdlForLock @ 0x1402E7E04 (SmKmFreeMdlForLock.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x1402F70E4 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     MmReleaseResourceCharge @ 0x1402F8EFC (MmReleaseResourceCharge.c)
 *     SmKmUnlockMdl @ 0x1402F9B04 (SmKmUnlockMdl.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
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
  __int64 v12; // rsi
  struct _KTHREAD *v13; // rax
  PMDL *VirtualLockedRegion; // rdi
  __int64 v16; // rsi
  PMDL v17; // rbp

  v7 = *(unsigned int *)(a1 + 7016);
  v8 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 7024) + 8LL * a2);
  v9 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
  v10 = 0;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 1;
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire(a1 + 6840, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6840), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a1 + 6840, 0LL, v12, a1 + 6840);
    if ( v12 )
      *(_BYTE *)(v12 + 10) = 1;
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)v8 >= 0 )
    {
      VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a6 >> 4) & 7, v9);
      SmKmUnlockMdl(*VirtualLockedRegion, *(PEX_SPIN_LOCK *)(a1 + 7312));
      v16 = *(_QWORD *)(a1 + 7312);
      v17 = *VirtualLockedRegion;
      if ( *(_QWORD *)(v16 + 112) == a1 + 7184 && (unsigned int)SmpFpReleaseResource(*(PEX_SPIN_LOCK *)(a1 + 7312)) )
      {
        if ( !*(_BYTE *)(v16 + 94) )
        {
          _InterlockedExchange64((volatile __int64 *)(v16 + 112), 0LL);
          KeSetEvent((PRKEVENT)(v16 + 8), 0, 0);
        }
      }
      else
      {
        SmKmFreeMdlForLock(*(_QWORD *)(v16 + 32), (unsigned int *)v17);
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
    v13 = KeGetCurrentThread();
    if ( v13->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
