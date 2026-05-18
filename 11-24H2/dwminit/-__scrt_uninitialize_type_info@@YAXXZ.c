/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180003B70
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800038A0 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

void __scrt_uninitialize_type_info(void)
{
  _std_type_info_destroy_list();
}
