/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1402D10D4
 * Callers:
 *     MiFlushAllPagesWorker @ 0x1402CF240 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiFlushAllStoreSwapPages @ 0x1402D01D8 (MiFlushAllStoreSwapPages.c)
 *     MiAdjustModifiedPageLoad @ 0x1402D2864 (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140246B84 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KiIsThreadRankNonZero @ 0x1402D12D0 (KiIsThreadRankNonZero.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402D1508 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402D15D0 (MiGetAvailablePagesBelowPriority.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140467EF4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

__int64 __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  _DWORD *v1; // r14
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  KIRQL v6; // r13
  unsigned __int64 v7; // rsi
  int v8; // r15d
  int v9; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // r12
  bool v14; // zf
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // rdi
  signed __int32 v20[22]; // [rsp+0h] [rbp-58h] BYREF
  int v21; // [rsp+68h] [rbp+10h]

  v1 = (_DWORD *)(a1 + 1704);
  v3 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1704));
  if ( !*(_DWORD *)(a1 + 1356) )
  {
    v7 = *(_QWORD *)(a1 + 18688);
    v21 = MiUseLowIoPriorityForModifiedPages(a1, v4, v5);
    if ( v7 < 0xA0 )
    {
      v12 = 0;
      v9 = 18;
      v8 = 1;
    }
    else
    {
      v8 = 0;
      if ( v7 < 0x420 )
      {
        v12 = 1;
        v9 = 18;
      }
      else
      {
        v9 = 8;
        AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
        if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 17600) + 320LL) )
        {
          v12 = 2;
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 19616);
          if ( v11 >= AvailablePagesBelowPriority + 0x2000 )
            v12 = (v11 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
          else
            v12 = 4;
        }
      }
    }
    v13 = *(_QWORD *)(a1 + 1320);
    v14 = (unsigned __int8)KiIsThreadRankNonZero(v13, 0LL) == 0;
    v16 = 1;
    if ( v14 )
      v16 = *(char *)(v13 + 563);
    if ( v16 != v9 )
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1320), v9, v15);
    if ( v8 )
      KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
    if ( *(unsigned __int8 *)(v17 + 2200) != v12 || !v12 || *(_BYTE *)(v17 + 2201) != (v21 == 0) )
    {
      *(_BYTE *)(v17 + 2200) = v12;
      *(_BYTE *)(v17 + 2201) = v21 == 0;
      _InterlockedOr(v20, 0);
      SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(v17, v12);
      if ( !v12 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
        if ( *(_DWORD *)(v19 + 2004) )
        {
          do
            SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(*(_QWORD *)(v19 + 1296) + 16LL * v3++, 0LL);
          while ( v3 < *(_DWORD *)(v19 + 2004) );
        }
      }
    }
  }
  return MiReleaseSpinLockExclusive(v1, v6);
}
