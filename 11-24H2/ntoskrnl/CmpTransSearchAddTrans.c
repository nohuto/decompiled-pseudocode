/*
 * XREFs of CmpTransSearchAddTrans @ 0x14087E39C
 * Callers:
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransInitializeTransaction @ 0x140A00648 (CmpTransInitializeTransaction.c)
 *     CmpTransSearchAddTransFromRm @ 0x140A41F84 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     CmpTransReferenceTransaction @ 0x14087D3B8 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14087D58C (CmpTransDereferenceTransaction.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     CmpSearchForTrans @ 0x14087F05C (CmpSearchForTrans.c)
 *     CmpBindHiveToTrans @ 0x14087F0D8 (CmpBindHiveToTrans.c)
 *     CmpTransInitializeTransaction @ 0x140A00648 (CmpTransInitializeTransaction.c)
 *     CmpTransAllocateTrans @ 0x140A78D9C (CmpTransAllocateTrans.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *Trans; // rsi
  int v7; // r12d
  int v12; // edi
  int v13; // edi
  int v14; // r14d
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v20; // al
  __int64 v21; // rdx
  _QWORD *v22; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp+8h] BYREF

  Trans = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = CmpTransReferenceTransaction(a1);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = a5;
  v14 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      LOCK_TRANSACTION_LIST();
      v15 = CmpSearchForTrans(a3, a1, a2);
      if ( !v15 )
      {
        if ( !v13 )
          goto LABEL_25;
        break;
      }
      if ( a1 && (*(_DWORD *)(v15 + 48) & 7) != 0 )
      {
LABEL_25:
        v12 = -1072103422;
        if ( Trans )
          goto LABEL_37;
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(v15 + 48) & 8) == 0 )
        break;
      if ( !v13 )
        goto LABEL_25;
      v24 = CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      ExBlockOnAddressPushLock(&CmpTransactionInitializingEvent, &CmpTransactionInitializingCount, &v24, 4LL, 0LL);
    }
    if ( Trans )
      break;
    if ( v15 )
    {
      CmpBindHiveToTrans(a4, v15);
LABEL_11:
      v12 = 0;
      *a6 = v16;
      goto LABEL_12;
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    Trans = (_QWORD *)CmpTransAllocateTrans(a1, a2, a3, a4);
    if ( !Trans )
    {
      v12 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( *(_QWORD *)(a3 + 80) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v20 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 1640LL));
    v7 = v20;
    if ( !v20 )
    {
      v12 = -1073741431;
      goto LABEL_37;
    }
  }
  v18 = *(_QWORD **)(a3 + 24);
  if ( *v18 != a3 + 16 )
    goto LABEL_21;
  Trans[1] = v18;
  *Trans = a3 + 16;
  *v18 = Trans;
  *(_QWORD *)(a3 + 24) = Trans;
  ++CmpTransactionInitializingCount;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v14 = 0;
  v12 = CmpTransInitializeTransaction(Trans);
  if ( v12 >= 0 )
  {
    v16 = Trans;
    goto LABEL_11;
  }
  LOCK_TRANSACTION_LIST();
  v21 = *Trans;
  if ( *(_QWORD **)(*Trans + 8LL) != Trans || (v22 = (_QWORD *)Trans[1], (_QWORD *)*v22 != Trans) )
LABEL_21:
    __fastfail(3u);
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  --CmpTransactionInitializingCount;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  _InterlockedOr(v23, 0);
  if ( CmpTransactionInitializingEvent )
    ExfUnblockPushLock((__int64)&CmpTransactionInitializingEvent, 0LL);
LABEL_37:
  ExFreePoolWithTag(Trans, 0x72544D43u);
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection_0(a4 + 205);
    KeLeaveCriticalRegion();
  }
  if ( v14 )
  {
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
  }
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}
