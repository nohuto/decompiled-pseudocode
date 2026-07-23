/*
 * XREFs of ExSvmBeginDeviceReset @ 0x140656E70
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

__int64 __fastcall ExSvmBeginDeviceReset(PVOID a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rdi
  PVOID *v8; // rax
  PVOID *v9; // rcx
  unsigned int v10; // edi
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v5, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v7 )
    v7[10] = 1;
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
    v10 = guard_dispatch_icall_no_overrides(v9[22], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v10;
}
