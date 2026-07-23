/*
 * XREFs of ExpShareAddressSpaceWithDevice @ 0x1406576CC
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1407C0EE0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExpAllocateAsid @ 0x1406570F8 (ExpAllocateAsid.c)
 *     ExpConvertSvmDevice @ 0x1406572C8 (ExpConvertSvmDevice.c)
 *     ExpPrepareNewSvmDevice @ 0x14065742C (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x140657D1C (ExpSvmDereferenceDevice.c)
 *     MmEnableProcessSvm @ 0x14066BC8C (MmEnableProcessSvm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoQueryInterface @ 0x14071E040 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x1407C0F58 (ExpAssignPasid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpShareAddressSpaceWithDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r13
  struct _EX_RUNDOWN_REF *v9; // r15
  int Interface; // esi
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // r15
  int Asid; // r12d
  __int64 v15; // rdx
  unsigned int v16; // r12d
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // r9
  char *v21; // r14
  PVOID *v22; // rax
  PVOID *v23; // r15
  PVOID *v24; // r14
  char v25; // r14
  char v26; // r15
  unsigned __int8 v27; // r14
  _QWORD *v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  unsigned __int8 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  PVOID P; // [rsp+48h] [rbp-69h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-61h] BYREF
  struct _KTHREAD *v37; // [rsp+70h] [rbp-41h]
  _BYTE v38[8]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v39; // [rsp+80h] [rbp-31h]
  __int64 v42; // [rsp+130h] [rbp+7Fh]

  memset_0(v38, 0, 0x50uLL);
  *a3 = -1;
  P = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
    return 3221225659LL;
  v9 = (struct _EX_RUNDOWN_REF *)(Process + 488);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Process + 488)) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, a1, v38);
  if ( Interface >= 0 )
  {
    --CurrentThread->KernelApcDisable;
    v11 = (char *)KeAbPreAcquire(Process + 1552, 0LL);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 1552), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 1552), v11, Process + 1552);
    if ( v13 )
      v13[10] = 1;
    Asid = *(_DWORD *)(Process + 1536);
    if ( !Asid )
    {
      Asid = ExpAllocateAsid(v12, Process);
      if ( !Asid )
      {
        Interface = -1073741709;
LABEL_79:
        guard_dispatch_icall_no_overrides(v39, v15);
        CurrentThread = v37;
        v9 = (struct _EX_RUNDOWN_REF *)(Process + 488);
        goto LABEL_80;
      }
      if ( !(unsigned int)ExpAssignPasid((PVOID)Process) )
        Asid = *(_DWORD *)(Process + 1536);
    }
    v16 = Asid - 1;
    v42 = *(_QWORD *)(Process + 1544);
    if ( !v42 )
    {
      Interface = guard_dispatch_icall_no_overrides(v16, 0LL);
      if ( Interface < 0 )
        goto LABEL_79;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
      if ( *(_QWORD *)(Process + 1544) )
        v42 = *(_QWORD *)(Process + 1544);
      else
        *(_QWORD *)(Process + 1544) = 0LL;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v18);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v19 = (char *)KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v21 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v19, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v21 )
      v21[10] = 1;
    v22 = (PVOID *)ExpAtsSvmDevices;
    if ( ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v23 = v22;
        v24 = v22;
        P = v22;
        if ( v22[3] == (PVOID)a1 )
          break;
        v22 = (PVOID *)*v22;
      }
      while ( v22 != &ExpAtsSvmDevices );
      if ( v23[3] == (PVOID)a1 )
      {
        if ( v23 )
        {
          if ( !*((_BYTE *)v23 + 17) )
          {
            if ( *((_BYTE *)v23 + 16) )
            {
              Interface = ExpConvertSvmDevice(v42, v24);
              if ( Interface < 0 )
                goto LABEL_44;
              *((_BYTE *)v23 + 16) = 0;
            }
            ++*((_DWORD *)v24 + 8);
            ++*((_DWORD *)v24 + 9);
LABEL_37:
            v25 = 1;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
            KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
            Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x64507845u);
            if ( !Pool2 )
            {
              Interface = -1073741670;
              goto LABEL_68;
            }
            v26 = 0;
            Pool2[2] = P;
            v27 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v27, 15);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
            v28 = (_QWORD *)(Process + 1568);
            v29 = *(_QWORD **)(Process + 1568);
            if ( v29 == (_QWORD *)(Process + 1568) )
            {
LABEL_56:
              v30 = *v28;
              if ( *(_QWORD **)(*v28 + 8LL) != v28 )
                goto LABEL_83;
              *Pool2 = v30;
              Pool2[1] = v28;
              *(_QWORD *)(v30 + 8) = Pool2;
              *v28 = Pool2;
            }
            else
            {
              while ( *(_QWORD *)(v29[2] + 24LL) != a1 )
              {
                v29 = (_QWORD *)*v29;
                if ( v29 == v28 )
                  goto LABEL_56;
              }
              v26 = 1;
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, (__int64)v29);
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
              MmEnableProcessSvm();
              Interface = guard_dispatch_icall_no_overrides(v42, *((_QWORD *)P + 22));
              if ( Interface < 0 )
              {
LABEL_67:
                v25 = 1;
                goto LABEL_68;
              }
              Interface = guard_dispatch_icall_no_overrides(v42, *(_QWORD *)(Process + 40) & 0xFFFFFFFFFFFFF000uLL);
            }
            if ( Interface >= 0 )
            {
              *a3 = v16;
              goto LABEL_79;
            }
            goto LABEL_67;
          }
          Interface = -1073741637;
LABEL_44:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
          KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
          v25 = 0;
LABEL_68:
          if ( P && v25 )
            ExpSvmDereferenceDevice(P);
          if ( !Pool2 )
            goto LABEL_79;
          v31 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v15) = 15;
            KiRaiseIrqlProcessIrqlFlags(v31, v15);
          }
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
          v33 = *Pool2;
          if ( *(_QWORD **)(*Pool2 + 8LL) == Pool2 )
          {
            v34 = (_QWORD *)Pool2[1];
            if ( (_QWORD *)*v34 == Pool2 )
            {
              *v34 = v33;
              *(_QWORD *)(v33 + 8) = v34;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v32);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
              __writecr8(v31);
              ExFreePoolWithTag(Pool2, 0);
              goto LABEL_79;
            }
          }
LABEL_83:
          __fastfail(3u);
        }
      }
      else
      {
        P = 0LL;
      }
    }
    Interface = ExpPrepareNewSvmDevice(a1, v42, (__int64)v38, v20, &P);
    if ( Interface >= 0 )
      goto LABEL_37;
    goto LABEL_44;
  }
LABEL_80:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 1552), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 1552));
  KeAbPostRelease(Process + 1552);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  ExReleaseRundownProtection_0(v9);
  return (unsigned int)Interface;
}
