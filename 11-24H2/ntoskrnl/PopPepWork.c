/*
 * XREFs of PopPepWork @ 0x1402BEEE0
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x1402BE9E4 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x1402BF400 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1402BF438 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopPepStartComponentActivatingActivity @ 0x1402BFA70 (PopPepStartComponentActivatingActivity.c)
 *     PopPepStartActivity @ 0x1402C2730 (PopPepStartActivity.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140438020 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1404627C0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     PopPepStartDevicePowerOnActivity @ 0x140478D00 (PopPepStartDevicePowerOnActivity.c)
 *     PopPepStartDevicePowerOffActivity @ 0x14047E8F0 (PopPepStartDevicePowerOffActivity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned __int8 CurrentIrql; // r15
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rsi
  int v15; // r8d
  int **v16; // rcx
  int v17; // edx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(_QWORD, _QWORD, _QWORD); // rax
  unsigned __int8 v21; // al
  int v22; // ebp
  int v23; // ecx
  int **v24; // r9
  int v25; // edx
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // rax
  unsigned __int8 started; // al
  int v29; // r9d
  int **v30; // rcx
  int v31; // edx
  int v33; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 v37; // [rsp+A0h] [rbp+18h]
  unsigned int v38; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v3 = 0LL;
  v33 = 0;
  i = 0;
  v37 = 0;
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
  v10 = 0;
LABEL_10:
  v38 = v10;
  if ( v10 >= 3 )
  {
    v22 = 0;
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
    if ( v10 )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      v11 = TRY_ACQUIRE_EXLOCK_EXCLUSIVE(v3 + 64);
    else
      v11 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 64);
    if ( v11 )
      goto LABEL_18;
LABEL_28:
    v3 = *(_QWORD *)v3;
    if ( (__int64 *)v3 == &PopPepDeviceList )
      v3 = *(_QWORD *)v3;
    if ( (__int64 *)v3 == v8 )
    {
      v2 = a1;
      ++v10;
      goto LABEL_10;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( v10 == 2 )
    ++v33;
LABEL_18:
  v12 = *(_QWORD *)(v3 + 32);
  if ( v12 )
    v5 = *(_QWORD *)(v12 + 48);
  v13 = *(_DWORD *)(v3 + 120);
  if ( v13 )
  {
    v23 = 0;
    v24 = (int **)(v3 + 72);
    while ( v23 <= 0 )
    {
      v25 = **v24;
      if ( (v25 & 2) != 0 || (v25 & 8) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v3 + 120));
        v26 = v23;
        v27 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ActivityAttributes[17 * v23 + 15];
        if ( v27 == PopPepStartComponentActivatingActivity )
        {
          started = PopPepStartComponentActivatingActivity(v3, 0LL, a2);
        }
        else if ( v27 == PopPepStartDevicePowerOnActivity )
        {
          started = PopPepStartDevicePowerOnActivity(v3, 0LL, a2);
        }
        else if ( v27 == PopPepStartDevicePowerOffActivity )
        {
          started = PopPepStartDevicePowerOffActivity(v3, 0LL, a2);
        }
        else
        {
          started = guard_dispatch_icall_no_overrides(v3, 0LL);
        }
        v37 = started;
        **(_DWORD **)(v3 + 8 * v26 + 72) &= ~2u;
        **(_DWORD **)(v3 + 8 * v26 + 72) &= ~8u;
        **(_DWORD **)(v3 + 8 * v26 + 72) |= 4u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
        v10 = v38;
        v22 = 1;
        goto LABEL_40;
      }
      ++v23;
      ++v24;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v3 + 180); ++i )
  {
    v14 = v3 + 208LL * i + 192;
    if ( *(_DWORD *)(v14 + 104) )
    {
      v15 = 1;
      v16 = (int **)(v14 + 64);
      while ( v15 <= 3 )
      {
        v17 = **v16;
        if ( (v17 & 2) != 0 || (v17 & 8) != 0 )
          goto LABEL_37;
        ++v15;
        ++v16;
      }
      v15 = 6;
LABEL_37:
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 104));
      v18 = v15;
      v19 = v3 + 208LL * i + 192;
      v20 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ActivityAttributes[17 * v15 + 15];
      if ( v20 == PopPepStartComponentActivatingActivity )
      {
        v21 = PopPepStartComponentActivatingActivity(v3, v19, a2);
      }
      else if ( v20 == PopPepStartDevicePowerOnActivity )
      {
        v21 = PopPepStartDevicePowerOnActivity(v3, v19, a2);
      }
      else if ( v20 == PopPepStartDevicePowerOffActivity )
      {
        v21 = PopPepStartDevicePowerOffActivity(v3, v19, a2);
      }
      else
      {
        v21 = guard_dispatch_icall_no_overrides(v3, v19);
      }
      v37 = v21;
      **(_DWORD **)(v14 + 8 * v18 + 56) &= ~2u;
      **(_DWORD **)(v14 + 8 * v18 + 56) &= ~8u;
      **(_DWORD **)(v14 + 8 * v18 + 56) |= 4u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
      v10 = v38;
      v22 = 2;
      goto LABEL_40;
    }
  }
  if ( !v13 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      v10 = v38;
      *(_DWORD *)(v3 + 64) = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 64, retaddr);
      v10 = v38;
    }
    goto LABEL_28;
  }
  v29 = 4;
  v30 = (int **)(v3 + 104);
  while ( v29 <= 5 )
  {
    v31 = **v30;
    if ( (v31 & 2) != 0 || (v31 & 8) != 0 )
      goto LABEL_61;
    ++v29;
    ++v30;
  }
  v29 = 6;
LABEL_61:
  v37 = PopPepStartActivity(v3, 0, (int)v3 + 72, v29, v3 + 120, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v10 = v38;
  v22 = 3;
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
  PopDiagTraceFxDefaultPepWorkerEnd(v5, v22, i, v10, v33);
  return v37;
}
