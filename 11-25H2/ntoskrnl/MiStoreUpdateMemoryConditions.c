/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1403C1B60
 * Callers:
 *     MiFlushAllPagesWorker @ 0x1403A75B4 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiFlushAllStoreSwapPages @ 0x1403C1088 (MiFlushAllStoreSwapPages.c)
 *     MiAdjustModifiedPageLoad @ 0x14049364C (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140208210 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KiIsThreadRankNonZero @ 0x1403C1D60 (KiIsThreadRankNonZero.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403C1F98 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403C2290 (MiGetAvailablePagesBelowPriority.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140469924 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
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
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rdi
  signed __int32 v19[22]; // [rsp+0h] [rbp-58h] BYREF
  int v20; // [rsp+68h] [rbp+10h]

  v1 = (_DWORD *)(a1 + 1704);
  v3 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1704));
  if ( !*(_DWORD *)(a1 + 1356) )
  {
    v7 = *(_QWORD *)(a1 + 18688);
    v20 = MiUseLowIoPriorityForModifiedPages(a1, v4, v5);
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
    v15 = 1;
    if ( v14 )
      v15 = *(char *)(v13 + 563);
    if ( v15 != v9 )
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1320), v9);
    if ( v8 )
      KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
    if ( *(unsigned __int8 *)(v16 + 2200) != v12 || !v12 || *(_BYTE *)(v16 + 2201) != (v20 == 0) )
    {
      *(_BYTE *)(v16 + 2200) = v12;
      *(_BYTE *)(v16 + 2201) = v20 == 0;
      _InterlockedOr(v19, 0);
      SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(v16, v12);
      if ( !v12 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
        if ( *(_DWORD *)(v18 + 2004) )
        {
          do
            SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(*(_QWORD *)(v18 + 1296) + 16LL * v3++, 0LL);
          while ( v3 < *(_DWORD *)(v18 + 2004) );
        }
      }
    }
  }
  return MiReleaseSpinLockExclusive(v1, v6);
}
