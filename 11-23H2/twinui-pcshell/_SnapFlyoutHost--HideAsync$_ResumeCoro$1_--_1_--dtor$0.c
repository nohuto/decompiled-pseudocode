/*
 * XREFs of _SnapFlyoutHost::HideAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1802273C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ @ 0x18050C08C (--1-$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::HideAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 208) + 16LL;
  return winrt::com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::~com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(*(_QWORD *)(a2 + 88));
}
