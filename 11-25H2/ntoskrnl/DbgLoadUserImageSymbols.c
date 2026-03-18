/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405DB52C
 * Callers:
 *     MiLoadUserSymbols @ 0x140AABED8 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x1404FA0E0 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
