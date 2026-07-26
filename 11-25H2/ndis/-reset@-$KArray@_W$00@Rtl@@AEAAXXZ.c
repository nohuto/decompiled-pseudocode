/*
 * XREFs of ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001908
 * Callers:
 *     ndisEtwCaptureMiniportEventLog @ 0x1400A0E24 (ndisEtwCaptureMiniportEventLog.c)
 *     ndisEtwCaptureMiniportFilterList @ 0x1400A0F54 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportMatchingHardwareId @ 0x1400A10F8 (ndisEtwCaptureMiniportMatchingHardwareId.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x1400A1250 (ndisEtwCaptureMiniportProtocolList.c)
 *     ndisEtwWriteMiniportRundown @ 0x1400A13F8 (ndisEtwWriteMiniportRundown.c)
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
