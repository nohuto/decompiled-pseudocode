/*
 * XREFs of VfWdCheckForSettingsChange @ 0x140B9C898
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x140B9B3CC (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x140B9C9B8 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 *     ViWdStartTimer @ 0x140B9CD4C (ViWdStartTimer.c)
 */

__int64 __fastcall VfWdCheckForSettingsChange(char a1)
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    _InterlockedExchange(&ViWdCancelling, 1);
    KeCancelTimer(&ViWdIrpTimer);
    KeRemoveQueueDpcEx((__int64)&ViWdIrpTimerDpc, 1);
    result = (unsigned int)_InterlockedExchange(&ViWdCancelling, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = (unsigned int)VfWdCancelTimeoutTicks;
      if ( VfWdCancelTimeoutTicks )
        return ViWdStartTimer();
    }
  }
  return result;
}
