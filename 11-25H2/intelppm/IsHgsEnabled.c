/*
 * XREFs of IsHgsEnabled @ 0x1400073EC
 * Callers:
 *     ConnectHwpInterrupt @ 0x14002A970 (ConnectHwpInterrupt.c)
 * Callees:
 *     <none>
 */

bool IsHgsEnabled()
{
  return dword_140019AD8 != 0;
}
