/*
 * XREFs of ??1?$MakeAllocator@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18011072C
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x180023774 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAllocator<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::~MakeAllocator<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  return result;
}
