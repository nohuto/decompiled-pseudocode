/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1402F4DDC
 * Callers:
 *     MiFlushAllStoreSwapPages @ 0x1402611E0 (MiFlushAllStoreSwapPages.c)
 *     MiFlushAllPagesWorker @ 0x140263A34 (MiFlushAllPagesWorker.c)
 *     MiAdjustModifiedPageLoad @ 0x140353ADC (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KiIsThreadRankNonZero @ 0x1402F4FE0 (KiIsThreadRankNonZero.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402F5124 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402F51E0 (MiGetAvailablePagesBelowPriority.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402F5EA4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1404608A4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

__int64 __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  _DWORD *v1; // r14
  unsigned int v3; // ebx
  KIRQL v4; // r13
  unsigned __int64 v5; // rsi
  int v6; // r15d
  int v7; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r12
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rdi
  signed __int32 v17[22]; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  v1 = (_DWORD *)(a1 + 1704);
  v3 = 0;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1704));
  if ( !*(_DWORD *)(a1 + 1356) )
  {
    v5 = *(_QWORD *)(a1 + 18688);
    v18 = MiUseLowIoPriorityForModifiedPages(a1);
    if ( v5 < 0xA0 )
    {
      v10 = 0;
      v7 = 18;
      v6 = 1;
    }
    else
    {
      v6 = 0;
      if ( v5 < 0x420 )
      {
        v10 = 1;
        v7 = 18;
      }
      else
      {
        v7 = 8;
        AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
        if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 17600) + 320LL) )
        {
          v10 = 2;
        }
        else
        {
          v9 = *(_QWORD *)(a1 + 19616);
          if ( v9 >= AvailablePagesBelowPriority + 0x2000 )
            v10 = (v9 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
          else
            v10 = 4;
        }
      }
    }
    v11 = *(_QWORD *)(a1 + 1320);
    v12 = (unsigned __int8)KiIsThreadRankNonZero(v11, 0LL) == 0;
    v13 = 1;
    if ( v12 )
      v13 = *(char *)(v11 + 563);
    if ( v13 != v7 )
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1320));
    if ( v6 )
      KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
    if ( *(unsigned __int8 *)(v14 + 2200) != v10 || !v10 || *(_BYTE *)(v14 + 2201) != (v18 == 0) )
    {
      *(_BYTE *)(v14 + 2200) = v10;
      *(_BYTE *)(v14 + 2201) = v18 == 0;
      _InterlockedOr(v17, 0);
      SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(v14, v10, v18 == 0);
      if ( !v10 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
        if ( *(_DWORD *)(v16 + 2004) )
        {
          do
            SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(*(_QWORD *)(v16 + 1296) + 16LL * v3++, 0LL);
          while ( v3 < *(_DWORD *)(v16 + 2004) );
        }
      }
    }
  }
  return MiReleaseSpinLockExclusive(v1, v4);
}
