/*
 * XREFs of __scrt_uninitialize_crt @ 0x18002053C
 * Callers:
 *     dllmain_crt_process_detach @ 0x18001FEF0 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180021D10 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_180066FD1 || !a2 )
  {
    _scrt_stub_for_acrt_uninitialize_critical(a1);
    LOBYTE(v3) = v2;
    _scrt_stub_for_acrt_uninitialize_critical(v3);
  }
  return 1;
}
