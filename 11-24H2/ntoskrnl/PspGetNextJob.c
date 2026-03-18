/*
 * XREFs of PspGetNextJob @ 0x1408EBB60
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1408EB088 (EtwpUpdateGlobalGroupMasks.c)
 *     PspGetNextSilo @ 0x1408EBA34 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x1408EBA7C (PspEnforceLimits.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rbp
  _QWORD *v4; // rsi
  __int64 *v5; // rsi
  __int64 v6; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PspJobListLock, 0, v4, (__int64)&PspJobListLock);
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
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v8 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v8->ApcState.ApcListHead[0].Flink != v8 )
      KiCheckForKernelApcDelivery((__int64)v8, v6);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
