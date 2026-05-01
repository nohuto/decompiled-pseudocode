/*
 * XREFs of ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x180679848
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18006F2E8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1805E5840 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x180047B50 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801F119C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x180679458 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6.c)
 *     ?GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA?AW4LaunchRequirement@12@W4ZBID@@@Z @ 0x1806796E0 (-GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA-AW4LaunchRequirement@12@W.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(
        struct IUnknown *this,
        const unsigned __int16 *a2)
{
  HWND ForegroundWindow; // rax
  int *v4; // rdi
  int LaunchRequirementForActiveBand; // ebx
  const unsigned __int16 *v6; // rdx
  bool DoesAppMeetLaunchRequirement; // al
  char v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  bool *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  ForegroundWindow = GetForegroundWindow();
  v4 = (int *)ForegroundWindow;
  if ( ForegroundWindow )
    GetWindowBand(ForegroundWindow, &v10);
  LaunchRequirementForActiveBand = CallerIdentity::ApiPolicyChecker::GetLaunchRequirementForActiveBand(v10);
  if ( CallerIdentity::IsShellExperienceAppId((LPCWCH)this, v6) )
    LaunchRequirementForActiveBand = 1;
  DoesAppMeetLaunchRequirement = CallerIdentity::ApiPolicyChecker::DoesAppMeetLaunchRequirement(
                                   LaunchRequirementForActiveBand,
                                   (CallerIdentity::ApiPolicyChecker *)this,
                                   v4);
  if ( DoesAppMeetLaunchRequirement )
  {
    v9 = 0;
    v11 = (bool *)&v9;
    CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___(this, &v11);
    DoesAppMeetLaunchRequirement = v9 == 0;
  }
  return !DoesAppMeetLaunchRequirement ? 0x80070005 : 0;
}
