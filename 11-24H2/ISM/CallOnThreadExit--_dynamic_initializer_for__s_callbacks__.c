/*
 * XREFs of CallOnThreadExit::_dynamic_initializer_for__s_callbacks__ @ 0x180009EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

int CallOnThreadExit::_dynamic_initializer_for__s_callbacks__()
{
  _QWORD *v0; // rax

  v0 = operator new(0x78uLL);
  *v0 = v0;
  v0[1] = v0;
  qword_180250E50 = (__int64)v0;
  return atexit((void (__cdecl *)())CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__);
}
