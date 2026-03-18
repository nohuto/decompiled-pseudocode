/*
 * XREFs of PpmCheckReInit @ 0x140A4D648
 * Callers:
 *     PpmCheckPausePpmEngineForSx @ 0x14048E044 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048E088 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmParkSetLpiCap @ 0x1404CF974 (PpmParkSetLpiCap.c)
 *     PopIntSteerSetMode @ 0x1405D7130 (PopIntSteerSetMode.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     PpmPerfClearResponsivenessHints @ 0x14048DA80 (PpmPerfClearResponsivenessHints.c)
 *     PopInterruptSteeringEnabled @ 0x1404A7F3C (PopInterruptSteeringEnabled.c)
 *     PpmPerfCheckRequired @ 0x1404A8994 (PpmPerfCheckRequired.c)
 *     PpmCheckArmPeriod @ 0x1404AB1F4 (PpmCheckArmPeriod.c)
 *     PpmParkParkingAvailable @ 0x140A4D7C8 (PpmParkParkingAvailable.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A4D8BC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmPerfResetHistoryAll @ 0x140AB29A0 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  bool v1; // si
  __int64 *v2; // r14
  char v3; // di
  char v4; // bp
  char v5; // al
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = &PpmCurrentProfile[0][61 * dword_140F0B70C];
  v3 = 1;
  v4 = 0;
  if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
  {
    v1 = PpmPerfCheckRequired((__int64)(v2 + 5)) != 0;
    v0 = v1;
    if ( PpmCheckPollForFeedback )
      v0 = 1;
    v5 = PoEnergyEstimationEnabled();
    v6 = (_DWORD *)v2 + 35;
    if ( v5 )
      v0 = 1;
    v7 = 2LL;
    do
    {
      if ( *v6 != v6[2] )
      {
        v0 = 1;
        v4 = 1;
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( (unsigned __int8)PpmParkParkingAvailable() )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( (PopInterruptSteeringEnabled() || (v3 = v0) != 0) && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  v9 = v3;
  if ( PpmCheckForceDisarm )
    v9 = 0;
  if ( !v4 )
    PpmPerfClearResponsivenessHints();
  LOBYTE(v8) = v1;
  PpmParkUpdateConcurrencyTracking(v8);
  if ( v9 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 0LL);
    PpmCheckArmed = 0;
    if ( PpmCheckTimerImplementation )
      KeCancelTimer2((__int64)&PpmCheckTimer, 0LL, v10, v11);
  }
  result = PpmCheckHomogeneousPipelines;
  PpmCheckPipelines = (__int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v1 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
