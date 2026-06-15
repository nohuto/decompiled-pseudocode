/*
 * XREFs of __scrt_initialize_crt @ 0x140058E94
 * Callers:
 *     __scrt_common_main_seh @ 0x140058B40 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x140059598 (__scrt_stub_for_acrt_uninitialize.c)
 *     __isa_available_init @ 0x140059C8C (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  if ( !a1 )
    byte_1400C3D11 = 1;
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
