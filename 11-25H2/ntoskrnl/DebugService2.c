/*
 * XREFs of DebugService2 @ 0x1404FA0E0
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404A53F0 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x1404A5500 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1404BBC28 (DbgUnLoadImageSymbols.c)
 *     DbgCommandString @ 0x1405DB410 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405DB52C (DbgLoadUserImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
