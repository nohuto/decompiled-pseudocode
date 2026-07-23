/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x18001CB50
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlpHeapTrkHash @ 0x18001CFC0 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18001D070 (RtlpHeapTrkDereferenceStack.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHeapTrkTrackRemove(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  void *v7; // rdx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // r8
  char *v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *j; // rbx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  v4 = RtlpHeapTrkHash(a2);
  v5 = v4;
  v6 = 8LL * (v4 & 0xF);
  v7 = *(void **)(v6 + qword_1801CD7E0);
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v10 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v10 )
      {
        if ( v10 )
          *(_QWORD *)v10 = v7;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v7);
  v11 = (_QWORD **)(16 * v5 + qword_1801CD280);
  for ( j = *v11; ; j = (_QWORD *)*j )
  {
    if ( j == v11 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v6 + qword_1801CD7E0));
      return;
    }
    if ( j[3] == a2 && j[2] == a1 )
      break;
  }
  v13 = (_QWORD *)*j;
  if ( *(_QWORD **)(*j + 8LL) != j || (v14 = (_QWORD *)j[1], (_QWORD *)*v14 != j) )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = v14;
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v6 + qword_1801CD7E0));
  if ( j[4] )
  {
    RtlpHeapTrkDereferenceStack();
    j[4] = 0LL;
  }
  RtlFreeHeap(HeapHandle, 0, j);
}
