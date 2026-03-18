/*
 * XREFs of HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x140025450
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x14002DBB4 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 */

__int64 __fastcall HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero(__int64 a1)
{
  return HUBDTX_ValidateFirstDeviceDescriptorFor20(*(_QWORD *)(a1 + 960));
}
