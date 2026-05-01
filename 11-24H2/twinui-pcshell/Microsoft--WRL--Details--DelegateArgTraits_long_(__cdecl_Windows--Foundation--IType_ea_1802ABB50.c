/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c8c6bcdae749e4fc3a1182ab2efb8727___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1802ABB50
 * Callers:
 *     <none>
 * Callees:
 *     ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x1801C6A04 (-AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ.c)
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801E9174 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x180200D58 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     _lambda_5fd0a13602f1eaccbc175b1e06137aaf_::operator() @ 0x1802ABBF0 (_lambda_5fd0a13602f1eaccbc175b1e06137aaf_--operator().c)
 *     ?CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x18045DC34 (-CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c8c6bcdae749e4fc3a1182ab2efb8727___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke(
        __int64 a1)
{
  DisableSearchPolicy *v2; // rcx
  XamlLauncher *v3; // rcx
  __int64 v4; // rdx
  HWND WindowW; // rax

  lambda_5fd0a13602f1eaccbc175b1e06137aaf_::operator()(a1 + 24, 0LL);
  if ( !DisableSearchPolicy::IsSearchDisabled(v2) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 364LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 368LL)
      && XamlLauncher::AllowAutoAppRestartOnCrash(v3) )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 364LL);
      RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        *(IUnknown **)(*(_QWORD *)(a1 + 16) + 176LL),
        v4);
    }
    else
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW && !GetPropW(WindowW, L"IsExplorerShuttingDown") )
        StartWindowTelemetry::CortanaKeepsCrashing();
    }
  }
  return 0LL;
}
