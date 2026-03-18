/*
 * XREFs of ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x14003C430
 * Callers:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003BDFC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003C680 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

FxRequest *__fastcall FxRequest::GetNextRequest(FxIrpQueue *IrpQueue)
{
  FxIrpQueue *Flink; // rdx
  bool i; // zf
  FxRequest *result; // rax
  FxRequestContext **p_m_RequestContext; // rcx
  FxRequestTimer *m_Timer; // r9
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v8; // rcx

  Flink = (FxIrpQueue *)IrpQueue->m_Queue.Flink;
  for ( i = IrpQueue->m_Queue.Flink == (_LIST_ENTRY *)IrpQueue; ; i = Flink == IrpQueue )
  {
    result = (FxRequest *)&Flink[-5].m_RequestCount;
    if ( i )
      result = 0LL;
    if ( !result )
      break;
    p_m_RequestContext = &result->m_RequestContext;
    i = _InterlockedExchange64((volatile __int64 *)&result->m_NPLock, 0LL) == 0;
    Flink = (FxIrpQueue *)result->m_RequestContext;
    if ( !i )
    {
      if ( (FxRequestContext **)Flink->m_Queue.Blink != p_m_RequestContext
        || (m_Timer = result->m_Timer, *(FxRequestContext ***)&m_Timer->Timer.m_Timer.m_Period != p_m_RequestContext) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)&m_Timer->Timer.m_Timer.m_Period = Flink;
      Flink->m_Queue.Blink = (_LIST_ENTRY *)m_Timer;
      result->m_Timer = (FxRequestTimer *)&result->m_RequestContext;
      *p_m_RequestContext = (FxRequestContext *)p_m_RequestContext;
      --IrpQueue->m_RequestCount;
      Next = result->m_DrainSingleEntry.Next;
      if ( LODWORD(Next->Next) == 1 )
        Next[1].Next = 0LL;
      result->m_DrainSingleEntry.Next = 0LL;
      v8 = Next[-15].Next;
      Next[13].Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))v8[2].Next)(
        Next - 15,
        1969583441LL,
        2062LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      return (FxRequest *)&Next[-15];
    }
  }
  return result;
}
