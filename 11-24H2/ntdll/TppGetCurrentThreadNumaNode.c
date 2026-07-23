/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x18008B710
 * Callers:
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x180089E18 (TppInitializeTimerSubQueue.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlpTpIoAlloc @ 0x1800B6A04 (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800B7460 (TpAllocIoCompletion.c)
 * Callees:
 *     TppAdjustRunningThreadGoalWithLock @ 0x180051CB4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppGetCurrentThreadNumaNode(__int64 a1, int *a2, _BYTE *a3, _WORD *a4)
{
  unsigned __int64 Number; // r12
  int v7; // ebp
  int Group; // r15d
  int v11; // eax
  unsigned int i; // edx
  __int64 v13; // rax
  __int64 v14; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v11 = *(_DWORD *)(a1 + 440)) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v11 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  }
  for ( i = 0; i < TppNumberNodes; ++i )
  {
    v13 = *(_QWORD *)(a1 + 48) + 16LL * (Group + TppMaximumGroups * i);
    if ( *(_WORD *)(v13 + 8) == (_WORD)Group )
    {
      v14 = *(_QWORD *)v13;
      if ( _bittest64(&v14, Number) )
      {
        v7 = i;
        break;
      }
    }
  }
  *a2 = v7;
  if ( a3 )
    *a3 = Number;
  if ( a4 )
    *a4 = Group;
}
