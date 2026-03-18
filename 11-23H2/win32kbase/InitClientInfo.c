/*
 * XREFs of InitClientInfo @ 0x1C0050060
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C00B46F0 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 CurrentProcess; // rcx
  BOOL v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 16LL) = *(_DWORD *)(a1 + 632);
  v4 = *(_QWORD *)(a1 + 480);
  *(_DWORD *)(v4 + 28) = *(_DWORD *)(a1 + 488);
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 208LL) = 0LL;
  v5 = *(_QWORD *)(a1 + 440);
  if ( v5 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 480) + 152LL) = *(_WORD *)(v5 + 72);
    v4 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(v4 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 480) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 144LL) = 0LL;
  }
  CurrentProcess = PsGetCurrentProcess(v4, a2, a3);
  v7 = 0;
  if ( CurrentProcess )
    v7 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 424);
  if ( *(int *)(v9 + 12) < 0 )
    v8 |= 2u;
  if ( (*(_DWORD *)(v9 + 824) & 0x800) != 0 )
    v8 |= 4u;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(CurrentProcess);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v11 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(v11 + 12) & 0x20000000) != 0 )
    v8 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 224LL) |= v8;
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 236LL) = 0;
  v12 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 360) = v12 + 232;
  *(_DWORD *)(v12 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 480) + 240LL;
  return 1LL;
}
