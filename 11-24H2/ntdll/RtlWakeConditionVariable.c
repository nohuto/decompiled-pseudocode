/*
 * XREFs of RtlWakeConditionVariable @ 0x18004AAB0
 * Callers:
 *     TppPoolUpdateTrimmedWorker @ 0x1800F3DB4 (TppPoolUpdateTrimmedWorker.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x18004AC20 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 */

char __fastcall RtlWakeConditionVariable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  volatile __int64 *v2; // r9
  signed __int64 v3; // rdx
  signed __int64 v4; // rtt
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
  signed __int64 v18; // rtt
  volatile signed __int32 *v20; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1;
  do
  {
    while ( 1 )
    {
      if ( !v1 )
        return v1;
      if ( (v1 & 8) == 0 )
        break;
      if ( (v1 & 7) != 7 )
      {
        v18 = v1;
        v1 = _InterlockedCompareExchange64(a1, v1 + 1, v1);
        if ( v18 != v1 )
          continue;
      }
      return v1;
    }
    v3 = v1 + 8;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(a1, v1 + 8, v1);
  }
  while ( v4 != v1 );
  v5 = 0LL;
  v6 = 0;
  v7 = (unsigned __int64 *)&v20;
  v20 = 0LL;
  for ( i = v3; ; v3 = i )
  {
    v9 = i & 0xFFFFFFFFFFFFFFF0uLL;
    LOBYTE(v1) = v3 & 7;
    v10 = (_QWORD *)v9;
    if ( (v3 & 7) == 7 )
    {
      v5 = _InterlockedExchange64(v2, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
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
    v1 = _InterlockedCompareExchange64(v2, v9, v3);
    i = v1;
    if ( v3 == v1 )
      goto LABEL_18;
LABEL_12:
    ;
  }
  v1 = _InterlockedCompareExchange64(v2, 0LL, v3);
  i = v1;
  if ( v3 != v1 )
    goto LABEL_12;
  *v7 = (unsigned __int64)v13;
  *v13 = 0LL;
LABEL_18:
  v15 = v20;
  if ( v20 )
  {
    do
    {
      v16 = *(volatile signed __int32 **)v15;
      if ( !_interlockedbittestandreset(v15 + 9, 1u) )
      {
        v17 = *((_QWORD *)v20 + 5);
        if ( !v17 || (LOBYTE(v1) = RtlpQueueWaitBlockToSRWLock(v20, v17, v5, v2), !(_BYTE)v1) )
        {
          _InterlockedOr(v15 + 9, 4u);
          LOBYTE(v1) = ZwAlertThreadByThreadId(*((_QWORD *)v20 + 3), v17, v5, v2);
        }
      }
      v15 = v16;
      v20 = v16;
    }
    while ( v16 );
  }
  return v1;
}
