/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x180020374
 * Callers:
 *     dllmain_crt_dispatch @ 0x18001FE30 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180021DC0 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char _scrt_dllmain_crt_thread_detach()
{
  _scrt_stub_for_acrt_uninitialize_critical();
  _scrt_stub_for_acrt_uninitialize_critical();
  return 1;
}
