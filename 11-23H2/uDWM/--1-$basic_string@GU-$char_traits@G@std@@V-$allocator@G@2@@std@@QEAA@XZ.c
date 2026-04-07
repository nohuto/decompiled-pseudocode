/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800BF8F0
 * Callers:
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$4 @ 0x180067C92 (_CDWriteText--CreateTextFormat_--_1_--dtor$4.c)
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$5 @ 0x180067CA4 (_CDWriteText--CreateTextFormat_--_1_--dtor$5.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$2 @ 0x1800F023F (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::EndAnimationFrameStats_::_1_::dtor$0 @ 0x1800F514F (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransitionHandler--E.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  return std::wstring::_Tidy_deallocate(a1);
}
