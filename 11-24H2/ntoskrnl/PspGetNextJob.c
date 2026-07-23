/*
 * XREFs of PspGetNextJob @ 0x14085D390
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x14085C8B8 (EtwpUpdateGlobalGroupMasks.c)
 *     PspGetNextSilo @ 0x14085D264 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x14085D2AC (PspEnforceLimits.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rbp
  char *v4; // rsi
  __int64 *v5; // rsi
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PspJobListLock, 0, v4, (__int64)&PspJobListLock);
  if ( v4 )
    v4[10] = 1;
  v5 = (__int64 *)PspJobList;
  if ( Object )
    v5 = (__int64 *)Object[3];
  while ( v5 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 3), 0x6E457350u) )
    {
      v3 = v5 - 3;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
