/*
 * XREFs of _get_printf_count_output @ 0x140500084
 * Callers:
 *     _woutput_l @ 0x1404FE52C (_woutput_l.c)
 *     _output_l @ 0x1404FEF58 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140E0F240 == (_security_cookie | 1);
}
