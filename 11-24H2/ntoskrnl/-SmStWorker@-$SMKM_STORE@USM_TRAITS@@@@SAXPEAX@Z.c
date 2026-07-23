/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140499C00 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14022FA80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F97E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F9860 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140330E98 (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140378128 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140405C68 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ebp
  struct _KTHREAD *v8; // rbp
  __int64 v9; // r11
  bool v10; // zf
  __int64 result; // rax
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v13; // eax
  NTSTATUS v14; // ecx
  unsigned __int64 *v15; // r14
  int v16; // r15d
  KIRQL v17; // al
  __int64 *v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 *v20; // rdi
  int v21; // esi
  struct _KTHREAD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  char v25; // al
  struct _KTHREAD *v26; // rax
  int v27; // eax
  struct _KTHREAD *v28; // rax
  unsigned __int64 *v29; // rcx
  __int64 *v30; // rdx
  unsigned __int64 *v31; // rcx
  __int64 *v32; // rdx
  __int64 v33; // rax
  KPRIORITY v34; // edi
  KPRIORITY v35; // ecx
  PVOID Object[3]; // [rsp+40h] [rbp-58h] BYREF
  int v37; // [rsp+A0h] [rbp+8h] BYREF
  int v38; // [rsp+A8h] [rbp+10h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+18h] BYREF
  LARGE_INTEGER v40; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = 0;
  v40.QuadPart = 0LL;
  v38 = 0;
  _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 4u);
  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread);
  v6 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(v1 + 6837) & 4) != 0 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)PsGetPagePriorityThread(CurrentThread, v5) )
      PsSetPagePriorityThread(CurrentThread, 0LL);
    v8 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(
                         *((_QWORD *)qword_140E300C8 + HIWORD(v8->ApcState.Process[2].ProcessListEntry.Blink)),
                         26LL,
                         1024LL) )
    {
      --v8->SpecialApcDisable;
      LOBYTE(v8[1].Queue) |= 4u;
    }
    else
    {
      v3 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    v6 = v3;
    v7 = v3;
    v3 = v3 >= 0;
    v38 = v3;
  }
  *((_DWORD *)a1 + 8) = v6;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v7 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6936);
    Object[1] = (PVOID)(v1 + 6960);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_17:
        Timeout = 0LL;
        if ( *(_QWORD *)(v1 + 7448) )
          Timeout = (LARGE_INTEGER *)(v1 + 7448);
        v13 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
        v37 = v13;
        v14 = v13;
        if ( v13 >= 2 )
          break;
