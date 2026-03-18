/*
 * XREFs of ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14004E0AC
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x14016CB70 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x14016F580 (NtUserQueryDisplayConfig.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x14004E138 (DrvIsWddmDriverPresent.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14004E190 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 __fastcall DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld(__int64 a1)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  bool v8; // zf

  if ( !*(_WORD *)(W32GetUserSessionState(a1) + 69008)
    || (v8 = (unsigned int)UserRemoteConnectedSessionUsingWddm() == 0, v2 = 0, !v8) )
  {
    v2 = 1;
  }
  *(_BYTE *)a1 = v2;
  *(_BYTE *)(a1 + 1) = (unsigned int)UserRemoteConnectedSessionUsingWddm() != 0;
  UserSessionState = W32GetUserSessionState(v3);
  v5 = *(_QWORD *)(UserSessionState + 57056);
  v6 = (_DWORD *)(v5 + 4);
  if ( !*(_BYTE *)(v5 + 8) )
    v6 = *(_DWORD **)(UserSessionState + 57056);
  *(_DWORD *)(a1 + 4) = *v6;
  *(_BYTE *)(a1 + 8) = (unsigned int)DrvIsWddmDriverPresent() != 0;
  return a1;
}
