/*
 * XREFs of ?ndisStopNsiProvider@@YAXXZ @ 0x1400D6328
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140152A70 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 */

void ndisStopNsiProvider(void)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      18,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids);
  NmrDeregisterProvider(NmrProviderHandle);
  NmrWaitForProviderDeregisterComplete(NmrProviderHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      19,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids);
}
