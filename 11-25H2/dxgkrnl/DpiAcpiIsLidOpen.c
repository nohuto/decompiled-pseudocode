/*
 * XREFs of DpiAcpiIsLidOpen @ 0x14024AC8C
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

bool DpiAcpiIsLidOpen()
{
  return _InterlockedCompareExchange(&dword_14015E3D8, 0, 0) == 0;
}
