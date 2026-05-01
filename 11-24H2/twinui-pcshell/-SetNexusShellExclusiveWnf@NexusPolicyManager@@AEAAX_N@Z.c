/*
 * XREFs of ?SetNexusShellExclusiveWnf@NexusPolicyManager@@AEAAX_N@Z @ 0x180369B98
 * Callers:
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x180369E98 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall NexusPolicyManager::SetNexusShellExclusiveWnf(NexusPolicyManager *this, char a2)
{
  DWORD CurrentProcessId; // eax
  int v3; // eax
  DWORD v4; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
    CurrentProcessId = GetCurrentProcessId();
  else
    CurrentProcessId = 0;
  v4 = CurrentProcessId;
  v3 = RtlPublishWnfStateData(WNF_GIP_IS_NEXUS_RESTRICTED, 0LL, &v4, 4LL) | 0x10000000;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA5,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\NexusPolicyManager.cpp",
      (const char *)(unsigned int)v3);
}
