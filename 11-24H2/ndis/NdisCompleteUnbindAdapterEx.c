/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x140176AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      73,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      74,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)UnbindContext);
}
