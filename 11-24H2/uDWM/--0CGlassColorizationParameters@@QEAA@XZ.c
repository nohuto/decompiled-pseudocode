/*
 * XREFs of ??0CGlassColorizationParameters@@QEAA@XZ @ 0x18002CA1C
 * Callers:
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18002C030 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180030FDC (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800717A8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x1800719AC (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x1800B82AC (--0CDesktopManager@@AEAA@XZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800DB0CC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x1800F0114 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 * Callees:
 *     ?ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ @ 0x18002CA34 (-ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ.c)
 */

CGlassColorizationParameters *__fastcall CGlassColorizationParameters::CGlassColorizationParameters(
        CGlassColorizationParameters *this)
{
  CGlassColorizationParameters *v1; // rcx

  CGlassColorizationParameters::ResetToDefaults(this);
  return v1;
}
