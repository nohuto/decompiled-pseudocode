/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x180226905
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ @ 0x18050C08C (--1-$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 368) + 152LL;
  return winrt::com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::~com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(*(_QWORD *)(a2 + 136));
}
