/*
 * XREFs of ExpShareAddressSpaceWithDevice @ 0x14065902C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1407C0A90 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExpAllocateAsid @ 0x140658A58 (ExpAllocateAsid.c)
 *     ExpConvertSvmDevice @ 0x140658C28 (ExpConvertSvmDevice.c)
 *     ExpPrepareNewSvmDevice @ 0x140658D8C (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14065967C (ExpSvmDereferenceDevice.c)
 *     MmEnableProcessSvm @ 0x14066AABC (MmEnableProcessSvm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoQueryInterface @ 0x1407204B0 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x1407C0B08 (ExpAssignPasid.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpShareAddressSpaceWithDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r13
  struct _EX_RUNDOWN_REF *v9; // r15
  int Interface; // esi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r15
  int Asid; // r12d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r12d
  unsigned __int8 CurrentIrql; // r14
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // r14
  PVOID *v30; // rax
  PVOID *v31; // r15
  PVOID *v32; // r14
  char v33; // r14
  char v34; // r15
  unsigned __int8 v35; // r14
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int8 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  PVOID P; // [rsp+48h] [rbp-69h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-61h] BYREF
  struct _KTHREAD *v50; // [rsp+70h] [rbp-41h]
  _BYTE v51[8]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v52; // [rsp+80h] [rbp-31h]
  __int64 v55; // [rsp+130h] [rbp+7Fh] BYREF

  memset_0(v51, 0, 0x50uLL);
  *a3 = -1;
  P = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = 0LL;
  v55 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v50 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
    return 3221225659LL;
  v9 = (struct _EX_RUNDOWN_REF *)(Process + 488);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Process + 488)) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, a1, v51);
  if ( Interface >= 0 )
  {
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire(Process + 1552, 0LL);
    v14 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 1552), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 1552), (__int64)v11, Process + 1552);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    Asid = *(_DWORD *)(Process + 1536);
    if ( !Asid )
    {
      Asid = ExpAllocateAsid(v12, Process);
      if ( !Asid )
      {
        Interface = -1073741709;
LABEL_80:
        guard_dispatch_icall_no_overrides(v52, v16, v17, v18);
        CurrentThread = v50;
        v9 = (struct _EX_RUNDOWN_REF *)(Process + 488);
        goto LABEL_81;
      }
      if ( !(unsigned int)ExpAssignPasid((PVOID)Process) )
        Asid = *(_DWORD *)(Process + 1536);
    }
    v19 = Asid - 1;
    v55 = *(_QWORD *)(Process + 1544);
    if ( !v55 )
    {
      LOBYTE(v13) = 1;
      Interface = guard_dispatch_icall_no_overrides(v19, 0LL, v13, &v55);
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
      {
        v22 = v55;
        v55 = *(_QWORD *)(Process + 1544);
      }
      else
      {
        v22 = 0LL;
        *(_QWORD *)(Process + 1544) = v55;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v21);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( v22 )
        guard_dispatch_icall_no_overrides(v22, v23, v24, v25);
    }
    v26 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v29 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, (__int64)v26, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v29 )
      *((_BYTE *)v29 + 10) = 1;
    v30 = (PVOID *)ExpAtsSvmDevices;
    if ( ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v31 = v30;
        v32 = v30;
        P = v30;
        if ( v30[3] == (PVOID)a1 )
          break;
        v30 = (PVOID *)*v30;
      }
      while ( v30 != &ExpAtsSvmDevices );
      if ( v31[3] == (PVOID)a1 )
      {
        if ( v31 )
        {
          if ( !*((_BYTE *)v31 + 17) )
          {
            if ( *((_BYTE *)v31 + 16) )
            {
              Interface = ExpConvertSvmDevice(v55, v32, v27, v28);
              if ( Interface < 0 )
                goto LABEL_45;
              *((_BYTE *)v31 + 16) = 0;
            }
            ++*((_DWORD *)v32 + 8);
            ++*((_DWORD *)v32 + 9);
LABEL_38:
            v33 = 1;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
            KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
            Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
            if ( !Pool2 )
            {
              Interface = -1073741670;
              goto LABEL_69;
            }
            v34 = 0;
            Pool2[2] = P;
            v35 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v35, 15);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
            v36 = (_QWORD *)(Process + 1568);
            v37 = *(_QWORD **)(Process + 1568);
            if ( v37 == (_QWORD *)(Process + 1568) )
            {
LABEL_57:
              v38 = *v36;
              if ( *(_QWORD **)(*v36 + 8LL) != v36 )
                goto LABEL_84;
              *Pool2 = v38;
              Pool2[1] = v36;
              *(_QWORD *)(v38 + 8) = Pool2;
              *v36 = Pool2;
            }
            else
            {
              while ( *(_QWORD *)(v37[2] + 24LL) != a1 )
              {
                v37 = (_QWORD *)*v37;
                if ( v37 == v36 )
                  goto LABEL_57;
              }
              v34 = 1;
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, (__int64)v37);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
            __writecr8(v35);
            if ( v34 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Pool2 = 0LL;
            }
            else
            {
              MmEnableProcessSvm();
              Interface = guard_dispatch_icall_no_overrides(v55, *((_QWORD *)P + 22), v39, v40);
              if ( Interface < 0 )
              {
LABEL_68:
                v33 = 1;
                goto LABEL_69;
              }
              Interface = guard_dispatch_icall_no_overrides(
                            v55,
                            *(_QWORD *)(Process + 40) & 0xFFFFFFFFFFFFF000uLL,
                            v17,
                            v18);
            }
            if ( Interface >= 0 )
            {
              *a3 = v19;
              goto LABEL_80;
            }
            goto LABEL_68;
          }
          Interface = -1073741637;
LABEL_45:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
          KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
          v33 = 0;
LABEL_69:
          if ( P && v33 )
            ExpSvmDereferenceDevice(P);
          if ( !Pool2 )
            goto LABEL_80;
          v41 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v16) = 15;
            KiRaiseIrqlProcessIrqlFlags(v41, v16);
          }
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
          v43 = *Pool2;
          if ( *(_QWORD **)(*Pool2 + 8LL) == Pool2 )
          {
            v44 = (_QWORD *)Pool2[1];
            if ( (_QWORD *)*v44 == Pool2 )
            {
              *v44 = v43;
              *(_QWORD *)(v43 + 8) = v44;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v42);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v41);
              __writecr8(v41);
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
    Interface = ExpPrepareNewSvmDevice(a1, v55, (__int64)v51, v28, &P);
    if ( Interface >= 0 )
      goto LABEL_38;
    goto LABEL_45;
  }
LABEL_81:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 1552), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 1552));
  KeAbPostRelease(Process + 1552);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v45, v46, v47);
  ExReleaseRundownProtection_0(v9);
  return (unsigned int)Interface;
}
