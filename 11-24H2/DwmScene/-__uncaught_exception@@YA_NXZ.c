/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x18000C2A0
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x18000B77C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18000B7BC (__scrt_dllmain_after_initialize_c.c)
 *     sub_18000B860 @ 0x18000B860 (sub_18000B860.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18000B8C8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x18000B95C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x18000BA90 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_1801C3BD4 != 0;
}
