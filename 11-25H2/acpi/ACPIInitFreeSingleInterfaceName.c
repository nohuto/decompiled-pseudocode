/*
 * XREFs of ACPIInitFreeSingleInterfaceName @ 0x140061774
 * Callers:
 *     ACPIInitFreeDeviceExtensionInterfaceNames @ 0x140061708 (ACPIInitFreeDeviceExtensionInterfaceNames.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInitFreeSingleInterfaceName(PUNICODE_STRING UnicodeString)
{
  if ( UnicodeString->Buffer )
  {
    IoSetDeviceInterfaceState(UnicodeString, 0);
    RtlFreeUnicodeString(UnicodeString);
  }
}