LABEL_20:
        if ( !v14 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v15 = (unsigned __int64 *)(v1 + 6904);
          while ( 1 )
          {
            while ( 1 )
            {
              v16 = 0;
              v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 6864));
              v18 = *(__int64 **)(v1 + 6912);
              v19 = v17;
              if ( v18 == (__int64 *)v15 )
              {
                v29 = (unsigned __int64 *)(v1 + 6872);
                v30 = *(__int64 **)(v1 + 6880);
                if ( v30 == (__int64 *)(v1 + 6872) )
                {
                  if ( !*(_DWORD *)(v1 + 6928) )
                  {
                    v33 = *(unsigned __int8 *)(v1 + 6838);
                    v34 = *(_DWORD *)(v1 + 7584);
                    if ( (_BYTE)v33 != 4 )
                    {
                      v35 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                            + v33);
                      if ( v35 < v34 )
                        v35 = *(_DWORD *)(v1 + 7584);
                      v34 = v35;
                    }
                    if ( KeQueryPriorityThread(*(PKTHREAD *)(v1 + 7008)) > v34 )
                      KeSetActualBasePriorityThread(*(_QWORD *)(v1 + 7008));
                  }
                  v31 = (unsigned __int64 *)(v1 + 6888);
                  v32 = *(__int64 **)(v1 + 6896);
                  if ( v32 == (__int64 *)(v1 + 6888) )
                  {
                    v20 = 0LL;
                  }
                  else
                  {
                    v20 = (__int64 *)*v31;
                    *v31 = *(_QWORD *)*v31 & 0xFFFFFFFFFFFFFFF8uLL;
                    if ( v20 == v32 )
                    {
                      *(_QWORD *)(v1 + 6896) = v1 + 6888;
                      *v31 = 0LL;
                    }
                    else
                    {
                      *v32 = *v32 & 7 | (8 * ((unsigned __int64)*v32 >> 3) - 8);
                    }
                    if ( !--*(_DWORD *)(v1 + 6924)
                      && (*(_BYTE *)v20 & 7) == 6
                      && *(_BYTE *)(v1 + 6838)
                      && KeQueryPriorityThread(*(PKTHREAD *)(v1 + 7008)) > 4 )
                    {
                      KeSetActualBasePriorityThread(*(_QWORD *)(v1 + 7008));
                    }
                  }
                }
                else
                {
                  v20 = (__int64 *)*v29;
                  *v29 = *(_QWORD *)*v29 & 0xFFFFFFFFFFFFFFF8uLL;
                  if ( v20 == v30 )
                  {
                    *(_QWORD *)(v1 + 6880) = v1 + 6872;
                    *v29 = 0LL;
                  }
                  else
                  {
                    *v30 = *v30 & 7 | (8 * ((unsigned __int64)*v30 >> 3) - 8);
                  }
                  --*(_DWORD *)(v1 + 6920);
                }
              }
              else
              {
                v20 = (__int64 *)*v15;
                *v15 = *(_QWORD *)*v15 & 0xFFFFFFFFFFFFFFF8uLL;
                if ( v20 == v18 )
                {
                  *(_QWORD *)(v1 + 6912) = v1 + 6904;
                  *v15 = 0LL;
                }
                else
                {
                  *v18 = *v18 & 7 | (8 * ((unsigned __int64)*v18 >> 3) - 8);
                }
                v16 = 1;
                --*(_DWORD *)(v1 + 6924);
              }
              KxReleaseSpinLock(v1 + 6864);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v19);
              __writecr8(v19);
              if ( !v20 )
                goto LABEL_17;
              v10 = (*(_BYTE *)(v1 + 6837) & 4) == 0;
              Interval.QuadPart = 0LL;
              if ( !v10 )
              {
                v10 = *(_DWORD *)(v1 + 7440) == 0;
                v21 = 20;
                Interval.QuadPart = -150000LL;
                if ( !v10 )
                {
                  do
                  {
                    if ( !v21 )
                      break;
                    if ( *(_BYTE *)(v1 + 6838) < 3u )
                      break;
                    KeDelayExecutionThread(0, 0, &Interval);
                    --v21;
                  }
                  while ( *(_DWORD *)(v1 + 7440) );
                }
                v22 = KeGetCurrentThread();
                --v22->SpecialApcDisable;
                v23 = KeAbPreAcquire(v1 + 6840, 0LL, 0LL);
                v24 = v23;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 6840), 0LL) )
                  ExfAcquirePushLockExclusiveEx(v1 + 6840, v23, v1 + 6840);
                if ( v24 )
                  *(_BYTE *)(v24 + 10) = 1;
                ++*(_QWORD *)(v1 + 6856);
                *(_DWORD *)(v1 + 6848) = 1;
              }
              v25 = *(_BYTE *)(v1 + 6837);
              if ( (v25 & 1) == 0 || v16 )
                break;
              v27 = *((_DWORD *)v20 + 2);
              v37 = -1073741058;
              if ( v27 == 2 )
              {
                ExFreePoolWithTag(v20, 0);
              }
              else if ( v27 == 3 )
              {
                *(_DWORD *)(v1 + 6816) &= ~1u;
              }
LABEL_49:
              if ( (*(_BYTE *)(v1 + 6837) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 6840);
                KeAbPostRelease(v1 + 6840);
                v28 = KeGetCurrentThread();
                v10 = v28->SpecialApcDisable++ == -1;
                if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
                  KiCheckForKernelApcDelivery();
              }
            }
            if ( (v25 & 2) == 0 || (*(_DWORD *)v20 & 7) != 0 )
            {
              v37 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v20);
              if ( v37 == 259 )
                goto LABEL_49;
            }
            else
            {
              v37 = -1073741058;
            }
            if ( (*(_BYTE *)(v1 + 6837) & 4) != 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v1 + 6840);
              KeAbPostRelease(v1 + 6840);
              v26 = KeGetCurrentThread();
              v10 = v26->SpecialApcDisable++ == -1;
              if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
                KiCheckForKernelApcDelivery();
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(*(_QWORD *)(v1 + 7576), v1, v20, &v37);
          }
        }
        if ( v14 == 1 )
        {
          v3 = v38;
          goto LABEL_10;
        }
      }
      if ( v13 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        *(_QWORD *)(v1 + 6720) += *(_QWORD *)(v1 + 6712);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(
          v1 + 6536,
          MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
        SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
        v14 = 0;
        v37 = 0;
        goto LABEL_20;
      }
    }
  }
LABEL_10:
  if ( v3 )
  {
    MiReturnResident(
      *((_QWORD *)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)),
      26LL);
    *(_BYTE *)(v9 + 1448) &= ~4u;
    v10 = (*(_WORD *)(v9 + 486))++ == 0xFFFF;
    if ( v10 && *(_QWORD *)(v9 + 152) != v9 + 152 )
      KiCheckForKernelApcDelivery();
  }
  result = *(unsigned int *)(v1 + 7600);
  for ( v40.QuadPart = -150000LL; (_DWORD)result; result = *(unsigned int *)(v1 + 7600) )
    KeDelayExecutionThread(0, 0, &v40);
  return result;
}
