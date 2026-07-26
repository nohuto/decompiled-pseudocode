/*
 * XREFs of ?GetCurrentParentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x1400ED65C
 * Callers:
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x140074FA0 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400ED9C0 (-PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentParentStateIndex(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  if ( *((_BYTE *)this + 980) <= 1u )
    return 0LL;
  else
    return *(unsigned __int16 *)(*((_QWORD *)this + 109) + 2LL * *((unsigned __int8 *)this + 980) - 4);
}
