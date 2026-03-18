/*
 * XREFs of ExpShareAddressSpaceWithDevice @ 0x14064D138
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1407B12C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpAllocateAsid @ 0x14064CB78 (ExpAllocateAsid.c)
 *     ExpConvertSvmDevice @ 0x14064CD34 (ExpConvertSvmDevice.c)
 *     ExpPrepareNewSvmDevice @ 0x14064CE98 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14064D7DC (ExpSvmDereferenceDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoQueryInterface @ 0x1407143B0 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x1407B1338 (ExpAssignPasid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpShareAddressSpaceWithDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *Pool2; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 Process; // r14
  struct _EX_RUNDOWN_REF *v9; // r12
  int Interface; // edi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r13
  int Asid; // r12d
  unsigned int v15; // r12d
  int v16; // edx
  unsigned __int8 CurrentIrql; // r15
  __int64 *v18; // rax
  __int64 v19; // r9
  __int64 *v20; // r15
  PVOID *v21; // rax
  PVOID *v22; // r13
  __int64 v23; // r15
  char v24; // r15
  int v25; // edx
  char v26; // r13
  unsigned __int8 v27; // r15
  _QWORD *v28; // rcx
  _QWORD *i; // rdx
  __int64 v30; // rax
  _KPROCESS *v31; // rdi
  unsigned __int8 v32; // al
  unsigned __int8 v33; // r15
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // [rsp+48h] [rbp-69h]
  PVOID P; // [rsp+50h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-59h] BYREF
  struct _KTHREAD *v42; // [rsp+70h] [rbp-41h]
  _BYTE v43[8]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v44; // [rsp+80h] [rbp-31h]

  memset_0(v43, 0, 0x50uLL);
  *a3 = -1;
  P = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
    return 3221225659LL;
  v9 = (struct _EX_RUNDOWN_REF *)(Process + 488);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Process + 488)) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, 1, a1, v43);
  if ( Interface >= 0 )
  {
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire(Process + 1552, 0LL);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 1552), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 1552), v11, Process + 1552);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    Asid = *(_DWORD *)(Process + 1536);
    if ( !Asid )
    {
      Asid = ExpAllocateAsid(v12, Process);
      if ( !Asid )
      {
        Interface = -1073741709;
LABEL_80:
        guard_dispatch_icall_no_overrides(v44);
        CurrentThread = v42;
        v9 = (struct _EX_RUNDOWN_REF *)(Process + 488);
        goto LABEL_81;
      }
      if ( !(unsigned int)ExpAssignPasid((PVOID)Process) )
        Asid = *(_DWORD *)(Process + 1536);
    }
    v15 = Asid - 1;
    v39 = *(_QWORD *)(Process + 1544);
    if ( !v39 )
    {
      Interface = guard_dispatch_icall_no_overrides(v15);
      if ( Interface < 0 )
        goto LABEL_80;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
      if ( *(_QWORD *)(Process + 1544) )
        v39 = *(_QWORD *)(Process + 1544);
      else
        *(_QWORD *)(Process + 1544) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v18 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v18, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v20 )
      *((_BYTE *)v20 + 10) = 1;
    v21 = (PVOID *)ExpAtsSvmDevices;
    if ( ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v22 = v21;
        v23 = (__int64)v21;
        P = v21;
        if ( v21[3] == (PVOID)a1 )
          break;
        v21 = (PVOID *)*v21;
      }
      while ( v21 != &ExpAtsSvmDevices );
      if ( v22[3] == (PVOID)a1 )
      {
        if ( v22 )
        {
          if ( !*((_BYTE *)v22 + 17) )
          {
            if ( *((_BYTE *)v22 + 16) )
            {
              Interface = ExpConvertSvmDevice(v39, v23);
              if ( Interface < 0 )
                goto LABEL_44;
              *((_BYTE *)v22 + 16) = 0;
            }
            ++*(_DWORD *)(v23 + 32);
            ++*(_DWORD *)(v23 + 36);
LABEL_37:
            v24 = 1;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
            KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
            Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
            if ( !Pool2 )
            {
              Interface = -1073741670;
              goto LABEL_69;
            }
            v26 = 0;
            Pool2[2] = P;
            v27 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v27, 15);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
            v28 = (_QWORD *)(Process + 1568);
            for ( i = *(_QWORD **)(Process + 1568); i != v28; i = (_QWORD *)*i )
            {
              if ( *(_QWORD *)(i[2] + 24LL) == a1 )
              {
                v26 = 1;
                goto LABEL_60;
              }
            }
            v30 = *v28;
            if ( *(_QWORD **)(*v28 + 8LL) != v28 )
              goto LABEL_84;
            *Pool2 = v30;
            Pool2[1] = v28;
            *(_QWORD *)(v30 + 8) = Pool2;
            *v28 = Pool2;
LABEL_60:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
            __writecr8(v27);
            if ( v26 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Pool2 = 0LL;
            }
            else
            {
              v31 = KeGetCurrentThread()->ApcState.Process;
              v32 = MiLockWorkingSetExclusive((__int64)&v31[2].ReadyListHead.Blink);
              BYTE3(v31[2].ContextSwitches) = HIBYTE(LODWORD(v31[2].ContextSwitches)) | 2;
              MiUnlockWorkingSetExclusive((__int64)&v31[2].ReadyListHead.Blink, v32);
              Interface = guard_dispatch_icall_no_overrides(v39);
              if ( Interface < 0 )
              {
LABEL_68:
                v24 = 1;
                goto LABEL_69;
              }
              Interface = guard_dispatch_icall_no_overrides(v39);
            }
            if ( Interface >= 0 )
            {
              *a3 = v15;
              goto LABEL_80;
            }
            goto LABEL_68;
          }
          Interface = -1073741637;
LABEL_44:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
          KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
          v24 = 0;
LABEL_69:
          if ( P && v24 )
            ExpSvmDereferenceDevice(P);
          if ( !Pool2 )
            goto LABEL_80;
          v33 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v25) = 15;
            KiRaiseIrqlProcessIrqlFlags(v33, v25);
          }
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
          v34 = *Pool2;
          if ( *(_QWORD **)(*Pool2 + 8LL) == Pool2 )
          {
            v35 = (_QWORD *)Pool2[1];
            if ( (_QWORD *)*v35 == Pool2 )
            {
              *v35 = v34;
              *(_QWORD *)(v34 + 8) = v35;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
              __writecr8(v33);
              ExFreePoolWithTag(Pool2, 0);
              goto LABEL_80;
            }
          }
LABEL_84:
          __fastfail(3u);
        }
      }
      else
      {
        P = 0LL;
      }
    }
    Interface = ExpPrepareNewSvmDevice(a1, v39, (__int64)v43, v19, &P);
    if ( Interface >= 0 )
      goto LABEL_37;
    goto LABEL_44;
  }
LABEL_81:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 1552), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 1552));
  KeAbPostRelease(Process + 1552);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v36, v37, v38);
  ExReleaseRundownProtection_0(v9);
  return (unsigned int)Interface;
}
