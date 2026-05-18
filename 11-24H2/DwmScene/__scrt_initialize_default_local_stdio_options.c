/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18000BEA8
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000B358 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     sub_18000B2B4 @ 0x18000B2B4 (sub_18000B2B4.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_18000B2A4();
  *v0 |= 0x24uLL;
  result = sub_18000B2B4();
  *result |= 2uLL;
  return result;
}
