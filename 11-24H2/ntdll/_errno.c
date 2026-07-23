/*
 * XREFs of _errno @ 0x180108440
 * Callers:
 *     wcstoxq @ 0x1801211A4 (wcstoxq.c)
 *     mbstowcs @ 0x1801230C0 (mbstowcs.c)
 *     strtoxlX @ 0x180124F54 (strtoxlX.c)
 *     wcstoxlX @ 0x1801261CC (wcstoxlX.c)
 *     wcstombs @ 0x1801264A0 (wcstombs.c)
 *     strtoxq @ 0x180126680 (strtoxq.c)
 *     write_string @ 0x180127220 (write_string.c)
 *     write_string_0 @ 0x180127C64 (write_string_0.c)
 *     _except1 @ 0x180128A50 (_except1.c)
 *     _handle_qnan1 @ 0x180128E90 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180129230 (_set_errno_from_matherr.c)
 *     _umatherr @ 0x180129270 (_umatherr.c)
 *     _wctomb_s_l @ 0x18012A508 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
