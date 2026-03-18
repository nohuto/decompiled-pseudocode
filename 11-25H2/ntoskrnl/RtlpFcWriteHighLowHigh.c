/*
 * XREFs of RtlpFcWriteHighLowHigh @ 0x1404BDC88
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2FF84 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartBootPhase @ 0x140C3BDAC (CmFcManagerStartBootPhase.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpFcWriteHighLowHigh(__int64 a1, __int64 a2)
{
  signed __int32 v2; // eax
  __int64 v3; // r9
  __int64 v4; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // ett
  int v9; // [rsp+3Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  LOBYTE(v2) = KeDisableInterrupts();
  *(_DWORD *)(v3 + 8) = v9;
  *(_QWORD *)v3 = v4;
  if ( (_BYTE)v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v2 = *SchedulerAssist;
      do
      {
        v7 = v2;
        v2 = _InterlockedCompareExchange(SchedulerAssist, v2 & 0xFFDFFFFF, v2);
      }
      while ( v7 != v2 );
      if ( (v2 & 0x200000) != 0 )
        LOBYTE(v2) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v2;
}
