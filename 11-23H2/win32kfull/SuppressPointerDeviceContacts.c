/*
 * XREFs of SuppressPointerDeviceContacts @ 0x1C013B0DC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 * Callees:
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x1C013AFAC (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 */

NTSTATUS SuppressPointerDeviceContacts()
{
  return ResetPointerDevices(1LL);
}
