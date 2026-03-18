/*
 * XREFs of _dynamic_initializer_for__CPointerDeviceCache::s_deviceCache__ @ 0x180007290
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 */

int dynamic_initializer_for__CPointerDeviceCache::s_deviceCache__()
{
  _QWORD *v0; // rax

  v0 = operator new(0x60uLL);
  *v0 = v0;
  v0[1] = v0;
  v0[2] = v0;
  *((_WORD *)v0 + 12) = 257;
  CPointerDeviceCache::s_deviceCache = (__int64)v0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__);
}
