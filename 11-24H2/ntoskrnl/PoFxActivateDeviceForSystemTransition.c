/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x1404909D8
 * Callers:
 *     PopNotifyDevice @ 0x140B717B8 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  LOBYTE(a2) = 1;
  return PopFxActivateDevice(a1, a2, a3);
}
