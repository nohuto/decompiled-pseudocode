/*
 * XREFs of ?OnUwpWindowConsolidateRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIConsolidateRequestedEventArgs@3456@@Z @ 0x1801C8120
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_281fb8e417c6d6a3f2971efd5820aeeb___ @ 0x1801C815C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_281fb8e417c6d6a3f2971efd5820aeeb.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowConsolidateRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[0] = this;
  v6[1] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_281fb8e417c6d6a3f2971efd5820aeeb___(
           v4,
           CurrentThreadId,
           v6);
}
