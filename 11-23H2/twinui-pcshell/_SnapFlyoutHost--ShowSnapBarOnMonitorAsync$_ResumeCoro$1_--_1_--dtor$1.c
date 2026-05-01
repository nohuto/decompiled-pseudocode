/*
 * XREFs of _SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180228631
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ @ 0x18050C08C (--1-$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 160) + 48LL;
  return winrt::com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::~com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(*(_QWORD *)(a2 + 48));
}
