/*
 * XREFs of RtlWakeAllConditionVariable @ 0x18008E480
 * Callers:
 *     EtwpStopLoggerInstance @ 0x18008DE70 (EtwpStopLoggerInstance.c)
 *     EtwpFlushActiveBuffers @ 0x18008E264 (EtwpFlushActiveBuffers.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 */

void __fastcall RtlWakeAllConditionVariable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  volatile signed __int64 *v2; // r8
  __int64 v3; // r9
  signed __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx

  v1 = *a1;
  v2 = a1;
  v3 = 0LL;
  while ( v1 && (v1 & 7) != 7 )
  {
    if ( (v1 & 8) != 0 )
    {
      v4 = _InterlockedCompareExchange64(a1, v1 | 7, v1);
      if ( v1 == v4 )
        return;
    }
    else
    {
      v4 = _InterlockedCompareExchange64(a1, 0LL, v1);
      if ( v1 == v4 )
      {
        v5 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v5 )
        {
          do
          {
            v6 = *(_QWORD *)v5;
            _interlockedbittestandset((volatile signed __int32 *)(v5 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 36), 1u) )
              ZwAlertThreadByThreadId(*(_QWORD *)(v5 + 24), v5, v2, v3);
            v5 = v6;
          }
          while ( v6 );
        }
        return;
      }
    }
    v1 = v4;
  }
}
