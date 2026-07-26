/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x140093980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  char v4; // bl

  v4 = (char)MiniportAdapterHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      22,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        23,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        v4);
  }
}
