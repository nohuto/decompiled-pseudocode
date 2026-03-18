/*
 * XREFs of KeCheckAndApplyBamQos @ 0x1403E8B80
 * Callers:
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KeApplyWobBamQos @ 0x140306940 (KeApplyWobBamQos.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     PoSetProcessorQos @ 0x1403E8C70 (PoSetProcessorQos.c)
 *     KeUpdatePendingQosRequest @ 0x1403E9444 (KeUpdatePendingQosRequest.c)
 */

void __fastcall KeCheckAndApplyBamQos(__int64 a1)
{
  bool v2; // al
  __int64 v3; // r8
  __int64 v4; // rdx
  bool v5; // bp
  int v6; // esi
  char v7; // al
  int v8; // ecx
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  if ( KeHeteroSystemQos )
  {
    v2 = KeDisableInterrupts();
    v4 = *(unsigned __int8 *)(v3 + 516);
    v5 = v2;
    if ( (_DWORD)v4 != (unsigned __int8)*(_DWORD *)(a1 + 236) )
    {
      v6 = *(_DWORD *)(a1 + 236) & 0x100;
      v7 = PoSetProcessorQos(a1, v4);
      v8 = *(_DWORD *)(a1 + 236);
      v9 = v7 ? v8 & 0xFFFFFEFF : v8 | 0x100;
      *(_DWORD *)(a1 + 236) = v9;
      if ( (v6 != 0) != ((v9 >> 8) & 1) )
        KeUpdatePendingQosRequest(a1);
    }
    if ( v5 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
}
