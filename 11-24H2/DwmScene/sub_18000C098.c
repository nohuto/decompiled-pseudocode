/*
 * XREFs of sub_18000C098 @ 0x18000C098
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B470 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void sub_18000C098()
{
  void (**i)(void); // rbx

  for ( i = &qword_18019DEC8; i < &qword_18019DEC8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
