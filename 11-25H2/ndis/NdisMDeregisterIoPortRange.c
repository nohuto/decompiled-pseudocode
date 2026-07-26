/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x14009D5A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  char v4; // bl

  v4 = (char)MiniportAdapterHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      22,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportAdapterHandle);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        23,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        v4);
  }
}
