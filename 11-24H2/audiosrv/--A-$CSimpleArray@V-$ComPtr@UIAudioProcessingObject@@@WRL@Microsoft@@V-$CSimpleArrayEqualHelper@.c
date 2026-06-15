/*
 * XREFs of ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18005EBCC
 * Callers:
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180052ED0 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18008D9D0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x18014A540 (-GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z @ 0x18014A5D0 (-GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z.c)
 *     ?GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z @ 0x18014A650 (-GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z.c)
 *     ?GetPreferredFormat@CCompositeSystemEffect@@AEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x18014A6D4 (-GetPreferredFormat@CCompositeSystemEffect@@AEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18014A970 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    ATL::_AtlRaiseException(0xC000008C, a2);
    JUMPOUT(0x18005EBF3LL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
