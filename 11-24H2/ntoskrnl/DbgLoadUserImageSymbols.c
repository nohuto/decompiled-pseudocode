/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405E75DC
 * Callers:
 *     MiLoadUserSymbols @ 0x140AB13D8 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x1404FC860 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
