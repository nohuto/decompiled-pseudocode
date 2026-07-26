/*
 * XREFs of ?EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x1400754B0
 * Callers:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140074A30 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 * Callees:
 *     ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x140096130 (-AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 */

bool __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEventWithDisposition(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned __int16 a2)
{
  int v2; // r9d
  int v3; // r9d
  unsigned __int8 i; // r8
  unsigned __int8 v5; // r8
  char v6; // r10
  unsigned __int8 v7; // r9
  __int16 v8; // r11
  __int64 v9; // rax
  char v10; // al

  v2 = *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)this + 111) + 16LL) + 4LL * a2 + 2);
  if ( v2 != 1 )
  {
    v3 = v2 - 2;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        for ( i = *((_BYTE *)this + 978); i != *((_BYTE *)this + 979); i = (i + 1) & 0xF )
        {
          if ( *((_WORD *)this + i + 416) == a2 )
            goto LABEL_15;
        }
        return SmFx::StateMachineEngine::StateMachineEngineImpl::AddEventToEventQueue(this, a2);
      }
LABEL_15:
      KeReleaseSpinLock((PKSPIN_LOCK)this + 125, *((_BYTE *)this + 1009));
      return 0;
    }
    v5 = *((_BYTE *)this + 978);
    v6 = 0;
    v7 = v5;
    if ( v5 != *((_BYTE *)this + 979) )
    {
      do
      {
        v8 = *((_WORD *)this + v5 + 416);
        if ( v8 == a2 )
        {
          v6 = 1;
        }
        else
        {
          v9 = v7;
          v7 = (v7 + 1) & 0xF;
          *((_WORD *)this + v9 + 416) = v8;
        }
        v10 = *((_BYTE *)this + 979);
        v5 = (v5 + 1) & 0xF;
      }
      while ( v5 != v10 );
      if ( v6 )
      {
        *((_WORD *)this + ((v10 - 1) & 0xF) + 416) = a2;
        goto LABEL_15;
      }
    }
  }
  return SmFx::StateMachineEngine::StateMachineEngineImpl::AddEventToEventQueue(this, a2);
}
