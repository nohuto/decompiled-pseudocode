/*
 * XREFs of ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x1800654A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800655AC (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PnpDeviceWatcher::OnPnpNotification(int a1, HSTRING a2, __int64 a3)
{
  _QWORD *v6; // rax
  ULONG_PTR v7; // rbx
  HSTRING *v8; // rdi
  HRESULT v9; // eax
  unsigned int v10; // edx
  PnpDeviceWatcher::NotificationListEntry *v11; // rdi
  void *v12; // rax

  if ( a3 )
  {
    v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = (ULONG_PTR)v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      v6[3] = 0LL;
      v6[4] = 0LL;
      v6[2] = a3;
      *((_DWORD *)v6 + 6) = a1;
      v8 = (HSTRING *)(v6 + 4);
      if ( !a2 || a2 != *v8 )
      {
        WindowsDeleteString(*v8);
        *v8 = 0LL;
        v9 = WindowsDuplicateString(a2, v8);
        v11 = (PnpDeviceWatcher::NotificationListEntry *)v7;
        if ( v9 < 0 )
          goto LABEL_8;
      }
      v12 = (void *)std::_Atomic_storage<unsigned __int64,8>::load(a3 + 24);
      v11 = (PnpDeviceWatcher::NotificationListEntry *)v7;
      if ( QueueUserAPC(PnpDeviceWatcher::PnpNotificationApc, v12, v7) != 1 )
LABEL_8:
        PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(v11, v10);
    }
  }
}
