/*
 * XREFs of ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x14018FFDC
 * Callers:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DCE7C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DCompositionBoostCompositionClockForInput @ 0x140073CCC (DCompositionBoostCompositionClockForInput.c)
 *     ?IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ @ 0x1400E1790 (-IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ.c)
 *     ?CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z @ 0x140116448 (-CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z.c)
 *     ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x14018FEB4 (-ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::BoostRefreshRateForInput(__int64 a1, int a2)
{
  __int64 UserSessionState; // rax
  unsigned int v5; // edi
  char v6; // si

  UserSessionState = W32GetUserSessionState(a1);
  if ( CInputThreadBase::IsInputProcessingActive(*(CInputThreadBase **)(UserSessionState + 3112)) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 541LL);
      v5 = *(_DWORD *)(a1 + 36);
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 32);
    }
    v6 = 0;
    CPushLock::AcquireLockExclusive((CPushLock *)a1);
    if ( *(_BYTE *)(a1 + 16) )
    {
      v6 = 1;
    }
    else
    {
      if ( (int)DCompositionBoostCompositionClockForInput(1) >= 0 )
      {
        *(_BYTE *)(a1 + 16) = 1;
        v6 = 1;
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 553LL);
      }
      InputTraceLogging::Win32k::CompositionRefreshRateBoost(v5);
    }
    CPushLock::ReleaseLock((CPushLock *)a1);
    if ( v6 )
      CCompositionRefreshRateBooster::ArmOrRearmRefreshRateUnboostTimer((CCompositionRefreshRateBooster *)a1, v5);
  }
}
