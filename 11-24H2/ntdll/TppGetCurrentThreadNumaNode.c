/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x18006EE30
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18006D538 (TppInitializeTimerSubQueue.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 *     RtlpTpIoAlloc @ 0x1800BEC44 (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800BF6A0 (TpAllocIoCompletion.c)
 * Callees:
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TppGetCurrentThreadNumaNode(__int64 a1, volatile signed __int32 **a2, _BYTE *a3, _WORD *a4)
{
  unsigned __int64 Number; // r12
  int v7; // ebp
  int Group; // r15d
  __int64 result; // rax
  unsigned int i; // edx

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (result = *(unsigned int *)(a1 + 440), !(_DWORD)result) )
    result = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != (_DWORD)result )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72), a2, (unsigned __int64)a3);
    TppAdjustRunningThreadGoalWithLock(a1);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  }
  for ( i = 0; i < TppNumberNodes; ++i )
  {
    result = *(_QWORD *)(a1 + 48) + 16LL * (Group + TppMaximumGroups * i);
    if ( *(_WORD *)(result + 8) == (_WORD)Group )
    {
      result = *(_QWORD *)result;
      if ( _bittest64(&result, Number) )
      {
        v7 = i;
        break;
      }
    }
  }
  *(_DWORD *)a2 = v7;
  if ( a3 )
    *a3 = Number;
  if ( a4 )
    *a4 = Group;
  return result;
}
