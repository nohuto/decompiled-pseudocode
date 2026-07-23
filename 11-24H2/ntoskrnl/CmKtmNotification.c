/*
 * XREFs of CmKtmNotification @ 0x140A00E10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     TmCommitComplete @ 0x1404F9C10 (TmCommitComplete.c)
 *     TmDereferenceEnlistmentKey @ 0x1404F9CB0 (TmDereferenceEnlistmentKey.c)
 *     TmPrepareComplete @ 0x1404F9DF0 (TmPrepareComplete.c)
 *     TmReadOnlyEnlistment @ 0x1404F9E70 (TmReadOnlyEnlistment.c)
 *     TmReferenceEnlistmentKey @ 0x1404F9EF0 (TmReferenceEnlistmentKey.c)
 *     TmRollbackComplete @ 0x1404F9F50 (TmRollbackComplete.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpRecoverEnlistment @ 0x1407E0794 (CmpRecoverEnlistment.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 *     CmpTransMgrCommit @ 0x140A008C8 (CmpTransMgrCommit.c)
 *     CmpIsCmRm @ 0x140A01338 (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmLogTmRmAction @ 0x140A015A0 (CmLogTmRmAction.c)
 *     CmpAccountForLogReservation @ 0x140A016A4 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x140A02990 (CmpTransMgrRollback.c)
 */

__int64 __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        GUID *Argument)
{
  char v8; // r13
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  int v13; // eax
  ULONG_PTR v14; // rcx
  char v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  PVOID v20; // rcx
  NTSTATUS v21; // eax
  char v22; // r15
  NTSTATUS OnlyEnlistment; // eax
  NTSTATUS v25; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v27; // [rsp+40h] [rbp-81h] BYREF
  char v28; // [rsp+41h] [rbp-80h]
  char v29; // [rsp+42h] [rbp-7Fh]
  PVOID Key; // [rsp+48h] [rbp-79h] BYREF
  int v31; // [rsp+50h] [rbp-71h] BYREF
  int v32; // [rsp+54h] [rbp-6Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h]
  __int128 v35; // [rsp+78h] [rbp-49h] BYREF
  __int64 v36; // [rsp+88h] [rbp-39h]
  __int128 v37; // [rsp+90h] [rbp-31h]
  _OWORD v38[2]; // [rsp+A0h] [rbp-21h] BYREF

  Key = 0LL;
  Handle = 0LL;
  v36 = 0LL;
  v29 = 0;
  v27 = 0;
  v35 = 0LL;
  v31 = 0;
  v8 = 0;
  v37 = 0LL;
  UnicodeString = 0LL;
  v28 = 1;
  memset(v38, 0, sizeof(v38));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v35);
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
  {
    v12 = -1073741811;
    goto LABEL_35;
  }
  if ( (RMContext[26] & 8) != 0 )
    goto LABEL_61;
  if ( TransactionNotification == 256 )
  {
    v25 = CmpRecoverEnlistment((__int64)RMContext, v11, Argument);
    goto LABEL_69;
  }
  if ( (TransactionNotification & 0xE) == 0 )
  {
LABEL_61:
    v12 = 0;
    goto LABEL_35;
  }
  v12 = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  if ( v12 )
    goto LABEL_35;
  LOCK_TRANSACTION_LIST();
  v13 = *((_DWORD *)Key + 12);
  if ( (v13 & 8) != 0 )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        *((_DWORD *)Key + 12) = v13 | 1;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v25 = TmPrepareComplete(EnlistmentObject, 0LL);
        break;
      case 4u:
        *((_DWORD *)Key + 12) = v13 | 4;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        TmCommitComplete(EnlistmentObject, 0LL);
        goto LABEL_35;
      case 8u:
        *((_DWORD *)Key + 12) = v13 | 2;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v25 = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_35:
        CmpCleanupThreadInfo((_KAFFINITY_EX **)&v35);
        return (unsigned int)v12;
    }
