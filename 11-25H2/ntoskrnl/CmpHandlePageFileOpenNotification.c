/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x1407BFF74
 * Callers:
 *     NtInitializeRegistry @ 0x1407C05B0 (NtInitializeRegistry.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140465694 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9108 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
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
