/*
 * XREFs of ?ndisStopNsiProvider@@YAXXZ @ 0x1400CECE8
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140147DA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 */

void ndisStopNsiProvider(void)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      18,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids);
  NmrDeregisterProvider(NmrProviderHandle);
  NmrWaitForProviderDeregisterComplete(NmrProviderHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      19,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids);
}
