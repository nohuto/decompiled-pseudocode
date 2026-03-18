/*
 * XREFs of ExpSvmDereferenceDevice @ 0x14064D7DC
 * Callers:
 *     ExFreeSvmAsid @ 0x140492894 (ExFreeSvmAsid.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ebp
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v6, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = P[8] - 1;
  v10 = P[9] - 1;
  P[8] = v9;
  P[9] = v10;
  if ( !v10 || !v9 )
  {
    v11 = v9 == 0;
    if ( !v10 && !*((_BYTE *)P + 18) )
      v11 = (v9 == 0) | 6;
    if ( v11 )
      v5 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6));
    if ( !P[9] )
    {
      v5 = guard_dispatch_icall_no_overrides(a2);
      _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
      *((_BYTE *)P + 16) = 1;
    }
    if ( !P[8] )
    {
      v12 = *(_QWORD **)P;
      if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v13 = (PVOID *)*((_QWORD *)P + 1), *v13 != P) )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
