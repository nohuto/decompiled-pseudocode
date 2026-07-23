/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1402F41E0 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402F7648 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1402F7A7C (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1402F7E00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403797D0 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1402F5284 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402F9274 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  int v6; // r12d
  __int64 v7; // rbp
  volatile signed __int16 *v8; // r13
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r14
  int v12; // edx
  signed __int16 v13; // bx
  signed __int16 v14; // bx
  signed __int64 *v15; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v17; // zf
  unsigned __int64 v19; // [rsp+70h] [rbp+8h]
  unsigned int v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v6 = 0;
  v7 = 1LL;
  v8 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 7024) + 8LL * a2);
  if ( (a5 & 0x40) != 0 )
  {
    v15 = (signed __int64 *)(a1 + 6840);
    v6 = 1;
    StLockAcquireShared((struct VLOCK *)(a1 + 6840));
    if ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL) == 0 )
    {
      v7 = 0LL;
      goto LABEL_15;
    }
    a2 = v20;
  }
  v9 = *(unsigned int *)(a1 + 7016);
  v10 = *(_QWORD *)v8;
  v19 = v9;
  v11 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
  if ( (a5 & 8) != 0 )
  {
    v7 = 0LL;
    if ( (v10 & 0x4000) != 0 )
    {
      *v8 = v10 & 0xBFFF;
    }
    else if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, (__int64)v8, 0) )
    {
      v7 = 3LL;
    }
  }
  else if ( (a5 & 0x10) != 0 )
  {
    v7 = SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(a1, a2, (_DWORD)v8, v11, a5);
  }
  else
  {
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v8, 0x8000u);
    }
    else if ( (a5 & 2) == 0 )
    {
      while ( (v10 & 0x1FFF) != 0x1FFF )
      {
        v12 = 0;
        v13 = v10 ^ (v10 ^ (v10 + 1)) & 0x1FFF;
        if ( (v10 & 0x1FFF) == 0 && *(__int64 *)v8 >= 0 )
        {
          if ( (unsigned int)MiChargeCommit(**(_QWORD **)(*(_QWORD *)(a1 + 7576) + 2096LL), v9 >> 12, 1LL, 0x1FFFLL) )
          {
            v9 = v19;
            v12 = 1;
          }
          else
          {
            v12 = 0;
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 7328) )
            {
              v7 = 2LL;
              goto LABEL_13;
            }
            if ( (a5 & 0x80u) != 0 && *(_DWORD *)(a1 + 7408) )
              goto LABEL_13;
            ++*(_DWORD *)(a1 + 7408);
            v9 = v19;
            v13 = v13 & 0xC000 | 0x2000;
          }
        }
        v14 = _InterlockedCompareExchange16(v8, v13, v10);
        if ( (_WORD)v10 == v14 )
          goto LABEL_12;
        if ( v12 )
        {
          SmAcquireReleaseCharges(*(_QWORD *)(a1 + 7576), v9, 1LL);
          v9 = v19;
          LOWORD(v10) = v14;
        }
        else
        {
          if ( (v10 & 0x1FFF) == 0 && *(__int64 *)v8 >= 0 )
            --*(_DWORD *)(a1 + 7408);
          v9 = v19;
          LOWORD(v10) = v14;
        }
      }
      goto LABEL_13;
    }
LABEL_12:
    v7 = v11 + a3;
  }
LABEL_13:
  if ( !v6 )
    return v7;
  v15 = (signed __int64 *)(a1 + 6840);
LABEL_15:
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  CurrentThread = KeGetCurrentThread();
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v7;
}
