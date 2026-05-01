/*
 * XREFs of _SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1802278CD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ @ 0x18050C08C (--1-$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 160) + 56LL;
  return winrt::com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::~com_ptr<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(*(_QWORD *)(a2 + 64));
}
