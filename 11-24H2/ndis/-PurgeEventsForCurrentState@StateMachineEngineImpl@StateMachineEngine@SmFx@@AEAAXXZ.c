/*
 * XREFs of ?PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E6B68
 * Callers:
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400E6500 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 * Callees:
 *     ?LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z @ 0x14005A690 (-LogTransition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4TransitionType@3@GGGE@Z.c)
 *     ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x14005A7C0 (-GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 *     ?GetSlotIndexForSlotType@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAIAEBUSTATE_SPECIFICATION@3@W4StateSlotType@3@@Z @ 0x1400E6770 (-GetSlotIndexForSlotType@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAIAEBUSTATE_SPECIFIC.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::PurgeEventsForCurrentState(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  unsigned __int16 CurrentStateIndex; // ax
  SmFx::StateMachineEngine::StateMachineEngineImpl *v3; // rcx
  __int64 v4; // rdx
  unsigned __int16 v5; // r15
  unsigned int SlotIndexForSlotType; // eax
  __int64 v7; // r11
  _WORD *v8; // r14
  unsigned __int8 v9; // si
  unsigned __int8 i; // di
  __int16 v11; // dx
  _WORD *j; // rax
  __int64 v13; // rax

  CurrentStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex(this);
  v4 = *((_QWORD *)this + 111);
  v5 = CurrentStateIndex;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 24) + 16LL * CurrentStateIndex + 4) & 0x20) != 0 )
  {
    SlotIndexForSlotType = SmFx::StateMachineEngine::StateMachineEngineImpl::GetSlotIndexForSlotType(
                             v3,
                             (const struct SmFx::STATE_SPECIFICATION *)(*(_QWORD *)(v4 + 24) + 16LL * CurrentStateIndex),
                             32);
    v8 = *(_WORD **)(*(_QWORD *)(v7 + 8) + 8LL * SlotIndexForSlotType);
    if ( v8 )
    {
      *((_BYTE *)this + 1009) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 125);
      v9 = *((_BYTE *)this + 978);
      for ( i = v9; i != *((_BYTE *)this + 979); i = (i + 1) & 0xF )
      {
        v11 = *((_WORD *)this + i + 416);
        for ( j = v8; *j; ++j )
        {
          if ( *j == v11 )
          {
            SmFx::StateMachineEngine::StateMachineEngineImpl::LogTransition(
              this,
              7u,
              v5,
              v11,
              0,
              *((_BYTE *)this + 980) - 1);
            goto LABEL_10;
          }
        }
        v13 = v9;
        v9 = (v9 + 1) & 0xF;
        *((_WORD *)this + v13 + 416) = v11;
LABEL_10:
        ;
      }
      *((_BYTE *)this + 979) = v9;
      KeReleaseSpinLock((PKSPIN_LOCK)this + 125, *((_BYTE *)this + 1009));
    }
  }
}
