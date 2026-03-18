/*
 * XREFs of DpiAcpiIsLidOpen @ 0x140251ABC
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

bool DpiAcpiIsLidOpen()
{
  return _InterlockedCompareExchange(&dword_140161398, 0, 0) == 0;
}
