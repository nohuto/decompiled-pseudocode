/*
 * XREFs of DpiAcpiDockEventCallback @ 0x14024A740
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1400515C8 (DpiAcpiCallAcpiEventHandler.c)
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, PVOID Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, 3, 0x77u, 0LL);
}
