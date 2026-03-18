/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140496048
 * Callers:
 *     PopNotifyDevice @ 0x140B6F748 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  LOBYTE(a2) = 1;
  return PopFxActivateDevice(a1, a2, a3);
}
