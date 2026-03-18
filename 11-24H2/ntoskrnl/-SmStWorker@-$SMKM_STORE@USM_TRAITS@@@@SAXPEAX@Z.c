/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14049EDD0 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402098B8 (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140279D00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14027A4F0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E408 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C4E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C560 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14040DA18 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  struct _KTHREAD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  bool v18; // zf
  __int64 result; // rax
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v21; // eax
  NTSTATUS v22; // ecx
  unsigned __int64 *v23; // r14
  int v24; // r15d
  KIRQL v25; // al
  __int64 *v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 *v28; // rdi
  int v29; // esi
  struct _KTHREAD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _KTHREAD *v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD *v44; // rax
  unsigned __int64 *v45; // rcx
  __int64 *v46; // rdx
  unsigned __int64 *v47; // rcx
  __int64 *v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rax
  KPRIORITY v51; // edi
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // edx
  KPRIORITY v55; // ecx
  int v56; // ecx
  PVOID Object[3]; // [rsp+40h] [rbp-58h] BYREF
  int v58; // [rsp+A0h] [rbp+8h] BYREF
  int v59; // [rsp+A8h] [rbp+10h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+18h] BYREF
  LARGE_INTEGER v61; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *a1;
  v5 = 0;
  v61.QuadPart = 0LL;
  v59 = 0;
  _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 4u);
  CurrentThread = KeGetCurrentThread();
  v7 = *(unsigned __int8 *)(v3 + 6838);
  v8 = *(_DWORD *)(v3 + 7584);
  if ( (_BYTE)v7 == 4 )
    v9 = *(_DWORD *)(v3 + 7584);
  else
    v9 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v7);
  if ( v9 >= v8 )
    v8 = v9;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v8, a3);
  v10 = 0;
  v11 = 0;
  if ( (*(_BYTE *)(v3 + 6837) & 4) != 0 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)PsGetPagePriorityThread((__int64)CurrentThread) )
      PsSetPagePriorityThread((__int64)CurrentThread, 0);
    v12 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(
                         *((_QWORD *)qword_140E2FF88 + HIWORD(v12->ApcState.Process[2].ProcessListEntry.Blink)),
                         26LL,
                         1024LL) )
    {
      --v12->SpecialApcDisable;
      LOBYTE(v12[1].Queue) |= 4u;
    }
    else
    {
      v5 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    v10 = v5;
    v11 = v5;
    v5 = v5 >= 0;
    v59 = v5;
  }
  *((_DWORD *)a1 + 8) = v10;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v11 >= 0 )
  {
    Object[0] = (PVOID)(v3 + 6936);
    Object[1] = (PVOID)(v3 + 6960);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_22:
        Timeout = 0LL;
        if ( *(_QWORD *)(v3 + 7448) )
          Timeout = (LARGE_INTEGER *)(v3 + 7448);
        v21 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
        v58 = v21;
        v22 = v21;
        if ( v21 >= 2 )
          break;
LABEL_25:
        if ( !v22 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v23 = (unsigned __int64 *)(v3 + 6904);
          while ( 1 )
          {
            while ( 1 )
            {
              v24 = 0;
              v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 6864));
              v26 = *(__int64 **)(v3 + 6912);
              v27 = v25;
              if ( v26 == (__int64 *)v23 )
              {
                v45 = (unsigned __int64 *)(v3 + 6872);
                v46 = *(__int64 **)(v3 + 6880);
                if ( v46 == (__int64 *)(v3 + 6872) )
                {
                  if ( !*(_DWORD *)(v3 + 6928) )
                  {
                    v50 = *(unsigned __int8 *)(v3 + 6838);
                    v51 = *(_DWORD *)(v3 + 7584);
                    if ( (_BYTE)v50 != 4 )
                    {
                      v55 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                            + v50);
                      if ( v55 < v51 )
                        v55 = *(_DWORD *)(v3 + 7584);
                      v51 = v55;
                    }
                    if ( KeQueryPriorityThread(*(PKTHREAD *)(v3 + 7008)) > v51 )
                    {
                      v53 = *(unsigned __int8 *)(v3 + 6838);
                      v54 = *(_DWORD *)(v3 + 7584);
                      if ( (_BYTE)v53 != 4 )
                      {
                        v56 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                              + v53);
                        if ( v56 < v54 )
                          v56 = *(_DWORD *)(v3 + 7584);
                        v54 = v56;
                      }
                      KeSetActualBasePriorityThread(*(_QWORD *)(v3 + 7008), v54, v52);
                    }
                  }
                  v47 = (unsigned __int64 *)(v3 + 6888);
                  v48 = *(__int64 **)(v3 + 6896);
                  if ( v48 == (__int64 *)(v3 + 6888) )
                  {
                    v28 = 0LL;
                  }
                  else
                  {
                    v28 = (__int64 *)*v47;
                    *v47 = *(_QWORD *)*v47 & 0xFFFFFFFFFFFFFFF8uLL;
                    if ( v28 == v48 )
                    {
                      *(_QWORD *)(v3 + 6896) = v3 + 6888;
                      *v47 = 0LL;
                    }
                    else
                    {
                      *v48 = *v48 & 7 | (8 * ((unsigned __int64)*v48 >> 3) - 8);
                    }
                    if ( !--*(_DWORD *)(v3 + 6924)
                      && (*(_BYTE *)v28 & 7) == 6
                      && *(_BYTE *)(v3 + 6838)
                      && KeQueryPriorityThread(*(PKTHREAD *)(v3 + 7008)) > 4 )
                    {
                      KeSetActualBasePriorityThread(*(_QWORD *)(v3 + 7008), 4, v49);
                    }
                  }
                }
                else
                {
                  v28 = (__int64 *)*v45;
                  *v45 = *(_QWORD *)*v45 & 0xFFFFFFFFFFFFFFF8uLL;
                  if ( v28 == v46 )
                  {
                    *(_QWORD *)(v3 + 6880) = v3 + 6872;
                    *v45 = 0LL;
                  }
                  else
                  {
                    *v46 = *v46 & 7 | (8 * ((unsigned __int64)*v46 >> 3) - 8);
                  }
                  --*(_DWORD *)(v3 + 6920);
                }
              }
              else
              {
                v28 = (__int64 *)*v23;
                *v23 = *(_QWORD *)*v23 & 0xFFFFFFFFFFFFFFF8uLL;
                if ( v28 == v26 )
                {
                  *(_QWORD *)(v3 + 6912) = v3 + 6904;
                  *v23 = 0LL;
                }
                else
                {
                  *v26 = *v26 & 7 | (8 * ((unsigned __int64)*v26 >> 3) - 8);
                }
                v24 = 1;
                --*(_DWORD *)(v3 + 6924);
              }
              KxReleaseSpinLock(v3 + 6864);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v27);
              __writecr8(v27);
              if ( !v28 )
                goto LABEL_22;
              v18 = (*(_BYTE *)(v3 + 6837) & 4) == 0;
              Interval.QuadPart = 0LL;
              if ( !v18 )
              {
                v18 = *(_DWORD *)(v3 + 7440) == 0;
                v29 = 20;
                Interval.QuadPart = -150000LL;
                if ( !v18 )
                {
                  do
                  {
                    if ( !v29 )
                      break;
                    if ( *(_BYTE *)(v3 + 6838) < 3u )
                      break;
                    KeDelayExecutionThread(0, 0, &Interval);
                    --v29;
                  }
                  while ( *(_DWORD *)(v3 + 7440) );
                }
                v30 = KeGetCurrentThread();
                --v30->SpecialApcDisable;
                v31 = KeAbPreAcquire(v3 + 6840, 0LL, 0LL);
                v32 = v31;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 6840), 0LL) )
                  ExfAcquirePushLockExclusiveEx(v3 + 6840, v31, v3 + 6840);
                if ( v32 )
                  *(_BYTE *)(v32 + 10) = 1;
                ++*(_QWORD *)(v3 + 6856);
                *(_DWORD *)(v3 + 6848) = 1;
              }
              v33 = *(_BYTE *)(v3 + 6837);
              if ( (v33 & 1) == 0 || v24 )
                break;
              v39 = *((_DWORD *)v28 + 2);
              v58 = -1073741058;
              if ( v39 == 2 )
              {
                ExFreePoolWithTag(v28, 0);
              }
              else if ( v39 == 3 )
              {
                *(_DWORD *)(v3 + 6816) &= ~1u;
              }
