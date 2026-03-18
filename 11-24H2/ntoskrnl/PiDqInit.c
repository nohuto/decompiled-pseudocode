/*
 * XREFs of PiDqInit @ 0x140C24F10
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDqObjectManagerInit @ 0x1407285B8 (PiDqObjectManagerInit.c)
 */

__int64 PiDqInit()
{
  __int64 result; // rax

  PiDqObjectManagerInit(&PiDqDeviceManager, 1);
  PiDqObjectManagerInit(&PiDqDeviceInterfaceManager, 3);
  PiDqObjectManagerInit(&PiDqDeviceInterfaceClassManager, 4);
  PiDqObjectManagerInit(&PiDqDeviceContainerManager, 5);
  PiDqObjectManagerInit(&PiDqDeviceInstallerClassManager, 2);
  PiDqObjectManagerInit(&PiDqDevicePanelManager, 6);
  result = 0LL;
  PiDqSequenceNumber = 0LL;
  return result;
}
