/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x14087F134
 * Callers:
 *     CmpRmUnDoPhase @ 0x1407E10E8 (CmpRmUnDoPhase.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A028D0 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140AA3958 (CmRmFinalizeRecovery.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x140496BD8 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpInvalidateSubtree @ 0x1407DB530 (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407E1740 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E192C (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpRebuildKcbCache @ 0x14087F358 (CmpRebuildKcbCache.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1409644C4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  _OWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF

  v14[0] = 0LL;
  CmpInitializeDelayDerefContext(v14);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL) )
    {
      CmpLockRegistryExclusive(v4);
      v6 = *(unsigned int *)(v5 + 68);
      if ( (_DWORD)v6 )
      {
        v7 = v6 - 4;
        if ( v7 && (v6 = (unsigned int)(v7 - 1), (_DWORD)v6) )
        {
          if ( (_DWORD)v6 == 4 )
          {
            v10 = *(_DWORD *)(v5 + 96);
            v11 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL);
            if ( (int)HvpMarkCellDirty(v11, v10, 1) >= 0 )
              CmpDereferenceSecurityNode(v11, v10);
          }
        }
        else
        {
          CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL), *(unsigned int *)(v5 + 92));
        }
      }
      else
      {
        v13 = *(unsigned int *)(v5 + 88);
        if ( (unsigned int)(v13 - 1) <= 0xFFFFFFFD )
          CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL), v13);
      }
      CmpUnlockRegistry(v6);
    }
    CmpLockRegistryExclusive(v4);
    v8 = *(_QWORD *)(v5 + 48);
    if ( *(_QWORD *)(v8 + 288) == BugCheckParameter2 )
    {
      v12 = *(unsigned int *)(v8 + 284);
      if ( (_DWORD)v12 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v8 + 32), v12);
        *(_DWORD *)(v8 + 280) = 0;
        *(_DWORD *)(v8 + 284) = -1;
      }
      *(_QWORD *)(v8 + 288) = 0LL;
    }
    if ( CmEqualTrans(*(_QWORD *)(v8 + 240), BugCheckParameter2) && !*(_DWORD *)(v5 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v8, 6, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v8, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v8, 4LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v8, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v8, 8, 6, (int)v14);
        CmpInvalidateSubtree(v8, 8LL, 4, (__int64)v14, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v8, 8, (__int64)v14, 0);
        *(_WORD *)(v8 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v8, v14);
        if ( (*(_DWORD *)(v8 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v8);
      }
      *(_QWORD *)(v8 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v8 + 40) != -1 )
    {
      if ( *(_QWORD *)(v8 + 32) )
        CmpRebuildKcbCache(v8);
    }
    CmpReferenceKeyControlBlockUnsafe(v8);
    CmpRundownUnitOfWork((_QWORD *)v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
    CmpDereferenceKeyControlBlockWithLock(v8);
    CmpDrainDelayDerefContext((_QWORD **)v14);
    CmpUnlockRegistry(v9);
  }
}
