/*
 * XREFs of PopPepWork @ 0x14034D020
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x14034CB24 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PopPepStartActivity @ 0x1402BC628 (PopPepStartActivity.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x14034D580 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x14034D5B8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14034D694 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopPepStartComponentActivatingActivity @ 0x14034E210 (PopPepStartComponentActivatingActivity.c)
 *     PopPepStartDevicePowerOnActivity @ 0x14034E240 (PopPepStartDevicePowerOnActivity.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14034E284 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     PopPepStartDevicePowerOffActivity @ 0x14034E320 (PopPepStartDevicePowerOffActivity.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepWork(char a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int j; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r13
  __int64 *v6; // rsi
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  int **v10; // r9
  unsigned __int8 CurrentIrql; // r15
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // r9d
  int **v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD); // rax
  unsigned __int8 v22; // al
  unsigned __int8 v23; // r14
  int v24; // ebp
  int i; // ecx
  int v27; // edx
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(_QWORD, _QWORD, _QWORD); // rax
  unsigned __int8 started; // al
  int v31; // r9d
  int **v32; // rcx
  int v33; // edx
  int v34; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 v38; // [rsp+A0h] [rbp+18h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  v34 = 0;
  j = 0;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v5) = 0;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopPepDeviceListLock, 0, v6, (unsigned __int64)&PopPepDeviceListLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v7 = PopPepLastCheckedDevice;
  }
  PopDiagTraceFxDefaultPepWorkerStart(v7[4]);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v12 = 0;
LABEL_10:
  v39 = v12;
  if ( v12 >= 3 )
  {
    v24 = 0;
    v23 = 0;
    goto LABEL_39;
  }
  v2 = (__int64)v7;
  while ( 1 )
  {
    LODWORD(v5) = 0;
    if ( (a1 & 1) != 0 )
    {
      if ( (*(_DWORD *)(v2 + 24) & 0x20) == 0 )
        goto LABEL_29;
    }
    else if ( (*(_DWORD *)(v2 + 24) & 0x20) != 0 )
    {
      goto LABEL_29;
    }
    if ( v12 )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      v13 = TRY_ACQUIRE_EXLOCK_EXCLUSIVE(v2 + 64);
    else
      v13 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 64, v8, v9, v10);
    if ( v13 )
      goto LABEL_18;
LABEL_29:
    v2 = *(_QWORD *)v2;
    if ( (__int64 *)v2 == &PopPepDeviceList )
      v2 = *(_QWORD *)v2;
    if ( (__int64 *)v2 == v7 )
    {
      ++v12;
      goto LABEL_10;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  if ( v12 == 2 )
    ++v34;
LABEL_18:
  v14 = *(_QWORD *)(v2 + 32);
  if ( v14 )
    v5 = *(_QWORD *)(v14 + 48);
  v9 = *(unsigned int *)(v2 + 120);
  if ( (_DWORD)v9 )
  {
    v10 = (int **)(v2 + 72);
    for ( i = 0; i <= 0; ++i )
    {
      v27 = **v10;
      if ( (v27 & 2) != 0 || (v27 & 8) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v2 + 120));
        v28 = i;
        v29 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ActivityAttributes[17 * i + 15];
        if ( v29 == PopPepStartComponentActivatingActivity )
        {
          started = PopPepStartComponentActivatingActivity(v2, 0LL, a2);
        }
        else if ( v29 == PopPepStartDevicePowerOnActivity )
        {
          started = PopPepStartDevicePowerOnActivity(v2, 0LL, a2);
        }
        else if ( v29 == PopPepStartDevicePowerOffActivity )
        {
          started = PopPepStartDevicePowerOffActivity(v2, 0LL, a2);
        }
        else
        {
          started = guard_dispatch_icall_no_overrides(v2, 0LL);
        }
        v38 = started;
        **(_DWORD **)(v2 + 8 * v28 + 72) &= ~2u;
        **(_DWORD **)(v2 + 8 * v28 + 72) &= ~8u;
        **(_DWORD **)(v2 + 8 * v28 + 72) |= 4u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
        v12 = v39;
        v24 = 1;
        v23 = v38;
        goto LABEL_39;
      }
      ++v10;
    }
  }
  v8 = *(unsigned int *)(v2 + 180);
  for ( j = 0; j < (unsigned int)v8; ++j )
  {
    v15 = v2 + 208LL * j + 192;
    if ( *(_DWORD *)(v15 + 104) )
    {
      v16 = 1;
      v17 = (int **)(v15 + 64);
      while ( v16 <= 3 )
      {
        v18 = **v17;
        if ( (v18 & 2) != 0 || (v18 & 8) != 0 )
          goto LABEL_36;
        ++v16;
        ++v17;
      }
      v16 = 6;
LABEL_36:
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 104));
      v19 = v2 + 208LL * j + 192;
      v20 = v16;
      v21 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ActivityAttributes[17 * v16 + 15];
      if ( v21 == PopPepStartComponentActivatingActivity )
      {
        v22 = PopPepStartComponentActivatingActivity(v2, v19, a2);
      }
      else if ( v21 == PopPepStartDevicePowerOnActivity )
      {
        v22 = PopPepStartDevicePowerOnActivity(v2, v19, a2);
      }
      else if ( v21 == PopPepStartDevicePowerOffActivity )
      {
        v22 = PopPepStartDevicePowerOffActivity(v2, v19, a2);
      }
      else
      {
        v22 = guard_dispatch_icall_no_overrides(v2, v19);
      }
      v23 = v22;
      **(_DWORD **)(v15 + 8 * v20 + 56) &= ~2u;
      **(_DWORD **)(v15 + 8 * v20 + 56) &= ~8u;
      **(_DWORD **)(v15 + 8 * v20 + 56) |= 4u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
      v12 = v39;
      v24 = 2;
      goto LABEL_39;
    }
  }
  if ( !(_DWORD)v9 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v2 + 64) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 64, retaddr);
    v12 = v39;
    goto LABEL_29;
  }
  v31 = 4;
  v32 = (int **)(v2 + 104);
  while ( v31 <= 5 )
  {
    v33 = **v32;
    if ( (v33 & 2) != 0 || (v33 & 8) != 0 )
      goto LABEL_63;
    ++v31;
    ++v32;
  }
  v31 = 6;
LABEL_63:
  v23 = PopPepStartActivity(v2, 0LL, v2 + 72, v31, (volatile signed __int32 *)(v2 + 120), a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  v12 = v39;
  v24 = 3;
LABEL_39:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (__int64 *)v2 != v7 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PopDiagTraceFxDefaultPepWorkerEnd(v5, v24, j, v12, v34);
  return v23;
}
