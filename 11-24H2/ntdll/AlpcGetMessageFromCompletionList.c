/*
 * XREFs of AlpcGetMessageFromCompletionList @ 0x1800DBC70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall AlpcGetMessageFromCompletionList(__int64 a1, _QWORD *a2, unsigned __int64 i)
{
  volatile signed __int32 *v3; // rdi
  unsigned int v4; // ebp
  char *SchedulerSharedDataSlot; // r9
  volatile signed __int32 **v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  signed __int64 v16; // rcx
  __int64 v17; // rsi

  v3 = (volatile signed __int32 *)(a1 + 320);
  v4 = 0;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
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
      (unsigned __int64)a2,
      (_QWORD *)i,
      (unsigned __int64)SchedulerSharedDataSlot);
  v9 = *(_QWORD *)(a1 + 64);
  v10 = (unsigned __int64)*(unsigned int *)(a1 + 16) >> 2;
  v11 = a1 + *(unsigned int *)(a1 + 12);
  do
  {
    v12 = v9;
    v13 = v9 & 0xFFFFFF;
    if ( v13 == 0xFFFFFF || v13 >= v10 || (v14 = (v9 >> 24) & 0xFFFFFF, v14 >= v10) )
    {
      v17 = 0LL;
      goto LABEL_21;
    }
    v15 = *(unsigned int *)(v11 + 4 * (v9 & 0xFFFFFF));
    if ( v13 == v14 )
      v16 = v9 | 0xFFFFFFFFFFFFLL;
    else
      v16 = ((v13 + 1) % v10) ^ (v9 ^ ((v13 + 1) % v10)) & 0xFFFFFFFFFF000000uLL;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v16, v9);
  }
  while ( v9 != v12 );
  v17 = a1 + *(unsigned int *)(a1 + 28) + v15;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (((_BYTE)v17 + (unsigned __int8)*(_WORD *)(v17 + 2)) & 7) != 0 )
        v4 = 8 - (((_BYTE)v17 + (unsigned __int8)*(_WORD *)(v17 + 2)) & 7);
      *a2 = v17 + *(unsigned __int16 *)(v17 + 2) + v4;
    }
    else
    {
      *a2 = 0LL;
    }
  }
LABEL_21:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3);
  return v17;
}
