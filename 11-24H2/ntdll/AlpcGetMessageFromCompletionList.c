/*
 * XREFs of AlpcGetMessageFromCompletionList @ 0x1800D6D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

PPORT_MESSAGE __cdecl AlpcGetMessageFromCompletionList(
        PVOID CompletionList,
        PALPC_MESSAGE_ATTRIBUTES *MessageAttributes)
{
  char *i; // r8
  volatile signed __int32 *v3; // rdi
  unsigned int v4; // ebp
  char *SchedulerSharedDataSlot; // r9
  volatile signed __int32 **v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  char *v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  signed __int64 v16; // rcx
  _PORT_MESSAGE *v17; // rsi

  v3 = (volatile signed __int32 *)((char *)CompletionList + 320);
  v4 = 0;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (char *)(unsigned int)((_DWORD)i + 1) )
    {
      v8 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*v8 )
      {
        if ( v8 )
          *v8 = v3;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v3, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(
      (unsigned __int64)v3,
      (unsigned __int64)MessageAttributes,
      i,
      SchedulerSharedDataSlot);
  v9 = *((_QWORD *)CompletionList + 8);
  v10 = (unsigned __int64)*((unsigned int *)CompletionList + 4) >> 2;
  v11 = (char *)CompletionList + *((unsigned int *)CompletionList + 3);
  do
  {
    v12 = v9;
    v13 = v9 & 0xFFFFFF;
    if ( v13 == 0xFFFFFF || v13 >= v10 || (v14 = (v9 >> 24) & 0xFFFFFF, v14 >= v10) )
    {
      v17 = 0LL;
      goto LABEL_21;
    }
    v15 = *(unsigned int *)&v11[4 * (v9 & 0xFFFFFF)];
    if ( v13 == v14 )
      v16 = v9 | 0xFFFFFFFFFFFFLL;
    else
      v16 = ((v13 + 1) % v10) ^ (v9 ^ ((v13 + 1) % v10)) & 0xFFFFFFFFFF000000uLL;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)CompletionList + 8, v16, v9);
  }
  while ( v9 != v12 );
  v17 = (_PORT_MESSAGE *)((char *)CompletionList + *((unsigned int *)CompletionList + 7) + v15);
  if ( MessageAttributes )
  {
    if ( *((_DWORD *)CompletionList + 9) )
    {
      if ( (((_BYTE)v17 + (unsigned __int8)v17->u1.s1.TotalLength) & 7) != 0 )
        v4 = 8 - (((_BYTE)v17 + (unsigned __int8)v17->u1.s1.TotalLength) & 7);
      *MessageAttributes = (PALPC_MESSAGE_ATTRIBUTES)((char *)v17 + (unsigned __int16)v17->u1.s1.TotalLength + v4);
    }
    else
    {
      *MessageAttributes = 0LL;
    }
  }
LABEL_21:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v3);
  return v17;
}
