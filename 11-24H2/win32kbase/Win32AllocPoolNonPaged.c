/*
 * XREFs of Win32AllocPoolNonPaged @ 0x14007B460
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

void *__fastcall Win32AllocPoolNonPaged(unsigned __int64 a1, unsigned int a2)
{
  return Win32AllocPoolImpl(0x40uLL, a1, a2);
}
