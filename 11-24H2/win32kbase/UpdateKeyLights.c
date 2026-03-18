/*
 * XREFs of UpdateKeyLights @ 0x140189CD0
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3F20 (xxxChangeForegroundKeyboardTable.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     UpdateToggleKeyAndLights @ 0x140214380 (UpdateToggleKeyAndLights.c)
 */

__int64 __fastcall UpdateKeyLights(int a1)
{
  return UpdateToggleKeyAndLights(a1 != 0);
}
