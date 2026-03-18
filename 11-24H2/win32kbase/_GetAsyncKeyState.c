/*
 * XREFs of _GetAsyncKeyState @ 0x140189CF0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x14016C610 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1401B7518 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int16 __fastcall GetAsyncKeyState(unsigned int a1)
{
  unsigned __int8 v1; // bp
  __int16 result; // ax
  __int16 v3; // r15
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // si

  v1 = a1;
  if ( a1 < 0x100 )
  {
    v3 = 0;
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      UserSessionState = W32GetUserSessionState(v4);
      v6 = (unsigned __int64)v1 >> 3;
      v4 = v1 & 7;
      if ( (*(_BYTE *)(v6 + UserSessionState + 14464) & (unsigned __int8)(1 << v4)) != 0 )
      {
        v7 = W32GetUserSessionState(v4);
        v3 = 1;
        v4 = *(unsigned __int8 *)(v7 + v6 + 14464);
        LODWORD(v4) = v4 & ~(1 << (v1 & 7));
        *(_BYTE *)(v7 + v6 + 14464) = v4;
      }
    }
    v8 = *(_BYTE *)(((unsigned __int64)v1 >> 2) + W32GetUserSessionState(v4) + 14336) & (1 << (2 * (v1 & 3)));
    result = v3 | 0x8000;
    if ( !v8 )
      return v3;
  }
  else
  {
    UserSetLastError(87);
    return 0;
  }
  return result;
}
