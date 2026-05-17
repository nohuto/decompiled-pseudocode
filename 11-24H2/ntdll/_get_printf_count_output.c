/*
 * XREFs of _get_printf_count_output @ 0x18012C2B8
 * Callers:
 *     _output_l @ 0x1801286D0 (_output_l.c)
 *     _woutput_l @ 0x180129080 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1801CDDC0 == (_security_cookie | 1);
}
