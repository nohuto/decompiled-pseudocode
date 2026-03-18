/*
 * XREFs of CmLockKeyForWrite @ 0x1409E1DB8
 * Callers:
 *     NtLockRegistryKey @ 0x1407CFD80 (NtLockRegistryKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x1406FB58C (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407DDDF4 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407DDE48 (CmpFreeSiloKeyLockEntry.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     CmpGetContextForSiloNoRef @ 0x1409E1EF0 (CmpGetContextForSiloNoRef.c)
 *     CmpGlobalLockKeyForWrite @ 0x140A66C2C (CmpGlobalLockKeyForWrite.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140A872EC (CmpUnlockSiloKeyLockTracker.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  ULONG_PTR *SiloKeyLockEntry; // rsi
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v4; // rcx
  signed __int64 *ContextForSiloNoRef; // rdi
  ULONG_PTR v6; // rbp
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rbx
  ULONG_PTR v10; // rcx
  signed __int64 *v11; // r14
  signed __int64 *i; // rax
  __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  ULONG_PTR **v15; // rax
  ULONG_PTR j; // rbx
  ULONG_PTR v18; // [rsp+48h] [rbp+10h] BYREF

  SiloKeyLockEntry = 0LL;
  v18 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  ContextForSiloNoRef = (signed __int64 *)CmpGetContextForSiloNoRef(CurrentSilo);
  if ( ContextForSiloNoRef )
  {
    CmpLockRegistry(v4);
    v6 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v6);
    v7 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v7 < 0 )
      goto LABEL_17;
    if ( *(_QWORD *)(v6 + 32) == CmpMasterHive )
    {
      v7 = -1073741811;
      goto LABEL_17;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)ContextForSiloNoRef, 0LL);
    if ( _InterlockedCompareExchange64(ContextForSiloNoRef, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(ContextForSiloNoRef, 0, v9, (__int64)ContextForSiloNoRef);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v7 = CmpPerformSiloKeyLockTrackerEnabledCheck((__int64)ContextForSiloNoRef);
    if ( v7 >= 0 )
    {
      v11 = ContextForSiloNoRef + 2;
      for ( i = (signed __int64 *)ContextForSiloNoRef[2]; i != v11; i = (signed __int64 *)*i )
      {
        if ( i[2] == v6 )
        {
          v7 = 0;
          goto LABEL_16;
        }
      }
      CmpUnlockSiloKeyLockTracker(v10);
      SiloKeyLockEntry = (ULONG_PTR *)CmpCreateSiloKeyLockEntry(v6);
      if ( !SiloKeyLockEntry )
      {
        v7 = -1073741670;
        goto LABEL_17;
      }
      v7 = CmpGlobalLockKeyForWrite(v6, &v18);
      if ( v7 < 0 )
      {
LABEL_17:
        CmpUnlockKcb(v6);
        if ( SiloKeyLockEntry )
          CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_29:
        CmpUnlockRegistry(v13);
        return (unsigned int)v7;
      }
      SiloKeyLockEntry[3] = v18;
      KsepCacheLock((unsigned __int64 *)ContextForSiloNoRef);
      v7 = CmpPerformSiloKeyLockTrackerEnabledCheck((__int64)ContextForSiloNoRef);
      if ( v7 >= 0 )
      {
        v15 = (ULONG_PTR **)ContextForSiloNoRef[3];
        if ( *v15 != (ULONG_PTR *)v11 )
          __fastfail(3u);
        *SiloKeyLockEntry = (ULONG_PTR)v11;
        SiloKeyLockEntry[1] = (ULONG_PTR)v15;
        *v15 = SiloKeyLockEntry;
        ContextForSiloNoRef[3] = (signed __int64)SiloKeyLockEntry;
        CmpUnlockSiloKeyLockTracker(v14);
        CmpUnlockKcb(v6);
        for ( j = *(_QWORD *)(v6 + 72); *(_QWORD *)(j + 32) != CmpMasterHive; j = *(_QWORD *)(j + 72) )
        {
          CmpLockKcbExclusive(j);
          *(_WORD *)(j + 8) |= 0x100u;
          CmpUnlockKcb(j);
        }
        v7 = 0;
        goto LABEL_29;
      }
    }
LABEL_16:
    CmpUnlockSiloKeyLockTracker((ULONG_PTR)ContextForSiloNoRef);
    goto LABEL_17;
  }
  return (unsigned int)-1073741637;
}
