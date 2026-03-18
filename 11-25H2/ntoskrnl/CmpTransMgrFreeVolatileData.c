/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x140885884
 * Callers:
 *     CmpRmUnDoPhase @ 0x1407D12C0 (CmpRmUnDoPhase.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408671C0 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140AA384C (CmRmFinalizeRecovery.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x1404A3C08 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpInvalidateSubtree @ 0x1407CB81C (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407D1910 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407D1AFC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408653AC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     CmpMarkKeyUnbacked @ 0x140885038 (CmpMarkKeyUnbacked.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     CmpRebuildKcbCache @ 0x140885EF0 (CmpRebuildKcbCache.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140886E8C (CmpFreeValue.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDiscardKcb @ 0x1409DAB50 (CmpDiscardKcb.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  int v6; // ecx
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  ULONG_PTR v10; // rbx
  unsigned int v11; // edx
  ULONG_PTR v12; // rdx
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = 0LL;
  CmpInitializeDelayDerefContext(v13);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL) )
    {
      CmpLockRegistryExclusive();
      v5 = *(unsigned int *)(v4 + 68);
      if ( (_DWORD)v5 )
      {
        v6 = v5 - 4;
        if ( v6 && (v5 = (unsigned int)(v6 - 1), (_DWORD)v5) )
        {
          if ( (_DWORD)v5 == 4 )
          {
            v9 = *(_DWORD *)(v4 + 96);
            v10 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
            if ( (int)HvpMarkCellDirty(v10, v9, 1) >= 0 )
              CmpDereferenceSecurityNode(v10, v9);
          }
        }
        else
        {
          CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), *(unsigned int *)(v4 + 92));
        }
      }
      else
      {
        v12 = *(unsigned int *)(v4 + 88);
        if ( (unsigned int)(v12 - 1) <= 0xFFFFFFFD )
          CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v12);
      }
      CmpUnlockRegistry(v5);
    }
    CmpLockRegistryExclusive();
    v7 = *(_QWORD *)(v4 + 48);
    if ( *(_QWORD *)(v7 + 288) == BugCheckParameter2 )
    {
      v11 = *(_DWORD *)(v7 + 284);
      if ( v11 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v7 + 32), v11);
        *(_DWORD *)(v7 + 280) = 0;
        *(_DWORD *)(v7 + 284) = -1;
      }
      *(_QWORD *)(v7 + 288) = 0LL;
    }
    if ( CmEqualTrans(*(_QWORD *)(v7 + 240), BugCheckParameter2) && !*(_DWORD *)(v4 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v7, 6, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v7, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v7, 4, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v7, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v7, 8, 6, (int)v13);
        CmpInvalidateSubtree(v7, 8LL, 4, (__int64)v13, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v7, 8LL, (__int64)v13, 0);
        *(_WORD *)(v7 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v7, (__int64)v13);
        if ( (*(_DWORD *)(v7 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v7);
      }
      *(_QWORD *)(v7 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v7 + 40) != -1 )
    {
      if ( *(_QWORD *)(v7 + 32) )
        CmpRebuildKcbCache(v7);
    }
    CmpReferenceKeyControlBlockUnsafe(v7);
    CmpRundownUnitOfWork(v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
    CmpDereferenceKeyControlBlockWithLock(v7, (__int64)v13, 1);
    CmpDrainDelayDerefContext((_QWORD **)v13);
    CmpUnlockRegistry(v8);
  }
}
