/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x1405D84FC
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405D71D0 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x1405D7374 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x1405D74A4 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405D75B0 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopPluginAcpiNotification @ 0x1404CFE3C (PopPluginAcpiNotification.c)
 */

__int64 __fastcall PopPluginAcpiNotificationStrict(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = BugCheckParameter2;
  result = PopPluginAcpiNotification(BugCheckParameter3, BugCheckParameter2, BugCheckParameter4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x668uLL, v4, BugCheckParameter3, BugCheckParameter4);
  return result;
}
