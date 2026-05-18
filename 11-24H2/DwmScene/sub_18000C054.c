/*
 * XREFs of sub_18000C054 @ 0x18000C054
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000B358 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void sub_18000C054()
{
  void (**i)(void); // rbx

  for ( i = qword_18019DEB8; i < qword_18019DEB8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
