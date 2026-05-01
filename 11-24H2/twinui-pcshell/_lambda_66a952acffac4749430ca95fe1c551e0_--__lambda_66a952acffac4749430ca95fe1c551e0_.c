/*
 * XREFs of _lambda_66a952acffac4749430ca95fe1c551e0_::__lambda_66a952acffac4749430ca95fe1c551e0_ @ 0x18028F1B0
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_66a952acffac4749430ca95fe1c551e0____::_1_::dtor$0 @ 0x1806D8FEE (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_1806D8FEE.c)
 *     _CActionCenterExperienceManager::Show_::_1_::dtor$11 @ 0x1806E4BAD (_CActionCenterExperienceManager--Show_--_1_--dtor$11.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_66a952acffac4749430ca95fe1c551e0_::__lambda_66a952acffac4749430ca95fe1c551e0_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
