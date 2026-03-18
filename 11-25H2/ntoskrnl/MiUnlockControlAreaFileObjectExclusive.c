/*
 * XREFs of MiUnlockControlAreaFileObjectExclusive @ 0x14031FF90
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockControlAreaFileObjectExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v3; // rdi
  struct _KTHREAD *v4; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v6; // r9
  unsigned int i; // eax
  char *v8; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 104;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 104);
  v4 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v4->KernelAbEntries;
  v6 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v8 = (char *)KernelAbEntries + 88 * i;
    a2 = *((_QWORD *)v8 + 2);
    if ( (a2 & 0x7FFFFFFFFFFFFFFCLL) == v6 && v8[26] && (a2 & 1) == 0 )
    {
      v8[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v8 + 16), (ULONG_PTR)v4, v3, 1, 0LL);
      goto LABEL_9;
    }
  }
  result = *((unsigned int *)&v4->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v4, v3, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      a2 = (unsigned int)result;
      LODWORD(a2) = result & 0xFFDFFFFF;
      v13 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v13 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_9:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, a2, SchedulerAssist, v6);
  }
  return result;
}
