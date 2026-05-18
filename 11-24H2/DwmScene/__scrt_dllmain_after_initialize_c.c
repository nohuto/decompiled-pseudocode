/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x18000B7BC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000B358 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     __isa_available_init @ 0x18000BC14 (__isa_available_init.c)
 *     ?raw_length@charNode@@UEBAHXZ @ 0x18000C294 (-raw_length@charNode@@UEBAHXZ.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000C2A0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__configure_narrow_argv @ 0x18000C366 (_o__configure_narrow_argv.c)
 *     _o__initialize_narrow_environment @ 0x18000C3A2 (_o__initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  int v0; // eax
  charNode *v1; // rcx
  unsigned int v2; // eax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    _isa_available_init();
  }
  else
  {
    v2 = charNode::raw_length(v1);
    if ( (unsigned int)o__configure_narrow_argv(v2) )
      return 0;
    o__initialize_narrow_environment();
  }
  return 1;
}
