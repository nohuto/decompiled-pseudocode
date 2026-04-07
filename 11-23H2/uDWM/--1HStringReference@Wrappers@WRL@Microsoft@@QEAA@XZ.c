/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800585EC
 * Callers:
 *     _CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent_::_1_::dtor$6 @ 0x18009EFDC (_CAccentAcrylicBlurBehind--EnsureAcrylicBrushForAccent_--_1_--dtor$6.c)
 *     _CAccentAcrylicBlurBehind::ValidateGraphicsDevice_::_1_::dtor$1 @ 0x1800A125A (_CAccentAcrylicBlurBehind--ValidateGraphicsDevice_--_1_--dtor$1.c)
 *     _CGlobalLightSet::StopExpressionAnimationHelper_::_1_::dtor$1 @ 0x1800C14B4 (_CGlobalLightSet--StopExpressionAnimationHelper_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
