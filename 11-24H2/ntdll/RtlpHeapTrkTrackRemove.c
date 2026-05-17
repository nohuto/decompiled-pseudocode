/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x18003C8D0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHeapTrkHash @ 0x18003CD40 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18003CDF0 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHeapTrkTrackRemove(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rdx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // r8
  volatile signed __int32 **v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *j; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax

  v4 = RtlpHeapTrkHash(a2);
  v5 = v4;
  v6 = 8LL * (v4 & 0xF);
  v7 = *(volatile signed __int32 **)(v6 + qword_1801CE7E8);
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v10 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v10 )
      {
        if ( v10 )
          *v10 = v7;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v7, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v7);
  v11 = (_QWORD **)(16 * v5 + qword_1801CE280);
  for ( j = *v11; ; j = (_QWORD *)*j )
  {
    if ( j == v11 )
      return RtlReleaseSRWLockExclusive(*(_QWORD *)(v6 + qword_1801CE7E8));
    if ( j[3] == a2 && j[2] == a1 )
      break;
  }
  v14 = (_QWORD *)*j;
  if ( *(_QWORD **)(*j + 8LL) != j || (v15 = (_QWORD *)j[1], (_QWORD *)*v15 != j) )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  RtlReleaseSRWLockExclusive(*(_QWORD *)(v6 + qword_1801CE7E8));
  if ( j[4] )
  {
    RtlpHeapTrkDereferenceStack();
    j[4] = 0LL;
  }
  return RtlFreeHeap(qword_1801CE808, 0, (unsigned __int64)j);
}
