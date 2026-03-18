/*
 * XREFs of VfNotifyOfHibernate @ 0x140B87628
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     VfIsVerifierExtensionEnabled @ 0x1406101EC (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x140610C18 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  int IsVerifierExtensionEnabled; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

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
  if ( IsVerifierExtensionEnabled == (_DWORD)v4 )
  {
    if ( ViFnExtensionHiberFunc )
      guard_dispatch_icall_no_overrides(v3, v2, v4, v5);
  }
}
