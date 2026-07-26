/*
 * XREFs of ?GetStateIdFromStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGG@Z @ 0x140075410
 * Callers:
 *     ?LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z @ 0x140075310 (-LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x14008F980 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::GetStateIdFromStateIndex(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned __int16 a2)
{
  if ( a2 )
    return *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 111) + 24LL) + 16LL * a2);
  else
    return 0LL;
}
