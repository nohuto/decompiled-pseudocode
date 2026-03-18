/*
 * XREFs of SleepstudyHelperDestroyLibrary @ 0x140767660
 * Callers:
 *     SleepstudyHelper_Uninitialize @ 0x140767B70 (SleepstudyHelper_Uninitialize.c)
 *     SshpUninitialize @ 0x140C342E8 (SshpUninitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 *     SshpFreeDataEntry @ 0x1407667F4 (SshpFreeDataEntry.c)
 *     SshpCacheRemoveBlocker @ 0x140A415A4 (SshpCacheRemoveBlocker.c)
 *     SshpFreeBlockerEntry @ 0x140A415DC (SshpFreeBlockerEntry.c)
 */

__int64 __fastcall SleepstudyHelperDestroyLibrary(ULONG *a1)
{
  unsigned int v1; // esi
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  ULONG **v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 *v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD **i; // rdi

  v1 = 0;
  if ( a1 )
  {
    v3 = KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&SshpLibraryListLock, (__int64)v3, (__int64)&SshpLibraryListLock);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    v6 = *(_QWORD *)a1;
    if ( *(ULONG **)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = (ULONG **)*((_QWORD *)a1 + 1), *v7 != a1) )
LABEL_25:
      __fastfail(3u);
    *v7 = (ULONG *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
    v8 = a1 + 38;
    while ( 1 )
    {
      v9 = (_QWORD *)*v8;
      if ( (_QWORD *)*v8 == v8 )
        break;
      if ( (_QWORD *)v9[1] != v8 )
        goto LABEL_25;
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_25;
      *v8 = v10;
      *(_QWORD *)(v10 + 8) = v8;
      SshpCacheRemoveBlocker(a1, v9[14]);
      v11 = &SshpBlockerCollections + 6 * *((int *)v9 + 10);
      v12 = KeAbPreAcquire((__int64)v11, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, (__int64)v12, (__int64)v11);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
      v14 = v9[2];
      if ( *(_QWORD **)(v14 + 8) != v9 + 2 )
        goto LABEL_25;
      v15 = (_QWORD *)v9[3];
      if ( (_QWORD *)*v15 != v9 + 2 )
        goto LABEL_25;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v11);
      SshpFreeBlockerEntry((PKSPIN_LOCK)v9[14]);
    }
    for ( i = (_QWORD **)(a1 + 42); *i != i; SshpFreeDataEntry(*i) )
      ;
    CmpFreeTransientPoolWithTag(a1, a1[6]);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
