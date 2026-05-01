/*
 * XREFs of ??$make_unique_nothrow@VFocusHoldingTank@@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@$$QEAPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180459F08
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045EEC8 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804625E8 (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
FocusHoldingTank **__fastcall wil::make_unique_nothrow<FocusHoldingTank,Windows::Internal::Shell::Experience::ICortanaExperienceManager *>(
        FocusHoldingTank **a1,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager **a2)
{
  FocusHoldingTank *v4; // rdi
  void *v5; // rax

  v4 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = FocusHoldingTank::FocusHoldingTank((LONG_PTR)v5, *a2);
  *a1 = v4;
  return a1;
}
