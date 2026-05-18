/*
 * XREFs of __scrt_initialize_crt @ 0x18000B91C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000B358 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     __isa_available_init @ 0x18000BC14 (__isa_available_init.c)
 *     sub_18000CE64 @ 0x18000CE64 (sub_18000CE64.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  if ( !a1 )
    byte_1801C3CF1 = 1;
  _isa_available_init();
  if ( !(unsigned __int8)sub_18000CE64(v1) )
    return 0;
  if ( !(unsigned __int8)sub_18000CE64(v2) )
  {
    sub_18000CE64(0LL);
    return 0;
  }
  return 1;
}
