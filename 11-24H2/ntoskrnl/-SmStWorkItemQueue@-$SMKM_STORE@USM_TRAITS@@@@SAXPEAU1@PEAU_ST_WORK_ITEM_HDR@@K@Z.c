/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402E21C4
 * Callers:
 *     SmWorkItemQueue @ 0x14029F5CC (SmWorkItemQueue.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7A24 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1404863F8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140491EE8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402E1B30 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // r15d
  __int64 v7; // rax
  __int64 v8; // rdi
  volatile signed __int64 *v9; // r13
  unsigned __int64 *v10; // r14
  KIRQL v11; // al
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // r12
  int v14; // r14d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // rax
  KPRIORITY v17; // edi
  KPRIORITY PriorityThread; // ebx
  KPRIORITY v19; // ecx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // r8

  v4 = *(_DWORD *)a2 & 7;
  if ( v4 != 2 || (*(_BYTE *)(a1 + 6837) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 6837) & 1) != 0 )
      return;
    if ( (a3 & 4) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 7600));
    if ( (a3 & 1) != 0 )
    {
      v7 = 6904LL;
    }
    else
    {
      if ( v4 == 2 && (*(_DWORD *)(a2 + 8) & 0x1000000) == 0 )
      {
        v8 = 6920LL;
        v7 = 6872LL;
LABEL_8:
        v9 = (volatile signed __int64 *)(a1 + 6864);
        v10 = (unsigned __int64 *)(v7 + a1);
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6864));
        v12 = (unsigned __int64 *)v10[1];
        v13 = v11;
        if ( (a3 & 2) != 0 )
        {
          v23 = *v12;
          *(_QWORD *)a2 = *v10 | *(_DWORD *)a2 & 7;
          v24 = (unsigned __int64 *)v10[1];
          v25 = v23 >> 3;
          *v10 = a2;
          if ( v24 == v10 )
          {
            v10[1] = a2;
            v24 = (unsigned __int64 *)a2;
          }
          *v24 = *(_DWORD *)v24 & 7 | (8 * v25 + 8);
        }
        else
        {
          *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((*v12 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
          *(_QWORD *)v10[1] = a2 | *(_DWORD *)v10[1] & 7;
          v10[1] = a2;
        }
        v14 = ++*(_DWORD *)(v8 + a1);
        KxReleaseSpinLock(v9);
        CurrentThread = KeGetCurrentThread();
        if ( (a3 & 4) != 0 )
          goto LABEL_20;
        v16 = *(unsigned __int8 *)(a1 + 6838);
        v17 = *(_DWORD *)(a1 + 7584);
        if ( (_BYTE)v16 != 4 )
        {
          v19 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                + v16);
          if ( v19 < v17 )
            v19 = *(_DWORD *)(a1 + 7584);
          v17 = v19;
        }
        if ( (a3 & 1) != 0 )
        {
          PriorityThread = 12;
        }
        else
        {
          if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
          {
LABEL_14:
            PriorityThread = v17;
LABEL_15:
            if ( PriorityThread > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 7008)) )
              KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 7008));
            if ( v14 == 1 )
              KeSetEvent((PRKEVENT)(a1 + 6936), 0, 0);
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 7600));
LABEL_20:
            if ( KiIrqlFlags )
            {
              LOBYTE(CurrentThread) = v13;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentThread);
            }
            __writecr8(v13);
            return;
          }
          PriorityThread = KeQueryPriorityThread(CurrentThread);
        }
        if ( PriorityThread > v17 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v7 = 6888LL;
    }
    v8 = 6924LL;
    goto LABEL_8;
  }
  if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead(a1, (__int128 *)a2) )
  {
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 7400));
    *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 7392) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    **(_QWORD **)(a1 + 7392) = a2 | **(_DWORD **)(a1 + 7392) & 7;
    *(_QWORD *)(a1 + 7392) = a2;
    v21 = *(_QWORD *)a2;
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 7400));
    if ( (v21 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      KeSetEvent((PRKEVENT)(a1 + 7360), 0, 0);
    if ( KiIrqlFlags )
    {
      LOBYTE(v22) = v20;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
    }
    __writecr8(v20);
  }
}
