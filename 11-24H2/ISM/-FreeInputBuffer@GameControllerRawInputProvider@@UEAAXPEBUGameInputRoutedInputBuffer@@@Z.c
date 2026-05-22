/*
 * XREFs of ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x1800CDB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GameControllerRawInputProvider::FreeInputBuffer(
        GameControllerRawInputProvider *this,
        const struct GameInputRoutedInputBuffer *a2)
{
  operator delete((char *)a2 - 88);
}
