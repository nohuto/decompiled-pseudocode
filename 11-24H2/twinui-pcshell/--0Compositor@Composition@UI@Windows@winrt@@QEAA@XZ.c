/*
 * XREFs of ??0Compositor@Composition@UI@Windows@winrt@@QEAA@XZ @ 0x18069AE00
 * Callers:
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069BA08 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 * Callees:
 *     ??$ActivateInstance@UCompositor@Composition@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUCompositor@Composition@UI@23@XZ @ 0x18069A7A0 (--$ActivateInstance@UCompositor@Composition@UI@Windows@winrt@@@IActivationFactory@Foundation@Win.c)
 *     ??$call@P6A?AUCompositor@Composition@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UCompositor@Composition@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUCompositor@Composition@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x18069A950 (--$call@P6A-AUCompositor@Composition@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@-.c)
 */

struct IUnknown *__fastcall winrt::Windows::UI::Composition::Compositor::Compositor(struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CBDC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Composition::Compositor,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Composition::Compositor>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Composition::Compositor,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808CBDC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CBDC8);
    v3 = _lambda_93de59c7ba7574afa65973f54421ad03_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Composition::Compositor,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::Composition::Compositor (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
