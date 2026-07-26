/*
 * XREFs of ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320
 * Callers:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400E6500 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 *     ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E68D4 (-InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E6D50 (-WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     ?FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@Z @ 0x14005A0B0 (-FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z @ 0x14005A690 (-LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z.c)
 *     ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x14005A7C0 (-GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 *     ?ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400E6610 (-ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEV.c)
 *     ?GetCurrentParentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x1400E6748 (-GetCurrentParentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 *     ?PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400E6AAC (-PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEVE.c)
 *     ?ReportException@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400E6CAC (-ReportException@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z.c)
 *     ?ShouldTransitionToWorkerForState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NAEBUSTATE_SPECIFICATION@3@@Z @ 0x1400E6D20 (-ShouldTransitionToWorkerForState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NAEBUSTAT.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction(__int64 a1, __int128 *a2)
{
  unsigned __int16 v4; // ax
  __int64 result; // rax
  unsigned __int16 v6; // si
  SmFx::StateMachineEngine::StateMachineEngineImpl *v7; // rcx
  unsigned __int8 v8; // r8
  unsigned __int16 v9; // r10
  SmFx::StateMachineEngine::StateMachineEngineImpl *v10; // rcx
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int16 v15; // si
  SmFx::StateMachineEngine::StateMachineEngineImpl *v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  char v21; // cl
  unsigned __int16 CurrentStateIndex; // ax
  __int128 v23; // [rsp+30h] [rbp-18h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 3:
      v19 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)(v19 + 8) )
      {
        v21 = *(_BYTE *)(v19 + 2);
        if ( (v21 & 2) != 0 && !*(_BYTE *)(a1 + 982) || (v21 & 1) != 0 && *(_BYTE *)(a1 + 983) )
        {
          result = 4LL;
          *(_OWORD *)(a1 + 960) = *a2;
        }
        else
        {
          CurrentStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1);
          SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(
            (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
            WaitForTimerFiredEventAndIgnoreIt,
            CurrentStateIndex,
            *((_WORD *)a2 + 2),
            *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * *((unsigned __int8 *)a2 + 6)),
            *((_BYTE *)a2 + 6));
          (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a2 + 1) + 8LL))(*(_QWORD *)(a1 + 896));
          return 1LL;
        }
      }
      else
      {
        v20 = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1);
        SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(
          (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
          (enum SmFx::TransitionType)6,
          v20,
          *((_WORD *)a2 + 2),
          *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * *((unsigned __int8 *)a2 + 6)),
          *((_BYTE *)a2 + 6));
        return 1LL;
      }
      break;
    case 1:
      v18 = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1);
      SmFx::StateMachineEngine::StateMachineEngineImpl::ReportException(
        (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
        RequiresPassiveLevel,
        *((_WORD *)a2 + 2),
        v18);
      return 1LL;
    case 2:
      result = SmFx::StateMachineEngine::StateMachineEngineImpl::PopToStackDepth(a1);
      if ( (_DWORD)result == 1 )
      {
        result = SmFx::StateMachineEngine::StateMachineEngineImpl::ExitCurrentState(a1, a2);
        if ( (_DWORD)result == 1 )
        {
          v15 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL);
          if ( !SmFx::StateMachineEngine::StateMachineEngineImpl::ShouldTransitionToWorkerForState(
                  (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
                  (const struct SmFx::STATE_SPECIFICATION *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 24LL) + 16LL * v15)) )
          {
            v17 = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex(v16);
            SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(
              (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
              TimerStopped,
              v17,
              *((_WORD *)a2 + 2),
              v15,
              *((_BYTE *)a2 + 6));
            *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * *(unsigned __int8 *)(a1 + 980) - 2) = v15;
            *(_BYTE *)(a1 + 981) = 0;
            return 2LL;
          }
LABEL_24:
          result = 3LL;
          *(_OWORD *)(a1 + 960) = *a2;
        }
      }
      break;
    case 4:
      v23 = *a2;
      while ( 1 )
      {
        result = SmFx::StateMachineEngine::StateMachineEngineImpl::PopToStackDepth(a1);
        if ( (_DWORD)result != 1 )
          break;
        result = SmFx::StateMachineEngine::StateMachineEngineImpl::ExitCurrentState(a1, &v23);
        if ( (_DWORD)result != 1 )
          break;
        SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentParentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1);
        v11 = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex(v10);
        SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(
          (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
          WaitForTimerFiredEventAndIgnoreIt|TimerStopped,
          v11,
          WORD2(v23),
          v12,
          BYTE6(v23));
        *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * *(unsigned __int8 *)(a1 + 980) - 2) = 0;
        v13 = *((_QWORD *)&v23 + 1);
        --*(_BYTE *)(a1 + 980);
        *(_BYTE *)(a1 + 981) = 0;
        SmFx::StateMachineEngine::StateMachineEngineImpl::FindActionForEvent(
          (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
          *(_WORD *)(v13 + 2),
          (struct SmFx::StateMachineEngine::StateMachineEngineImpl::EVENT_ACTION *)&v23);
        v14 = v23;
        if ( (_DWORD)v23 != 4 )
        {
          if ( !*(_BYTE *)(a1 + 980) )
            return 1LL;
          if ( (_DWORD)v23 == 5 )
            v14 = 1;
          LODWORD(v23) = v14;
          return SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction(a1, &v23);
        }
      }
      break;
    case 6:
      v4 = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1);
      if ( *(_BYTE *)(a1 + 980) == *(_BYTE *)(a1 + 864) )
      {
        SmFx::StateMachineEngine::StateMachineEngineImpl::ReportException(
          (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
          RequiresDedicatedThread|RequiresPassiveLevel,
          0,
          v4);
        return 1LL;
      }
      v6 = **((_WORD **)a2 + 1);
      if ( !SmFx::StateMachineEngine::StateMachineEngineImpl::ShouldTransitionToWorkerForState(
              (SmFx::StateMachineEngine::StateMachineEngineImpl *)a1,
              (const struct SmFx::STATE_SPECIFICATION *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 24LL) + 16LL * v6)) )
      {
        SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(v7, (enum SmFx::TransitionType)5, v9, 0, v6, v8);
        *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * (unsigned __int8)(*(_BYTE *)(a1 + 980))++) = v6;
        *(_BYTE *)(a1 + 981) = 0;
        return 2LL;
      }
      goto LABEL_24;
    default:
      return 1LL;
  }
  return result;
}
