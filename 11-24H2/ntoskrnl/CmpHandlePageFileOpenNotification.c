/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x1407CFB50
 * Callers:
 *     NtInitializeRegistry @ 0x1407D01A0 (NtInitializeRegistry.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D8E48 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpHandlePageFileOpenNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rax
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v9; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v4 = 0;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(
                               a1,
                               a2,
                               a3,
                               a4,
                               ApcState.ApcListHead[0].Flink,
                               ApcState.ApcListHead[0].Blink) )
  {
    v5 = 0;
    if ( CmpWellKnownVolumeList )
    {
      v6 = 0LL;
      do
      {
        if ( (&CmpWellKnownVolumeList)[v6 + 1] )
          CmpVolumeContextSendDeviceUsageNotification();
        v6 = 2LL * (unsigned int)++v5;
      }
      while ( (&CmpWellKnownVolumeList)[v6] );
    }
    CmpAttachToRegistryProcess(&ApcState);
    for ( i = 0LL; ; i = v9 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v9 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpRecheckHiveVolumePolicy(NextActiveHive);
    }
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown();
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v4;
}
