/*
 * XREFs of DpiAcpiDockEventCallback @ 0x140251570
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x140050ED8 (DpiAcpiCallAcpiEventHandler.c)
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, PVOID Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, 3, 0x77u, 0LL);
}
