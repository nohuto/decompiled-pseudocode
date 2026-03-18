/*
 * XREFs of KeRcuReadLock @ 0x1402CE360
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 *     CcZeroData @ 0x1402CC9B0 (CcZeroData.c)
 *     CcScanLogHandleList @ 0x1402CCCB4 (CcScanLogHandleList.c)
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x1402CE010 (CcForceWriteThrough.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404A88EC (CcPerfLogLoggedStreamsStats.c)
 *     CcPostVolumeTelemetry @ 0x1404C405C (CcPostVolumeTelemetry.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DB318 (CcUpdateTimeOnLogHandles.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404DC340 (CcCopyWriteWontFlush.c)
 *     CcIsFileObjectDirectMapped @ 0x1404DC40C (CcIsFileObjectDirectMapped.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeRcuReadLock(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // rdx
  __int64 v3; // r8
  char v4; // r9
  int v5; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v9; // ett

  CurrentIrql = KeGetCurrentIrql();
  v2 = 2LL;
  if ( CurrentIrql < 2u )
  {
    a1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v4 = KeDisableInterrupts(a1, v2, KeGetCurrentPrcb());
  v5 = *(_DWORD *)(v3 + 14560);
  if ( v5 )
  {
    if ( v5 == -1 )
      __fastfail(0xEu);
  }
  else
  {
    *(_BYTE *)(v3 + 14564) = CurrentIrql;
    if ( *(_BYTE *)(v3 + 14567) )
    {
      _InterlockedOr8((volatile signed __int8 *)(v3 + 14567), 0x80u);
      v5 = *(_DWORD *)(v3 + 14560);
    }
  }
  result = (unsigned int)(v5 + 1);
  *(_DWORD *)(v3 + 14560) = result;
  if ( v4 )
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
