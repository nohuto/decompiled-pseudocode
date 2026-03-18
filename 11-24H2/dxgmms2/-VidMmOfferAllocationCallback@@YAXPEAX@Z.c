/*
 * XREFs of ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400338C0
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchSubmitDeviceCommand @ 0x140033344 (VidSchSubmitDeviceCommand.c)
 *     VidSchCancelDeviceCommand @ 0x140039690 (VidSchCancelDeviceCommand.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1400FCC08 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VidMmOfferAllocationCallback(_QWORD *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[12] + 12LL), 0xFFFFFFFF) == 1
    && _InterlockedCompareExchange16((volatile signed __int16 *)(a1[12] + 8LL), 2, 1) == 1
    && (byte_140081241 & 1) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer();
  }
}
