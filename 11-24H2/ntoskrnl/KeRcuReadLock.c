/*
 * XREFs of KeRcuReadLock @ 0x14040C360
 * Callers:
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcPerfLogLoggedStreamsStats @ 0x14040B154 (CcPerfLogLoggedStreamsStats.c)
 *     CcGetFlushedValidData @ 0x14040B790 (CcGetFlushedValidData.c)
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 *     CcScanLogHandleList @ 0x14040BD34 (CcScanLogHandleList.c)
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404D4D38 (CcUpdateTimeOnLogHandles.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404D5D60 (CcCopyWriteWontFlush.c)
 *     CcIsFileObjectDirectMapped @ 0x1404D5E2C (CcIsFileObjectDirectMapped.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
  int v8; // ett

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v1, 2LL);
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
    *(_BYTE *)(v2 + 14564) = CurrentIrql;
    if ( *(_BYTE *)(v2 + 14567) )
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
        v8 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v8 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
