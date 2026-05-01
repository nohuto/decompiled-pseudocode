/*
 * XREFs of ?OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z @ 0x1802E0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1802AB300 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnBatterySaverStateChanged(AcrylicPolicyManager *this, char a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 219) == a2 )
    return 0LL;
  *((_BYTE *)this + 219) = a2;
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 136), 0);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x93,
    (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)(unsigned int)updated);
  return v3;
}
