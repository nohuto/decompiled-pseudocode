/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x1800A3F64
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800A3A20 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x1800A810C (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char _scrt_dllmain_crt_thread_detach()
{
  _scrt_stub_for_acrt_uninitialize_critical();
  _scrt_stub_for_acrt_uninitialize_critical();
  return 1;
}
