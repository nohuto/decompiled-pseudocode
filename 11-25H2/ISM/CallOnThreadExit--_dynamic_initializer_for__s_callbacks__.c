/*
 * XREFs of CallOnThreadExit::_dynamic_initializer_for__s_callbacks__ @ 0x180009900
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

int CallOnThreadExit::_dynamic_initializer_for__s_callbacks__()
{
  _QWORD *v0; // rax

  v0 = operator new(0x70uLL);
  *v0 = v0;
  v0[1] = v0;
  qword_180246E88 = (__int64)v0;
  return atexit((void (__cdecl *)())CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__);
}
