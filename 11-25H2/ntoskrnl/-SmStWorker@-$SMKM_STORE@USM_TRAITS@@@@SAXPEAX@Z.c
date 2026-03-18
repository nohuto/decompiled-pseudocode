/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14049FE80 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CE38 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CEB0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PsSetPagePriorityThread @ 0x14020E16C (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14034A720 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14034AF20 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     KeQueryPriorityThread @ 0x140375500 (KeQueryPriorityThread.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396608 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14040602C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  struct _KTHREAD *v10; // rbp
  __int64 v11; // r11
  bool v12; // zf
  __int64 result; // rax
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // ecx
  unsigned __int64 *v17; // r14
  int v18; // r15d
  KIRQL v19; // al
  __int64 *v20; // rdx
  unsigned __int64 v21; // rsi
  __int64 *v22; // rdi
  int v23; // esi
  struct _KTHREAD *v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rsi
  char v27; // al
  struct _KTHREAD *v28; // rax
  int v29; // eax
  struct _KTHREAD *v30; // rax
  unsigned __int64 *v31; // rcx
  __int64 *v32; // rdx
  unsigned __int64 *v33; // rcx
  __int64 *v34; // rdx
  __int64 v35; // rax
  KPRIORITY v36; // edi
  __int64 v37; // rax
  int v38; // edx
  KPRIORITY v39; // ecx
  int v40; // ecx
  PVOID Object[3]; // [rsp+40h] [rbp-58h] BYREF
  int v42; // [rsp+A0h] [rbp+8h] BYREF
  int v43; // [rsp+A8h] [rbp+10h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+18h] BYREF
  LARGE_INTEGER v45; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = 0;
  v45.QuadPart = 0LL;
  v43 = 0;
  _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 4u);
  CurrentThread = KeGetCurrentThread();
  v5 = *(unsigned __int8 *)(v1 + 6838);
  v6 = *(_DWORD *)(v1 + 7584);
  if ( (_BYTE)v5 == 4 )
    v7 = *(_DWORD *)(v1 + 7584);
  else
    v7 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v5);
  if ( v7 >= v6 )
    v6 = v7;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v6);
  v8 = 0;
  v9 = 0;
  if ( (*(_BYTE *)(v1 + 6837) & 4) != 0 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)PsGetPagePriorityThread((__int64)CurrentThread) )
      PsSetPagePriorityThread((__int64)CurrentThread, 0);
    v10 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(
                         *((ULONG **)qword_140E2FD48 + HIWORD(v10->ApcState.Process[2].ProcessListEntry.Blink)),
                         0x1AuLL,
                         1024LL) )
    {
      --v10->SpecialApcDisable;
      LOBYTE(v10[1].Queue) |= 4u;
    }
    else
    {
      v3 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    v8 = v3;
    v9 = v3;
    v3 = v3 >= 0;
    v43 = v3;
  }
  *(_DWORD *)(a1 + 32) = v8;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v9 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6936);
    Object[1] = (PVOID)(v1 + 6960);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_22:
        Timeout = 0LL;
        if ( *(_QWORD *)(v1 + 7448) )
          Timeout = (LARGE_INTEGER *)(v1 + 7448);
        v15 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
        v42 = v15;
        v16 = v15;
        if ( v15 >= 2 )
          break;
