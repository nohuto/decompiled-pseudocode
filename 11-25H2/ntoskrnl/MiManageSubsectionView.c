/*
 * XREFs of MiManageSubsectionView @ 0x1403200E0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rbp
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  struct _KTHREAD *v15; // rbx
  struct _KTHREAD *v16; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v18; // r9
  __int64 i; // rdx
  __int64 v20; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rax
  int v27; // ett
  __int64 v28; // rcx
  _QWORD *v29; // rax

  v3 = *a1;
  CurrentThread = KeGetCurrentThread();
  v8 = *a1 + 104;
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire(v8, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v9, v8);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  if ( a3 == 4 )
  {
    if ( (*(_DWORD *)(v3 + 56) & 0x400) != 0 )
      goto LABEL_13;
    goto LABEL_37;
  }
  v11 = a3 - 1;
  if ( !v11 )
  {
    v25 = a1[11];
    v26 = a1 + 11;
    if ( *(__int64 **)(v25 + 8) == a1 + 11 )
    {
      *a2 = v25;
      a2[1] = v26;
      *(_QWORD *)(v25 + 8) = a2;
      *v26 = a2;
      goto LABEL_13;
    }
LABEL_11:
    __fastfail(3u);
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_37:
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
  if ( v12 == 1 && (*(_DWORD *)(v3 + 56) & 0x400) == 0 )
  {
    v13 = *(_QWORD *)(v3 + 8);
    v14 = (_QWORD *)(v3 + 8);
    if ( *(_QWORD **)(v13 + 8) != v14 )
      goto LABEL_11;
    *a2 = v13;
    a2[1] = v14;
    *(_QWORD *)(v13 + 8) = a2;
    *v14 = a2;
  }
LABEL_13:
  v15 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v16 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v16->KernelAbEntries;
  v18 = v8 & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0LL; (unsigned int)i < KernelAbEntries->EntryCount; i = (unsigned int)(i + 1) )
  {
    v20 = (__int64)&KernelAbEntries->Entries[(unsigned int)i];
    if ( (*(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL) == v18 && *(_BYTE *)(v20 + 10) && (*(_QWORD *)v20 & 1) == 0 )
    {
      *(_BYTE *)(v20 + 10) = 0;
      result = KiAbEntryFreeAndEnableInterrupts(v20, (ULONG_PTR)v16, v8, 1, 0LL);
      goto LABEL_21;
    }
  }
  result = *((unsigned int *)&v16->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v8, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      i = (unsigned int)result;
      LODWORD(i) = result & 0xFFDFFFFF;
      v27 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v27 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_21:
  if ( v15->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&v15->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, i, SchedulerAssist, v18);
  }
  return result;
}
