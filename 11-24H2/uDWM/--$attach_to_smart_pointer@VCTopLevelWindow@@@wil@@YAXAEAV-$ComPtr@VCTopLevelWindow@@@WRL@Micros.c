/*
 * XREFs of ??$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@PEAVCTopLevelWindow@@@Z @ 0x1800C7A48
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800497FC (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x18008B66C (--1-$out_param_t@V-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::attach_to_smart_pointer<CTopLevelWindow>(CBaseObject **a1, CBaseObject *a2)
{
  return Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach(a1, a2);
}
