/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x14020A380 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14020A790 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14020A978 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14020AA10 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x14020BA90 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140397300 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044EB38 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 * Callees:
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x14020A734 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     MmReleaseResourceCharge @ 0x14020C540 (MmReleaseResourceCharge.c)
 *     SmKmUnlockMdl @ 0x14020D154 (SmKmUnlockMdl.c)
 *     SmKmFreeMdlForLock @ 0x14020DBD4 (SmKmFreeMdlForLock.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     SmpFpReleaseResource @ 0x140602264 (SmpFpReleaseResource.c)
 */

__int16 __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  volatile signed __int16 *v9; // rdi
  signed __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v18; // rcx
  PMDL *VirtualLockedRegion; // rdi
  __int64 v21; // rbp
  PMDL v22; // r14

  v10 = *(_QWORD *)(a1 + 7024);
  v7 = *(unsigned int *)(a1 + 7016);
  v8 = *(_QWORD *)(v10 + 8LL * a2);
  v9 = (volatile signed __int16 *)(v10 + 8LL * a2);
  LOWORD(v10) = 0;
  v11 = v8 & 0x7FFFFFFFFFFF0000LL;
  v12 = 0;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 1;
    --CurrentThread->SpecialApcDisable;
    v14 = KeAbPreAcquire(a1 + 6840, 0LL, 0LL);
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6840), 17LL, 0LL);
    if ( v10 )
      LOWORD(v10) = ExfAcquirePushLockSharedEx(a1 + 6840, 0LL, v14, a1 + 6840);
    if ( v14 )
      *(_BYTE *)(v14 + 10) = 1;
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)v9 >= 0 )
    {
      VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a6 >> 4) & 7, v11);
      SmKmUnlockMdl(*VirtualLockedRegion, *(PEX_SPIN_LOCK *)(a1 + 7312));
      v21 = *(_QWORD *)(a1 + 7312);
      v22 = *VirtualLockedRegion;
      if ( *(_QWORD *)(v21 + 112) == a1 + 7184
        && (LODWORD(v10) = SmpFpReleaseResource(*(PEX_SPIN_LOCK *)(a1 + 7312)), (_DWORD)v10) )
      {
        if ( !*(_BYTE *)(v21 + 94) )
        {
          _InterlockedExchange64((volatile __int64 *)(v21 + 112), 0LL);
          LOWORD(v10) = KeSetEvent((PRKEVENT)(v21 + 8), 0, 0);
        }
      }
      else
      {
        LOWORD(v10) = SmKmFreeMdlForLock(*(_QWORD *)(v21 + 32), v22);
      }
      *VirtualLockedRegion = 0LL;
    }
  }
  else if ( (a6 & 2) != 0 )
  {
    LOWORD(v10) = 0x7FFF;
    _InterlockedAnd16(v9, 0x7FFFu);
  }
  else if ( (a6 & 1) == 0 )
  {
    if ( _bittest16((const signed __int16 *)v9, 0xDu) && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 7328) )
    {
      --*(_DWORD *)(a1 + 7408);
      LOWORD(v10) = -8193;
      _InterlockedAnd16(v9, 0xDFFFu);
    }
    else
    {
      LOWORD(v10) = _InterlockedDecrement16(v9);
      if ( (v10 & 0x1FFF) == 0 && *(__int64 *)v9 >= 0 )
        LOWORD(v10) = MmReleaseResourceCharge(*(_QWORD *)(*(_QWORD *)(a1 + 7576) + 2096LL), v7 >> 12, 1LL);
    }
  }
  if ( v12 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6840), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 6840);
    LOWORD(v10) = KeAbPostRelease(a1 + 6840);
    v18 = KeGetCurrentThread();
    if ( v18->SpecialApcDisable++ == -1 )
    {
      v10 = (signed __int64)&v18->152;
      if ( *(_QWORD *)v10 != v10 )
        LOWORD(v10) = KiCheckForKernelApcDelivery(v18, v15, v16, v17);
    }
  }
  return v10;
}
