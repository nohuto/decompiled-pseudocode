/*
 * XREFs of ExpGetNextProcessThread @ 0x140978A00
 * Callers:
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 */

_QWORD *__fastcall ExpGetNextProcessThread(char *a1, _QWORD *a2)
{
  __int64 v3; // r14
  signed __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v6; // rdi
  int v7; // r12d
  _QWORD **v8; // r15
  __int64 *v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a1 == PsIdleProcess )
  {
    v12 = a1 + 48;
    if ( a2 )
      v13 = (_QWORD *)a2[95];
    else
      v13 = (_QWORD *)*v12;
    if ( v13 == v12 )
    {
      return 0LL;
    }
    else
    {
      v14 = v13 - 95;
      if ( KeDynamicPartitioningSupported )
      {
        _InterlockedOr(v15, 0);
        if ( (KiDynamicProcessorLock.Count & 1) == 0 )
        {
          ExAcquireFastMutex(&KiDynamicProcessorLock);
          KeReleaseGuardedMutex(&KiDynamicProcessorLock);
        }
      }
      return v14;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = (signed __int64 *)(a1 + 456);
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    v7 = 0;
    v8 = (_QWORD **)(a1 + 880);
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)(a1 + 456), 0LL);
    if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v4, 0, v9, (unsigned __int64)v4);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( a2 )
      v10 = (_QWORD *)a2[175];
    else
      v10 = *v8;
    while ( v10 != v8 )
    {
      v6 = v10 - 175;
      if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 175), 0x6E457350u) )
      {
        v7 = 1;
        break;
      }
      v10 = (_QWORD *)*v10;
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( a2 )
      ObfDereferenceObjectWithTag(a2, 0x6E457350u);
    if ( v7 )
      return v6;
    return (_QWORD *)v3;
  }
}
