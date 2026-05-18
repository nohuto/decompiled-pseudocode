/*
 * XREFs of _onexit @ 0x18000BAEC
 * Callers:
 *     atexit @ 0x18000BB2C (atexit.c)
 * Callees:
 *     _o__crt_atexit @ 0x18000C372 (_o__crt_atexit.c)
 *     _o__register_onexit_function @ 0x18000C3EC (_o__register_onexit_function.c)
 */

_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rdx

  if ( (_QWORD)xmmword_1801C3CC0 == -1LL )
    v2 = o__crt_atexit();
  else
    v2 = o__register_onexit_function(&xmmword_1801C3CC0, Func);
  v3 = 0LL;
  if ( !v2 )
    return Func;
  return v3;
}
