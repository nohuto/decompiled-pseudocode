/*
 * XREFs of ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x14020D6F4
 * Callers:
 *     CloseWin32InputRelatedObHandles @ 0x140218A10 (CloseWin32InputRelatedObHandles.c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     rimDereferenceDev @ 0x140133C98 (rimDereferenceDev.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CBaseInput::RemoveInjectionDevicesForSessionUninitialize(__int64 a1)
{
  __int64 UserSessionState; // rbx
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 i; // rdi
  void *v5; // rbp
  int *v6; // rsi
  __int64 v7; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3072), 0);
  v3 = W32GetUserSessionState(v2);
  for ( i = *(_QWORD *)(v3 + 3080); i; i = *(_QWORD *)(v3 + 3080) )
  {
    if ( (*(_DWORD *)(i + 168) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1630);
    *(_QWORD *)(v3 + 3080) = *(_QWORD *)(*(_QWORD *)(v3 + 3080) + 56LL);
    *(_QWORD *)(i + 56) = 0LL;
    v5 = (void *)((i - 72) & -(__int64)(i != 0));
    ObfDereferenceObject(v5);
    if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v6 = *(int **)(i + 456);
      HMUnlockObject(v6);
      if ( v6[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1644);
      HMMarkObjectDestroy((struct _HEAD *)v6);
      HMRemoveHandleForObject(v6);
    }
    HMMarkObjectDestroy((struct _HEAD *)i);
    HMRemoveHandleForObject((int *)i);
    v7 = (__int64)v5 + 72;
    if ( !v5 )
      v7 = 0LL;
    rimDereferenceDev(v7);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3072), 0LL);
}
