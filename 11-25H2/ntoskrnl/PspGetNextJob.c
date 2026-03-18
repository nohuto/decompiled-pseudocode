/*
 * XREFs of PspGetNextJob @ 0x1408DC790
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1408DBCB4 (EtwpUpdateGlobalGroupMasks.c)
 *     PspGetNextSilo @ 0x1408DC664 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x1408DC6AC (PspEnforceLimits.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // rsi
  __int64 *v5; // rsi
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PspJobListLock, 0, v4, (unsigned __int64)&PspJobListLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
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
