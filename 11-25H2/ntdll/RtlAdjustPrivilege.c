/*
 * XREFs of RtlAdjustPrivilege @ 0x1800F3870
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180142A20 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801636A0 (NtOpenThreadToken.c)
 *     NtAdjustPrivilegesToken @ 0x180163A40 (NtAdjustPrivilegesToken.c)
 *     NtOpenProcessToken @ 0x180165870 (NtOpenProcessToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN Client, PBOOLEAN WasEnabled)
{
  NTSTATUS result; // eax
  int v8; // ebx
  HANDLE TokenHandle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  _TOKEN_PRIVILEGES NewState; // [rsp+48h] [rbp-28h] BYREF
  _TOKEN_PRIVILEGES PreviousState; // [rsp+58h] [rbp-18h] BYREF

  TokenHandle = 0LL;
  ReturnLength = 0;
  if ( Client == 1 )
    result = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 0, &TokenHandle);
  else
    result = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, &TokenHandle);
  if ( result >= 0 )
  {
    v11 = Privilege;
    NewState.Privileges[0].Luid = (_LUID)Privilege;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = Enable != 0 ? 2 : 0;
    v8 = NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, &PreviousState, &ReturnLength);
    NtClose(TokenHandle);
    if ( v8 == 262 )
      return -1073741727;
    if ( v8 >= 0 )
    {
      if ( PreviousState.PrivilegeCount )
        *WasEnabled = (PreviousState.Privileges[0].Attributes & 2) != 0;
      else
        *WasEnabled = Enable;
    }
    return v8;
  }
  return result;
}
