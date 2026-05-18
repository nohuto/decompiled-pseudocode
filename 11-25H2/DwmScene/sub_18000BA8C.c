/*
 * XREFs of sub_18000BA8C @ 0x18000BA8C
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B0A0 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void sub_18000BA8C()
{
  void (**i)(void); // rbx

  for ( i = qword_18019CED0; i < qword_18019CED0; ++i )
  {
    if ( *i )
      (*i)();
  }
}
