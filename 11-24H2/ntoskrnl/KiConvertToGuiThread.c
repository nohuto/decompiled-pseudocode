/*
 * XREFs of KiConvertToGuiThread @ 0x1406AD550
 * Callers:
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
