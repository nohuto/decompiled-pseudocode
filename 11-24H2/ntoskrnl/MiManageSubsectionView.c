/*
 * XREFs of MiManageSubsectionView @ 0x1403621F0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  char *v9; // rax
  __int64 v10; // rdx
  char *v11; // rdi
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rax
  _QWORD *v15; // rbp
  struct _KTHREAD *v16; // rbx
  struct _KTHREAD *v17; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v19; // r9
  unsigned int i; // eax
  char *v21; // r10
  __int64 result; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // ett

  v3 = *a1;
  CurrentThread = KeGetCurrentThread();
  v8 = *a1 + 104;
  --CurrentThread->SpecialApcDisable;
  v9 = (char *)KeAbPreAcquire(v8, 0LL);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v9, v8);
  if ( v11 )
    v11[10] = 1;
  if ( a3 == 4 )
  {
    if ( (*(_DWORD *)(v3 + 56) & 0x400) != 0 )
      goto LABEL_13;
    goto LABEL_33;
  }
  v12 = a3 - 1;
  if ( !v12 )
  {
    v23 = a1[11];
    v24 = a1 + 11;
    if ( *(__int64 **)(v23 + 8) == a1 + 11 )
    {
      *a2 = v23;
      a2[1] = v24;
      *(_QWORD *)(v23 + 8) = a2;
      *v24 = a2;
      goto LABEL_13;
    }
LABEL_11:
    __fastfail(3u);
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_33:
    v28 = *a2;
    v29 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) == a2 && (_QWORD *)*v29 == a2 )
    {
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  if ( v13 == 1 && (*(_DWORD *)(v3 + 56) & 0x400) == 0 )
  {
    v14 = *(_QWORD *)(v3 + 8);
    v15 = (_QWORD *)(v3 + 8);
    if ( *(_QWORD **)(v14 + 8) != v15 )
      goto LABEL_11;
    *a2 = v14;
    a2[1] = v15;
    *(_QWORD *)(v14 + 8) = a2;
    *v15 = a2;
  }
LABEL_13:
  v16 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  v17 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v17->KernelAbEntries;
  v19 = v8 & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v21 = (char *)KernelAbEntries + 88 * i;
    v10 = *((_QWORD *)v21 + 2);
    if ( (v10 & 0x7FFFFFFFFFFFFFFCLL) == v19 && v21[26] && (v10 & 1) == 0 )
    {
      v21[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v21 + 16), (ULONG_PTR)v17, v8, 1LL, 0LL);
      goto LABEL_28;
    }
  }
  result = *((unsigned int *)&v17->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, v8, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v10 = (unsigned int)result;
      LODWORD(v10) = result & 0xFFDFFFFF;
      v30 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v30 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_28:
  if ( v16->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&v16->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, v10, SchedulerAssist, v19);
  }
  return result;
}
