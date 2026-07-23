/*
 * XREFs of RtlpWakeConditionVariable @ 0x18009E650
 * Callers:
 *     RtlSleepConditionVariableCS @ 0x18007ADC0 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     RtlpWakeSingle @ 0x18009E500 (RtlpWakeSingle.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x18009E900 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 */

char __fastcall RtlpWakeConditionVariable(volatile __int64 *a1, signed __int64 a2, int a3)
{
  unsigned __int64 *v3; // rsi
  unsigned int v4; // r11d
  signed __int64 i; // r9
  signed __int64 v8; // rax
  _QWORD *v9; // r8
  unsigned int v10; // eax
  _QWORD *v11; // rcx
  unsigned __int64 *v12; // rcx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rdx
  volatile signed __int32 *v17; // [rsp+38h] [rbp+10h] BYREF

  v3 = (unsigned __int64 *)&v17;
  v17 = 0LL;
  v4 = 0;
  for ( i = a2; ; a2 = i )
  {
    i &= 0xFFFFFFFFFFFFFFF0uLL;
    LOBYTE(v8) = a2 & 7;
    v9 = (_QWORD *)i;
    if ( (a2 & 7) == 7 )
    {
      *v3 = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
      goto LABEL_13;
    }
    v10 = a3 + (a2 & 7);
    if ( !*(_QWORD *)(i + 8) )
    {
      do
      {
        v11 = v9;
        v9 = (_QWORD *)*v9;
        v9[2] = v11;
      }
      while ( !v9[1] );
    }
    v12 = (unsigned __int64 *)v9[1];
    if ( v10 > v4 )
    {
      while ( 1 )
      {
        v9 = (_QWORD *)v12[2];
        if ( !v9 )
          break;
        *v3 = (unsigned __int64)v12;
        ++v4;
        *v12 = 0LL;
        v3 = v12;
        *(_QWORD *)(i + 8) = v9;
        v12 = v9;
        *v9 = 0LL;
        if ( v10 <= v4 )
          goto LABEL_6;
      }
      if ( v10 > v4 )
        break;
    }
LABEL_6:
    v8 = _InterlockedCompareExchange64(a1, i, a2);
    i = v8;
    if ( a2 == v8 )
      goto LABEL_13;
LABEL_7:
    ;
  }
  v8 = _InterlockedCompareExchange64(a1, 0LL, a2);
  i = v8;
  if ( a2 != v8 )
    goto LABEL_7;
  *v3 = (unsigned __int64)v12;
  *v12 = 0LL;
LABEL_13:
  v13 = v17;
  if ( v17 )
  {
    do
    {
      v14 = *(volatile signed __int32 **)v13;
      if ( !_interlockedbittestandreset(v13 + 9, 1u) )
      {
        v15 = *((_QWORD *)v17 + 5);
        if ( !v15 || (LOBYTE(v8) = RtlpQueueWaitBlockToSRWLock(v17, v15, v9, i), !(_BYTE)v8) )
        {
          _InterlockedOr(v13 + 9, 4u);
          LOBYTE(v8) = ZwAlertThreadByThreadId(*((HANDLE *)v17 + 3));
        }
      }
      v13 = v14;
      v17 = v14;
    }
    while ( v14 );
  }
  return v8;
}
