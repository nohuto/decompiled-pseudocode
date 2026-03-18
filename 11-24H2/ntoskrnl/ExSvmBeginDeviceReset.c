/*
 * XREFs of ExSvmBeginDeviceReset @ 0x1406587D0
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

__int64 __fastcall ExSvmBeginDeviceReset(PVOID a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int8 v8; // cf
  _QWORD *v9; // rdi
  PVOID *v10; // rax
  PVOID *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
  v9 = v5;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, (__int64)v5, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = (PVOID *)ExpAtsSvmDevices;
  if ( ExpAtsSvmDevices == &ExpAtsSvmDevices )
  {
    v12 = -1073741810;
  }
  else
  {
    do
    {
      v11 = v10;
      if ( !*((_BYTE *)v10 + 16) && v10[3] == a1 )
        break;
      v10 = (PVOID *)*v10;
    }
    while ( v10 != &ExpAtsSvmDevices );
    v12 = guard_dispatch_icall_no_overrides(v11[22], a2, v6, v7);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13);
  return v12;
}
