/*
 * XREFs of ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000BB3C
 * Callers:
 *     ?SetOpacity@CSpriteVisual@@UEAAXN@Z @ 0x18000BAB0 (-SetOpacity@CSpriteVisual@@UEAAXN@Z.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A0624 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A0DAC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CEC44 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF1A8 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, a2);
}
