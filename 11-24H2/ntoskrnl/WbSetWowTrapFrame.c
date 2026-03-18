/*
 * XREFs of WbSetWowTrapFrame @ 0x1408FE6DC
 * Callers:
 *     sub_1408FB3EC @ 0x1408FB3EC (sub_1408FB3EC.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     PsWow64GetProcessMachine @ 0x1408FB0E0 (PsWow64GetProcessMachine.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(_DWORD *a1, _DWORD *a2)
{
  __int16 ProcessMachine; // bp
  unsigned int v5; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  int ContextThread; // ebx

  ProcessMachine = PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessMachine == 332 )
  {
    v5 = 716;
  }
  else
  {
    if ( ProcessMachine != 452 )
      return (unsigned int)-1073741637;
    v5 = 416;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ProcessMachine == 332 )
    v7 = 65537;
  else
    v7 = 2097153;
  a1[12] = v7;
  ContextThread = PspWow64GetContextThread(KeGetCurrentThread(), a1 + 12, v5, 0LL);
  if ( ContextThread >= 0 )
  {
    if ( ProcessMachine == 332 )
    {
      a1[58] = a2[2];
      a1[61] = *a2;
      a1[60] = a2[4];
    }
    else
    {
      a1[28] = a2[2];
      a1[26] = *a2;
      a1[29] = a2[4];
    }
    ContextThread = PspWow64SetContextThread(KeGetCurrentThread());
  }
  KeLeaveGuardedRegion();
  return (unsigned int)ContextThread;
}
