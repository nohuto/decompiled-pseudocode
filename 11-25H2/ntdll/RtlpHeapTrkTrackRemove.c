/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x1800902C0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHeapTrkHash @ 0x180090730 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800907E0 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
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
  __int64 v16; // r9

  v4 = RtlpHeapTrkHash(a2);
  v5 = v4;
  v6 = 8LL * (v4 & 0xF);
  v7 = *(volatile signed __int32 **)(v6 + qword_1801D0820);
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
  v11 = (_QWORD **)(16 * v5 + qword_1801D0280);
  for ( j = *v11; ; j = (_QWORD *)*j )
  {
    if ( j == v11 )
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v6 + qword_1801D0820));
    if ( j[3] == a2 && j[2] == a1 )
      break;
  }
  v14 = (_QWORD *)*j;
  if ( *(_QWORD **)(*j + 8LL) != j || (v15 = (_QWORD *)j[1], (_QWORD *)*v15 != j) )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v6 + qword_1801D0820));
  if ( j[4] )
  {
    RtlpHeapTrkDereferenceStack();
    j[4] = 0LL;
  }
  return RtlFreeHeap(qword_1801D0840, 0, (__int64)j, v16);
}
