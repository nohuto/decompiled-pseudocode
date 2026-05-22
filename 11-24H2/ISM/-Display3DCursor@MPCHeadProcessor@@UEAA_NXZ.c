/*
 * XREFs of ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x180012C10
 * Callers:
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800683E0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

bool __fastcall MPCHeadProcessor::Display3DCursor(MPCHeadProcessor *this)
{
  return *((_DWORD *)MPCHolographicInputManager::GetInstance() + 840) != 512;
}
