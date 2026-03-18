/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x140252810
 * Callers:
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_140160E90 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_140160E90 )
    {
      IoUnregisterPlugPlayNotification(qword_140160E88);
      qword_140160E88 = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  ReleaseMiniportListMutex();
}
