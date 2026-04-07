/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x18005E6F0
 * Callers:
 *     dllmain_crt_process_detach @ 0x18005E400 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

void __scrt_uninitialize_type_info(void)
{
  _std_type_info_destroy_list();
}
