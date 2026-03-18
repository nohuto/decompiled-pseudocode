/*
 * XREFs of IoRegisterIoTracking @ 0x14070A130
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     IoPerfInit @ 0x1404D2B58 (IoPerfInit.c)
 *     IopIrpExtensionControl @ 0x140592EE8 (IopIrpExtensionControl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  signed __int8 v9; // cf
  __int64 *v10; // rsi
  _QWORD *v11; // rax
  struct _KTHREAD *v12; // rax

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
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, v8, (__int64)&IopPerfIoTrackingLock);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = (_QWORD *)qword_140F8BED8;
  if ( *(__int64 **)qword_140F8BED8 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *v5 = &IopPerfIoTrackingListHead;
  v5[1] = v11;
  *v11 = v5;
  qword_140F8BED8 = (__int64)v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  v12 = KeGetCurrentThread();
  if ( v12->SpecialApcDisable++ == -1
    && ($727077A9B6E167EAE1398C74674DC5A5 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v5;
  return result;
}
