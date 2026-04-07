/*
 * XREFs of ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x1800ACDDC
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180027698 (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 *     _CDesktopManager::CDesktopManager_::_1_::dtor$4 @ 0x18006767E (_CDesktopManager--CDesktopManager_--_1_--dtor$4.c)
 *     _CCompositionEffectCache::Create_::_1_::dtor$0 @ 0x18006773C (_CCompositionEffectCache--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800ACE24 (--1CCompositionEffectCache@@QEAA@XZ.c)
 */

__int64 __fastcall std::unique_ptr<CCompositionEffectCache>::~unique_ptr<CCompositionEffectCache>(
        CCompositionEffectCache **a1)
{
  CCompositionEffectCache *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    CCompositionEffectCache::~CCompositionEffectCache(*a1);
    return (*(__int64 (__fastcall **)(WPF::HeapBase *, CCompositionEffectCache *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
             WPF::g_pProcessHeap,
             v1);
  }
  return result;
}
