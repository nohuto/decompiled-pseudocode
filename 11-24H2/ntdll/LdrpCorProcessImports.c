/*
 * XREFs of LdrpCorProcessImports @ 0x1800746A0
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpSendDllNotifications @ 0x1800712E4 (LdrpSendDllNotifications.c)
 *     AVrfDllLoadNotification @ 0x1800EC804 (AVrfDllLoadNotification.c)
 */

__int64 __fastcall LdrpCorProcessImports(__int64 a1)
{
  int Notification; // edi

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 6;
  Notification = AVrfDllLoadNotification(a1);
  if ( Notification >= 0 )
  {
    LdrpSendDllNotifications(a1, 1u);
    LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 7;
  }
  return (unsigned int)Notification;
}
