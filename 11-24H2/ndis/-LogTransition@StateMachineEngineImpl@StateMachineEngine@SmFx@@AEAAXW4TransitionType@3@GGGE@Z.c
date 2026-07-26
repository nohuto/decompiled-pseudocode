/*
 * XREFs of ?LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z @ 0x14005A690
 * Callers:
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400E6AAC (-PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEVE.c)
 *     ?PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E6B68 (-PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     ?GetStateIdFromStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGG@Z @ 0x14005A790 (-GetStateIdFromStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGG@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned int a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int8 a6)
{
  __int64 v8; // rax
  __int64 v9; // r11
  SmFx::StateMachineEngine::StateMachineEngineImpl *v10; // r10
  unsigned __int16 StateIdFromStateIndex; // ax
  __int64 v12; // r10
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r11

  *((_DWORD *)this + 3 * *((unsigned __int8 *)this + 976)) = a2;
  *((_WORD *)this + 6 * *((unsigned __int8 *)this + 976) + 2) = a4;
  v8 = *((unsigned __int8 *)this + 976);
  if ( ((a2 - 2) & 0xFFFFFFFB) != 0 )
    *((_WORD *)this + 6 * v8 + 3) = a3;
  else
    *((_WORD *)this + 6 * v8 + 3) = a5;
  *((_BYTE *)this + 12 * *((unsigned __int8 *)this + 976) + 8) = a6;
  v9 = *((_QWORD *)this + 117);
  *((_BYTE *)this + 976) = (*((_BYTE *)this + 976) + 1) & 0x3F;
  if ( v9 )
  {
    SmFx::StateMachineEngine::StateMachineEngineImpl::GetStateIdFromStateIndex(this, a5);
    StateIdFromStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetStateIdFromStateIndex(v10, a3);
    v13(*(_QWORD *)(v12 + 896), a2, StateIdFromStateIndex);
  }
}
