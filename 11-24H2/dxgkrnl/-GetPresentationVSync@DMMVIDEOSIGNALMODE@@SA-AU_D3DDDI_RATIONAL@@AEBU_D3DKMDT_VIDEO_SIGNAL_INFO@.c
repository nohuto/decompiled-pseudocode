/*
 * XREFs of ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049918
 * Callers:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x140049888 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140186D9C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140268660 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     BmlDetermineBoostMultiplier @ 0x140269414 (BmlDetermineBoostMultiplier.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402694B8 (BmlDoesTargetModeObeyConstraint.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x14026999C (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402DC488 (_BmlGetPathModeListForPathTargetModes.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x14031545C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14035FE7C (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14037BD70 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     BmlGetNextBestTargetMode @ 0x14038BDB4 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     <none>
 */

D3DDDI_RATIONAL __fastcall DMMVIDEOSIGNALMODE::GetPresentationVSync(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  D3DDDI_RATIONAL result; // rax
  __int64 v2; // [rsp+8h] [rbp+8h]

  result = a1->VSyncFreq;
  if ( ((*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F) != 0 )
  {
    LODWORD(v2) = a1->VSyncFreq;
    HIDWORD(v2) = ((*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F) * result.Denominator;
    return (D3DDDI_RATIONAL)v2;
  }
  return result;
}
