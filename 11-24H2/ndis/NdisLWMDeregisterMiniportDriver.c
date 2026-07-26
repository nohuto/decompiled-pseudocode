/*
 * XREFs of NdisLWMDeregisterMiniportDriver @ 0x140093170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140136BAC (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisLWMDeregisterMiniportDriver(_NDIS_M_DRIVER_BLOCK *this)
{
  int v2; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      136,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)this);
  if ( SLOBYTE(this->Flags) >= 0 )
    ndisBugCheckEx(0x29uLL, 1uLL, (ULONG_PTR)this, 0LL);
  ndisInternalDeregisterMiniportDriver(this);
  ExFreePoolWithTag(this, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      1,
      137,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids);
  }
}
