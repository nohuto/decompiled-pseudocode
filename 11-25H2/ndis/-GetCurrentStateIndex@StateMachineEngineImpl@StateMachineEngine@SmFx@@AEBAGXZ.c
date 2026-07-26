/*
 * XREFs of ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x140075440
 * Callers:
 *     ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x140074DE0 (-UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x140074FA0 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400ED414 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 *     ?ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400ED524 (-ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEV.c)
 *     ?PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400EDA7C (-PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  if ( *((_BYTE *)this + 980) )
    return *(unsigned __int16 *)(*((_QWORD *)this + 109) + 2LL * *((unsigned __int8 *)this + 980) - 2);
  else
    return 0LL;
}
