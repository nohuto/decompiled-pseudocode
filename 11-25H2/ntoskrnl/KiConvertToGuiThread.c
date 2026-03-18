/*
 * XREFs of KiConvertToGuiThread @ 0x1406A12E0
 * Callers:
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x14091E000 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
