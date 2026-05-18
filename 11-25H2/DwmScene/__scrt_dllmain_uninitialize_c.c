/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x18000B4F8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B0A0 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BE44 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__cexit @ 0x18000BEFA (_o__cexit.c)
 *     sub_18000CD88 @ 0x18000CD88 (sub_18000CD88.c)
 */

__int64 _scrt_dllmain_uninitialize_c()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table(&xmmword_1801C2CA0);
  result = sub_18000CD88();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
