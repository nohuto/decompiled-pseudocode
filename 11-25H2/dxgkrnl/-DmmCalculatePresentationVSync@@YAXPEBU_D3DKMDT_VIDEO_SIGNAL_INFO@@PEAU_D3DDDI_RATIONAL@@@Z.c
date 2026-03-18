/*
 * XREFs of ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1403A4BC4
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1403FD27C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 * Callees:
 *     <none>
 */

void __fastcall DmmCalculatePresentationVSync(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1, struct _D3DDDI_RATIONAL *a2)
{
  *a2 = a1->VSyncFreq;
  if ( ((*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F) != 0 )
    a2->Denominator *= (*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F;
}
