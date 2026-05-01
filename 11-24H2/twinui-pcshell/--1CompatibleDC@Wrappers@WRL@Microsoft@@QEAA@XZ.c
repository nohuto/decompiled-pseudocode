/*
 * XREFs of ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18068488C
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x180685158 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItemHelper @ 0x1806857A0 (s_OnDrawItemHelper.c)
 *     _s_DrawThemeTextPPIAware_::_1_::dtor$0 @ 0x180704136 (_s_DrawThemeTextPPIAware_--_1_--dtor$0.c)
 *     _s_OnDrawItemHelper_::_1_::dtor$0 @ 0x18070416C (_s_OnDrawItemHelper_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x180684C90 (-InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC(Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  Microsoft::WRL::Wrappers::CompatibleDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
