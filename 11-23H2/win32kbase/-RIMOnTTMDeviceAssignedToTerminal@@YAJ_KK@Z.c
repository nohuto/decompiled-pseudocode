/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C01B4340
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceTerminalId @ 0x1C0191EA8 (RIMSetDeviceTerminalId.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, int a2)
{
  return RIMSetDeviceTerminalId(a1, a2);
}
