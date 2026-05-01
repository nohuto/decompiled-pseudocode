/*
 * XREFs of __crt_debugger_hook @ 0x180002750
 * Callers:
 *     __scrt_fastfail @ 0x180002760 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
