/*
 * XREFs of ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x140270290
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x140226F60 (NtUserSetDisplayAutoRotationPreferences.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??I?$SGAUTOROTATIONgRotationProcessLock@VW32_PUSH_LOCK@@@@QEBAPEAVW32_PUSH_LOCK@@XZ @ 0x140270144 (--I-$SGAUTOROTATIONgRotationProcessLock@VW32_PUSH_LOCK@@@@QEBAPEAVW32_PUSH_LOCK@@XZ.c)
 */

bool __fastcall CRotationMgr::IsActivePpi(struct tagPROCESSINFO *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // di

  v3 = (struct W32_PUSH_LOCK *)SGAUTOROTATIONgRotationProcessLock<W32_PUSH_LOCK>::operator&((__int64)a1, a2);
  W32AcquirePushLockExclusiveEx(v3, 0);
  v8 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19200) )
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19200) + 256LL) == (_QWORD)a1;
  W32ReleasePushLockExclusiveEx(v3, 0LL);
  return v8;
}
