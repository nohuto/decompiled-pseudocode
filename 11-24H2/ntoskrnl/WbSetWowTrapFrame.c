/*
 * XREFs of WbSetWowTrapFrame @ 0x140920FBC
 * Callers:
 *     sub_14091DCCC @ 0x14091DCCC (sub_14091DCCC.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(__int64 a1, _DWORD *a2)
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
  *(_DWORD *)(a1 + 48) = v7;
  ContextThread = PspWow64GetContextThread(KeGetCurrentThread(), a1 + 48, v5, 0LL);
  if ( ContextThread >= 0 )
  {
    if ( ProcessMachine == 332 )
    {
      *(_DWORD *)(a1 + 232) = a2[2];
      *(_DWORD *)(a1 + 244) = *a2;
      *(_DWORD *)(a1 + 240) = a2[4];
    }
    else
    {
      *(_DWORD *)(a1 + 112) = a2[2];
      *(_DWORD *)(a1 + 104) = *a2;
      *(_DWORD *)(a1 + 116) = a2[4];
    }
    ContextThread = PspWow64SetContextThread(KeGetCurrentThread(), (char *)(a1 + 48), v5, 0);
  }
  KeLeaveGuardedRegion();
  return (unsigned int)ContextThread;
}
