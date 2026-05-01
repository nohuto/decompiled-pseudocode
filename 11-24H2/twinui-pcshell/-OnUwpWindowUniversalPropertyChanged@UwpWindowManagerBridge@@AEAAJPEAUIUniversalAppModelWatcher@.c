/*
 * XREFs of ?OnUwpWindowUniversalPropertyChanged@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@3456@@Z @ 0x180189DC0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9e72222c57eb1177d20aad97c3927c2f___ @ 0x180189DEC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_9e72222c57eb1177d20aad97c3927c2f.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowUniversalPropertyChanged(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4[0] = this;
  v4[1] = &v5;
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9e72222c57eb1177d20aad97c3927c2f___(v4, a2);
}
