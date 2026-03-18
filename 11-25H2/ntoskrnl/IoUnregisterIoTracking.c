/*
 * XREFs of IoUnregisterIoTracking @ 0x14070A280
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x140592EE8 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x140593EEC (IoPerfReset.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rsi
  _QWORD *v6; // rdx
  PVOID *v7; // rax
  struct _KTHREAD *v8; // rax
  bool v9; // zf

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, v3, (__int64)&IopPerfIoTrackingLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v7 = (PVOID *)P[1], *v7 != P) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  v8 = KeGetCurrentThread();
  v9 = v8->SpecialApcDisable++ == -1;
  if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery();
  ExFreePoolWithTag(P, 0x72546F49u);
}
