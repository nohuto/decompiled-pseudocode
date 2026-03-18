/*
 * XREFs of KeRcuReadLock @ 0x1403A59C0
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     CcScanLogHandleList @ 0x1403A4C00 (CcScanLogHandleList.c)
 *     CcInitializeVolumeCacheMap @ 0x1403A5574 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x1403A5660 (CcForceWriteThrough.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 *     CcZeroData @ 0x1403A6B60 (CcZeroData.c)
 *     CcPostVolumeTelemetry @ 0x140421068 (CcPostVolumeTelemetry.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404A7D80 (CcPerfLogLoggedStreamsStats.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DBC28 (CcUpdateTimeOnLogHandles.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404DCC50 (CcCopyWriteWontFlush.c)
 *     CcIsFileObjectDirectMapped @ 0x1404DCD1C (CcIsFileObjectDirectMapped.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 KeRcuReadLock()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // rcx
  __int64 v2; // r8
  bool v3; // r9
  int v4; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  bool v8; // zf
  int v9; // ett

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v1);
  }
  v3 = KeDisableInterrupts();
  v4 = *(_DWORD *)(v2 + 14560);
  if ( v4 )
  {
    if ( v4 == -1 )
      __fastfail(0xEu);
  }
  else
  {
    v8 = *(_BYTE *)(v2 + 14567) == 0;
    *(_BYTE *)(v2 + 14564) = CurrentIrql;
    if ( !v8 )
    {
      _InterlockedOr8((volatile signed __int8 *)(v2 + 14567), 0x80u);
      v4 = *(_DWORD *)(v2 + 14560);
    }
  }
  result = (unsigned int)(v4 + 1);
  *(_DWORD *)(v2 + 14560) = result;
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
        v9 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v9 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
