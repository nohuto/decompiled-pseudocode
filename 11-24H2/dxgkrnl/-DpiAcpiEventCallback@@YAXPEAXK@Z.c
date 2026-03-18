/*
 * XREFs of ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x140050E80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     DpiAcpiCallAcpiEventHandler @ 0x140050ED8 (DpiAcpiCallAcpiEventHandler.c)
 */

void __fastcall DpiAcpiEventCallback(PVOID Object, int a2, __int64 a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)Object, (__int64)&EventACPIEvent, a3, a2);
  DpiAcpiCallAcpiEventHandler(Object);
}
