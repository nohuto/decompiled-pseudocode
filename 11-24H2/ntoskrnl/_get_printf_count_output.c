/*
 * XREFs of _get_printf_count_output @ 0x1405027C4
 * Callers:
 *     _woutput_l @ 0x140500C6C (_woutput_l.c)
 *     _output_l @ 0x140501698 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140E0F180 == (_security_cookie | 1);
}
