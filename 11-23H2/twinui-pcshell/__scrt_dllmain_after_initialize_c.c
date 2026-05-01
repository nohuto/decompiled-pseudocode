/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1801C6964
 * Callers:
 *     dllmain_crt_process_attach @ 0x1801C63E8 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x1801C70B0 (__isa_available_init.c)
 *     _get_startup_argv_mode @ 0x1801C7258 (_get_startup_argv_mode.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1801C7264 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x1801C73A2 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x1801C73D2 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode startup_argv_mode; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    startup_argv_mode = get_startup_argv_mode();
    if ( o__configure_narrow_argv_0(startup_argv_mode) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
