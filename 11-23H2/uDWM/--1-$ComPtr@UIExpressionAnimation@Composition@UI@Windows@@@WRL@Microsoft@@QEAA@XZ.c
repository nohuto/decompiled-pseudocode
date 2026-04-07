/*
 * XREFs of ??1?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C0D20
 * Callers:
 *     _CGlobalLightSet::AddNewRevealAmbientLight_::_1_::dtor$3 @ 0x1800679C2 (_CGlobalLightSet--AddNewRevealAmbientLight_--_1_--dtor$3.c)
 *     _CGlobalLightSet::AddNewSharedDistantLightWithType_::_1_::dtor$3 @ 0x1800679F8 (_CGlobalLightSet--AddNewSharedDistantLightWithType_--_1_--dtor$3.c)
 *     _CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource_::_1_::dtor$2 @ 0x180067A0A (_CGlobalLightSet--CreateExpressionAnimationFromHoverPointerSource_--_1_--dtor$2.c)
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$2 @ 0x1800CEAC4 (_CProjectedShadowScene--Initialize_--_1_--dtor$2.c)
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$4 @ 0x1800CEAD0 (_CProjectedShadowScene--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::~ComPtr<Windows::UI::Composition::IExpressionAnimation>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(a1);
}
