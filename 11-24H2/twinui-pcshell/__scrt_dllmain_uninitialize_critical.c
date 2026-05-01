/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x1802D186C
 * Callers:
 *     dllmain_crt_process_detach @ 0x1802D1490 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x1802DB0E4 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

__int64 _scrt_dllmain_uninitialize_critical()
{
  __int64 v0; // rcx

  _scrt_stub_for_acrt_uninitialize_critical(0LL);
  return _scrt_stub_for_acrt_uninitialize_critical(v0);
}
