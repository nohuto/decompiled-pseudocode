/*
 * XREFs of ExpSvmDereferenceDevice @ 0x140657D1C
 * Callers:
 *     ExFreeSvmAsid @ 0x14048C994 (ExFreeSvmAsid.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ebp
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  _QWORD *v13; // rcx
  PVOID *v14; // rax
  bool v15; // zf
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v6, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v8 )
    v8[10] = 1;
  v9 = (unsigned int)(P[8] - 1);
  v10 = P[9] - 1;
  P[8] = v9;
  P[9] = v10;
  if ( !v10 || !(_DWORD)v9 )
  {
    v11 = 0;
    if ( !(_DWORD)v9 )
    {
      v17 = 1;
      v11 = 1;
    }
    v12 = v11;
    if ( !v10 && !*((_BYTE *)P + 18) )
    {
      v12 = v11 | 6;
      v17 = v11 | 6;
    }
    if ( v12 )
      v5 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), &v17);
    if ( !P[9] )
    {
      v5 = guard_dispatch_icall_no_overrides(a2, *((_QWORD *)P + 22));
      _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
      *((_BYTE *)P + 16) = 1;
    }
    if ( !P[8] )
    {
      v13 = *(_QWORD **)P;
      if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v14 = (PVOID *)*((_QWORD *)P + 1), *v14 != P) )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), v9);
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
