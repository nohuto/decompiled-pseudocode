/*
 * XREFs of RtlAdjustPrivilege @ 0x1800F1D00
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180141330 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenThreadToken @ 0x180162110 (NtOpenThreadToken.c)
 *     NtAdjustPrivilegesToken @ 0x1801624B0 (NtAdjustPrivilegesToken.c)
 *     NtOpenProcessToken @ 0x1801642E0 (NtOpenProcessToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAdjustPrivilege(unsigned int a1, bool a2, char a3, bool *a4)
{
  __int64 result; // rax
  int v8; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+38h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+4Ch] [rbp-24h]
  int v14; // [rsp+54h] [rbp-1Ch]
  int v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+64h] [rbp-Ch]

  Handle = 0LL;
  v10 = 0;
  if ( a3 == 1 )
    result = NtOpenThreadToken(-2LL, 40LL, 0LL, &Handle);
  else
    result = NtOpenProcessToken(-1LL, 40LL, &Handle);
  if ( (int)result >= 0 )
  {
    v11 = a1;
    v13 = a1;
    v12 = 1;
    v14 = a2 ? 2 : 0;
    v8 = NtAdjustPrivilegesToken(Handle, 0LL, &v12);
    NtClose(Handle);
    if ( v8 == 262 )
    {
      return (unsigned int)-1073741727;
    }
    else if ( v8 >= 0 )
    {
      if ( v15 )
        *a4 = (v16 & 2) != 0;
      else
        *a4 = a2;
    }
    return (unsigned int)v8;
  }
  return result;
}
