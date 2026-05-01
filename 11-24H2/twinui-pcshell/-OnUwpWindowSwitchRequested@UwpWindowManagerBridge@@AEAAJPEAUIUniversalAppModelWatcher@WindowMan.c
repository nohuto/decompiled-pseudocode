/*
 * XREFs of ?OnUwpWindowSwitchRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUISwitchRequestedEventArgs@3456@@Z @ 0x180436BE0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5c081bd799e56ac9909073ef2bb66a39___ @ 0x180435930 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5c081bd799e56ac9909073ef2bb66a39.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowSwitchRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5c081bd799e56ac9909073ef2bb66a39___(
           v4,
           CurrentThreadId,
           &v6);
}
