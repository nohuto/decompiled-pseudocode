/*
 * XREFs of ACPIInitFreeDeviceExtensionInterfaceNames @ 0x140061708
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1400557B8 (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     ACPIInitFreeSingleInterfaceName @ 0x140061774 (ACPIInitFreeSingleInterfaceName.c)
 */

__int64 __fastcall ACPIInitFreeDeviceExtensionInterfaceNames(struct _UNICODE_STRING *a1)
{
  ACPIInitFreeSingleInterfaceName(a1 + 64);
  ACPIInitFreeSingleInterfaceName(a1 + 65);
  ACPIInitFreeSingleInterfaceName(a1 + 63);
  ACPIInitFreeSingleInterfaceName(a1 + 66);
  ACPIInitFreeSingleInterfaceName(a1 + 68);
  ACPIInitFreeSingleInterfaceName(a1 + 67);
  return ACPIInitFreeSingleInterfaceName(a1 + 69);
}
