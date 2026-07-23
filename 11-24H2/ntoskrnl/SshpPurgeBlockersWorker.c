/*
 * XREFs of SshpPurgeBlockersWorker @ 0x140A36BF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SshpDereferenceBlocker @ 0x140477900 (SshpDereferenceBlocker.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     SshpQueryBlockerPendingDelete @ 0x1404897B0 (SshpQueryBlockerPendingDelete.c)
 *     SshpWorkItemTryAllowNextWorker @ 0x1404AC4D8 (SshpWorkItemTryAllowNextWorker.c)
 *     SshpUnlinkBlockerFromLibrary @ 0x140A36E28 (SshpUnlinkBlockerFromLibrary.c)
 *     SshpFreeBlockerEntry @ 0x140A36EBC (SshpFreeBlockerEntry.c)
 */

char SshpPurgeBlockersWorker()
{
  char result; // al
  char *v1; // rax
  char *v2; // rbx
  __int64 *i; // rbx
  char *v4; // rax
  char *v5; // rsi
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 **v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  unsigned __int64 *v11; // rdi
  char *v12; // rax
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 **v15; // rcx
  KSPIN_LOCK *v16; // rcx
  __int64 *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v18; // [rsp+28h] [rbp-8h]

  v18 = (__int64 *)&v17;
  v17 = (__int64 *)&v17;
  for ( result = SshpWorkItemTryAllowNextWorker((__int64)&SshpPurgeBlockersWorkItem);
        !result;
        result = SshpWorkItemTryAllowNextWorker((__int64)&SshpPurgeBlockersWorkItem) )
  {
    v1 = (char *)KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL);
    v2 = v1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpLibraryListLock, v1, (__int64)&SshpLibraryListLock);
    if ( v2 )
      v2[10] = 1;
    for ( i = (__int64 *)SshpLibraryList; i != &SshpLibraryList; i = (__int64 *)*i )
    {
      v4 = (char *)KeAbPreAcquire((__int64)(i + 2), 0LL);
      v5 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)i + 4, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i + 2, v4, (__int64)(i + 2));
      if ( v5 )
        v5[10] = 1;
      v6 = (__int64 *)i[19];
      while ( v6 != i + 19 )
      {
        v7 = v6;
        v6 = (__int64 *)*v6;
        if ( SshpQueryBlockerPendingDelete((PKSPIN_LOCK)v7[14]) )
        {
          SshpUnlinkBlockerFromLibrary(v7[14]);
          v8 = (__int64 **)v18;
          if ( (__int64 **)*v18 != &v17 )
            goto LABEL_18;
          v7[1] = (__int64)v18;
          *v7 = (__int64)&v17;
          *v8 = v7;
          v18 = v7;
        }
      }
      SSHSupportReleasePushLockExclusive(i + 2);
    }
    while ( 1 )
    {
      v9 = v17;
      if ( v17 == (__int64 *)&v17 )
        break;
      if ( (__int64 **)v17[1] != &v17 )
        goto LABEL_18;
      v10 = (__int64 *)*v17;
      if ( *(__int64 **)(*v17 + 8) != v17 )
        goto LABEL_18;
      v17 = (__int64 *)*v17;
      v10[1] = (__int64)&v17;
      v11 = &SshpBlockerCollections + 6 * *((int *)v9 + 10);
      v12 = (char *)KeAbPreAcquire((__int64)v11, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
      if ( v13 )
        v13[10] = 1;
      v14 = v9[2];
      if ( *(__int64 **)(v14 + 8) != v9 + 2 || (v15 = (__int64 **)v9[3], *v15 != v9 + 2) )
LABEL_18:
        __fastfail(3u);
      *v15 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v11);
      v16 = *(KSPIN_LOCK **)(v9[14] + 296);
      if ( v16 )
        SshpDereferenceBlocker(v16, 1, 1);
      SshpFreeBlockerEntry((PKSPIN_LOCK)v9[14]);
    }
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
  }
  return result;
}
