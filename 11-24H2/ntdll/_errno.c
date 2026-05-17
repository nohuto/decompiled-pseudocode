/*
 * XREFs of _errno @ 0x18010D560
 * Callers:
 *     wcstoxq @ 0x180122F74 (wcstoxq.c)
 *     mbstowcs @ 0x180124E90 (mbstowcs.c)
 *     strtoxlX @ 0x180126D24 (strtoxlX.c)
 *     wcstoxlX @ 0x180127F9C (wcstoxlX.c)
 *     wcstombs @ 0x180128270 (wcstombs.c)
 *     strtoxq @ 0x180128450 (strtoxq.c)
 *     write_string @ 0x180128FF0 (write_string.c)
 *     write_string_0 @ 0x180129A34 (write_string_0.c)
 *     _except1 @ 0x18012A820 (_except1.c)
 *     _handle_qnan1 @ 0x18012AC60 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x18012B000 (_set_errno_from_matherr.c)
 *     _umatherr @ 0x18012B040 (_umatherr.c)
 *     _wctomb_s_l @ 0x18012C2D8 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
