/*
 * XREFs of ?ReportException@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400E6CAC
 * Callers:
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 * Callees:
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x140073DE0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ReportException(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned int a2,
        __int16 a3,
        unsigned __int16 a4)
{
  *((_BYTE *)this + 1009) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 125);
  SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(this, a2, a3, a4);
}