LABEL_69:
    v12 = v25;
    goto LABEL_35;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v14 = qword_140E09AE0;
  if ( CmRmSystem != RMContext )
    v14 = *((_QWORD *)RMContext + 10);
  if ( CmpTraceTxrRoutine && CmpQueryNameString(*(void **)(v14 + 1544), &UnicodeString) >= 0 )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v38, 0x20000u);
    v37 = *(_OWORD *)((char *)Key + 88);
  }
  if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
  {
    v15 = 0;
  }
  else
  {
    LOCK_HIVE_LOAD();
    v15 = 1;
  }
  if ( (unsigned __int8)CmpIsCmRm(RMContext) )
  {
    if ( TransactionNotification == 2 )
    {
      v18 = CmpTransMgrPrepare(RMContext, Key, &v31, &v27);
      v19 = 4LL;
    }
    else if ( TransactionNotification == 4 )
    {
      v18 = CmpTransMgrCommit(v17, (__int64)Key, &v31);
      v19 = 16LL;
    }
    else
    {
      v20 = Key;
      if ( TransactionNotification != 8 )
      {
        v12 = -1073741811;
        v32 = -1073741811;
LABEL_22:
        v22 = v27;
        if ( v27 != 1 )
          goto LABEL_23;
        goto LABEL_38;
      }
      v18 = CmpTransMgrRollback(Key, &v31);
      v19 = 8LL;
    }
    v32 = v18;
    v12 = v18;
    if ( v18 >= 0 || TransactionNotification == 4 )
    {
      v20 = Key;
      v32 = v18;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v18 < 0 )
      {
        v28 = 0;
      }
      else
      {
        v21 = CmLogTmRmAction(RMContext, Key, v19);
        v20 = Key;
        v12 = 0;
        if ( TransactionNotification == 2 )
          v12 = v21;
      }
      v29 = 1;
      if ( TransactionNotification == 4 )
        goto LABEL_37;
    }
    else
    {
      v20 = Key;
    }
    if ( TransactionNotification != 8 )
      goto LABEL_22;
LABEL_37:
    v22 = v27;
LABEL_38:
    if ( *((_QWORD *)v20 + 9) )
      Handle = (HANDLE)*((_QWORD *)v20 + 10);
    if ( (*((_DWORD *)v20 + 12) & 0x20) != 0 )
    {
      if ( (int)CmpAccountForLogReservation(RMContext, v16, 0LL) >= 0 )
        *((_DWORD *)Key + 12) &= ~0x20u;
      v20 = Key;
    }
    if ( v12 >= 0 || TransactionNotification != 4 )
    {
      v12 = CmpTransMgrRollback(v20, &v31);
      CmpCleanupTransactionState(RMContext, Key, TransactionNotification);
    }
LABEL_23:
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( v15 )
      UNLOCK_HIVE_LOAD();
    if ( v29 != 1 )
      goto LABEL_26;
    switch ( TransactionNotification )
    {
      case 2u:
        if ( v22 == 1 )
          OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
        else
          OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
        break;
      case 4u:
        TmCommitComplete(EnlistmentObject, 0LL);
        goto LABEL_26;
      case 8u:
        OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_26:
        if ( Handle )
          ZwClose(Handle);
        switch ( TransactionNotification )
        {
          case 2u:
            v8 = 31;
            break;
          case 4u:
            v8 = 30;
            break;
          case 8u:
            v8 = 32;
            break;
        }
        if ( !CmpTraceTxrRoutine || !v8 )
          goto LABEL_33;
        if ( UnicodeString.Buffer )
        {
          p_UnicodeString = &UnicodeString;
          LOBYTE(p_UnicodeString) = v8;
          guard_dispatch_icall_no_overrides(p_UnicodeString, v38);
LABEL_33:
          if ( UnicodeString.Buffer )
            RtlFreeAnsiString(&UnicodeString);
          goto LABEL_35;
        }
        goto LABEL_35;
    }
    v12 = OnlyEnlistment;
    goto LABEL_26;
  }
  if ( v15 )
    UNLOCK_HIVE_LOAD();
  TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return 3221225485LL;
}
