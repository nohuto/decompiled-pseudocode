/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405E4BCC
 * Callers:
 *     MiLoadUserSymbols @ 0x140AAC348 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x1404FA120 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
