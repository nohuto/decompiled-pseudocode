/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180099F28
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180039D20 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A374 (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, a2);
}
