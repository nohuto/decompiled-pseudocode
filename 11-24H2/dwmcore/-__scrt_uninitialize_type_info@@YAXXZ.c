/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180251954
 * Callers:
 *     dllmain_crt_process_detach @ 0x180250E40 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

void __scrt_uninitialize_type_info(void)
{
  _std_type_info_destroy_list_0(&__type_info_root_node);
}
