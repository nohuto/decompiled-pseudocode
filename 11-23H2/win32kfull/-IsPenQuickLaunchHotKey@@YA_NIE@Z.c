/*
 * XREFs of ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x1C0014FFC
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010910 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x1C0014F88 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPenQuickLaunchHotKey(int a1, char a2)
{
  return a1 == 8 && (unsigned __int8)(a2 + 127) <= 2u;
}
