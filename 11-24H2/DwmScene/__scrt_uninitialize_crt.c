/*
 * XREFs of __scrt_uninitialize_crt @ 0x18000BABC
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B470 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_18000CE64 @ 0x18000CE64 (sub_18000CE64.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_1801C3CF1 || !a2 )
  {
    sub_18000CE64(a1);
    LOBYTE(v3) = v2;
    sub_18000CE64(v3);
  }
  return 1;
}
