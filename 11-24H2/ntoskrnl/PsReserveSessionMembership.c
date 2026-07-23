/*
 * XREFs of PsReserveSessionMembership @ 0x140A77CD0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsReserveSessionMembership(volatile signed __int32 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  volatile signed __int32 *CycleTime; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    return 1LL;
  CycleTime = (volatile signed __int32 *)Process[1].CycleTime;
  if ( !CycleTime )
    return 1LL;
  v4 = *CycleTime;
  while ( v4 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange(CycleTime, v4 + 1, v4);
    if ( v5 == v4 )
    {
      _InterlockedIncrement(CycleTime + 3);
      *a1 = CycleTime;
      return 1LL;
    }
  }
  return 0LL;
}
