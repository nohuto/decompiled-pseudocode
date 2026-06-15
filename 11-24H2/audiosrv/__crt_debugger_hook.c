/*
 * XREFs of __crt_debugger_hook @ 0x1800A4ADC
 * Callers:
 *     __scrt_fastfail @ 0x1800A4AEC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
