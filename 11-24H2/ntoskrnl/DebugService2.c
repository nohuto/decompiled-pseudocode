/*
 * XREFs of DebugService2 @ 0x1404FA120
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x14049EDB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x14049EEC0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1404B5F18 (DbgUnLoadImageSymbols.c)
 *     DbgCommandString @ 0x1405E4AB0 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405E4BCC (DbgLoadUserImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
