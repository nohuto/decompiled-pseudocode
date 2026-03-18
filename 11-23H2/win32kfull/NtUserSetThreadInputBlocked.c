/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0005190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  AtomicExecutionCheck *v4; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::EnforceConsistency(v4);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 != 4096 )
  {
    UserSetLastError(87LL);
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = 0LL;
  v7 = *(_DWORD *)(gptiCurrent + 1272LL);
  if ( !a2 )
  {
    if ( (v7 & 0x8000) != 0 )
    {
      v8 = v7 & 0xFFFF7FFF;
      goto LABEL_5;
    }
LABEL_9:
    UserSetLastError(87LL);
    goto LABEL_6;
  }
  if ( (v7 & 0x8000) != 0 )
    goto LABEL_9;
  v8 = v7 | 0x8000;
LABEL_5:
  *(_DWORD *)(gptiCurrent + 1272LL) = v8;
  v6 = 1LL;
LABEL_6:
  v9 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v9 + 48);
  UserSessionSwitchLeaveCrit();
  return v6;
}
