/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x14016CB70
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x140012F70 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140023600 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     GreIsDisconnectDeviceAttached @ 0x140037DB8 (GreIsDisconnectDeviceAttached.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14004E0AC (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     DrvShouldTranslateQdcDatabaseToActive @ 0x1400E92E8 (DrvShouldTranslateQdcDatabaseToActive.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400ECD78 (_QdcSdcTranslateStatusDefault.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, _DWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int DisplayConfigBufferSizesAndLeaveUserCrit; // eax
  _BYTE v10[32]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  char v12; // [rsp+80h] [rbp+18h]
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  v11 = a1;
  v13 = 0;
  v12 = 1;
  EnterSharedCrit(1u, 1u);
  DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld((__int64)v10);
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v3) + 32) )
  {
    v4 = -1073741823;
    goto LABEL_14;
  }
  v5 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() && (unsigned int)UserRemoteConnectedSessionUsingXddm()
    || (unsigned int)GreIsDisconnectDeviceAttached(v6) )
  {
    v4 = 0;
LABEL_12:
    *a2 = v13;
    goto LABEL_14;
  }
  if ( v10[0] && v10[8] )
  {
    DrvShouldTranslateQdcDatabaseToActive(v7, &v11);
    v12 = 0;
    DisplayConfigBufferSizesAndLeaveUserCrit = DrvGetDisplayConfigBufferSizesAndLeaveUserCrit(v11, &v13);
    v4 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizesAndLeaveUserCrit);
    goto LABEL_12;
  }
  v4 = -1073741637;
LABEL_14:
  if ( v12 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
