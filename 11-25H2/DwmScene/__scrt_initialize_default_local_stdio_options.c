/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18000B89C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000AF88 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_18000AED4();
  *v0 |= 0x24uLL;
  result = sub_18000AEE4();
  *result |= 2uLL;
  return result;
}
