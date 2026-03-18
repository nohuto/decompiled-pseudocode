/*
 * XREFs of PoUnblockConsoleSwitch @ 0x140A2C648
 * Callers:
 *     PoPowerOffMonitor @ 0x1404CC3C0 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140B451D4 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 32) = 7;
  return PopDispatchStateCallout(a1, &v3);
}
