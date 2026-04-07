/*
 * XREFs of __scrt_dllmain_before_initialize_c @ 0x18009B640
 * Callers:
 *     dllmain_crt_process_attach @ 0x18009D208 (dllmain_crt_process_attach.c)
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x18009B7A4 (__scrt_initialize_onexit_tables.c)
 */

bool _scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)_scrt_initialize_onexit_tables(0LL) != 0;
}
