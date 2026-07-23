/*
 * XREFs of RtlWakeConditionVariable @ 0x18009E790
 * Callers:
 *     TppPoolUpdateTrimmedWorker @ 0x1800A00DC (TppPoolUpdateTrimmedWorker.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x18009E900 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 */

void __cdecl RtlWakeConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  unsigned __int64 Value; // rax
  PRTL_CONDITION_VARIABLE v2; // r9
  signed __int64 v3; // rdx
  unsigned __int64 v4; // rtt
  unsigned __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned __int64 *v7; // rsi
  signed __int64 i; // rcx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r11
  unsigned int v11; // r10d
  _QWORD *v12; // rax
  unsigned __int64 *v13; // r11
  unsigned __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rtt
  volatile signed __int32 *v19; // [rsp+30h] [rbp+8h] BYREF

  Value = ConditionVariable->Value;
  v2 = ConditionVariable;
  do
  {
    while ( 1 )
    {
      if ( !Value )
        return;
      if ( (Value & 8) == 0 )
        break;
      if ( (Value & 7) != 7 )
      {
        v18 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Value + 1, Value);
        if ( v18 != Value )
          continue;
      }
      return;
    }
    v3 = Value + 8;
    v4 = Value;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Value + 8, Value);
  }
  while ( v4 != Value );
  v5 = 0LL;
  v6 = 0;
  v7 = (unsigned __int64 *)&v19;
  v19 = 0LL;
  for ( i = v3; ; v3 = i )
  {
    v9 = i & 0xFFFFFFFFFFFFFFF0uLL;
    v10 = (_QWORD *)v9;
    if ( (v3 & 7) == 7 )
    {
      v5 = _InterlockedExchange64((volatile __int64 *)v2, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
      *v7 = v5;
      goto LABEL_18;
    }
    v11 = (v3 & 7) + 1;
    if ( !*(_QWORD *)(v9 + 8) )
    {
      do
      {
        v12 = v10;
        v10 = (_QWORD *)*v10;
        v10[2] = v12;
      }
      while ( !v10[1] );
    }
    v13 = (unsigned __int64 *)v10[1];
    if ( v11 > v6 )
    {
      while ( 1 )
      {
        v14 = (unsigned __int64 *)v13[2];
        if ( !v14 )
          break;
        *v7 = (unsigned __int64)v13;
        ++v6;
        *v13 = 0LL;
        v7 = v13;
        *(_QWORD *)(v9 + 8) = v14;
        v13 = v14;
        *v14 = 0LL;
        if ( v11 <= v6 )
          goto LABEL_11;
      }
      if ( v11 > v6 )
        break;
    }
LABEL_11:
    i = _InterlockedCompareExchange64((volatile signed __int64 *)v2, v9, v3);
    if ( v3 == i )
      goto LABEL_18;
LABEL_12:
    ;
  }
  i = _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, v3);
  if ( v3 != i )
    goto LABEL_12;
  *v7 = (unsigned __int64)v13;
  *v13 = 0LL;
LABEL_18:
  v15 = v19;
  if ( v19 )
  {
    do
    {
      v16 = *(volatile signed __int32 **)v15;
      if ( !_interlockedbittestandreset(v15 + 9, 1u) )
      {
        v17 = *((_QWORD *)v19 + 5);
        if ( !v17 || !(unsigned __int8)RtlpQueueWaitBlockToSRWLock(v19, v17, v5, v2) )
        {
          _InterlockedOr(v15 + 9, 4u);
          ZwAlertThreadByThreadId(*((HANDLE *)v19 + 3));
        }
      }
      v15 = v16;
      v19 = v16;
    }
    while ( v16 );
  }
}
