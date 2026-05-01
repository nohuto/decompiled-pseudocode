/*
 * XREFs of _lambda_88c37ada13575a8c3149dc5b04aa0d80_::operator() @ 0x1801FEA28
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_88c37ada13575a8c3149dc5b04aa0d80___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1801FF3E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801FF3E0.c)
 * Callees:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1800A3298 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1800F4FB4 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x1800F5A00 (-AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ.c)
 *     ?UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z @ 0x18019BF1C (-UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z.c)
 *     ?CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x180500644 (-CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall lambda_88c37ada13575a8c3149dc5b04aa0d80_::operator()(XamlLauncher **a1)
{
  __int64 v2; // rdx
  DisableSearchPolicy *v3; // rcx
  XamlLauncher *v4; // rcx
  __int64 v5; // rdx
  XamlLauncher *v6; // rcx
  HWND WindowW; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  XamlLauncher::UpdateAutoForegroundWindowForHotkeys(*a1, (struct Windows::UI::WindowId *)&v9);
  if ( !DisableSearchPolicy::IsSearchDisabled(v3, v2) )
  {
    if ( *((_DWORD *)*a1 + 95) < *((_DWORD *)*a1 + 96) && XamlLauncher::AllowAutoAppRestartOnCrash(v4) )
    {
      v6 = *a1;
      ++*((_DWORD *)v6 + 95);
      RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        *((IUnknown **)v6 + 24),
        v5);
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
