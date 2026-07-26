/*
 * XREFs of NdisMCoIndicateStatusEx @ 0x1400DB590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ndisCoIndicateStatusInternal @ 0x1400DB1E0 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatusEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STATUS_INDICATION StatusIndication)
{
  NDIS_HANDLE v4; // rdi
  int v6; // edx

  v4 = NdisVcHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisVcHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisVcHandle,
      19,
      14,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  }
  ndisCoIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, (__int64)v4, StatusIndication);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      19,
      15,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  }
}
