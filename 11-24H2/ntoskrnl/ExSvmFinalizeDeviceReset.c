/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1406588F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  signed __int8 v6; // cf
  _QWORD *v7; // rbx
  PVOID *v8; // rax
  PVOID *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
  v7 = v3;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, (__int64)v3, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = (PVOID *)ExpAtsSvmDevices;
  if ( ExpAtsSvmDevices == &ExpAtsSvmDevices )
  {
    v10 = -1073741810;
  }
  else
  {
    do
    {
      v9 = v8;
      if ( !*((_BYTE *)v8 + 16) && v8[3] == a1 )
        break;
      v8 = (PVOID *)*v8;
    }
    while ( v8 != &ExpAtsSvmDevices );
    v10 = guard_dispatch_icall_no_overrides(v9[22], &ExpAtsSvmDevices, v4, v5);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12, v11);
  return v10;
}
