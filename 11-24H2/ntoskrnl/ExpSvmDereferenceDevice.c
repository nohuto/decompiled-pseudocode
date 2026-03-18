/*
 * XREFs of ExpSvmDereferenceDevice @ 0x14065967C
 * Callers:
 *     ExFreeSvmAsid @ 0x140491AF4 (ExFreeSvmAsid.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ebp
  _QWORD *v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // eax
  _QWORD *v14; // rcx
  PVOID *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, (__int64)v6, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = (unsigned int)(P[8] - 1);
  v11 = (unsigned int)(P[9] - 1);
  P[8] = v10;
  P[9] = v11;
  if ( !(_DWORD)v11 || !(_DWORD)v10 )
  {
    v12 = 0;
    if ( !(_DWORD)v10 )
    {
      v20 = 1;
      v12 = 1;
    }
    v13 = v12;
    if ( !(_DWORD)v11 && !*((_BYTE *)P + 18) )
    {
      v13 = v12 | 6;
      v20 = v12 | 6;
    }
    if ( v13 )
      v5 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), &v20, v11, v7);
    if ( !P[9] )
    {
      v5 = guard_dispatch_icall_no_overrides(a2, *((_QWORD *)P + 22), v11, v7);
      _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
      *((_BYTE *)P + 16) = 1;
    }
    if ( !P[8] )
    {
      v14 = *(_QWORD **)P;
      if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v15 = (PVOID *)*((_QWORD *)P + 1), *v15 != P) )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), v10, v11, v7);
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17, v16);
  return v5;
}
