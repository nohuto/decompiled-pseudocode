/*
 * XREFs of Crashdump_UsbDevice_SetPortPower @ 0x140055730
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x140050F64 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x14005412C (Crashdump_UsbDevice_ChangePortFeature.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SetPortPower(__int64 a1, int a2)
{
  int v4; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SetPortPower: begin: port %u\n", a2);
  v4 = Crashdump_UsbDevice_ChangePortFeature(a1, a2, 8, 3u);
  if ( v4 >= 0 )
    KeStallExecutionProcessor(0x493E0u);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SetPortPower: end 0x%X\n", v4);
  return (unsigned int)v4;
}
