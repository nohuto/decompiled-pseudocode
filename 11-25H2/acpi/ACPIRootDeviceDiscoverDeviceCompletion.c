/*
 * XREFs of ACPIRootDeviceDiscoverDeviceCompletion @ 0x140067670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 */

LONG __fastcall ACPIRootDeviceDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      *(_QWORD *)a1 = a3;
      *(_DWORD *)(a1 + 16) = a2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x20u,
          (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
          a3,
          a2);
    }
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
}
