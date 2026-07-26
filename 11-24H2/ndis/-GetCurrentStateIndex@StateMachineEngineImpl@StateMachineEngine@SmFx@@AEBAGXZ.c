/*
 * XREFs of ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x14005A7C0
 * Callers:
 *     ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x14005A160 (-UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400E6500 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 *     ?ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400E6610 (-ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEV.c)
 *     ?PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E6B68 (-PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
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
