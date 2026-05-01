/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800070E4
 * Callers:
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180006FAC (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     MsixvcAddGameToGCS @ 0x180007130 (MsixvcAddGameToGCS.c)
 *     MsixvcAddPackageAsync @ 0x180007840 (MsixvcAddPackageAsync.c)
 *     MsixvcRemediateMutablePackagesForVolumeAsync @ 0x1800079C0 (MsixvcRemediateMutablePackagesForVolumeAsync.c)
 *     MsixvcUpdatePolicyInternal @ 0x180007B00 (MsixvcUpdatePolicyInternal.c)
 *     IsGamingFullScreenExperienceActive @ 0x18000EEF0 (IsGamingFullScreenExperienceActive.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
