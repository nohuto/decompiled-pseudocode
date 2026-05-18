/*
 * XREFs of __scrt_uninitialize_crt @ 0x18000B6EC
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B0A0 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_18000CD7C @ 0x18000CD7C (sub_18000CD7C.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_1801C2CD1 || !a2 )
  {
    sub_18000CD7C(a1);
    LOBYTE(v3) = v2;
    sub_18000CD7C(v3);
  }
  return 1;
}
