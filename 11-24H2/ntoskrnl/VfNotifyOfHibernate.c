/*
 * XREFs of VfNotifyOfHibernate @ 0x140B89628
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     VfIsVerifierExtensionEnabled @ 0x14060E7AC (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x14060F1D8 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  int IsVerifierExtensionEnabled; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d

  if ( a1 )
  {
    if ( ViVerifyDma )
    {
      ViEnableAfterHibernate = 1;
      VfDisableHalVerifier();
    }
  }
  else
  {
    if ( !ViEnableAfterHibernate )
      return;
    ViVerifyDma = 1;
    ViEnableAfterHibernate = 0;
  }
  IsVerifierExtensionEnabled = VfIsVerifierExtensionEnabled();
  if ( IsVerifierExtensionEnabled == v4 )
  {
    if ( ViFnExtensionHiberFunc )
      guard_dispatch_icall_no_overrides(v3, v2);
  }
}
