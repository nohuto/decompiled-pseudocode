/*
 * XREFs of ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x14018FEB4
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x14018FFDC (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::ArmOrRearmRefreshRateUnboostTimer(
        CCompositionRefreshRateBooster *this,
        unsigned int a2)
{
  LARGE_INTEGER v4; // rcx
  LARGE_INTEGER PerformanceCounter; // rbx
  void *v6; // r14
  union _LARGE_INTEGER DueTime; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h]

  DueTime.QuadPart = -10000LL * (int)a2;
  CPushLock::AcquireLockExclusive(this);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (__int64)((unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)this + 3))) / gliQpcFreq.QuadPart) >= 10
    || a2 > *((_DWORD *)this + 5) )
  {
    v6 = *(void **)(*(_QWORD *)(((__int64 (__fastcall *)(_QWORD))W32GetUserSessionState)((LARGE_INTEGER)v4.QuadPart)
                              + 3112)
                  + 80LL);
    if ( ZwCancelTimer(v6, 0LL) < 0 )
    {
      v8 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 481LL);
    }
    if ( ZwSetTimer(v6, &DueTime, 0LL, 0LL, 0, 0, 0LL) < 0 )
    {
      v8 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 492LL);
    }
    *((LARGE_INTEGER *)this + 3) = PerformanceCounter;
    *((_DWORD *)this + 5) = a2;
  }
  CPushLock::ReleaseLock(this);
}
