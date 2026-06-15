/*
 * XREFs of ??0?$CComQIPtr@UIApoAcousticEchoCancellation@@$1?_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003EB84
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004ED20 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x14006C244 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_25385759_3236_4101_a943_25693dfb5d2d, a1);
  return a1;
}
