/*
 * XREFs of ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18006C8EC
 * Callers:
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800608E0 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800911E0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x180141AD0 (-GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z @ 0x180141B60 (-GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z.c)
 *     ?GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z @ 0x180141BE0 (-GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z.c)
 *     ?GetPreferredFormat@CCompositeSystemEffect@@AEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x180141C64 (-GetPreferredFormat@CCompositeSystemEffect@@AEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180141F00 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    ATL::_AtlRaiseException(0xC000008C, a2);
    JUMPOUT(0x18006C913LL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
