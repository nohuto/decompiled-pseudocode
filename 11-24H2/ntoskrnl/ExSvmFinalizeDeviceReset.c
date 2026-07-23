/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x140656F90
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rbx
  PVOID *v6; // rax
  PVOID *v7; // rcx
  unsigned int v8; // ebx
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v3, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v5 )
    v5[10] = 1;
  v6 = (PVOID *)ExpAtsSvmDevices;
  if ( ExpAtsSvmDevices == &ExpAtsSvmDevices )
  {
    v8 = -1073741810;
  }
  else
  {
    do
    {
      v7 = v6;
      if ( !*((_BYTE *)v6 + 16) && v6[3] == a1 )
        break;
      v6 = (PVOID *)*v6;
    }
    while ( v6 != &ExpAtsSvmDevices );
    v8 = guard_dispatch_icall_no_overrides(v7[22], &ExpAtsSvmDevices);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v8;
}
