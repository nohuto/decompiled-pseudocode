/*
 * XREFs of ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005BE70
 * Callers:
 *     <none>
 * Callees:
 *     ?RunNotificationWorker@ModernResourceEnforcer@@IEAAXXZ @ 0x18005BF4C (-RunNotificationWorker@ModernResourceEnforcer@@IEAAXXZ.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ModernResourceEnforcer::NotificationWorkCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        ModernResourceEnforcer *a2,
        struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  DWORD v5; // ebx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v4, TlsValue);
  }
  ModernResourceEnforcer::RunNotificationWorker(a2);
  (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)a2 + 16LL))(a2);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v5, 0LL);
  }
}
