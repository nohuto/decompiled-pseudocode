/*
 * XREFs of DebugService2 @ 0x1404FC860
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404A4024 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x1404A4130 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1404BB078 (DbgUnLoadImageSymbols.c)
 *     DbgCommandString @ 0x1405E74C0 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405E75DC (DbgLoadUserImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
