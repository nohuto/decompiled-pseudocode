/*
 * XREFs of ?DequeueEventForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAGPEAUEVENT_ACTION@123@@Z @ 0x140059FD0
 * Callers:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     ?FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@Z @ 0x14005A0B0 (-FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@.c)
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::DequeueEventForCurrentState(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        struct SmFx::StateMachineEngine::StateMachineEngineImpl::EVENT_ACTION *a2)
{
  unsigned __int8 i; // di
  unsigned __int16 v5; // bp
  char j; // al
  __int128 v7; // xmm0
  __int64 result; // rax
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  for ( i = *((_BYTE *)this + 978); ; i = (i + 1) & 0xF )
  {
    if ( i == *((_BYTE *)this + 979) )
      return 0LL;
    v10 = 0LL;
    v5 = *((_WORD *)this + i + 416);
    SmFx::StateMachineEngine::StateMachineEngineImpl::FindActionForEvent(
      this,
      v5,
      (struct SmFx::StateMachineEngine::StateMachineEngineImpl::EVENT_ACTION *)&v10);
    if ( (_DWORD)v10 != 5 )
      break;
  }
  for ( j = *((_BYTE *)this + 978); i != j; j = *((_BYTE *)this + 978) )
  {
    v9 = i;
    i = (i - 1) & 0xF;
    *((_WORD *)this + v9 + 416) = *((_WORD *)this + i + 416);
  }
  v7 = v10;
  *((_BYTE *)this + 978) = (j + 1) & 0xF;
  result = v5;
  *(_OWORD *)a2 = v7;
  return result;
}
