/*
 * XREFs of CmpTryToRundownHive @ 0x1402BB3C0
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     CmCloseRmHandle @ 0x1406F737C (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1406F73A0 (CmCloseTmHandle.c)
 *     CmObliterateRMTxArray @ 0x1407DE59C (CmObliterateRMTxArray.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmSnapshotRMTxArray @ 0x140963404 (CmSnapshotRMTxArray.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140964588 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmShutdownCmRM @ 0x140A00C24 (CmShutdownCmRM.c)
 *     CmpInitializeRollbackPacket @ 0x140A7B158 (CmpInitializeRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140AB32B8 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140BBBE48 (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

char __fastcall CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v3; // bp
  char v4; // r14
  __int64 v6; // rcx
  unsigned __int64 Count; // rcx
  void *v9; // r14
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  v15[0] = 0LL;
  CmpInitializeRollbackPacket(v15);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive()
      || *(_QWORD *)a2 != 2LL && ((unsigned __int8)CmpDoesKeyHaveOpenSubkeys(a2) || *(_QWORD *)a2 != 2LL) )
    {
      if ( !v3 )
      {
LABEL_22:
        CmpCleanupRollbackPacket(v15);
        return 0;
      }
LABEL_28:
      *(_DWORD *)(a2 + 8) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)&a1[205], 0LL);
      if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
      {
        _InterlockedOr(v14, 0);
        if ( CmpActiveHiveRundownEvent )
          ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
      }
      goto LABEL_22;
    }
    if ( !v3 )
    {
      *(_DWORD *)(a2 + 8) |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 205);
      v3 = 1;
      _InterlockedExchange64((volatile __int64 *)&a1[205], 1LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v6) = 1;
      goto LABEL_6;
    }
    Count = a1[519].Count;
    if ( !Count || v4 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v15) < 0 )
      goto LABEL_28;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v15);
    CmpUnlockRegistry();
    if ( LODWORD(v15[0]) )
    {
      v16 = 0;
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpAbortRollbackPacket(v15, &v16) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v13) = 1;
        CmpLockRegistryFreezeAware(v13);
        goto LABEL_28;
      }
      if ( v16 == 1 )
        CmObliterateRMTxArray(a1[519].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v6) = 1;
LABEL_6:
      CmpLockRegistryFreezeAware(v6);
    }
    else
    {
      v9 = (void *)CmCloseRmHandle(a1[519].Count, 0LL);
      v10 = (void *)CmCloseTmHandle(a1[519].Count);
      UNLOCK_HIVE_LOAD();
      if ( v9 )
        ZwClose(v9);
      if ( v10 )
        ZwClose(v10);
      LOCK_HIVE_LOAD();
      LOBYTE(v11) = 1;
      CmShutdownCmRM(a1[519].Count, v11);
      LOBYTE(v12) = 1;
      CmpLockRegistryFreezeAware(v12);
      v4 = 1;
    }
  }
  if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v14, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  CmpCleanupRollbackPacket(v15);
  return 1;
}
