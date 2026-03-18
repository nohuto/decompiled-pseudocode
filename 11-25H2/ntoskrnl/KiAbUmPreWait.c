/*
 * XREFs of KiAbUmPreWait @ 0x140306058
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x140305CB0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiAbUmPreWait(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 i; // rcx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // [rsp+30h] [rbp+8h]

  _disable();
  v2 = *(_QWORD *)(a1 + 800);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v8 = *(_QWORD *)(v2 + 8 * i);
      if ( (v8 & 0x7FFFFFFFFFFFFFFCLL) == a2 )
      {
        LOBYTE(v8) = v8 | 1;
        *(_QWORD *)(v2 + 8 * i) = v8;
        break;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v6 = *SchedulerAssist;
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
