/*
 * XREFs of ??0?$CComQIPtr@UIAudioProcessingObjectPreferredFormatSupport@@$1?_GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140043B14
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004ED20 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x140063E70 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?GetPreferredOutputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x1400640A0 (-GetPreferredOutputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioProcessingObjectPreferredFormatSupport,&__s_GUID const _GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3>::CComQIPtr<IAudioProcessingObjectPreferredFormatSupport,&__s_GUID const _GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3, a1);
  return a1;
}
