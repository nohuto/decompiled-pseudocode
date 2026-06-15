/*
 * XREFs of __scrt_uninitialize_crt @ 0x140059124
 * Callers:
 *     __scrt_common_main_seh @ 0x140058C30 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x140059688 (__scrt_stub_for_acrt_uninitialize.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_1400C3D91 || !a2 )
  {
    _scrt_stub_for_acrt_uninitialize(a1);
    LOBYTE(v3) = v2;
    _scrt_stub_for_acrt_uninitialize(v3);
  }
  return 1;
}
