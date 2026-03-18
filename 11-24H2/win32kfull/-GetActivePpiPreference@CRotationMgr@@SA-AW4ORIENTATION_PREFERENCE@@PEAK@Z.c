/*
 * XREFs of ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1402701CC
 * Callers:
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402705AC (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??I?$SGAUTOROTATIONgRotationProcessLock@VW32_PUSH_LOCK@@@@QEBAPEAVW32_PUSH_LOCK@@XZ @ 0x140270144 (--I-$SGAUTOROTATIONgRotationProcessLock@VW32_PUSH_LOCK@@@@QEBAPEAVW32_PUSH_LOCK@@XZ.c)
 */

__int64 __fastcall CRotationMgr::GetActivePpiPreference(_DWORD *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  unsigned int v11; // edi

  v3 = (struct W32_PUSH_LOCK *)SGAUTOROTATIONgRotationProcessLock<W32_PUSH_LOCK>::operator&((__int64)a1, a2);
  W32AcquirePushLockExclusiveEx(v3, 0);
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19200)
    && (v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19200), *(_QWORD *)(v9 + 256)) )
  {
    if ( a1 )
    {
      UserSessionState = W32GetUserSessionState(v9, v8);
      *a1 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(*(_QWORD *)(UserSessionState + 19200) + 256LL));
    }
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19200) + 256LL) + 912LL);
  }
  else
  {
    v11 = 0;
  }
  W32ReleasePushLockExclusiveEx(v3, 0LL);
  return v11;
}
