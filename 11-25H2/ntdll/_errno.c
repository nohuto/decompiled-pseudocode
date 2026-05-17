/*
 * XREFs of _errno @ 0x18010FF90
 * Callers:
 *     wcstoxq @ 0x180124A54 (wcstoxq.c)
 *     mbstowcs @ 0x180126970 (mbstowcs.c)
 *     strtoxlX @ 0x180128804 (strtoxlX.c)
 *     wcstoxlX @ 0x180129A7C (wcstoxlX.c)
 *     wcstombs @ 0x180129D50 (wcstombs.c)
 *     strtoxq @ 0x180129F30 (strtoxq.c)
 *     write_string @ 0x18012AAD0 (write_string.c)
 *     write_string_0 @ 0x18012B514 (write_string_0.c)
 *     _except1 @ 0x18012C300 (_except1.c)
 *     _handle_qnan1 @ 0x18012C740 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x18012CAE0 (_set_errno_from_matherr.c)
 *     _umatherr @ 0x18012CB20 (_umatherr.c)
 *     _wctomb_s_l @ 0x18012DDB8 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
