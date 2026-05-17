/*
 * XREFs of _get_printf_count_output @ 0x18012DD98
 * Callers:
 *     _output_l @ 0x18012A1B0 (_output_l.c)
 *     _woutput_l @ 0x18012AB60 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1801CFDC0 == (_security_cookie | 1);
}
