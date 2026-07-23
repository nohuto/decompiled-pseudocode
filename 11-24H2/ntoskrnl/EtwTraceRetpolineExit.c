/*
 * XREFs of EtwTraceRetpolineExit @ 0x14064C410
 * Callers:
 *     __guard_retpoline_exit_indirect_rax @ 0x140BC03C0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10_log_event @ 0x140BC0520 (__guard_retpoline_import_r10_log_event.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceRetpolineExit(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v2 = a1;
  v3 = &v2;
  v5 = 0;
  v4 = 8;
  return EtwTraceKernelEvent((int)&v3, 1, 0xA0000002, 3950, 5245442);
}
