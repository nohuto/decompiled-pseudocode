/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180096238
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     _CDesktopManager::Initialize_::_1_::dtor$11 @ 0x1800F7697 (_CDesktopManager--Initialize_--_1_--dtor$11.c)
 * Callees:
 *     ??$attach_to_smart_pointer@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@X@wil@@YAXAEAV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@PEAVCCompositionEffectCache@@@Z @ 0x18009625C (--$attach_to_smart_pointer@V-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositi.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CCompositionEffectCache>>::~out_param_t<std::unique_ptr<CCompositionEffectCache>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::attach_to_smart_pointer<std::unique_ptr<CCompositionEffectCache>,void>(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}
