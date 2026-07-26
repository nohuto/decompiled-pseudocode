/*
 * XREFs of NdisFRestartComplete @ 0x14006B370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 */

void __stdcall NdisFRestartComplete(NDIS_HANDLE NdisFilterHandle, NDIS_STATUS Status)
{
  __int64 v4; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Fu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)NdisFilterHandle,
      Status);
  *(_DWORD *)(*((_QWORD *)NdisFilterHandle + 16) + 8LL) = Status;
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v4) = Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x20u,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)NdisFilterHandle,
      v4);
  }
}
