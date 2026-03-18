/*
 * XREFs of ?SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140087B30
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x140087EB8 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
        DISPLAY_MUX_MGR *this,
        struct _DISPLAYCONFIG_DISPLAYMUX_TARGET *a2)
{
  int v2; // eax

  if ( a2 )
  {
    *((_QWORD *)this + 17) = *(_QWORD *)a2;
    v2 = *((_DWORD *)a2 + 2);
  }
  else
  {
    v2 = 0;
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 36) = v2;
}
