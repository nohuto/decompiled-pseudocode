/*
 * XREFs of SshpPurgeBlockersWorker @ 0x140A3D940
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     SshpDereferenceBlocker @ 0x14047CBC0 (SshpDereferenceBlocker.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140489C20 (SSHSupportReleasePushLockExclusive.c)
 *     SshpQueryBlockerPendingDelete @ 0x14048FC80 (SshpQueryBlockerPendingDelete.c)
 *     SshpWorkItemTryAllowNextWorker @ 0x1404B0D74 (SshpWorkItemTryAllowNextWorker.c)
 *     SshpUnlinkBlockerFromLibrary @ 0x140A3DB78 (SshpUnlinkBlockerFromLibrary.c)
 *     SshpFreeBlockerEntry @ 0x140A3DC0C (SshpFreeBlockerEntry.c)
 */

char SshpPurgeBlockersWorker()
{
  char result; // al
  __int64 *v1; // rax
  __int64 *v2; // rbx
  __int64 *i; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 **v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  unsigned __int64 *v11; // rdi
  __int64 *v12; // rax
  __int64 *v13; // rsi
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
    v1 = KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL);
    v2 = v1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpLibraryListLock, v1, (__int64)&SshpLibraryListLock);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    for ( i = (__int64 *)SshpLibraryList; i != &SshpLibraryList; i = (__int64 *)*i )
    {
      v4 = KeAbPreAcquire((__int64)(i + 2), 0LL);
      v5 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)i + 4, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i + 2, v4, (__int64)(i + 2));
      if ( v5 )
        *((_BYTE *)v5 + 10) = 1;
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
      v12 = KeAbPreAcquire((__int64)v11, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
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
