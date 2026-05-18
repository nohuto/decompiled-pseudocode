/*
 * XREFs of __scrt_initialize_crt @ 0x18000B54C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000AF88 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     __isa_available_init @ 0x18000BC84 (__isa_available_init.c)
 *     sub_18000CD7C @ 0x18000CD7C (sub_18000CD7C.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  if ( !a1 )
    byte_1801C2CD1 = 1;
  _isa_available_init();
  if ( !(unsigned __int8)sub_18000CD7C(v1) )
    return 0;
  if ( !(unsigned __int8)sub_18000CD7C(v2) )
  {
    sub_18000CD7C(0LL);
    return 0;
  }
  return 1;
}
