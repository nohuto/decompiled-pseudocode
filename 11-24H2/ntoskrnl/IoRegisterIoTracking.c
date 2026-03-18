/*
 * XREFs of IoRegisterIoTracking @ 0x140716230
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoPerfInit @ 0x1404D2A28 (IoPerfInit.c)
 *     IopIrpExtensionControl @ 0x140596548 (IopIrpExtensionControl.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rax
  signed __int8 v9; // cf
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rax

  *a2 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, (__int64)v8, (__int64)&IopPerfIoTrackingLock);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = (_QWORD *)qword_140F8C658;
  if ( *(__int64 **)qword_140F8C658 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *v5 = &IopPerfIoTrackingListHead;
  v5[1] = v11;
  *v11 = v5;
  qword_140F8C658 = (__int64)v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  v14 = KeGetCurrentThread();
  if ( v14->SpecialApcDisable++ == -1
    && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
  {
    KiCheckForKernelApcDelivery(v13, v12);
  }
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v5;
  return result;
}
