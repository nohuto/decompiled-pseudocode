/*
 * XREFs of __scrt_initialize_crt @ 0x1802D1888
 * Callers:
 *     dllmain_crt_process_attach @ 0x1802D1378 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x1802D214C (__isa_available_init.c)
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x1802DB0E4 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  if ( !a1 )
    byte_1808C7F11 = 1;
  _isa_available_init();
  if ( !(unsigned __int8)_scrt_stub_for_acrt_uninitialize_critical(v1) )
    return 0;
  if ( !(unsigned __int8)_scrt_stub_for_acrt_uninitialize_critical(v2) )
  {
    _scrt_stub_for_acrt_uninitialize_critical(0LL);
    return 0;
  }
  return 1;
}
