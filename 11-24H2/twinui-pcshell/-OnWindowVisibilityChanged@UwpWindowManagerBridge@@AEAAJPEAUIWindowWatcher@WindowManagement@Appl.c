/*
 * XREFs of ?OnWindowVisibilityChanged@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowVisibilityChangedEventArgs@3456@@Z @ 0x1801B3BF0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___ @ 0x1801B3C1C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f0eaa94307a68afcb0b7a6b106b2f57f.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnWindowVisibilityChanged(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4[0] = this;
  v4[1] = &v5;
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___(v4, a2);
}
