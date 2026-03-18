/*
 * XREFs of _onexit @ 0x180250C64
 * Callers:
 *     atexit @ 0x180250CA4 (atexit.c)
 * Callees:
 *     _register_onexit_function_0 @ 0x180251A76 (_register_onexit_function_0.c)
 *     _crt_atexit_0 @ 0x180251A8E (_crt_atexit_0.c)
 */

_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rdx

  if ( Table._first == (_PVFV *)-1LL )
    v2 = crt_atexit_0((_PVFV)Func);
  else
    v2 = register_onexit_function_0(&Table, Func);
  v3 = 0LL;
  if ( !v2 )
    return Func;
  return v3;
}
