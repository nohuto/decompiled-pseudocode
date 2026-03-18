/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1403EF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1403EF1E8 (-SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(char a1)
{
  CCD_BTL *v2; // rax

  v2 = CCD_BTL::Global();
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v2, a1 != 0);
}
