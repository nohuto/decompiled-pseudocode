/*
 * XREFs of CmKtmNotification @ 0x140865D90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     TmCommitComplete @ 0x1404F9BD0 (TmCommitComplete.c)
 *     TmDereferenceEnlistmentKey @ 0x1404F9C70 (TmDereferenceEnlistmentKey.c)
 *     TmPrepareComplete @ 0x1404F9DB0 (TmPrepareComplete.c)
 *     TmReadOnlyEnlistment @ 0x1404F9E30 (TmReadOnlyEnlistment.c)
 *     TmReferenceEnlistmentKey @ 0x1404F9EB0 (TmReferenceEnlistmentKey.c)
 *     TmRollbackComplete @ 0x1404F9F10 (TmRollbackComplete.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpRecoverEnlistment @ 0x1407D096C (CmpRecoverEnlistment.c)
 *     CmpIsCmRm @ 0x1408662AC (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmLogTmRmAction @ 0x140866514 (CmLogTmRmAction.c)
 *     CmpAccountForLogReservation @ 0x140866618 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x140867280 (CmpTransMgrRollback.c)
 *     LOCK_HIVE_LOAD @ 0x140883970 (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408839E4 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     CmpTransMgrCommit @ 0x1409D8E1C (CmpTransMgrCommit.c)
 *     CmpQueryNameString @ 0x1409FA3D4 (CmpQueryNameString.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rcx
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  PVOID v22; // rcx
  NTSTATUS v23; // eax
  char v24; // r15
  NTSTATUS OnlyEnlistment; // eax
  NTSTATUS v27; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v29; // [rsp+40h] [rbp-71h] BYREF
  char v30; // [rsp+41h] [rbp-70h]
  char v31; // [rsp+42h] [rbp-6Fh]
  PVOID Key; // [rsp+48h] [rbp-69h] BYREF
  int v33; // [rsp+50h] [rbp-61h] BYREF
  int v34; // [rsp+54h] [rbp-5Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-49h]
  __int128 v37; // [rsp+78h] [rbp-39h] BYREF
  __int128 v38; // [rsp+88h] [rbp-29h]
  _OWORD v39[2]; // [rsp+98h] [rbp-19h] BYREF

  Key = 0LL;
  Handle = 0LL;
  v31 = 0;
  v29 = 0;
  v37 = 0LL;
  v33 = 0;
  v8 = 0;
  v38 = 0LL;
  UnicodeString = 0LL;
  v30 = 1;
  memset(v39, 0, sizeof(v39));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v37);
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
  {
    v12 = -1073741811;
    goto LABEL_35;
  }
  if ( (RMContext[26] & 8) != 0 )
    goto LABEL_61;
  if ( TransactionNotification == 256 )
  {
    v27 = CmpRecoverEnlistment((__int64)RMContext, v11, Argument);
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
        v27 = TmPrepareComplete(EnlistmentObject, 0LL);
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
        v27 = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_35:
        CmCleanupThreadInfo((_KAFFINITY_EX **)&v37);
        return (unsigned int)v12;
    }
LABEL_69:
    v12 = v27;
    goto LABEL_35;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v16 = qword_140E09990;
  if ( CmRmSystem != RMContext )
    v16 = *((_QWORD *)RMContext + 10);
  if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v16 + 1544), &UnicodeString, v14, v15) >= 0 )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v39, 0x20000u);
    v38 = *(_OWORD *)((char *)Key + 88);
  }
  if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
  {
    v17 = 0;
  }
  else
  {
    LOCK_HIVE_LOAD(v16);
    v17 = 1;
  }
  if ( (unsigned __int8)CmpIsCmRm(RMContext) )
  {
    if ( TransactionNotification == 2 )
    {
      v20 = CmpTransMgrPrepare(RMContext, Key, &v33, &v29);
      v21 = 4LL;
    }
    else if ( TransactionNotification == 4 )
    {
      v20 = CmpTransMgrCommit(v19, Key, &v33);
      v21 = 16LL;
    }
    else
    {
      v22 = Key;
      if ( TransactionNotification != 8 )
      {
        v12 = -1073741811;
        v34 = -1073741811;
LABEL_22:
        v24 = v29;
        if ( v29 != 1 )
          goto LABEL_23;
        goto LABEL_38;
      }
      v20 = CmpTransMgrRollback(Key, &v33);
      v21 = 8LL;
    }
    v34 = v20;
    v12 = v20;
    if ( v20 >= 0 || TransactionNotification == 4 )
    {
      v22 = Key;
      v34 = v20;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v20 < 0 )
      {
        v30 = 0;
      }
      else
      {
        v23 = CmLogTmRmAction(RMContext, Key, v21);
        v22 = Key;
        v12 = 0;
        if ( TransactionNotification == 2 )
          v12 = v23;
      }
      v31 = 1;
      if ( TransactionNotification == 4 )
        goto LABEL_37;
    }
    else
    {
      v22 = Key;
    }
    if ( TransactionNotification != 8 )
      goto LABEL_22;
LABEL_37:
    v24 = v29;
LABEL_38:
    if ( *((_QWORD *)v22 + 9) )
      Handle = (HANDLE)*((_QWORD *)v22 + 10);
    if ( (*((_DWORD *)v22 + 12) & 0x20) != 0 )
    {
      if ( (int)CmpAccountForLogReservation(RMContext, v18, 0LL) >= 0 )
        *((_DWORD *)Key + 12) &= ~0x20u;
      v22 = Key;
    }
    if ( v12 >= 0 || TransactionNotification != 4 )
    {
      v12 = CmpTransMgrRollback(v22, &v33);
      CmpCleanupTransactionState(RMContext, Key, TransactionNotification);
    }
LABEL_23:
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( v17 )
      UNLOCK_HIVE_LOAD();
    if ( v31 != 1 )
      goto LABEL_26;
    switch ( TransactionNotification )
    {
      case 2u:
        if ( v24 == 1 )
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
          guard_dispatch_icall_no_overrides(p_UnicodeString);
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
  if ( v17 )
    UNLOCK_HIVE_LOAD();
  TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return 3221225485LL;
}
