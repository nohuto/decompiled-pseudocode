/*
 * XREFs of ClosePointerDeviceProcessEvents @ 0x1402192E4
 * Callers:
 *     InitializePointerDevicesPresenceState @ 0x140219210 (InitializePointerDevicesPresenceState.c)
 * Callees:
 *     <none>
 */

int __fastcall ClosePointerDeviceProcessEvents(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16696) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    NtClose(*(HANDLE *)(UserSessionState + 16696));
  }
  v5 = W32GetUserSessionState(v3, v2);
  if ( *(_QWORD *)(v5 + 16704) )
  {
    v8 = W32GetUserSessionState(v7, v6);
    LODWORD(v5) = NtClose(*(HANDLE *)(v8 + 16704));
  }
  return v5;
}
