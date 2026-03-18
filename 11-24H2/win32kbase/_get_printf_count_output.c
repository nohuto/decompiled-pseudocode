/*
 * XREFs of _get_printf_count_output @ 0x1401A200C
 * Callers:
 *     _woutput_l @ 0x1401A0C4C (_woutput_l.c)
 *     _output_l @ 0x1401A1678 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_14029B480 == (_security_cookie | 1);
}
