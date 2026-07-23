/*
 * XREFs of KiTryToAcquireSpinLockInstrumented @ 0x140459EF8
 * Callers:
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x14040594C (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiTryToAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  int InterruptCount; // r10d
  int v3; // r11d
  char v4; // bl
  char v5; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v3 = 0;
  v4 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v3 = v7;
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v4 = 0;
    _mm_pause();
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v5 )
    {
      v8 = __rdtsc();
      PerfLogSpinLockAcquire((__int64)a1, v8, v8 - v3, 0, InterruptCount, 0);
    }
  }
  return v4;
}
