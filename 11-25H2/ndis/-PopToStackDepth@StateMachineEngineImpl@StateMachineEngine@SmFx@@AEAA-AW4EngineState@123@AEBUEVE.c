/*
 * XREFs of ?PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400ED9C0
 * Callers:
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x140074FA0 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 * Callees:
 *     ?LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z @ 0x140075310 (-LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z.c)
 *     ?ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400ED524 (-ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEV.c)
 *     ?GetCurrentParentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x1400ED65C (-GetCurrentParentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::PopToStackDepth(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 CurrentParentStateIndex; // ax

  while ( *(unsigned __int8 *)(a1 + 980) > (unsigned int)*(unsigned __int8 *)(a2 + 6) + 1 )
  {
    result = SmFx::StateMachineEngine::StateMachineEngineImpl::ExitCurrentState(a1, a2);
    if ( (_DWORD)result != 1 )
      return result;
    CurrentParentStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentParentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1);
    SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(
      (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
      4u,
      *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * *(unsigned __int8 *)(a1 + 980) - 2),
      *(_WORD *)(a2 + 4),
      CurrentParentStateIndex,
      *(_BYTE *)(a1 + 980) - 1);
    *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * (unsigned __int8)(*(_BYTE *)(a1 + 980))-- - 2) = 0;
    *(_BYTE *)(a1 + 981) = 0;
  }
  return 1LL;
}
