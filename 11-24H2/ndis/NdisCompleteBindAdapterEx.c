/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1400B86B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  int v4; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x45u,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)BindAdapterContext,
      Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      6,
      70,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)BindAdapterContext);
  }
}
