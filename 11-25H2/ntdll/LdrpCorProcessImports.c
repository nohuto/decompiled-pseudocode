/*
 * XREFs of LdrpCorProcessImports @ 0x18006EF20
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpSendDllNotifications @ 0x180071EE4 (LdrpSendDllNotifications.c)
 *     AVrfDllLoadNotification @ 0x1800ECFE4 (AVrfDllLoadNotification.c)
 */

__int64 __fastcall LdrpCorProcessImports(__int64 a1)
{
  int Notification; // edi

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 6;
  Notification = AVrfDllLoadNotification();
  if ( Notification >= 0 )
  {
    LdrpSendDllNotifications(a1, 1LL);
    LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 5293LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 7;
  }
  return (unsigned int)Notification;
}
