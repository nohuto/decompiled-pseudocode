/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x1802516FC
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x1802508F4 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180250934 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x1802509D8 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180250A40 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180250AD4 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x180250C08 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
