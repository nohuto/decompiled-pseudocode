/*
 * XREFs of __scrt_release_startup_lock @ 0x18000BA90
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000B358 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B470 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000C2A0 (-__uncaught_exception@@YA_NXZ.c)
 */

char __fastcall _scrt_release_startup_lock(char a1)
{
  int v2; // eax

  LOBYTE(v2) = __uncaught_exception();
  if ( v2 && !a1 )
    _InterlockedExchange64(&qword_1801C3CB8, 0LL);
  return v2;
}
