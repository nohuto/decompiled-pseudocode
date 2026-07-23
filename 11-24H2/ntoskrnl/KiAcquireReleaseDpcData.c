/*
 * XREFs of KiAcquireReleaseDpcData @ 0x1405C4594
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 */

__int64 __fastcall KiAcquireReleaseDpcData(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 result; // rax
  bool v3; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v6; // ett
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v7, 0);
  v1 = (KSPIN_LOCK *)(a1 + 16);
  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    v3 = KeDisableInterrupts();
    KxAcquireSpinLock(v1);
    result = KxReleaseSpinLock((volatile signed __int64 *)v1);
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v6 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v6 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return result;
}