LABEL_54:
              if ( (*(_BYTE *)(v3 + 6837) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 6840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 6840));
                KeAbPostRelease(v3 + 6840);
                v44 = KeGetCurrentThread();
                v18 = v44->SpecialApcDisable++ == -1;
                if ( v18 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
                  KiCheckForKernelApcDelivery(v41, v40, v42, v43);
              }
            }
            if ( (v33 & 2) == 0 || (*(_DWORD *)v28 & 7) != 0 )
            {
              v58 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v3, v28);
              if ( v58 == 259 )
                goto LABEL_54;
            }
            else
            {
              v58 = -1073741058;
            }
            if ( (*(_BYTE *)(v3 + 6837) & 4) != 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 6840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 6840));
              KeAbPostRelease(v3 + 6840);
              v38 = KeGetCurrentThread();
              v18 = v38->SpecialApcDisable++ == -1;
              if ( v18 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
                KiCheckForKernelApcDelivery(v35, v34, v36, v37);
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(*(_QWORD *)(v3 + 7576), v3, v28, &v58);
          }
        }
        if ( v22 == 1 )
        {
          v5 = v59;
          goto LABEL_14;
        }
      }
      if ( v21 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v3);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v3);
        *(_QWORD *)(v3 + 6720) += *(_QWORD *)(v3 + 6712);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(
          v3 + 6536,
          MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
        SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v3);
        v22 = 0;
        v58 = 0;
        goto LABEL_25;
      }
    }
  }
LABEL_14:
  if ( v5 )
  {
    MiReturnResident(
      *((_QWORD *)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)),
      0x1AuLL);
    *(_BYTE *)(v17 + 1448) &= ~4u;
    v18 = (*(_WORD *)(v17 + 486))++ == 0xFFFF;
    if ( v18 && *(_QWORD *)(v17 + 152) != v17 + 152 )
      KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  }
  result = *(unsigned int *)(v3 + 7600);
  for ( v61.QuadPart = -150000LL; (_DWORD)result; result = *(unsigned int *)(v3 + 7600) )
    KeDelayExecutionThread(0, 0, &v61);
  return result;
}
