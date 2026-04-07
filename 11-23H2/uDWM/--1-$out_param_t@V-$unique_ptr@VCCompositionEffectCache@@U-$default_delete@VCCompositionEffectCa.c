/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B35A8
 * Callers:
 *     _CDesktopManager::Initialize_::_1_::dtor$11 @ 0x180067718 (_CDesktopManager--Initialize_--_1_--dtor$11.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800ACE24 (--1CCompositionEffectCache@@QEAA@XZ.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CCompositionEffectCache>>::~out_param_t<std::unique_ptr<CCompositionEffectCache>>(
        __int64 a1)
{
  CCompositionEffectCache *v1; // rbx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(CCompositionEffectCache ***)a1;
    result = *(_QWORD *)(a1 + 8);
    **(_QWORD **)a1 = result;
    if ( v1 )
    {
      CCompositionEffectCache::~CCompositionEffectCache(v1);
      return (*(__int64 (__fastcall **)(WPF::HeapBase *, CCompositionEffectCache *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
               WPF::g_pProcessHeap,
               v1);
    }
  }
  return result;
}
