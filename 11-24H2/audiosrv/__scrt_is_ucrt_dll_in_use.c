/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x1800A4CE8
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x1800A3E9C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x1800A3EDC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x1800A3F80 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800A3FE8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x1800A407C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x1800A41B0 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
