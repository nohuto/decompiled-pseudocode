/*
 * XREFs of __scrt_initialize_crt @ 0x180002374
 * Callers:
 *     dllmain_crt_process_attach @ 0x180003788 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x1800028E8 (__isa_available_init.c)
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180003C64 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  if ( !a1 )
    byte_18001A491 = 1;
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
