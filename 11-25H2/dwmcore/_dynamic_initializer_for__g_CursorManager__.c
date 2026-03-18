/*
 * XREFs of _dynamic_initializer_for__g_CursorManager__ @ 0x180007120
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 */

int dynamic_initializer_for__g_CursorManager__()
{
  _QWORD *v0; // rax

  InitializeCriticalSection(&g_CursorManager);
  xmmword_180406AB8 = 0LL;
  v0 = operator new(0x30uLL);
  *v0 = v0;
  v0[1] = v0;
  v0[2] = v0;
  *((_WORD *)v0 + 12) = 257;
  *(_QWORD *)&xmmword_180406AB8 = v0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CursorManager__);
}
