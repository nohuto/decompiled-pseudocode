/*
 * XREFs of ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14008AED0
 * Callers:
 *     ?EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14005A830 (-EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 * Callees:
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x140073DE0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ?LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z @ 0x1400E69AC (-LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z.c)
 */

char __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::AddEventToEventQueue(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        __int16 a2)
{
  __int64 v3; // rcx
  char v4; // al

  v3 = *((unsigned __int8 *)this + 979);
  v4 = (v3 + 1) & 0xF;
  if ( v4 == *((_BYTE *)this + 978) )
  {
    SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(this, 2u, a2, 0);
    return 0;
  }
  else
  {
    *((_WORD *)this + v3 + 416) = a2;
    *((_BYTE *)this + 979) = v4;
    SmFx::StateMachineEngine::StateMachineEngineImpl::LogEventEnqueue(this, a2);
    return 1;
  }
}
