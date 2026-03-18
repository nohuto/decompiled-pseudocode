/*
 * XREFs of __scrt_initialize_crt @ 0x140004F44
 * Callers:
 *     __scrt_common_main_seh @ 0x140004D30 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x140005444 (__scrt_stub_for_acrt_uninitialize.c)
 *     __isa_available_init @ 0x1400057C8 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  if ( !a1 )
    byte_140019391 = 1;
  _isa_available_init();
  if ( !(unsigned __int8)((__int64 (*)(void))_scrt_stub_for_acrt_uninitialize)() )
    return 0;
  if ( !(unsigned __int8)((__int64 (*)(void))_scrt_stub_for_acrt_uninitialize)() )
  {
    _scrt_stub_for_acrt_uninitialize(0LL);
    return 0;
  }
  return 1;
}
