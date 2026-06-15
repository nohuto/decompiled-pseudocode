/*
 * XREFs of pre_cpp_initialization @ 0x140058C10
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_winrt @ 0x14005965C (__scrt_initialize_winrt.c)
 *     __scrt_set_unhandled_exception_filter @ 0x14005990C (__scrt_set_unhandled_exception_filter.c)
 */

int pre_cpp_initialization()
{
  int v0; // eax

  _scrt_set_unhandled_exception_filter();
  v0 = _scrt_initialize_winrt();
  return o__set_new_mode_0(v0);
}
