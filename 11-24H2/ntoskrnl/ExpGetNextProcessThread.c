/*
 * XREFs of ExpGetNextProcessThread @ 0x140959450
 * Callers:
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

_QWORD *__fastcall ExpGetNextProcessThread(char *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v5; // rdi
  int v6; // r12d
  _QWORD **v7; // r14
  signed __int64 *v8; // r15
  _QWORD *v9; // rbx
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
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    v6 = 0;
    v7 = (_QWORD **)(a1 + 880);
    v8 = (signed __int64 *)(a1 + 456);
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)(a1 + 456), 0LL);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( a2 )
      v10 = (_QWORD *)a2[175];
    else
      v10 = *v7;
    while ( v10 != v7 )
    {
      v5 = v10 - 175;
      if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 175), 0x6E457350u) )
      {
        v6 = 1;
        break;
      }
      v10 = (_QWORD *)*v10;
    }
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KeLeaveCriticalRegionThread();
    if ( a2 )
      ObfDereferenceObjectWithTag(a2, 0x6E457350u);
    if ( v6 )
      return v5;
    return (_QWORD *)v3;
  }
}
