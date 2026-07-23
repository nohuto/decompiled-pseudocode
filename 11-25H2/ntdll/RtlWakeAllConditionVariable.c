/*
 * XREFs of RtlWakeAllConditionVariable @ 0x1800B7320
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1800B6D10 (EtwpStopLoggerInstance.c)
 *     EtwpFlushActiveBuffers @ 0x1800B7104 (EtwpFlushActiveBuffers.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 */

void __cdecl RtlWakeAllConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  unsigned __int64 i; // rdx
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx

  for ( i = ConditionVariable->Value; i && (i & 7) != 7; i = v2 )
  {
    if ( (i & 8) != 0 )
    {
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, i | 7, i);
      if ( i == v2 )
        return;
    }
    else
    {
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, 0LL, i);
      if ( i == v2 )
      {
        v3 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v3 )
        {
          do
          {
            v4 = *(_QWORD *)v3;
            _interlockedbittestandset((volatile signed __int32 *)(v3 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v3 + 36), 1u) )
              ZwAlertThreadByThreadId(*(HANDLE *)(v3 + 24));
            v3 = v4;
          }
          while ( v4 );
        }
        return;
      }
    }
  }
}
