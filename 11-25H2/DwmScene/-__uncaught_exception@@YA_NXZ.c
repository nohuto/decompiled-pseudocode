/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x18000BE44
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x18000B3AC (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18000B3EC (__scrt_dllmain_after_initialize_c.c)
 *     sub_18000B490 @ 0x18000B490 (sub_18000B490.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18000B4F8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x18000B58C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x18000B6C0 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_1801C2BA4 != 0;
}
