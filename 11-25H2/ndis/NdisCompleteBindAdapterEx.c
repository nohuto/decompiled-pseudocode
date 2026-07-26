/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1400BF9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  int v4; // edx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x42u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)BindAdapterContext,
      Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      6,
      67,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)BindAdapterContext);
  }
}
