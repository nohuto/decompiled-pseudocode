/*
 * XREFs of ?FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@Z @ 0x14005A0B0
 * Callers:
 *     ?DequeueEventForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAGPEAUEVENT_ACTION@123@@Z @ 0x140059FD0 (-DequeueEventForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAGPEAUEVENT_ACTI.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400E6500 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 * Callees:
 *     ?FindActionForEventOnState@StateMachineEngineImpl@StateMachineEngine@SmFx@@CAXAEBUSTATE_SPECIFICATION@3@GPEAUEVENT_ACTION@123@@Z @ 0x14005A240 (-FindActionForEventOnState@StateMachineEngineImpl@StateMachineEngine@SmFx@@CAXAEBUSTATE_SPECIFIC.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::FindActionForEvent(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned __int16 a2,
        struct SmFx::StateMachineEngine::StateMachineEngineImpl::EVENT_ACTION *a3)
{
  char v3; // bl
  unsigned __int8 v7; // bl
  const struct SmFx::STATE_SPECIFICATION *v8; // rbp

  v3 = *((_BYTE *)this + 980);
  *((_WORD *)a3 + 2) = a2;
  if ( v3 )
  {
    v7 = v3 - 1;
    while ( 1 )
    {
      v8 = (const struct SmFx::STATE_SPECIFICATION *)(*(_QWORD *)(*((_QWORD *)this + 111) + 24LL)
                                                    + 16LL * *(unsigned __int16 *)(*((_QWORD *)this + 109) + 2LL * v7));
      SmFx::StateMachineEngine::StateMachineEngineImpl::FindActionForEventOnState(v8, a2, a3);
      if ( *(_DWORD *)a3 != 1 )
        break;
      if ( v8->type[0] != 1 )
      {
        if ( v7-- )
          continue;
      }
      return;
    }
    *((_BYTE *)a3 + 6) = v7;
  }
  else
  {
    *(_DWORD *)a3 = 1;
    *((_BYTE *)a3 + 6) = -1;
  }
}