LABEL_25:
        if ( !v16 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v17 = (unsigned __int64 *)(v1 + 6904);
          while ( 1 )
          {
            while ( 1 )
            {
              v18 = 0;
              v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 6864));
              v20 = *(__int64 **)(v1 + 6912);
              v21 = v19;
              if ( v20 == (__int64 *)v17 )
              {
                v31 = (unsigned __int64 *)(v1 + 6872);
                v32 = *(__int64 **)(v1 + 6880);
                if ( v32 == (__int64 *)(v1 + 6872) )
                {
                  if ( !*(_DWORD *)(v1 + 6928) )
                  {
                    v35 = *(unsigned __int8 *)(v1 + 6838);
                    v36 = *(_DWORD *)(v1 + 7584);
                    if ( (_BYTE)v35 != 4 )
                    {
                      v39 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                            + v35);
                      if ( v39 < v36 )
                        v39 = *(_DWORD *)(v1 + 7584);
                      v36 = v39;
                    }
                    if ( KeQueryPriorityThread(*(PKTHREAD *)(v1 + 7008)) > v36 )
                    {
                      v37 = *(unsigned __int8 *)(v1 + 6838);
                      v38 = *(_DWORD *)(v1 + 7584);
                      if ( (_BYTE)v37 != 4 )
                      {
                        v40 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                              + v37);
                        if ( v40 < v38 )
                          v40 = *(_DWORD *)(v1 + 7584);
                        v38 = v40;
                      }
                      KeSetActualBasePriorityThread(*(_QWORD *)(v1 + 7008), v38);
                    }
                  }
                  v33 = (unsigned __int64 *)(v1 + 6888);
                  v34 = *(__int64 **)(v1 + 6896);
                  if ( v34 == (__int64 *)(v1 + 6888) )
                  {
                    v22 = 0LL;
                  }
                  else
                  {
                    v22 = (__int64 *)*v33;
                    *v33 = *(_QWORD *)*v33 & 0xFFFFFFFFFFFFFFF8uLL;
                    if ( v22 == v34 )
                    {
                      *(_QWORD *)(v1 + 6896) = v1 + 6888;
                      *v33 = 0LL;
                    }
                    else
                    {
                      *v34 = *v34 & 7 | (8 * ((unsigned __int64)*v34 >> 3) - 8);
                    }
                    if ( !--*(_DWORD *)(v1 + 6924)
                      && (*(_BYTE *)v22 & 7) == 6
                      && *(_BYTE *)(v1 + 6838)
                      && KeQueryPriorityThread(*(PKTHREAD *)(v1 + 7008)) > 4 )
                    {
                      KeSetActualBasePriorityThread(*(_QWORD *)(v1 + 7008), 4);
                    }
                  }
                }
                else
                {
                  v22 = (__int64 *)*v31;
                  *v31 = *(_QWORD *)*v31 & 0xFFFFFFFFFFFFFFF8uLL;
                  if ( v22 == v32 )
                  {
                    *(_QWORD *)(v1 + 6880) = v1 + 6872;
                    *v31 = 0LL;
                  }
                  else
                  {
                    *v32 = *v32 & 7 | (8 * ((unsigned __int64)*v32 >> 3) - 8);
                  }
                  --*(_DWORD *)(v1 + 6920);
                }
              }
              else
              {
                v22 = (__int64 *)*v17;
                *v17 = *(_QWORD *)*v17 & 0xFFFFFFFFFFFFFFF8uLL;
                if ( v22 == v20 )
                {
                  *(_QWORD *)(v1 + 6912) = v1 + 6904;
                  *v17 = 0LL;
                }
                else
                {
                  *v20 = *v20 & 7 | (8 * ((unsigned __int64)*v20 >> 3) - 8);
                }
                v18 = 1;
                --*(_DWORD *)(v1 + 6924);
              }
              KxReleaseSpinLock(v1 + 6864);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v21);
              __writecr8(v21);
              if ( !v22 )
                goto LABEL_22;
              v12 = (*(_BYTE *)(v1 + 6837) & 4) == 0;
              Interval.QuadPart = 0LL;
              if ( !v12 )
              {
                v12 = *(_DWORD *)(v1 + 7440) == 0;
                v23 = 20;
                Interval.QuadPart = -150000LL;
                if ( !v12 )
                {
                  do
                  {
                    if ( !v23 )
                      break;
                    if ( *(_BYTE *)(v1 + 6838) < 3u )
                      break;
                    KeDelayExecutionThread(0, 0, &Interval);
                    --v23;
                  }
                  while ( *(_DWORD *)(v1 + 7440) );
                }
                v24 = KeGetCurrentThread();
                --v24->SpecialApcDisable;
                v25 = KeAbPreAcquire(v1 + 6840, 0LL);
                v26 = v25;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 6840), 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 6840), v25, v1 + 6840);
                if ( v26 )
                  *((_BYTE *)v26 + 10) = 1;
                ++*(_QWORD *)(v1 + 6856);
                *(_DWORD *)(v1 + 6848) = 1;
              }
              v27 = *(_BYTE *)(v1 + 6837);
              if ( (v27 & 1) == 0 || v18 )
                break;
              v29 = *((_DWORD *)v22 + 2);
              v42 = -1073741058;
              if ( v29 == 2 )
              {
                ExFreePoolWithTag(v22, 0);
              }
              else if ( v29 == 3 )
              {
                *(_DWORD *)(v1 + 6816) &= ~1u;
              }
LABEL_54:
              if ( (*(_BYTE *)(v1 + 6837) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 6840);
                KeAbPostRelease(v1 + 6840);
                v30 = KeGetCurrentThread();
                v12 = v30->SpecialApcDisable++ == -1;
                if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
                  KiCheckForKernelApcDelivery();
              }
            }
            if ( (v27 & 2) == 0 || (*(_DWORD *)v22 & 7) != 0 )
            {
              v42 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v22);
              if ( v42 == 259 )
                goto LABEL_54;
            }
            else
            {
              v42 = -1073741058;
            }
            if ( (*(_BYTE *)(v1 + 6837) & 4) != 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v1 + 6840);
              KeAbPostRelease(v1 + 6840);
              v28 = KeGetCurrentThread();
              v12 = v28->SpecialApcDisable++ == -1;
              if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
                KiCheckForKernelApcDelivery();
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(*(_QWORD *)(v1 + 7576), v1, v22, &v42);
          }
        }
        if ( v16 == 1 )
        {
          v3 = v43;
          goto LABEL_14;
        }
      }
      if ( v15 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        *(_QWORD *)(v1 + 6720) += *(_QWORD *)(v1 + 6712);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(
          v1 + 6536,
          MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
        SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
        v16 = 0;
        v42 = 0;
        goto LABEL_25;
      }
    }
  }
LABEL_14:
  if ( v3 )
  {
    MiReturnResident(
      *((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)),
      0x1AuLL);
    *(_BYTE *)(v11 + 1448) &= ~4u;
    v12 = (*(_WORD *)(v11 + 486))++ == 0xFFFF;
    if ( v12 && *(_QWORD *)(v11 + 152) != v11 + 152 )
      KiCheckForKernelApcDelivery();
  }
  result = *(unsigned int *)(v1 + 7600);
  for ( v45.QuadPart = -150000LL; (_DWORD)result; result = *(unsigned int *)(v1 + 7600) )
    KeDelayExecutionThread(0, 0, &v45);
  return result;
}
