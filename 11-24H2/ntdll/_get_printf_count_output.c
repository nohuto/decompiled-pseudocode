/*
 * XREFs of _get_printf_count_output @ 0x18012A4E8
 * Callers:
 *     _output_l @ 0x180126900 (_output_l.c)
 *     _woutput_l @ 0x1801272B0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1801CCDC0 == (_security_cookie | 1);
}
