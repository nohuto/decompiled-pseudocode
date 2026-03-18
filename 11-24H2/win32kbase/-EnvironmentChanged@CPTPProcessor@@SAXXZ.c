/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012C1A0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x14012BEC0 (UpdateTPCurrentActiveState.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1401E8CA8 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x140149F08 (--9-$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 *     CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___ @ 0x14020DBA8 (CBaseInput--ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___.c)
 */

void __fastcall CPTPProcessor::EnvironmentChanged(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)SGHIDgpHidInput<CHidInput *>::operator!=(a1, &v6) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v1) + 3088) )
    {
      v3 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v2) + 16840) + 1232LL);
      W32AcquirePushLockSharedEx(v3, 0);
      UserSessionState = W32GetUserSessionState(v4);
      CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___(*(_QWORD *)(UserSessionState + 16840));
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
