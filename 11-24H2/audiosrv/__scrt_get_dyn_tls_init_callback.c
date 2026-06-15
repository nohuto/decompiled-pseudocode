/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x1800A4ACC
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800A3A78 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}
