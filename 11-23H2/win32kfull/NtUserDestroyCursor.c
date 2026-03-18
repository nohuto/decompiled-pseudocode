/*
 * XREFs of NtUserDestroyCursor @ 0x1C0045800
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C004829C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  AtomicExecutionCheck *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _BOOL8 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::EnforceConsistency(v4);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  LOBYTE(v9) = 3;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v10 = HMValidateHandle(a1, v9);
  v14 = 0LL;
  v15 = v10;
  if ( v10 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v22 = 87LL;
LABEL_13:
        UserSetLastError(v22);
        goto LABEL_6;
      }
    }
    else if ( PsGetCurrentProcess(v12, v11, v13) != gpepCSRSS )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *(_QWORD *)(v15 + 24) != CurrentProcessWin32Process )
      {
LABEL_12:
        v22 = 5LL;
        goto LABEL_13;
      }
    }
    if ( *(_QWORD *)(v15 + 48) == v15 )
    {
      v14 = _DestroyCursor((struct tagCURSOR *)v15, a2);
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_6:
  v16 = PsGetCurrentThreadWin32Thread(v12, v11, v13);
  --*(_DWORD *)(v16 + 48);
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v14;
}
