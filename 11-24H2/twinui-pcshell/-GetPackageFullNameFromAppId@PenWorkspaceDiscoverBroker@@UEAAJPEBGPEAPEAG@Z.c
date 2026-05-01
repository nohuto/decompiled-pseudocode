/*
 * XREFs of ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1803EF8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180018D94 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180679080 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::GetPackageFullNameFromAppId(
        PenWorkspaceDiscoverBroker *this,
        CallerIdentity *a2,
        unsigned __int16 **a3)
{
  int IsShellExperience; // ebx
  unsigned __int16 **v6; // r8
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  if ( IsShellExperience < 0 )
  {
    v7 = 160LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return (unsigned int)IsShellExperience;
  }
  IsShellExperience = CallerIdentity::GetPackageFullNameFromAppId(a2, (unsigned __int16 *)a3, v6);
  if ( IsShellExperience < 0 )
  {
    v7 = 161LL;
    goto LABEL_3;
  }
  return 0LL;
}
