/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x18003D250
 * Callers:
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     TppInitializeTimerSubQueue @ 0x18003BC48 (TppInitializeTimerSubQueue.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlpTpIoAlloc @ 0x1800C4B54 (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 */

__int64 __fastcall TppGetCurrentThreadNumaNode(__int64 a1, int *a2, _BYTE *a3, _WORD *a4)
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
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72));
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
  *a2 = v7;
  if ( a3 )
    *a3 = Number;
  if ( a4 )
    *a4 = Group;
  return result;
}
