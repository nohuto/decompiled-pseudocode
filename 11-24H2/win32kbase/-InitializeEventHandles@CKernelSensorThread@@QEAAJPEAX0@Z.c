/*
 * XREFs of ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x14021FE48
 * Callers:
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?InitializeRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAJPEAPEAX@Z @ 0x14015C26C (-InitializeRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAJPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ConvertUserToKernelEventHandle @ 0x1401A74D0 (ConvertUserToKernelEventHandle.c)
 */

__int64 __fastcall CKernelSensorThread::InitializeEventHandles(void **this, void *a2, void *a3)
{
  int refreshed; // edi
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  CCompositionRefreshRateBooster *v11; // rcx

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  refreshed = ConvertUserToKernelEventHandle(a2, this + 6);
  if ( refreshed < 0
    || (refreshed = ConvertUserToKernelEventHandle(a3, this + 7), refreshed < 0)
    || (UserSessionState = W32GetUserSessionState(v7),
        refreshed = ObOpenObjectByPointer(
                      *(PVOID *)(UserSessionState + 16824),
                      0x200u,
                      0LL,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      0,
                      this + 8),
        refreshed < 0)
    || (v10 = W32GetUserSessionState(v9),
        refreshed = ObOpenObjectByPointer(
                      *(PVOID *)(v10 + 19496),
                      0x200u,
                      0LL,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      0,
                      this + 9),
        refreshed < 0)
    || (refreshed = CCompositionRefreshRateBooster::InitializeRefreshRateUnboostTimer(v11, this + 10), refreshed < 0) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 367);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0LL);
  return (unsigned int)refreshed;
}
