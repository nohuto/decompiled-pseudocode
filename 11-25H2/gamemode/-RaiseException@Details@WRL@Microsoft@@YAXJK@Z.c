/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800066F8
 * Callers:
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x1800065C0 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     MsixvcAddGameToGCS @ 0x180006750 (MsixvcAddGameToGCS.c)
 *     MsixvcAddPackageAsync @ 0x180006E60 (MsixvcAddPackageAsync.c)
 *     MsixvcRemediateMutablePackagesForVolumeAsync @ 0x180006FE0 (MsixvcRemediateMutablePackagesForVolumeAsync.c)
 *     MsixvcUpdatePolicyInternal @ 0x180007120 (MsixvcUpdatePolicyInternal.c)
 *     IsGamingFullScreenExperienceActive @ 0x18000DAB0 (IsGamingFullScreenExperienceActive.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
