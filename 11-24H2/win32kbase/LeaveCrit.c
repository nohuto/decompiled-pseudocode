/*
 * XREFs of LeaveCrit @ 0x140162A80
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x140034270 (EtwTraceReleaseUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x140092CF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     UpdateDirtyVisRgnTrackers @ 0x1400AC0A0 (UpdateDirtyVisRgnTrackers.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x14016AAC8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 */

void __fastcall LeaveCrit(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int Count; // eax
  unsigned int v7; // eax

  UserSessionState = W32GetUserSessionState(a1);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v4 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
  LOBYTE(v4) = v4 & 0xC;
  if ( (_BYTE)v4 == 8 )
  {
    UpdateDirtyVisRgnTrackers(v4, v2);
    *(_DWORD *)(UserSessionState + 19844) = 0;
    *(_QWORD *)(UserSessionState + 19824) = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
    *(_QWORD *)(UserSessionState + 24) = 0LL;
  }
  v5 = *(_QWORD *)CurrentThreadWin32Thread;
  if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
    *(_BYTE *)(v5 + 1708) = 0;
  Count = AtomicExecutionCheck::GetCount(v5);
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  EtwTraceReleaseUserCrit();
  v7 = *(_DWORD *)(CurrentThreadWin32Thread + 24) & 0xFFFFFFF1;
  *(_DWORD *)(CurrentThreadWin32Thread + 24) = v7;
  if ( (v7 & 0x10) != 0 )
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
  ExReleaseFastResource(*(_QWORD *)UserSessionState, CurrentThreadWin32Thread + 32);
  KeLeaveCriticalRegion();
}
