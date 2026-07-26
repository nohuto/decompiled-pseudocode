/*
 * XREFs of NdisMCoIndicateStatus @ 0x1400D4150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ndisCoIndicateStatusInternal @ 0x1400D3E90 (ndisCoIndicateStatusInternal.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __stdcall NdisMCoIndicateStatus(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        ULONG StatusBufferSize)
{
  NDIS_HANDLE v7; // rdi
  int v9; // edx
  struct _NDIS_STATUS_INDICATION v10; // [rsp+30h] [rbp-B8h] BYREF

  v7 = NdisVcHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisVcHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisVcHandle,
      19,
      12,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  }
  memset(&v10, 0, sizeof(v10));
  v10.StatusBufferSize = StatusBufferSize;
  v10.Header = (_NDIS_OBJECT_HEADER)7340440;
  v10.SourceHandle = MiniportAdapterHandle;
  v10.StatusCode = GeneralStatus;
  v10.StatusBuffer = StatusBuffer;
  ndisCoIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, (__int64)v7, &v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      19,
      13,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  }
}
