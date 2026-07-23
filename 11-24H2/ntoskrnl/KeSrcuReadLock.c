/*
 * XREFs of KeSrcuReadLock @ 0x1405BE250
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 */

struct _KTHREAD *__fastcall KeSrcuReadLock(__int64 a1, __int64 a2)
{
  bool v4; // al
  unsigned int Number; // esi
  _QWORD *v6; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  struct _KTHREAD *result; // rax

  v4 = KeDisableInterrupts();
  Number = KeGetPcr()->Prcb.Number;
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)Number << 6));
  if ( (*v6)++ == -1LL )
    __fastfail(0xEu);
  if ( v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  *(_WORD *)a2 = Number;
  *(_QWORD *)a2 = (a1 << 16) | (unsigned __int16)*(_DWORD *)a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
