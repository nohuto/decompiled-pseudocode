/*
 * XREFs of ?VolumeUpDownComboSupported@@YA_NXZ @ 0x140288AB8
 * Callers:
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x140288FBC (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

char __fastcall VolumeUpDownComboSupported(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  bool v9; // zf

  if ( gPlatformRole != PlatformRoleSlate )
    return 0;
  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16840));
  W32AcquirePushLockSharedEx(Lock, 0);
  v7 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 16840) + 1240LL);
  if ( v7 )
  {
    do
    {
      v8 = v2++;
      v9 = *(_DWORD *)(v7 + 48) == 1;
      v7 = *(_QWORD *)(v7 + 56);
      if ( !v9 )
        v2 = v8;
    }
    while ( v7 );
    if ( v2 > 1 )
    {
      W32ReleasePushLockSharedEx(Lock, 0LL);
      return 0;
    }
  }
  W32ReleasePushLockSharedEx(Lock, 0LL);
  return 1;
}
