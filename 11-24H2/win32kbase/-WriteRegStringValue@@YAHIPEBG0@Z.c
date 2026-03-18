/*
 * XREFs of ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401BE3AC
 * Callers:
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A22EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x14015C3B4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019AC10 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401BE270 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 * Callees:
 *     FastWriteProfileValue @ 0x14009EEC0 (FastWriteProfileValue.c)
 */

void *__fastcall WriteRegStringValue(unsigned int a1, const unsigned __int16 *a2, unsigned __int16 *Data)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Data[v3] );
  return FastWriteProfileValue(0LL, a1, a2, 1u, Data, 2 * (int)v3 + 2);
}
