/*
 * XREFs of IoUnregisterIoTracking @ 0x140716380
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IopIrpExtensionControl @ 0x140596548 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x1405975FC (IoPerfReset.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  PVOID *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rax
  bool v11; // zf

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, (__int64)v3, (__int64)&IopPerfIoTrackingLock);
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
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery(v9, v8);
  ExFreePoolWithTag(P, 0x72546F49u);
}
