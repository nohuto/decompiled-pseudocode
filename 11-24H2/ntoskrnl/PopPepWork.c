/*
 * XREFs of PopPepWork @ 0x140316330
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x140315E30 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PopPepStartDevicePowerOffActivity @ 0x1403156D0 (PopPepStartDevicePowerOffActivity.c)
 *     PopPepStartDevicePowerOnActivity @ 0x140315700 (PopPepStartDevicePowerOnActivity.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140315720 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140316850 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x140316888 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopPepStartComponentActivatingActivity @ 0x140316EC0 (PopPepStartComponentActivatingActivity.c)
 *     PopPepStartActivity @ 0x140319BA0 (PopPepStartActivity.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1404416E0 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepWork(char a1, __int64 a2)
{
  char v2; // r14
  __int64 v3; // rbx
  unsigned int i; // edi
  __int64 v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  __int64 *v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  int **v11; // r9
  unsigned __int8 CurrentIrql; // r15
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // r8d
  int **v18; // rcx
  int v19; // edx
  __int64 v20; // rbp
  __int64 v21; // rdx
  char (__fastcall *v22)(__int64, __int64, __int64); // rax
  unsigned __int8 v23; // al
  int v24; // ebp
  int v25; // ecx
  int v26; // edx
  __int64 v27; // rsi
  char (__fastcall *v28)(__int64, __int64, __int64); // rax
  unsigned __int8 started; // al
  int v30; // r9d
  int **v31; // rcx
  int v32; // edx
  int v34; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 v38; // [rsp+A0h] [rbp+18h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v3 = 0LL;
  v34 = 0;
  i = 0;
  v38 = 0;
  LODWORD(v5) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire(&PopPepDeviceListLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, 0LL, v7, &PopPepDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 10) = 1;
  v8 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v8 = PopPepLastCheckedDevice;
  }
  PopDiagTraceFxDefaultPepWorkerStart(v8[4]);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v13 = 0;
LABEL_10:
  v39 = v13;
  if ( v13 >= 3 )
  {
    v24 = 0;
    goto LABEL_40;
  }
  v3 = (__int64)v8;
  while ( 1 )
  {
    LODWORD(v5) = 0;
    if ( (v2 & 1) != 0 )
    {
      if ( (*(_DWORD *)(v3 + 24) & 0x20) == 0 )
        goto LABEL_28;
    }
    else if ( (*(_DWORD *)(v3 + 24) & 0x20) != 0 )
    {
      goto LABEL_28;
    }
    if ( v13 )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      v14 = TRY_ACQUIRE_EXLOCK_EXCLUSIVE(v3 + 64, v9, v10, v11);
    else
      v14 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 64, v9, v10, (__int64)v11);
    if ( v14 )
      goto LABEL_18;
LABEL_28:
    v3 = *(_QWORD *)v3;
    if ( (__int64 *)v3 == &PopPepDeviceList )
      v3 = *(_QWORD *)v3;
    if ( (__int64 *)v3 == v8 )
    {
      v2 = a1;
      ++v13;
      goto LABEL_10;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( v13 == 2 )
    ++v34;
LABEL_18:
  v15 = *(_QWORD *)(v3 + 32);
  if ( v15 )
    v5 = *(_QWORD *)(v15 + 48);
  v10 = *(unsigned int *)(v3 + 120);
  if ( (_DWORD)v10 )
  {
    v25 = 0;
    v11 = (int **)(v3 + 72);
    while ( v25 <= 0 )
    {
      v26 = **v11;
      if ( (v26 & 2) != 0 || (v26 & 8) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v3 + 120));
        v27 = v25;
        v28 = (char (__fastcall *)(__int64, __int64, __int64))ActivityAttributes[17 * v25 + 15];
        if ( (char *)v28 == (char *)PopPepStartComponentActivatingActivity )
        {
          started = PopPepStartComponentActivatingActivity(v3, 0LL, a2);
        }
        else if ( v28 == PopPepStartDevicePowerOnActivity )
        {
          started = PopPepStartDevicePowerOnActivity(v3, 0LL, a2);
        }
        else if ( v28 == PopPepStartDevicePowerOffActivity )
        {
          started = PopPepStartDevicePowerOffActivity(v3, 0LL, a2);
        }
        else
        {
          started = guard_dispatch_icall_no_overrides(v3, 0LL, a2, v11);
        }
        v38 = started;
        **(_DWORD **)(v3 + 8 * v27 + 72) &= ~2u;
        **(_DWORD **)(v3 + 8 * v27 + 72) &= ~8u;
        **(_DWORD **)(v3 + 8 * v27 + 72) |= 4u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
        v13 = v39;
        v24 = 1;
        goto LABEL_40;
      }
      ++v25;
      ++v11;
    }
  }
  v9 = *(unsigned int *)(v3 + 180);
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v16 = v3 + 208LL * i + 192;
    if ( *(_DWORD *)(v16 + 104) )
    {
      v17 = 1;
      v18 = (int **)(v16 + 64);
      while ( v17 <= 3 )
      {
        v19 = **v18;
        if ( (v19 & 2) != 0 || (v19 & 8) != 0 )
          goto LABEL_37;
        ++v17;
        ++v18;
      }
      v17 = 6;
LABEL_37:
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 104));
      v20 = v17;
      v21 = v3 + 208LL * i + 192;
      v22 = (char (__fastcall *)(__int64, __int64, __int64))ActivityAttributes[17 * v17 + 15];
      if ( (char *)v22 == (char *)PopPepStartComponentActivatingActivity )
      {
        v23 = PopPepStartComponentActivatingActivity(v3, v21, a2);
      }
      else if ( v22 == PopPepStartDevicePowerOnActivity )
      {
        v23 = PopPepStartDevicePowerOnActivity(v3, v21, a2);
      }
      else if ( v22 == PopPepStartDevicePowerOffActivity )
      {
        v23 = PopPepStartDevicePowerOffActivity(v3, v21, a2);
      }
      else
      {
        v23 = guard_dispatch_icall_no_overrides(v3, v21, a2, v11);
      }
      v38 = v23;
      **(_DWORD **)(v16 + 8 * v20 + 56) &= ~2u;
      **(_DWORD **)(v16 + 8 * v20 + 56) &= ~8u;
      **(_DWORD **)(v16 + 8 * v20 + 56) |= 4u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
      v13 = v39;
      v24 = 2;
      goto LABEL_40;
    }
  }
  if ( !(_DWORD)v10 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      v13 = v39;
      *(_DWORD *)(v3 + 64) = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 64, retaddr);
      v13 = v39;
    }
    goto LABEL_28;
  }
  v30 = 4;
  v31 = (int **)(v3 + 104);
  while ( v30 <= 5 )
  {
    v32 = **v31;
    if ( (v32 & 2) != 0 || (v32 & 8) != 0 )
      goto LABEL_61;
    ++v30;
    ++v31;
  }
  v30 = 6;
LABEL_61:
  v38 = PopPepStartActivity(v3, 0, (int)v3 + 72, v30, v3 + 120, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v13 = v39;
  v24 = 3;
LABEL_40:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (__int64 *)v3 != v8 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread();
  PopDiagTraceFxDefaultPepWorkerEnd(v5, v24, i, v13, v34);
  return v38;
}
