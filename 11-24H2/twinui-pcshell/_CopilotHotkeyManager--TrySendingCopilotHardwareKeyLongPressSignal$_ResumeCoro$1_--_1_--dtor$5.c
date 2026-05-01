/*
 * XREFs of _CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1_::_1_::dtor$5 @ 0x1807013A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028F67C (--1-$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 72) + 200LL;
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
           *(_QWORD **)(a2 + 192),
           a2);
}
