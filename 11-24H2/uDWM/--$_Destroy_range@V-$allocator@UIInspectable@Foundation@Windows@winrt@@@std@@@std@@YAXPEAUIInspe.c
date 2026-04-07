/*
 * XREFs of ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x180099EA8
 * Callers:
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004A36C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18004B1DC (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUIInspectable@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800E7C94 (--$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@-$vector@UIInspectable@Founda.c)
 *     ??$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800E7F34 (--$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Fou.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
        winrt::Windows::Foundation::IUnknown *this,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      if ( *(_QWORD *)v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
}
