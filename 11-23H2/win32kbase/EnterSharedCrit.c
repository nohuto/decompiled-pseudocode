/*
 * XREFs of EnterSharedCrit @ 0x1C004CD30
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C005C570 (NtUserEnumDisplayMonitors.c)
 *     W32CalloutDispatch @ 0x1C00DE800 (W32CalloutDispatch.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A350 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDC20 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

__int64 __fastcall EnterSharedCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v10; // rax
  PVOID v11; // rdi

  v8 = 0LL;
  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v10 = SGDGetUserSessionState(v5, v4, v6, v7);
  v11 = ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v10 + 8));
  EtwTraceAcquiredSharedUserCrit();
  if ( v11 )
    return *(_QWORD *)v11;
  return v8;
}
