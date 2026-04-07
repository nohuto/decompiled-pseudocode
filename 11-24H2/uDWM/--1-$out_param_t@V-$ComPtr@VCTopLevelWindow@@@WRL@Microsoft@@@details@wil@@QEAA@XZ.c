/*
 * XREFs of ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x18008B66C
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     _CLivePreview::OnWindowShowHide_::_1_::dtor$3 @ 0x1800F677E (_CLivePreview--OnWindowShowHide_--_1_--dtor$3.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$1 @ 0x1800F6CDE (_CLivePreview--_FadeOutToGlass_--_1_--dtor$1.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$3 @ 0x1800F6CF0 (_CLivePreview--_FadeOutToGlass_--_1_--dtor$3.c)
 * Callees:
 *     ??$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@PEAVCTopLevelWindow@@@Z @ 0x1800C7A48 (--$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV-$ComPtr@VCTopLevelWindow@@@WRL@Micros.c)
 */

__int64 __fastcall wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::attach_to_smart_pointer<CTopLevelWindow>(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
