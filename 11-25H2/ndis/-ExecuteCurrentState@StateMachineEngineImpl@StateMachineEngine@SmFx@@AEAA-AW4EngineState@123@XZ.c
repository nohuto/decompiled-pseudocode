/*
 * XREFs of ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400ED414
 * Callers:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140074B00 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400ED7E8 (-InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400EDC64 (-WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     ?FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@Z @ 0x140074D30 (-FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x140074FA0 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x140075440 (-GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 *     ?PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400EDA7C (-PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteCurrentState(
        SmFx::StateMachineEngine::StateMachineEngineImpl *a1)
{
  __int64 v2; // r14
  unsigned __int16 CurrentStateIndex; // ax
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int16 v6; // r14
  char v7; // cl
  __int128 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  _OWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF

  while ( 1 )
  {
    v2 = *((_QWORD *)a1 + 111);
    CurrentStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex(a1);
    v4 = *(_QWORD *)(v2 + 24) + 16LL * CurrentStateIndex;
    if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(_QWORD))(v4 + 8))(*((_QWORD *)a1 + 112));
      v5 = v4;
    }
    else
    {
      v5 = *(_QWORD *)(v2 + 24) + 16LL * CurrentStateIndex;
      v6 = *(_BYTE *)(v4 + 3) == 1 ? *(_WORD *)(v2 + 2) : 0;
    }
    SmFx::StateMachineEngine::StateMachineEngineImpl::PurgeEventsForCurrentState(a1);
    v7 = *(_BYTE *)(v5 + 3);
    if ( v7 != 1 )
      break;
    v14[0] = 0LL;
    SmFx::StateMachineEngine::StateMachineEngineImpl::FindActionForEvent(
      a1,
      v6,
      (struct SmFx::StateMachineEngine::StateMachineEngineImpl::EVENT_ACTION *)v14);
    v8 = v14;
LABEL_10:
    result = SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction((__int64)a1, v8);
    if ( (_DWORD)result != 2 )
      return result;
  }
  if ( v7 == 3 )
  {
    v9 = *((_QWORD *)a1 + 111);
    v10 = *(unsigned __int8 *)(v4 + 6);
    v12[1] = 0;
    v12[0] = 6;
    v13 = *(_QWORD *)(v9 + 8) + 2 * v10;
    v8 = (__int128 *)v12;
    goto LABEL_10;
  }
  return 1LL;
}
