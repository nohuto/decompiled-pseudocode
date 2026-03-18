/*
 * XREFs of ExShutdownSystem @ 0x140B61148
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     ExpRecordShutdownTime @ 0x14065362C (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 */

void ExShutdownSystem()
{
  int v0; // edx
  BOOLEAN v1; // cl
  _QWORD *ServerSiloGlobals; // rbx
  void *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rbx
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( v0 )
  {
    if ( v0 == 1 && (PopShutdownCleanly & 2) != 0 )
      ExSwapinWorkerThreads(v1);
  }
  else
  {
    ExpRecordShutdownTime();
    v3 = (void *)ServerSiloGlobals[107];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      ServerSiloGlobals[107] = 0LL;
    }
    v4 = (void *)ServerSiloGlobals[106];
    if ( v4 )
    {
      ObfDereferenceObjectWithTag(v4, 0x65487845u);
      ServerSiloGlobals[106] = 0LL;
    }
    v5 = KeAbPreAcquire((__int64)&ExpKeyManipLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpKeyManipLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&ExpKeyManipLock, (__int64)v5, (__int64)&ExpKeyManipLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_140EFE8A8 )
    {
      ObfDereferenceObject(qword_140EFE8A8);
      qword_140EFE8A8 = 0LL;
    }
    if ( ExpProductTypeKey )
    {
      ObCloseHandle(ExpProductTypeKey, 0);
      ExpProductTypeKey = 0LL;
    }
    if ( ExpSetupKey )
    {
      ObCloseHandle(ExpSetupKey, 0);
      ExpSetupKey = 0LL;
    }
    _m_prefetchw(&ExpKeyManipLock);
    v8 = ExpKeyManipLock - 16;
    if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v8 = 0LL;
    if ( (ExpKeyManipLock & 2) != 0
      || (v9 = ExpKeyManipLock,
          v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v8, ExpKeyManipLock)) )
    {
      ExfReleasePushLock(&ExpKeyManipLock);
    }
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  }
}
