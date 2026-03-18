/*
 * XREFs of KiConvertToGuiThread @ 0x1406AC5B0
 * Callers:
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140935290 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
