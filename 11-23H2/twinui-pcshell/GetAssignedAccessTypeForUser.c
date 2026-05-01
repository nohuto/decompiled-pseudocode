/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x180096438
 * Callers:
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800F034C (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1800F23A0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE6B0 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     GetAssignedAccessTypeForUser_0 @ 0x180096460 (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(unsigned __int16 *a1)
{
  int AssignedAccessTypeForUser_0; // eax
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+40h] [rbp+18h]

  AssignedAccessTypeForUser_0 = GetAssignedAccessTypeForUser_0(a1);
  v2 = 0;
  if ( AssignedAccessTypeForUser_0 >= 0 )
    return v4;
  return v2;
}
