/*
 * XREFs of sub_18000BA48 @ 0x18000BA48
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000AF88 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void sub_18000BA48()
{
  void (**i)(void); // rbx

  for ( i = qword_18019CEC0; i < qword_18019CEC0; ++i )
  {
    if ( *i )
      (*i)();
  }
}
