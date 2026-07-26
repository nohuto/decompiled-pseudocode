/*
 * XREFs of ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001A38
 * Callers:
 *     ndisEtwCaptureMiniportEventLog @ 0x1400969B0 (ndisEtwCaptureMiniportEventLog.c)
 *     ndisEtwCaptureMiniportFilterList @ 0x140096AE0 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportMatchingHardwareId @ 0x140096C84 (ndisEtwCaptureMiniportMatchingHardwareId.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140096DDC (ndisEtwCaptureMiniportProtocolList.c)
 *     ndisEtwWriteMiniportRundown @ 0x140096F84 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KArray<wchar_t,1>::reset(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
}
